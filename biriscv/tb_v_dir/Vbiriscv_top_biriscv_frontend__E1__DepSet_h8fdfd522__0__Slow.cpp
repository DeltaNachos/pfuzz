// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_frontend__E1.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__invalidate_i = 0U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__0(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__0\n"); );
    // Body
    vlSelf->__PVT__icache_invalidate_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_invalidate_o;
    vlSelf->__PVT__fetch_pc_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_pc_o;
    vlSelf->__PVT__fetch_pred_branch_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_pred_branch_o;
    vlSelf->__PVT__icache_priv_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_priv_o;
    vlSelf->__PVT__icache_pc_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_pc_o;
    vlSelf->__PVT__fetch_pc_f_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__pc_f_o;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_in_pc_i 
        = vlSelf->__PVT__fetch_pc_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_in_pred_branch_i 
        = vlSelf->__PVT__fetch_pred_branch_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__pc_f_i 
        = vlSelf->__PVT__fetch_pc_f_w;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__1(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__1\n"); );
    // Body
    vlSelf->__PVT__next_pc_f_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__next_pc_f_o;
    vlSelf->__PVT__next_taken_f_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__next_taken_f_o;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_invalidate_i 
        = vlSelf->__PVT__fetch_invalidate_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_page_fault_i 
        = vlSelf->__PVT__icache_page_fault_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_inst_i 
        = vlSelf->__PVT__icache_inst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_error_i 
        = vlSelf->__PVT__icache_error_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_valid_i 
        = vlSelf->__PVT__icache_valid_i;
    vlSelf->__PVT__fetch_accept_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_in_accept_o;
    vlSelf->__PVT__fetch0_instr_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_o;
    vlSelf->__PVT__fetch1_instr_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_o;
    vlSelf->__PVT__fetch0_valid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_valid_o;
    vlSelf->__PVT__fetch0_pc_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_pc_o;
    vlSelf->__PVT__fetch1_pc_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_pc_o;
    vlSelf->__PVT__fetch1_valid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_valid_o;
    vlSelf->__PVT__fetch0_instr_branch_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_branch_o;
    vlSelf->__PVT__fetch0_instr_invalid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_invalid_o;
    vlSelf->__PVT__fetch0_instr_div_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_div_o;
    vlSelf->__PVT__fetch0_instr_rd_valid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_rd_valid_o;
    vlSelf->__PVT__fetch0_instr_exec_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_exec_o;
    vlSelf->__PVT__fetch0_instr_csr_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_csr_o;
    vlSelf->__PVT__fetch0_instr_lsu_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_lsu_o;
    vlSelf->__PVT__fetch0_instr_mul_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_instr_mul_o;
    vlSelf->__PVT__fetch0_fault_page_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_fault_page_o;
    vlSelf->__PVT__fetch0_fault_fetch_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_fault_fetch_o;
    vlSelf->__PVT__fetch1_instr_invalid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_invalid_o;
    vlSelf->__PVT__fetch1_instr_div_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_div_o;
    vlSelf->__PVT__fetch1_instr_csr_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_csr_o;
    vlSelf->__PVT__fetch1_instr_rd_valid_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_rd_valid_o;
    vlSelf->__PVT__fetch1_instr_branch_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_branch_o;
    vlSelf->__PVT__fetch1_instr_exec_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_exec_o;
    vlSelf->__PVT__fetch1_instr_lsu_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_lsu_o;
    vlSelf->__PVT__fetch1_instr_mul_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_instr_mul_o;
    vlSelf->__PVT__fetch1_fault_page_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_fault_page_o;
    vlSelf->__PVT__fetch1_fault_fetch_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_fault_fetch_o;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__next_pc_f_i 
        = vlSelf->__PVT__next_pc_f_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__next_taken_f_i 
        = vlSelf->__PVT__next_taken_f_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_accept_i 
        = vlSelf->__PVT__fetch_accept_w;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__2(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__2\n"); );
    // Body
    vlSelf->__PVT__icache_flush_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_flush_o;
    vlSelf->__PVT__fetch_fault_page_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_fault_page_o;
    vlSelf->__PVT__fetch_instr_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_instr_o;
    vlSelf->__PVT__fetch_fault_fetch_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_fault_fetch_o;
    vlSelf->__PVT__fetch_valid_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__fetch_valid_o;
    vlSelf->__PVT__icache_rd_o = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_rd_o;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__branch_pc_i 
        = vlSelf->__PVT__branch_pc_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__branch_pc_i 
        = vlSelf->__PVT__branch_pc_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_is_taken_i 
        = vlSelf->__PVT__branch_info_is_taken_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_is_not_taken_i 
        = vlSelf->__PVT__branch_info_is_not_taken_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_is_jmp_i 
        = vlSelf->__PVT__branch_info_is_jmp_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_is_call_i 
        = vlSelf->__PVT__branch_info_is_call_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_is_ret_i 
        = vlSelf->__PVT__branch_info_is_ret_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_pc_i 
        = vlSelf->__PVT__branch_info_pc_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_source_i 
        = vlSelf->__PVT__branch_info_source_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_in_fault_page_i 
        = vlSelf->__PVT__fetch_fault_page_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_in_instr_i 
        = vlSelf->__PVT__fetch_instr_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_in_fault_fetch_i 
        = vlSelf->__PVT__fetch_fault_fetch_w;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_in_valid_i 
        = vlSelf->__PVT__fetch_valid_w;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__3(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__3\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__branch_priv_i 
        = vlSelf->__PVT__branch_priv_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__branch_priv_i 
        = vlSelf->__PVT__branch_priv_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__4(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__4\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__icache_accept_i 
        = vlSelf->__PVT__icache_accept_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__branch_request_i 
        = vlSelf->__PVT__branch_request_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__branch_request_i 
        = vlSelf->__PVT__branch_request_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__branch_request_i 
        = vlSelf->__PVT__branch_info_request_i;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__5(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___stl_sequent__TOP__biriscv_top__u_core__u_frontend__5\n"); );
    // Body
    vlSelf->__PVT__fetch_pc_accept_w = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__pc_accept_o;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out0_accept_i 
        = vlSelf->__PVT__fetch0_accept_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__fetch_out1_accept_i 
        = vlSelf->__PVT__fetch1_accept_i;
    vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__pc_accept_i 
        = vlSelf->__PVT__fetch_pc_accept_w;
}
