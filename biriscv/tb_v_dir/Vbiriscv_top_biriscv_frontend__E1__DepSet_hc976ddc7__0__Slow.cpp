// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_frontend__E1.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_frontend__E1___ctor_var_reset(Vbiriscv_top_biriscv_frontend__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_frontend__E1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_error_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_inst_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__icache_page_fault_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_request_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_priv_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__branch_info_request_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_info_is_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_info_is_not_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_info_source_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_info_is_call_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_info_is_ret_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_info_is_jmp_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_info_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__icache_rd_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_invalidate_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__icache_priv_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch0_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch0_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch0_fault_fetch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_fault_page_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_exec_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_mul_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_div_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_csr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch0_instr_invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch1_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch1_fault_fetch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_fault_page_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_exec_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_mul_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_div_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_csr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch1_instr_invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_w = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__fetch_fault_page_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__next_pc_f_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_taken_f_w = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_pc_f_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_pred_branch_w = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_fault_fetch_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_pc_accept_w = VL_RAND_RESET_I(1);
}
