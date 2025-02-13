// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_RESET_BUF_QLFY_CELL_H_
#define VERILATED_VSSRV_TOP_SCR1_RESET_BUF_QLFY_CELL_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_reset_buf_qlfy_cell final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    CData/*0:0*/ __PVT__rst_n_mux;
    CData/*0:0*/ __PVT__reset_n_in_mux;
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__test_rst_n,0,0);
    VL_IN8(__PVT__test_mode,0,0);
    VL_IN8(__PVT__reset_n_in,0,0);
    VL_OUT8(__PVT__reset_n_out_qlfy,0,0);
    VL_OUT8(__PVT__reset_n_out,0,0);
    VL_OUT8(__PVT__reset_n_status,0,0);
    CData/*0:0*/ __PVT__reset_n_front_ff;
    CData/*0:0*/ __PVT__reset_n_victim_ff;
    CData/*0:0*/ __PVT__reset_n_qualifier_ff;
    CData/*0:0*/ __PVT__reset_n_lucky_ff;
    CData/*0:0*/ __PVT__reset_n_status_ff;
    CData/*0:0*/ __Vdly__reset_n_front_ff;
    CData/*0:0*/ __Vdly__reset_n_victim_ff;
    CData/*0:0*/ __Vdly__reset_n_qualifier_ff;
    CData/*0:0*/ __Vdly__reset_n_lucky_ff;
    CData/*0:0*/ __Vdly__reset_n_status_ff;

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_reset_buf_qlfy_cell(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_reset_buf_qlfy_cell();
    VL_UNCOPYABLE(Vssrv_top_scr1_reset_buf_qlfy_cell);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
