// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_IALU_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_IALU_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_ialu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__ialu_vd,0,0);
    VL_OUT8(__PVT__ialu_rdy,0,0);
    VL_IN8(__PVT__ialu_cmd,4,0);
    VL_OUT8(__PVT__ialu_cmp,0,0);
    CData/*1:0*/ __PVT__curr_state;
    CData/*1:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__iter_req;
    CData/*0:0*/ __PVT__iter_rdy;
    CData/*1:0*/ __PVT__mdu_cmd;
    CData/*1:0*/ __PVT__mul_cmd;
    CData/*1:0*/ __PVT__div_cmd;
    CData/*0:0*/ __PVT__corr_req;
    CData/*0:0*/ __PVT__sum1_sub;
    CData/*3:0*/ __PVT__sum1_flags;
    CData/*0:0*/ __PVT__sum2_sub;
    CData/*4:0*/ __PVT__shft_op2;
    CData/*1:0*/ __PVT__shft_cmd;
    CData/*4:0*/ __PVT__cnt_res;
    CData/*4:0*/ __PVT__cnt_res_reg;
    CData/*0:0*/ __PVT__res32_1_c;
    CData/*0:0*/ __PVT__res32_1_c_reg;
    CData/*0:0*/ __PVT__unnamedblk1__DOT__sgn;
    CData/*0:0*/ __PVT__unnamedblk1__DOT__inv;
    CData/*0:0*/ __PVT__unnamedblk2__DOT__sgn;
    CData/*0:0*/ __PVT__unnamedblk2__DOT__inv;
    CData/*0:0*/ __PVT__unnamedblk3__DOT__quo;
    CData/*1:0*/ __Vdly__curr_state;
    CData/*4:0*/ __Vdly__cnt_res_reg;
    CData/*0:0*/ __Vdly__res32_1_c_reg;
    VL_IN(__PVT__ialu_op1,31,0);
    VL_IN(__PVT__ialu_op2,31,0);
    VL_OUT(__PVT__ialu_res,31,0);
    VL_IN(__PVT__ialu_sum2_op1,31,0);
    VL_IN(__PVT__ialu_sum2_op2,31,0);
    VL_OUT(__PVT__ialu_sum2_res,31,0);
    IData/*31:0*/ __PVT__sum1_op1;
    IData/*31:0*/ __PVT__sum1_op2;
    IData/*31:0*/ __PVT__shft_op1;
    IData/*31:0*/ __PVT__shft_res;
    IData/*31:0*/ __PVT__res32_1;
    IData/*31:0*/ __PVT__res32_1_reg;
    IData/*31:0*/ __PVT__res32_2;
    IData/*31:0*/ __PVT__res32_2_reg;
    IData/*31:0*/ __PVT__res32_3;
    IData/*31:0*/ __PVT__res32_3_reg;
    IData/*30:0*/ __PVT__unnamedblk3__DOT__prev_low;
    IData/*31:0*/ __Vdly__res32_1_reg;
    IData/*31:0*/ __Vdly__res32_2_reg;
    IData/*31:0*/ __Vdly__res32_3_reg;
    QData/*32:0*/ __PVT__sum1_res;
    QData/*32:0*/ __PVT__sum2_op1;
    QData/*32:0*/ __PVT__sum2_op2;
    QData/*32:0*/ __PVT__sum2_res;
    QData/*32:0*/ __PVT__mul_op1;
    QData/*32:0*/ __PVT__mul_op2;
    QData/*63:0*/ __PVT__mul_res;

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_ialu(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_ialu();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_ialu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
