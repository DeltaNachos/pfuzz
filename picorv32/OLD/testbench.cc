#include "Vsystem.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Vsystem* uut = new Vsystem;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    uut->trace(tfp, 99);
    tfp->open("testbench.vcd");

    uut->clk = 0;
    uut->resetn = 0;
    int t = 0;

    while (!Verilated::gotFinish())
    {
        if (t > 200) uut->resetn = 1;
        uut->clk = !uut->clk;
        uut->eval();
        tfp->dump(t);
        t += 5;
    }

    tfp->close();
    delete uut;
    exit(0);
}
