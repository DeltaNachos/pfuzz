// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_FETCH_FIFO_H_
#define VERILATED_VBIRISCV_TOP_FETCH_FIFO_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_fetch_fifo final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__flush_i,0,0);
    VL_IN8(__PVT__push_i,0,0);
    VL_IN8(__PVT__pred_in_i,1,0);
    VL_OUT8(__PVT__accept_o,0,0);
    VL_OUT8(__PVT__valid0_o,0,0);
    VL_IN8(__PVT__pop0_i,0,0);
    VL_OUT8(__PVT__valid1_o,0,0);
    VL_IN8(__PVT__pop1_i,0,0);
    CData/*0:0*/ __PVT__rd_ptr_q;
    CData/*0:0*/ __PVT__wr_ptr_q;
    CData/*1:0*/ __PVT__count_q;
    CData/*0:0*/ __PVT__push_w;
    CData/*0:0*/ __PVT__pop1_w;
    CData/*0:0*/ __PVT__pop2_w;
    CData/*0:0*/ __PVT__pop_complete_w;
    CData/*1:0*/ __Vdly__count_q;
    CData/*0:0*/ __Vdly__rd_ptr_q;
    CData/*0:0*/ __Vdly__wr_ptr_q;
    CData/*0:0*/ __Vdlyvset__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__ram_q__v1;
    CData/*0:0*/ __Vdlyvset__info0_q__v2;
    CData/*0:0*/ __Vdlyvset__info0_q__v3;
    CData/*0:0*/ __Vdlyvdim0__ram_q__v2;
    CData/*0:0*/ __Vdlyvset__ram_q__v2;
    CData/*0:0*/ __Vdlyvdim0__pc_q__v2;
    CData/*0:0*/ __Vdlyvdim0__info0_q__v4;
    CData/*0:0*/ __Vdlyvdim0__info1_q__v4;
    CData/*0:0*/ __Vdlyvdim0__valid0_q__v2;
    CData/*0:0*/ __Vdlyvdim0__valid1_q__v2;
    CData/*0:0*/ __Vdlyvval__valid1_q__v2;
    CData/*0:0*/ __Vdlyvdim0__valid0_q__v3;
    CData/*0:0*/ __Vdlyvset__valid0_q__v3;
    CData/*0:0*/ __Vdlyvdim0__valid1_q__v3;
    CData/*0:0*/ __Vdlyvset__valid1_q__v3;
    VL_IN16(__PVT__info0_in_i,9,0);
    VL_IN16(__PVT__info1_in_i,9,0);
    VL_OUT16(__PVT__info0_out_o,9,0);
    VL_OUT16(__PVT__info1_out_o,9,0);
    SData/*9:0*/ __Vdlyvval__info0_q__v4;
    SData/*9:0*/ __Vdlyvval__info1_q__v4;
    VL_IN(__PVT__pc_in_i,31,0);
    VL_OUT(__PVT__pc0_out_o,31,0);
    VL_OUT(__PVT__data0_out_o,31,0);
    VL_OUT(__PVT__pc1_out_o,31,0);
    VL_OUT(__PVT__data1_out_o,31,0);
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __Vdlyvval__pc_q__v2;
    VL_IN64(__PVT__data_in_i,63,0);
    QData/*63:0*/ __Vdlyvval__ram_q__v2;
    VlUnpacked<IData/*31:0*/, 2> __PVT__pc_q;
    VlUnpacked<CData/*0:0*/, 2> __PVT__valid0_q;
    VlUnpacked<CData/*0:0*/, 2> __PVT__valid1_q;
    VlUnpacked<SData/*9:0*/, 2> __PVT__info0_q;
    VlUnpacked<SData/*9:0*/, 2> __PVT__info1_q;
    VlUnpacked<QData/*63:0*/, 2> __PVT__ram_q;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_fetch_fifo(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_fetch_fifo();
    VL_UNCOPYABLE(Vbiriscv_top_fetch_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
