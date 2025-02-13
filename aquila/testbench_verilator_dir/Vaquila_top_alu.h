// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_ALU_H_
#define VERILATED_VAQUILA_TOP_ALU_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_alu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__operation_sel_i,2,0);
    VL_IN8(__PVT__shift_sel_i,0,0);
    CData/*0:0*/ __PVT__operation_add;
    CData/*0:0*/ __PVT__operation_sll;
    CData/*0:0*/ __PVT__operation_slt;
    CData/*0:0*/ __PVT__operation_sltu;
    CData/*0:0*/ __PVT__operation_xor;
    CData/*0:0*/ __PVT__operation_sr;
    CData/*0:0*/ __PVT__operation_or;
    CData/*0:0*/ __PVT__operation_and;
    VL_IN(__PVT__a_i,31,0);
    VL_IN(__PVT__b_i,31,0);
    VL_OUT(__PVT__alu_result_o,31,0);
    IData/*31:0*/ __PVT__ones;
    IData/*31:0*/ __PVT__result_add;
    IData/*31:0*/ __PVT__result_sll;
    IData/*31:0*/ __PVT__result_slt;
    IData/*31:0*/ __PVT__result_sltu;
    IData/*31:0*/ __PVT__result_xor;
    IData/*31:0*/ __PVT__result_sr;
    IData/*31:0*/ __PVT__result_or;
    IData/*31:0*/ __PVT__result_and;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_alu(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_alu();
    VL_UNCOPYABLE(Vaquila_top_alu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
