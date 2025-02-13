// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_MULDIV_H_
#define VERILATED_VAQUILA_TOP_MULDIV_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_muldiv final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__stall_i,0,0);
    VL_IN8(__PVT__req_i,0,0);
    VL_IN8(__PVT__operation_sel_i,2,0);
    VL_OUT8(__PVT__ready_o,0,0);
    CData/*0:0*/ __PVT__operation_mul;
    CData/*0:0*/ __PVT__operation_mulh;
    CData/*0:0*/ __PVT__operation_mulhsu;
    CData/*0:0*/ __PVT__operation_mulhu;
    CData/*0:0*/ __PVT__operation_div;
    CData/*0:0*/ __PVT__operation_divu;
    CData/*0:0*/ __PVT__operation_rem;
    CData/*0:0*/ __PVT__operation_remu;
    CData/*0:0*/ __PVT__is_divider;
    CData/*0:0*/ __PVT__is_a_zero;
    CData/*0:0*/ __PVT__is_b_zero;
    CData/*0:0*/ __PVT__is_a_neg;
    CData/*0:0*/ __PVT__is_b_neg;
    CData/*0:0*/ __PVT__signed_adjust;
    CData/*0:0*/ __PVT__mul_overflow;
    CData/*0:0*/ __PVT__is_calc_done;
    CData/*5:0*/ __PVT__cnt;
    CData/*1:0*/ __PVT__fast_mul_counter;
    CData/*2:0*/ __PVT__S;
    CData/*2:0*/ __PVT__S_nxt;
    CData/*0:0*/ __PVT__mul_add;
    CData/*0:0*/ __PVT__div_sub;
    CData/*2:0*/ __Vdly__S;
    CData/*1:0*/ __Vdly__fast_mul_counter;
    CData/*5:0*/ __Vdly__cnt;
    CData/*0:0*/ __Vdly__ready_o;
    VL_IN(__PVT__a_i,31,0);
    VL_IN(__PVT__b_i,31,0);
    VL_OUT(__PVT__muldiv_result_o,31,0);
    IData/*31:0*/ __PVT__op_a;
    IData/*31:0*/ __PVT__op_b;
    IData/*31:0*/ __PVT__reg32;
    VlWide<3>/*64:0*/ __PVT__result;
    IData/*31:0*/ __PVT__op_a_r;
    IData/*31:0*/ __PVT__op_b_r;
    IData/*31:0*/ __PVT__mull;
    IData/*31:0*/ __PVT__mulh;
    IData/*31:0*/ __PVT__quotient;
    IData/*31:0*/ __PVT__remainder;
    VlWide<3>/*64:0*/ __PVT__result_tmp;
    IData/*31:0*/ __Vfunc_abs__0__Vfuncout;
    IData/*31:0*/ __Vfunc_abs__0__num;
    IData/*31:0*/ __Vfunc_abs__1__Vfuncout;
    IData/*31:0*/ __Vfunc_abs__1__num;
    IData/*31:0*/ __Vdly__op_a_r;
    IData/*31:0*/ __Vdly__op_b_r;
    VlWide<3>/*64:0*/ __Vdly__result;
    IData/*31:0*/ __Vdly__reg32;
    IData/*31:0*/ __Vdly__muldiv_result_o;
    QData/*63:0*/ __PVT__fast_result;
    QData/*63:0*/ __PVT__mul0;
    QData/*63:0*/ __PVT__mul1;
    QData/*32:0*/ __PVT__adder_opa;
    QData/*32:0*/ __PVT__adder_opb;
    QData/*32:0*/ __PVT__adder_tmp;
    QData/*63:0*/ __Vdly__fast_result;
    QData/*63:0*/ __Vdly__mul0;
    QData/*63:0*/ __Vdly__mul1;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_muldiv(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_muldiv();
    VL_UNCOPYABLE(Vaquila_top_muldiv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
