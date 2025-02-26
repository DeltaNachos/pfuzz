#include <stdio.h>
#include <signal.h>
#include <stdbool.h>
#include <unistd.h> // for sleep()
#include <stdlib.h>
#include <sys/stat.h> // for stat()
#include <limits.h>
#include <time.h> // for metrics
#include <string.h>
#include <pthread.h>
#include <fcntl.h> // for open()
#include <sys/wait.h> // for waitpid()
#include "mutate.h"

// Global flag to check for Ctrl+C
volatile sig_atomic_t keep_running = true;

long global_max_vcd = 0;
pthread_mutex_t max_mutex = PTHREAD_MUTEX_INITIALIZER;

long global_min_vcd = INT_MAX;
pthread_mutex_t min_mutex = PTHREAD_MUTEX_INITIALIZER;

time_t max_time = 0;
time_t min_time = 0;

int global_it_count = 0;
pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;

pthread_mutex_t run_mutex = PTHREAD_MUTEX_INITIALIZER;

int fuzz_size = 32;
const long hard_max = 1000000000; // need this to stop runoff tests <1GB
int monitor = 0; // for graphing
volatile double ela_time = 0;
char design[16] = "vsodor";

// Signal handler
void handle_sigint(int sig)
{
    (void) sig; // Suppress unused parameter
    keep_running = false;
    printf("Ctrl+C pressed. Exiting gracefully...\n");
}

long get_file_size (char* filename)
{
    struct stat file_status;
    if (stat(filename, &file_status) < 0)
    {
        return -1;
    }
    return file_status.st_size;
}

int run_tb(const char* seq, const char* design)
{
    int pipefd[2];
    pid_t child_pid;
    int status = 0;

    if (pipe(pipefd) == -1)
    {
        perror("pipe failed");
        return -1;
    }

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("fork failed");
        close(pipefd[0]);
        close(pipefd[1]);
        return -1;
    }

    if (child_pid == 0)
    {
        close(pipefd[1]); // no write

        if (dup2(pipefd[0], STDIN_FILENO) == -1) // redirect stdin
        {
            perror("dup 2 stdin failed");
            exit(EXIT_FAILURE);
        }
        close(pipefd[0]);

        int devnull_fd = open("/dev/null", O_WRONLY); // redirect stdout
        if (devnull_fd == -1)
        {
            perror("open /dev/null failed");
            exit(EXIT_FAILURE);
        }
        if (dup2(devnull_fd, STDOUT_FILENO) == -1)
        {
            perror("dup2 stdout failed");
            close(devnull_fd);
            exit(EXIT_FAILURE);
        }
        close(devnull_fd);

        // execute part
        execl(design, design, "/dev/stdin", (char*)NULL);
        perror("execl failed");
        exit(EXIT_FAILURE);
    }
    else
    {
        close(pipefd[0]);
        //printf("%s\n", seq);

        ssize_t bytes_written = write(pipefd[1], seq, strlen(seq));
        if (bytes_written == -1)
        {
            perror("write to pipe failed");
            close(pipefd[1]);
            kill(child_pid, SIGKILL);
            return -1;
        }
        close(pipefd[1]);

        int wait_status;
        pid_t waited_pid = waitpid(child_pid, &wait_status, 0);

        if (waited_pid == -1)
        {
            perror("waitpid failed");
            return -1;
        }

        if (WIFEXITED(wait_status))
        {
            status = WEXITSTATUS(wait_status);
        }
        else if (WIFSIGNALED(wait_status))
        {
            keep_running = false;
            printf("\n\n\nCtrl+C pressed. Exiting gracefully...\n");
            return -1;
        }

        return status;
    }
}

void* fuzz_thread(void* arg)
{
    int thread_id = *((int*)arg);
    //char thread_dir[10];
    //snprintf(thread_dir, 10, "thread_%d", thread_id);
    //mkdir(thread_dir, 0777);

    long tmp = 0;
    long local_max_vcd = 0;
    long local_min_vcd = INT_MAX;

    // filepaths for each instance
    //char hex[20] = {0};
    char test[1090] = {0}; // was 60
    //char vcd[30] = {0};
    char seq[1024] = {0}; // support up to 1024 length sequence
    //snprintf(hex, 20, "./mutate -g %d", fuzz_size);
    //snprintf(vcd, 30, "%s/testbench.vcd", thread_dir);

    while (keep_running)
    {
        if (gen_mutate(fuzz_size, seq, 1024))
        {
            continue; // error on mutate
        }
        //snprintf(test, 1090, "echo %s | timeout 10 ./%s /dev/stdin 2>&1 > /dev/null", seq, design);

        pthread_mutex_lock(&run_mutex);
        //rename(max, "instr.hex");
        //int result = system(test);
        if (run_tb(seq, design))
        {
            fprintf(stderr, "Error executing design.\n");
        }
        //return 0;
        //rename("testbench.vcd", vcd);
        pthread_mutex_unlock(&run_mutex);
        //if (WIFSIGNALED(result))
        //{
        //    keep_running = false;
        //    printf("\n\n\nThread %d: Ctrl+C pressed. Exiting gracefully...\n", thread_id);
        //    //free(seq);
        //    //free(test);
        //    return NULL;
        //}

        tmp = 0;
        tmp = get_file_size("testbench.vcd");

        if (tmp > local_max_vcd && tmp < hard_max)
        {
            local_max_vcd = tmp;
        }
        else if (tmp < local_min_vcd)
        {
            local_min_vcd = tmp;
        }

        pthread_mutex_lock(&max_mutex);
        if (local_max_vcd > global_max_vcd)
        {
            global_max_vcd = local_max_vcd;
            rename("testbench.vcd", "max.vcd");

            FILE* fp = fopen("max.hex", "w");
            if (fp != NULL)
            {
                fprintf(fp, "%s", seq);
                fclose(fp);
            }
            else perror("Error creating max.hex");

            time(&max_time);
            if (monitor == 1)
            {
                FILE *fp = fopen("max_track.csv", "a");
                if (fp != NULL)
                {
                    fprintf(fp, "%.0f,%ld\n", ela_time, global_max_vcd);
                    fclose(fp);
                }
                else perror("Error opening max_track.csv");
            }
        }
        pthread_mutex_unlock(&max_mutex);

        pthread_mutex_lock(&min_mutex);
        if (local_min_vcd < global_min_vcd)
        {
            global_min_vcd = local_min_vcd;
            rename("testbench.vcd", "min.vcd");

            FILE* fp = fopen("min.hex", "w");
            if (fp != NULL)
            {
                fprintf(fp, "%s", seq);
                fclose(fp);
            }
            else perror("Error creating min.hex");

            time(&min_time);
            if (monitor == 1)
            {
                FILE *fp = fopen("min_track.csv", "a");
                if (fp != NULL)
                {
                    fprintf(fp, "%.0f,%ld\n", ela_time, global_min_vcd);
                    fclose(fp);
                }
                else perror("Error opening min_track.csv");
            }
        }
        pthread_mutex_unlock(&min_mutex);
        
        pthread_mutex_lock(&count_mutex);
        global_it_count++;
        pthread_mutex_unlock(&count_mutex);
    }

    return NULL;
}

