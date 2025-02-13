// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_decode__E1.h"

VL_ATTR_COLD void Vrv32im_top_riscv_decode__E1___eval_initial__TOP__rv32im_top__core__u_decode(Vrv32im_top_riscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_decode__E1___eval_initial__TOP__rv32im_top__core__u_decode\n"); );
    // Body
    vlSelf->__PVT__enable_muldiv_w = 1U;
}

VL_ATTR_COLD void Vrv32im_top_riscv_decode__E1___stl_sequent__TOP__rv32im_top__core__u_decode__2(Vrv32im_top_riscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_decode__E1___stl_sequent__TOP__rv32im_top__core__u_decode__2\n"); );
    // Body
    vlSelf->__PVT__fetch_in_accept_o = vlSelf->__PVT__fetch_out_accept_i;
}

VL_ATTR_COLD void Vrv32im_top_riscv_decode__E1___ctor_var_reset(Vrv32im_top_riscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_decode__E1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_instr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_in_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_in_fault_fetch_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_fault_page_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__squash_decode_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_out_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_out_fault_fetch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_fault_page_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_exec_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_mul_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_div_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_csr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out_instr_invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable_muldiv_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(67, vlSelf->__PVT__genblk1__DOT__buffer_q);
    vlSelf->__Vcellinp__genblk1__DOT__u_dec__fetch_fault_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(67, vlSelf->__Vdly__genblk1__DOT__buffer_q);
}
