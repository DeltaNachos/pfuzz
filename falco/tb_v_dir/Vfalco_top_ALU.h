// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_ALU_H_
#define VERILATED_VFALCO_TOP_ALU_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_ALU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__operation_sel,2,0);
    VL_IN8(__PVT__shift_sel,0,0);
    CData/*2:0*/ __PVT__operation;
    VL_IN(__PVT__a,31,0);
    VL_IN(__PVT__b,31,0);
    VL_OUT(__PVT__alu_result,31,0);
    IData/*31:0*/ __PVT__result_add;
    IData/*31:0*/ __PVT__result_sll;
    IData/*31:0*/ __PVT__result_slt;
    IData/*31:0*/ __PVT__result_sltu;
    IData/*31:0*/ __PVT__result_xor;
    IData/*31:0*/ __PVT__result_sr;
    IData/*31:0*/ __PVT__result_or;
    IData/*31:0*/ __PVT__result_and;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_ALU(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_ALU();
    VL_UNCOPYABLE(Vfalco_top_ALU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
