// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_LSU_FIFO__W24_D2_A1_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_LSU_FIFO__W24_D2_A1_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__push_i,0,0);
    VL_IN8(__PVT__pop_i,0,0);
    VL_OUT8(__PVT__accept_o,0,0);
    VL_OUT8(__PVT__valid_o,0,0);
    CData/*0:0*/ __PVT__rd_ptr_q;
    CData/*0:0*/ __PVT__wr_ptr_q;
    CData/*1:0*/ __PVT__count_q;
    CData/*1:0*/ __Vdly__count_q;
    CData/*0:0*/ __Vdly__rd_ptr_q;
    CData/*0:0*/ __Vdly__wr_ptr_q;
    CData/*0:0*/ __Vdlyvset__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__ram_q__v1;
    CData/*0:0*/ __Vdlyvdim0__ram_q__v2;
    CData/*0:0*/ __Vdlyvset__ram_q__v2;
    IData/*31:0*/ __PVT__i;
    VL_IN64(__PVT__data_in_i,35,0);
    VL_OUT64(__PVT__data_out_o,35,0);
    QData/*35:0*/ __Vdlyvval__ram_q__v2;
    VlUnpacked<QData/*35:0*/, 2> __PVT__ram_q;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
