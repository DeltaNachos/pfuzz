#include <verilated.h>
#include "Vrsd_top.h"
#include "verilated_vcd_c.h"
#include <time.h>
#include "svdpi.h"
#include "Vrsd_top__Dpi.h"
#include <random>
#include "Vrsd_top___024root.h"

uint32_t input_instructions[100];

vluint64_t main_time = 0;
vluint64_t seed = time(0);

svBitVecVal instruction_generator()
{
    static int idx = 0;
    return input_instructions[idx++];
}

int main (int argc, char** argv, char** env)
{
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vrsd_top* top = new Vrsd_top{contextp};

    FILE* f = fopen(argv[1], "r");

    int count = 0;
    while (count < 100 && fscanf(f, "%08x", &input_instructions[count]) == 1)
    {
        count++;
    }
    fclose(f);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("testbench.vcd");

    srand(seed);

    top->clk = 0;
    //top->rst = 0;
    top->eval();
    top->clk = 1;
    //top->rst = 1;
    top->eval();
    top->clk = 0;
    //top->rst = 0;
    top->eval();

    for (int i = 0; i < 500; i++)
    {
        contextp->timeInc(1);
        top->clk = !top->clk;
        top->eval();
        tfp->dump(main_time);
        main_time++;
    }
}
