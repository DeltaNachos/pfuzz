// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_FETCH_H_
#define VERILATED_VAQUILA_TOP_FETCH_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_fetch final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__stall_i,0,0);
    VL_IN8(__PVT__flush_i,0,0);
    VL_IN8(__PVT__branch_hit_i,0,0);
    VL_IN8(__PVT__branch_decision_i,0,0);
    VL_OUT8(__PVT__branch_hit_o,0,0);
    VL_OUT8(__PVT__branch_decision_o,0,0);
    VL_OUT8(__PVT__fetch_valid_o,0,0);
    VL_OUT8(__PVT__xcpt_valid_o,0,0);
    VL_OUT8(__PVT__xcpt_cause_o,3,0);
    CData/*0:0*/ __PVT__stall_delay;
    CData/*0:0*/ __PVT__flush_delay;
    CData/*0:0*/ __Vdly__stall_delay;
    CData/*0:0*/ __Vdly__flush_delay;
    CData/*0:0*/ __Vdly__fetch_valid_o;
    CData/*0:0*/ __Vdly__branch_hit_o;
    CData/*0:0*/ __Vdly__branch_decision_o;
    CData/*0:0*/ __Vdly__xcpt_valid_o;
    CData/*3:0*/ __Vdly__xcpt_cause_o;
    VL_IN(__PVT__instruction_i,31,0);
    VL_IN(__PVT__pc_i,31,0);
    VL_OUT(__PVT__pc_o,31,0);
    VL_OUT(__PVT__instruction_o,31,0);
    VL_OUT(__PVT__xcpt_tval_o,31,0);
    IData/*31:0*/ __PVT__instruction_delay;
    IData/*31:0*/ __Vdly__instruction_delay;
    IData/*31:0*/ __Vdly__pc_o;
    IData/*31:0*/ __Vdly__xcpt_tval_o;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_fetch(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_fetch();
    VL_UNCOPYABLE(Vaquila_top_fetch);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
