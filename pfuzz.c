#include <stdio.h>
#include <signal.h>
#include <stdbool.h>
#include <unistd.h> // for sleep()
#include <stdlib.h>
#include <sys/stat.h> // for stat()
#include <limits.h>
#include <time.h> // for metrics
#include <string.h>

// Global flag to check for Ctrl+C
volatile sig_atomic_t keep_running = true;

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

void remove_invalid (void)
{
    //system("sed -i '/8082/c\\ ' mutate.hex"); // replace c.jr x1 (return)
    system("sed -i '/100f/c\\3' mutate.hex"); // replace fence.i
    system("sed -i '/73/c\\3' mutate.hex"); // replace ecall
    system("sed -i '/100073/c\\3' mutate.hex"); // replace ebreak
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    //system("sed -i '/100f/c\\0001' mutate.hex"); // replace fence.i
    return;
}

int main(int argc, char* argv[])
{
    int fuzz_size = 32;

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            if (strcmp(argv[i], "-h") == 0)
            {
                printf("Usage: pfuzz -c [# of instructions]\n");
                return 0;
            }
            else if (strcmp(argv[i], "-c") == 0)
            {
                if (argv[i+1] == NULL)
                {
                    printf("No number provided. Exiting...\n");
                    return 1;
                }
                fuzz_size = atoi(argv[i+1]);
                break;
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

    // Fuzzing stuff
    int i = 0;
    long tmp = 0;
    long max_vcd = 0;
    long min_vcd = INT_MAX;

    // Time metric stuff
    time_t start_time, current_time;
    double elapsed_time, ips;

    // Initialize start time
    time(&start_time);

    // create initial hex file
    char mutate[40] = {0};
    char rmprev[80] = {0};
    snprintf(mutate, 40, "./mutate -g %d > mutate.hex", fuzz_size);
    system("rm -fv instr.hex mutate.hex");
    system("cat start.hex > instr.hex");
    system(mutate);
    remove_invalid();
    system("cat mutate.hex >> instr.hex");
    system("echo 8082 >> instr.hex");

    while (keep_running)
    {
        time(&current_time);
        elapsed_time = difftime(current_time, start_time);

        if (elapsed_time > 0)
        {
            ips = (double) i / elapsed_time;
            printf("Fuzzing with size: %d, Loop iteration: %d, Iterations/sec: %.2f\r", fuzz_size, i++, ips);
        }
        else
        {
            printf("Loop iteration: %d\r", i++);
        }
        fflush(stdout);
        //sleep(1);

        // mutate hex file
        system("rm -fv instr.hex mutate.hex");
        //if (access("max.hex", F_OK) == 0)
        //{
        //    system("cp max.hex instr.hex");
        //}
        //else if (i > 2) 
        //{
        //    printf("Bad max.hex. Exiting...\n");
        //    return 1;
        //}
        //snprintf(rmprev, 80, "head -n -%d instr.hex > temp.hex ; mv temp.hex instr.hex", fuzz_size);
        //system(rmprev); // remove previous instructions
        system("cat start.hex > instr.hex");
        system(mutate);
        remove_invalid();
        system("cat mutate.hex >> instr.hex");
        system("echo 8082 >> instr.hex");
        
        // run verilator hiding crashes
        int result = system("./testbench_verilator +vcd +noerror");// 2>&1 > /dev/null");
        if (WIFSIGNALED(result))
        {
            keep_running = false;
            printf("Ctrl+C pressed. Exiting gracefully...\n");
            break;
        }

        // vcd size things
        tmp = 0;
        tmp = get_file_size("testbench.vcd");

        // save significant vcd
        if (tmp > max_vcd)
        {
            max_vcd = tmp;
            rename("testbench.vcd", "max.vcd");
            system("cp instr.hex max.hex");
        }
        else if (tmp < min_vcd)
        {
            min_vcd = tmp;
            rename("testbench.vcd", "min.vcd");
            system("cp instr.hex min.hex");
        }

        // extras
        // track time/performance
        // track specific instruction
    }

    printf("Fuzzer finished.\n");

    // Perform cleanup
    printf("Performing cleanup...\n");

    return 0;
}
