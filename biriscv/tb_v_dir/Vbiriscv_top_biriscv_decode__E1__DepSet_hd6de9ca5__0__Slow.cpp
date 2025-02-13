// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_decode__E1.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_decode(Vbiriscv_top_biriscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_decode__E1___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_decode\n"); );
    // Body
    vlSelf->__PVT__enable_muldiv_w = 1U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_decode__E1___ctor_var_reset(Vbiriscv_top_biriscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_decode__E1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_instr_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__fetch_in_pred_branch_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_in_fault_fetch_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_fault_page_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_in_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_out0_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_request_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_priv_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_in_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_out0_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_out0_fault_fetch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_fault_page_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_exec_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_mul_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_div_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_csr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out0_instr_invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_out1_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_out1_fault_fetch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_fault_page_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_exec_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_mul_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_div_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_csr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_out1_instr_invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable_muldiv_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fetch_in_fault_page_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fetch_in_fault_fetch_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__fetch_in_pred_branch_w = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__DOT__fetch_in_instr_raw_w = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__genblk1__DOT__fetch_in_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__fetch_in_valid_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(101, vlSelf->__PVT__genblk1__DOT__fetch_buffer_q);
    vlSelf->__PVT__genblk1__DOT__info0_in_w = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__DOT__info0_out_w = VL_RAND_RESET_I(10);
    vlSelf->__PVT__genblk1__DOT__info1_in_w = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__DOT__info1_out_w = VL_RAND_RESET_I(10);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__csr_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__div_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__mul_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__branch_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__exec_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec0__invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__genblk1__DOT__u_dec0__opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__csr_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__div_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__mul_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__branch_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__exec_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_dec1__invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__genblk1__DOT__u_dec1__opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__DOT__u_fifo__info1_out_o = VL_RAND_RESET_I(10);
    vlSelf->__Vcellout__genblk1__DOT__u_fifo__info0_out_o = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__genblk1__DOT__u_fifo__info1_in_i = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__genblk1__DOT__u_fifo__info0_in_i = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(101, vlSelf->__Vdly__genblk1__DOT__fetch_buffer_q);
}