void* metric_thread(void* arg)
{
    int thread_id = *((int*)arg);
    time_t start_time, curr_time, maxd_time, mind_time;
    double ips;
    int tot_sec, hour, min, sec;

    time(&start_time);

    if (signal(SIGINT, handle_sigint) == SIG_ERR)
    {
        perror("signal");
        return NULL;
    }

    while(keep_running)
    {
        time(&curr_time);
        ela_time = difftime(curr_time, start_time);
        maxd_time = difftime(curr_time, max_time);
        mind_time = difftime(curr_time, min_time);

        if (ela_time > 0)
        {
            ips = (double) global_it_count / ela_time;
            printf("Fuzzing with size: %d, Loop iteration: %d, Iterations/sec: %.2f\n",
                   fuzz_size, global_it_count, ips);
            printf("Time since new max: %jds, Time since new min: %jds\n", maxd_time, mind_time);
            printf("Current max: %ld, Current min: %ld\n", global_max_vcd, global_min_vcd);
            fflush(stdout);

            // Total runtime
            tot_sec = (int) ela_time;
            hour = tot_sec / 3600;
            min = (tot_sec % 3600) / 60;
            sec = tot_sec % 60;
            printf("Total runtime: %02d:%02d:%02d\033[2A\033[F", hour, min, sec);
        }
        sleep(1);
    }
}

int main(int argc, char* argv[])
{
    int num_threads = 2;

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            if (strcmp(argv[i], "-h") == 0)
            {
                printf("Usage: pfuzz -d [name of testbench] -c [# of instructions] -t [# of threads, min: 2] -m [enables csv monitor]\n");
                return 0;
            }
            else if (strcmp(argv[i], "-d") == 0)
            {
                if (argv[i+1] == NULL)
                {
                    printf("No name provided. Exiting...\n");
                    return 1;
                }
                strncpy(design, argv[i+1], sizeof(design) - 1);
                design[sizeof(design) - 1] = '\0';
                continue;
            }
            else if (strcmp(argv[i], "-c") == 0)
            {
                if (argv[i+1] == NULL)
                {
                    printf("No sequence count provided. Exiting...\n");
                    return 1;
                }
                fuzz_size = atoi(argv[i+1]);
                continue;
            }
            else if (strcmp(argv[i], "-t") == 0)
            {
                if (argv[i+1] == NULL)
                {
                    printf("No thread count provided. Exiting...\n");
                    return 1;
                }
                num_threads = atoi(argv[i+1]);
                num_threads++;
                continue;
            }
             else if (strcmp(argv[i], "-m") == 0)
            {
                monitor = 1;
                continue;
            }
        }
    }

    // Register signal handler
    if (signal(SIGINT, handle_sigint) == SIG_ERR)
    {
        perror("signal");
        return 1;
    }

    printf("Starting the fuzzer. Press Ctrl+C to exit.\n");

    time(&max_time);
    time(&min_time);

    // Thread stuff
    pthread_t threads[num_threads];
    int thread_ids[num_threads];

    for (int i = 0; i < num_threads; i++)
    {
        thread_ids[i] = i;
        if (i == 0)
        {
            if (pthread_create(&threads[i], NULL, metric_thread, &thread_ids[i]))
            {
                fprintf(stderr, "Error creating thread\n");
                return 1;
            }
        }
        else if (pthread_create(&threads[i], NULL, fuzz_thread, &thread_ids[i]))
        {
            fprintf(stderr, "Error creating thread\n");
            return 1;
        }
    }

    for (int i = 0; i < num_threads; i++)
    {
        pthread_join(threads[i], NULL);
    }

    printf("Fuzzer finished.\n");

    // Perform cleanup
    printf("Performing cleanup...\n");
    /*for (int i = 1; i < num_threads; i++)
    {
        char thread_dir[25];
        snprintf(thread_dir, 25, "rm -r thread_%d", i);
        system(thread_dir);
    }*/

    return 0;
}
