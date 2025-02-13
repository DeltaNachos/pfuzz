#include <verilated.h>
#include "Vssrv_top.h"
#include "verilated_vcd_c.h"
#include <time.h>
#include "svdpi.h"
#include "Vssrv_top__Dpi.h"
#include <random>
#include "Vssrv_top___024root.h"

//Input buffer large enough to not overflow (Should max at 40)
uint32_t input_instructions[100];

vluint64_t main_time = 0;
vluint64_t seed = time(0);

//Returns the imem data in memory model
svBitVecVal instruction_generator() {

	static int idx = 0;

	return input_instructions[idx++];

}


int main (int argc, char** argv, char** env) {
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Vssrv_top* top = new Vssrv_top{contextp};

	FILE * f = fopen(argv[1], "r");
	
	int count = 0;
    //Read input from file and place instructions as 32 bit hex blocks into instructions
	while (count < 100 && fscanf(f, "%08x", &input_instructions[count]) == 1) {
		//printf("Instruction at count %08x\n", input_instructions[count]);
		
		/*
		FILE* out_f = fopen("/tmp/hex_inputs.txt", "a");  // Open output file for appending
        if (!out_f) {
            fprintf(stderr, "Error opening output file for writing\n");
            fclose(f);
            return 1;
        }
		

        // Write the read instruction to the output file in hex format
		fprintf(out_f, "%08x", input_instructions[count]);
		//printf("%08x\n", input_instructions[count]);

        // Close the output file after writing
        fclose(out_f);
		*/
		count++;
    }
	fclose(f);
	
	// Variables
	/*
	int length_of_the_input_file = strlen(argv[1]);
	int num_of_words = ceil((float)(length_of_the_input_file) / 4);
	WData hex_of_string[num_of_words];
	int last = length_of_the_input_file;
	*/
	//Vssrv_top___024root* rp = top->rootp;

    // GET TRACE
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("testbench.vcd");

	srand(seed);

	top->clk = 0;
	top->eval();

    // Providing clock to the rtl
	for (int i = 0; i < 200; i++)
    {
        contextp->timeInc(1);
        top->clk = !top->clk;
        top->eval();
        tfp->dump(main_time);
	    main_time++;
	}

	/*
	FILE * complete_f = fopen("/tmp/complete_input", "w");
	for(auto a : rp->biriscv_top->__PVT__memory_modelling_inst__DOT__initial_imem){
		fprintf(complete_f, "%08x %016lx\n", a.first, a.second);
	}
	fprintf(complete_f, "\n");
	fclose(complete_f);
	*/

	top->final();
    delete top;
	delete contextp;
	return 0;
}
