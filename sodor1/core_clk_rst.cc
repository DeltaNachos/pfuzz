#include <verilated.h>
#include "Vsodor_top.h"
#include "verilated_vcd_c.h"
#include <time.h>
#include "svdpi.h"
#include "Vsodor_top__Dpi.h"
#include <random>
#include "Vsodor_top___024root.h"

uint32_t input_instructions[50];
vluint64_t main_time = 0;
vluint64_t seed = time(0);

svBitVecVal instruction_generator() {
	static int idx = 0;
	return input_instructions[idx++];
}


int main (int argc, char** argv, char** env) {

	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vsodor_top* top = new Vsodor_top{contextp};

	FILE * f = fopen(argv[1], "r");
	
	int count = 0;
    while (count < 50 && fscanf(f, "%x", &input_instructions[count]) == 1) {
        count++;
    }
	fclose(f);
	
	// Variables
	int length_of_the_input_file = strlen(argv[1]);
	int num_of_words = ceil((float)(length_of_the_input_file) / 4);
	WData hex_of_string[num_of_words];
	int last = length_of_the_input_file;

	Vsodor_top___024root* rp = top->rootp;

    // GET TRACE
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("testbench.vcd");

	srand(seed);

	// reset core
    //top->clk = 0;
    //top->rst = 0;
	top->clk = 0;
	top->rst = 0;
	top->eval();
	top->clk = 1;
	top->rst = 1;
	top->eval();
	top->clk = 0;
	top->rst = 0;
	top->eval();

    // Providing clock to the rtl
	while (!Verilated::gotFinish())
    //for (int i = 0; i < 50000; i++)
    {
        contextp->timeInc(1);
	    //if (main_time > 40) top->rst = 1;
        top->clk = !top->clk;
        top->eval();
        tfp->dump(main_time);
        main_time++;
	}

    // DUMP TRACE


		
	top->final();
    delete top;
	delete contextp;
	return 0;
}
