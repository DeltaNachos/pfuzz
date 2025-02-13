// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vssrv_top.h for the primary calling header

#ifndef VERILATED_VSSRV_TOP_SCR1_PIPE_TDU_H_
#define VERILATED_VSSRV_TOP_SCR1_PIPE_TDU_H_  // guard

#include "verilated.h"


class Vssrv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vssrv_top_scr1_pipe_tdu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__clk_en,0,0);
        VL_IN8(__PVT__dsbl,0,0);
        VL_IN8(__PVT__csr2tdu_req,0,0);
        VL_IN8(__PVT__csr2tdu_cmd,1,0);
        VL_IN8(__PVT__csr2tdu_addr,2,0);
        VL_OUT8(__PVT__csr2tdu_resp,0,0);
        VL_OUT8(__PVT__tdu2exu_i_match,2,0);
        VL_OUT8(__PVT__tdu2exu_i_x_req,0,0);
        VL_OUT8(__PVT__tdu2lsu_i_x_req,0,0);
        VL_OUT8(__PVT__tdu2lsu_d_match,1,0);
        VL_OUT8(__PVT__tdu2lsu_d_x_req,0,0);
        VL_IN8(__PVT__exu2tdu_bp_retire,2,0);
        VL_OUT8(__PVT__tdu2hdu_dmode_req,0,0);
        CData/*1:0*/ __PVT__tselect_ff;
        CData/*0:0*/ __PVT__csr_addr_tselect_cmb;
        CData/*1:0*/ __PVT__csr_addr_mcontrol_cmb;
        CData/*1:0*/ __PVT__csr_addr_tdata2_cmb;
        CData/*0:0*/ __PVT__csr_wr_cmb;
        CData/*1:0*/ __PVT__clk_en_mcontrol_cmb;
        CData/*1:0*/ __PVT__mcontrol_dmode_ff;
        CData/*1:0*/ __PVT__mcontrol_execution_hit_cmb;
        CData/*1:0*/ __PVT__mcontrol_ldst_hit_cmb;
        CData/*1:0*/ __PVT__mcontrol_action_ff;
        CData/*3:0*/ __PVT__mcontrol_match_ff;
        CData/*1:0*/ __PVT__mcontrol_hit_ff;
        CData/*1:0*/ __PVT__mcontrol_m_ff;
        CData/*1:0*/ __PVT__mcontrol_execution_ff;
        CData/*1:0*/ __PVT__mcontrol_load_ff;
        CData/*1:0*/ __PVT__mcontrol_store_ff;
        CData/*1:0*/ __PVT__mcontrol_write_en;
        CData/*0:0*/ __PVT__csr_addr_icount_cmb;
        CData/*0:0*/ __PVT__clk_en_icount_cmb;
        CData/*0:0*/ __PVT__icount_decrement_cmb;
        CData/*0:0*/ __PVT__icount_hit_cmb;
        CData/*0:0*/ __PVT__icount_skip_ff;
        CData/*0:0*/ __PVT__icount_dmode_ff;
        CData/*0:0*/ __PVT__icount_action_ff;
        CData/*0:0*/ __PVT__icount_hit_ff;
        CData/*0:0*/ __PVT__icount_m_ff;
        CData/*0:0*/ __PVT__icount_write_en;
        CData/*1:0*/ __Vdly__tselect_ff;
        CData/*0:0*/ __Vdly__icount_dmode_ff;
        CData/*0:0*/ __Vdly__icount_m_ff;
        CData/*0:0*/ __Vdly__icount_action_ff;
        CData/*0:0*/ __Vdly__icount_hit_ff;
        CData/*0:0*/ __Vdly__icount_skip_ff;
        CData/*1:0*/ __Vdly__mcontrol_dmode_ff;
        CData/*1:0*/ __Vdly__mcontrol_m_ff;
        CData/*1:0*/ __Vdly__mcontrol_execution_ff;
        CData/*1:0*/ __Vdly__mcontrol_load_ff;
        CData/*1:0*/ __Vdly__mcontrol_store_ff;
        CData/*1:0*/ __Vdly__mcontrol_action_ff;
        CData/*1:0*/ __Vdly__mcontrol_hit_ff;
        SData/*13:0*/ __PVT__icount_count_ff;
        SData/*13:0*/ __Vdly__icount_count_ff;
        VL_IN(__PVT__csr2tdu_wdata,31,0);
        VL_OUT(__PVT__csr2tdu_rdata,31,0);
        QData/*63:0*/ __PVT__tdata2;
        IData/*31:0*/ __PVT__csr_wr_data_cmb;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        IData/*31:0*/ __PVT__unnamedblk2__DOT__i;
        IData/*31:0*/ __PVT__unnamedblk3__DOT__i;
    };
    struct {
        IData/*31:0*/ __PVT__unnamedblk4__DOT__i;
        QData/*63:0*/ __Vdly__tdata2;
        VL_IN64(__PVT__exu2tdu_i_mon,33,0);
        VL_IN64(__PVT__tdu2lsu_d_mon,34,0);
    };

    // INTERNAL VARIABLES
    Vssrv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vssrv_top_scr1_pipe_tdu(Vssrv_top__Syms* symsp, const char* v__name);
    ~Vssrv_top_scr1_pipe_tdu();
    VL_UNCOPYABLE(Vssrv_top_scr1_pipe_tdu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
