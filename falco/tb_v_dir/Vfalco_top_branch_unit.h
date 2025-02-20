// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_BRANCH_UNIT_H_
#define VERILATED_VFALCO_TOP_BRANCH_UNIT_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_branch_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__operation_sel,2,0);
    VL_OUT8(__PVT__compare_result,0,0);
    CData/*2:0*/ __PVT__branch_op;
    VL_IN(__PVT__a,31,0);
    VL_IN(__PVT__b,31,0);
    IData/*31:0*/ __PVT__signed_a;
    IData/*31:0*/ __PVT__signed_b;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_branch_unit(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_branch_unit();
    VL_UNCOPYABLE(Vfalco_top_branch_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
