// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_PROGRAM_COUNTER_H_
#define VERILATED_VFALCO_TOP_PROGRAM_COUNTER_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_program_counter final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__stall,0,0);
    VL_IN8(__PVT__exe_branch_PrMiss,0,0);
    VL_IN8(__PVT__predict_taken,0,0);
    VL_IN8(__PVT__store_set_violation,0,0);
    VL_IN8(__PVT__branch_miss_first,0,0);
    VL_OUT8(__PVT__instr1_valid,0,0);
    CData/*0:0*/ __PVT__cross_line;
    CData/*0:0*/ __Vfunc_CrossICacheLineFetch__0__Vfuncout;
    VL_IN(__PVT__init_pc,31,0);
    VL_IN(__PVT__exe_branch_target_addr,31,0);
    VL_IN(__PVT__predict_pc,31,0);
    VL_IN(__PVT__store_set_pc,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ __Vfunc_CrossICacheLineFetch__0__pc;
    IData/*31:0*/ __Vdly__pc;
    VL_IN64(__PVT__jump_direct,32,0);
    VL_IN64(__PVT__jump_relative,32,0);
    VL_INW(__PVT__sys_pc_oper,65,0,3);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_program_counter(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_program_counter();
    VL_UNCOPYABLE(Vfalco_top_program_counter);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
