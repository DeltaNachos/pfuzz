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
const long hard_max = 128000; // need this to stop runoff tests
int monitor = 0; // for graphing
volatile double ela_time = 0;

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

void* fuzz_thread(void* arg)
{
    int thread_id = *((int*)arg);
    char thread_dir[10];
    snprintf(thread_dir, 10, "thread_%d", thread_id);
    mkdir(thread_dir, 0777);

    long tmp = 0;
    long local_max_vcd = 0;
    long local_min_vcd = INT_MAX;

    // filepaths for each instance
    char hex[120] = {0};
    char test[60] = {0};
    char vcd[30] = {0};
    char max[30] = {0};
    snprintf(hex, 120,
             "rm -f %s/instr.hex && "
             "./mutate -g %d > %s/instr.hex && "
             "echo 8082 >> %s/instr.hex",
             thread_dir, fuzz_size, thread_dir, thread_dir);
    snprintf(max, 30, "%s/instr.hex", thread_dir);
    snprintf(test, 60, "timeout 10 ./testbench_vivado 2>&1 > /dev/null");
    snprintf(vcd, 30, "%s/testbench.vcd", thread_dir);

    while (keep_running)
    {
        system(hex);

        pthread_mutex_lock(&run_mutex);
        rename(max, "instr.hex");
        int result = system(test);
        rename("testbench.vcd", vcd);
        pthread_mutex_unlock(&run_mutex);
        if (WIFSIGNALED(result))
        {
            keep_running = false;
            printf("\n\n\nThread %d: Ctrl+C pressed. Exiting gracefully...\n", thread_id);
            return NULL;
        }

        tmp = 0;
        tmp = get_file_size(vcd);

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
            rename(vcd, "max.vcd");
            system("cp instr.hex max.hex");
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
            rename(vcd, "min.vcd");
            system("cp instr.hex min.hex");
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
                printf("Usage: pfuzz -c [# of instructions] -t [# of threads, min: 2]\n");
                return 0;
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
    for (int i = 1; i < num_threads; i++)
    {
        char thread_dir[25];
        snprintf(thread_dir, 25, "rm -r thread_%d", i);
        system(thread_dir);
    }

    return 0;
}
