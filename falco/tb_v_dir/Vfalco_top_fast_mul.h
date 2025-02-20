// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_FAST_MUL_H_
#define VERILATED_VFALCO_TOP_FAST_MUL_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_fast_mul final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__stall_i,0,0);
    VL_IN8(__PVT__req_i,0,0);
    VL_IN8(__PVT__kill_i,0,0);
    VL_IN8(__PVT__operation_sel_i,1,0);
    VL_OUT8(__PVT__ready_o,0,0);
    VL_OUT8(__PVT__result_valid_o,0,0);
    VL_OUT8(__PVT__early_wake_up_o,0,0);
    CData/*4:0*/ __PVT__mul_p0;
    CData/*4:0*/ __PVT__mul_p1;
    CData/*4:0*/ __PVT__mul_p2;
    CData/*0:0*/ __PVT__valid0;
    CData/*0:0*/ __PVT__valid1;
    CData/*0:0*/ __PVT__operation_mul_in;
    CData/*0:0*/ __PVT__operation_mulh_in;
    CData/*0:0*/ __PVT__operation_mulhsu_in;
    CData/*0:0*/ __PVT__operation_mulhu_in;
    CData/*0:0*/ __PVT__is_a_neg;
    CData/*0:0*/ __PVT__is_b_neg;
    CData/*0:0*/ __PVT__mul_overflow;
    CData/*0:0*/ __PVT__operation_mul_final;
    CData/*0:0*/ __PVT__operation_mulh_final;
    CData/*0:0*/ __PVT__operation_mulhsu_final;
    CData/*0:0*/ __PVT__operation_mulhu_final;
    CData/*0:0*/ __PVT__signed_adjust_final;
    CData/*0:0*/ __Vdly__valid0;
    CData/*0:0*/ __Vdly__valid1;
    CData/*0:0*/ __Vdly__result_valid_o;
    CData/*4:0*/ __Vdly__mul_p0;
    CData/*4:0*/ __Vdly__mul_p1;
    CData/*4:0*/ __Vdly__mul_p2;
    VL_IN(a_i,31,0);
    VL_IN(b_i,31,0);
    VL_OUT(__PVT__mul_result_o,31,0);
    IData/*31:0*/ __PVT__op_a;
    IData/*31:0*/ __PVT__op_b;
    IData/*31:0*/ __PVT__mull;
    IData/*31:0*/ __PVT__mulh;
    IData/*31:0*/ __Vfunc_abs__0__Vfuncout;
    IData/*31:0*/ __Vfunc_abs__0__num;
    IData/*31:0*/ __Vfunc_abs__1__Vfuncout;
    IData/*31:0*/ __Vfunc_abs__1__num;
    QData/*63:0*/ __PVT__fast_result;
    QData/*63:0*/ __PVT__mul0;
    QData/*63:0*/ __PVT__mul1;
    QData/*63:0*/ __PVT__result;
    QData/*63:0*/ __Vdly__fast_result;
    QData/*63:0*/ __Vdly__mul0;
    QData/*63:0*/ __Vdly__mul1;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_fast_mul(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_fast_mul();
    VL_UNCOPYABLE(Vfalco_top_fast_mul);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
