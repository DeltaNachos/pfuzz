#include <verilated.h>
#include "Vsodor5_top.h"
#include "verilated_vcd_c.h"
#include <time.h>
#include "svdpi.h"
#include "Vsodor5_top__Dpi.h"
#include <random>
#include "Vsodor5_top___024root.h"

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
	Vsodor5_top* top = new Vsodor5_top{contextp};

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

	Vsodor5_top___024root* rp = top->rootp;

	srand(seed);

	// reset core
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
	for (int i = 0; i < 200; i++) {
          contextp->timeInc(1);
	  if ((main_time % 10) == 1) {
                  top->clk = 1;
		  top->eval();
	  }
	  else if ((main_time % 10) == 6) {
		  top-> clk = 0;
		  top->eval();
	  }
	  main_time++;
	}

	// FILE * complete_f = fopen("/tmp/complete_input", "w");
	// for (auto a: rp->sodor5_top__DOT__memory_modelling_inst__DOT__initial_imem) {
	// 	fprintf(complete_f, "@%x %x", a.first, a.second);
	// }
	// fprintf(complete_f, "\n");
	// fclose(complete_f);
		
	top->final();
    delete top;
	delete contextp;
	return 0;
}
