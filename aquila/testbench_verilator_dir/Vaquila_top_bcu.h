// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_BCU_H_
#define VERILATED_VAQUILA_TOP_BCU_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_bcu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__operation_sel_i,2,0);
    VL_OUT8(__PVT__compare_result_o,0,0);
    CData/*0:0*/ __PVT__result_beq;
    CData/*0:0*/ __PVT__result_bne;
    CData/*0:0*/ __PVT__result_blt;
    CData/*0:0*/ __PVT__result_bge;
    CData/*0:0*/ __PVT__result_bltu;
    CData/*0:0*/ __PVT__result_bgeu;
    CData/*0:0*/ __PVT__operation_beq;
    CData/*0:0*/ __PVT__operation_bne;
    CData/*0:0*/ __PVT__operation_blt;
    CData/*0:0*/ __PVT__operation_bge;
    CData/*0:0*/ __PVT__operation_bltu;
    CData/*0:0*/ __PVT__operation_bgeu;
    VL_IN(__PVT__a_i,31,0);
    VL_IN(__PVT__b_i,31,0);
    IData/*31:0*/ __PVT__signed_a;
    IData/*31:0*/ __PVT__signed_b;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_bcu(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_bcu();
    VL_UNCOPYABLE(Vaquila_top_bcu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
