// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_FETCH_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_FETCH_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_fetch final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__fetch_accept_i,0,0);
    VL_IN8(__PVT__icache_accept_i,0,0);
    VL_IN8(__PVT__icache_valid_i,0,0);
    VL_IN8(__PVT__icache_error_i,0,0);
    VL_IN8(__PVT__icache_page_fault_i,0,0);
    VL_IN8(__PVT__fetch_invalidate_i,0,0);
    VL_IN8(__PVT__branch_request_i,0,0);
    VL_IN8(__PVT__branch_priv_i,1,0);
    VL_IN8(__PVT__next_taken_f_i,1,0);
    VL_OUT8(__PVT__fetch_valid_o,0,0);
    VL_OUT8(__PVT__fetch_pred_branch_o,1,0);
    VL_OUT8(__PVT__fetch_fault_fetch_o,0,0);
    VL_OUT8(__PVT__fetch_fault_page_o,0,0);
    VL_OUT8(__PVT__icache_rd_o,0,0);
    VL_OUT8(__PVT__icache_flush_o,0,0);
    VL_OUT8(__PVT__icache_invalidate_o,0,0);
    VL_OUT8(__PVT__icache_priv_o,1,0);
    VL_OUT8(__PVT__pc_accept_o,0,0);
    CData/*0:0*/ __PVT__active_q;
    CData/*0:0*/ __PVT__icache_busy_w;
    CData/*0:0*/ __PVT__stall_w;
    CData/*0:0*/ __PVT__branch_q;
    CData/*1:0*/ __PVT__branch_priv_q;
    CData/*0:0*/ __PVT__branch_w;
    CData/*1:0*/ __PVT__branch_priv_w;
    CData/*0:0*/ __PVT__stall_q;
    CData/*0:0*/ __PVT__icache_fetch_q;
    CData/*0:0*/ __PVT__icache_invalidate_q;
    CData/*1:0*/ __PVT__pred_d_q;
    CData/*1:0*/ __PVT__icache_priv_w;
    CData/*0:0*/ __PVT__fetch_resp_drop_w;
    CData/*0:0*/ __PVT__skid_valid_q;
    CData/*1:0*/ __PVT__genblk2__DOT__priv_f_q;
    CData/*0:0*/ __PVT__genblk2__DOT__branch_d_q;
    CData/*0:0*/ __Vdly__branch_q;
    CData/*1:0*/ __Vdly__branch_priv_q;
    CData/*0:0*/ __Vdly__active_q;
    CData/*0:0*/ __Vdly__stall_q;
    CData/*0:0*/ __Vdly__icache_fetch_q;
    CData/*0:0*/ __Vdly__icache_invalidate_q;
    CData/*1:0*/ __Vdly__genblk2__DOT__priv_f_q;
    CData/*0:0*/ __Vdly__genblk2__DOT__branch_d_q;
    CData/*1:0*/ __Vdly__pred_d_q;
    CData/*0:0*/ __Vdly__skid_valid_q;
    VL_IN(__PVT__branch_pc_i,31,0);
    VL_IN(__PVT__next_pc_f_i,31,0);
    VL_OUT(__PVT__fetch_pc_o,31,0);
    VL_OUT(__PVT__icache_pc_o,31,0);
    VL_OUT(__PVT__pc_f_o,31,0);
    IData/*31:0*/ __PVT__branch_pc_q;
    IData/*31:0*/ __PVT__branch_pc_w;
    IData/*31:0*/ __PVT__pc_f_q;
    IData/*31:0*/ __PVT__pc_d_q;
    IData/*31:0*/ __PVT__icache_pc_w;
    VlWide<4>/*99:0*/ __PVT__skid_buffer_q;
    IData/*31:0*/ __Vdly__branch_pc_q;
    IData/*31:0*/ __Vdly__pc_f_q;
    IData/*31:0*/ __Vdly__pc_d_q;
    VlWide<4>/*99:0*/ __Vdly__skid_buffer_q;
    VL_IN64(__PVT__icache_inst_i,63,0);
    VL_OUT64(__PVT__fetch_instr_o,63,0);

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_fetch(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_fetch();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_fetch);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
