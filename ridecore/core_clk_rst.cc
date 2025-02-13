#include <verilated.h>
#include "Vridecore_top.h"
#include "verilated_vcd_c.h"
#include <time.h>
#include "svdpi.h"
#include "Vridecore_top__Dpi.h"
#include <random>
#include "Vridecore_top___024root.h"

//Should max out at 80 based on seed size
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
	Vridecore_top* top = new Vridecore_top{contextp};

	FILE * f = fopen(argv[1], "r");
	
	int count = 0;
    //Read input from file and place instructions as single instructions then combine into 4
	while (count < 100 && fscanf(f, "%08x", &input_instructions[count]) == 1) {
        
		
		//FILE* out_f = fopen("/tmp/hex_inputs.txt", "a");  // Open output file for appending
        //if (!out_f) {
        //    fprintf(stderr, "Error opening output file for writing\n");
        //    fclose(f);
        //    return 1;
        //}

        //// Write the read instruction to the output file in hex format
		//fprintf(out_f, "%08x", input_instructions[count]);
		//
        //// Close the output file after writing
        //fclose(out_f);
		
		count++;
    }
	fclose(f);
	
	//Vridecore_top___024root* rp = top->rootp;

    // GET TRACE
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("testbench.vcd");

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
	for(auto a : rp->ridecore_top__DOT__memory_modelling_inst__DOT__initial_imem){
		uint32_t seg0 = a.second[0]; // Least significant 32 bits
		uint32_t seg1 = a.second[1];
		uint32_t seg2 = a.second[2];
		uint32_t seg3 = a.second[3]; // Most significant 32 bits

		// Print the 128-bit value in hexadecimal format
		fprintf(complete_f, "%08x %08x%08x%08x%08x\n", a.first, seg3, seg2, seg1, seg0);
	}
	fprintf(complete_f, "\n");
	fclose(complete_f);
	*/

	top->final();
    delete top;
	delete contextp;
	return 0;
}
