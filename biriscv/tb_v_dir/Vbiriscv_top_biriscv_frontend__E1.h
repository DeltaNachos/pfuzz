// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_FRONTEND__E1_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_FRONTEND__E1_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_decode__E1;
class Vbiriscv_top_biriscv_fetch;
class Vbiriscv_top_biriscv_npc;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_frontend__E1 final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_biriscv_npc* __PVT__u_npc;
    Vbiriscv_top_biriscv_decode__E1* __PVT__u_decode;
    Vbiriscv_top_biriscv_fetch* __PVT__u_fetch;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__icache_accept_i,0,0);
    VL_IN8(__PVT__icache_valid_i,0,0);
    VL_IN8(__PVT__icache_error_i,0,0);
    VL_IN8(__PVT__icache_page_fault_i,0,0);
    VL_IN8(__PVT__fetch0_accept_i,0,0);
    VL_IN8(__PVT__fetch1_accept_i,0,0);
    VL_IN8(__PVT__fetch_invalidate_i,0,0);
    VL_IN8(__PVT__branch_request_i,0,0);
    VL_IN8(__PVT__branch_priv_i,1,0);
    VL_IN8(__PVT__branch_info_request_i,0,0);
    VL_IN8(__PVT__branch_info_is_taken_i,0,0);
    VL_IN8(__PVT__branch_info_is_not_taken_i,0,0);
    VL_IN8(__PVT__branch_info_is_call_i,0,0);
    VL_IN8(__PVT__branch_info_is_ret_i,0,0);
    VL_IN8(__PVT__branch_info_is_jmp_i,0,0);
    VL_OUT8(__PVT__icache_rd_o,0,0);
    VL_OUT8(__PVT__icache_flush_o,0,0);
    VL_OUT8(__PVT__icache_invalidate_o,0,0);
    VL_OUT8(__PVT__icache_priv_o,1,0);
    VL_OUT8(__PVT__fetch0_valid_o,0,0);
    VL_OUT8(__PVT__fetch0_fault_fetch_o,0,0);
    VL_OUT8(__PVT__fetch0_fault_page_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_exec_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_lsu_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_branch_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_mul_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_div_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_csr_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_rd_valid_o,0,0);
    VL_OUT8(__PVT__fetch0_instr_invalid_o,0,0);
    VL_OUT8(__PVT__fetch1_valid_o,0,0);
    VL_OUT8(__PVT__fetch1_fault_fetch_o,0,0);
    VL_OUT8(__PVT__fetch1_fault_page_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_exec_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_lsu_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_branch_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_mul_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_div_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_csr_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_rd_valid_o,0,0);
    VL_OUT8(__PVT__fetch1_instr_invalid_o,0,0);
    CData/*0:0*/ __PVT__fetch_valid_w;
    CData/*0:0*/ __PVT__fetch_fault_page_w;
    CData/*1:0*/ __PVT__next_taken_f_w;
    CData/*0:0*/ __PVT__fetch_accept_w;
    CData/*1:0*/ __PVT__fetch_pred_branch_w;
    CData/*0:0*/ __PVT__fetch_fault_fetch_w;
    CData/*0:0*/ __PVT__fetch_pc_accept_w;
    VL_IN(__PVT__branch_pc_i,31,0);
    VL_IN(__PVT__branch_info_source_i,31,0);
    VL_IN(__PVT__branch_info_pc_i,31,0);
    VL_OUT(__PVT__icache_pc_o,31,0);
    VL_OUT(__PVT__fetch0_instr_o,31,0);
    VL_OUT(__PVT__fetch0_pc_o,31,0);
    VL_OUT(__PVT__fetch1_instr_o,31,0);
    VL_OUT(__PVT__fetch1_pc_o,31,0);
    IData/*31:0*/ __PVT__next_pc_f_w;
    IData/*31:0*/ __PVT__fetch_pc_f_w;
    IData/*31:0*/ __PVT__fetch_pc_w;
    VL_IN64(__PVT__icache_inst_i,63,0);
    QData/*63:0*/ __PVT__fetch_instr_w;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_frontend__E1(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_frontend__E1();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_frontend__E1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
