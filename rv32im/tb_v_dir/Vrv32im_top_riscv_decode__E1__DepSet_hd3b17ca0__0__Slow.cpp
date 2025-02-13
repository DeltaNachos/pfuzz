// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_decode__E1.h"

VL_ATTR_COLD void Vrv32im_top_riscv_decode__E1___stl_sequent__TOP__rv32im_top__core__u_decode__0(Vrv32im_top_riscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_decode__E1___stl_sequent__TOP__rv32im_top__core__u_decode__0\n"); );
    // Body
    vlSelf->__PVT__fetch_out_pc_o = VL_SEL_IWII(67, vlSelf->__PVT__genblk1__DOT__buffer_q, 0U, 0x20U);
    vlSelf->__PVT__fetch_out_fault_page_o = (1U & VL_BITSEL_IWII(67, vlSelf->__PVT__genblk1__DOT__buffer_q, 0x41U));
    vlSelf->__PVT__fetch_out_fault_fetch_o = (1U & 
                                              VL_BITSEL_IWII(67, vlSelf->__PVT__genblk1__DOT__buffer_q, 0x40U));
    vlSelf->__PVT__fetch_out_valid_o = (1U & VL_BITSEL_IWII(67, vlSelf->__PVT__genblk1__DOT__buffer_q, 0x42U));
    vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__enable_muldiv_i 
        = vlSelf->__PVT__enable_muldiv_w;
    vlSelf->__PVT__fetch_out_instr_o = VL_SEL_IWII(67, vlSelf->__PVT__genblk1__DOT__buffer_q, 0x20U, 0x20U);
    vlSelf->__Vcellinp__genblk1__DOT__u_dec__fetch_fault_i 
        = ((IData)(vlSelf->__PVT__fetch_out_fault_page_o) 
           | (IData)(vlSelf->__PVT__fetch_out_fault_fetch_o));
    vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__valid_i 
        = vlSelf->__PVT__fetch_out_valid_o;
    vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__opcode_i 
        = vlSelf->__PVT__fetch_out_instr_o;
    vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__fetch_fault_i 
        = vlSelf->__Vcellinp__genblk1__DOT__u_dec__fetch_fault_i;
}

VL_ATTR_COLD void Vrv32im_top_riscv_decode__E1___stl_sequent__TOP__rv32im_top__core__u_decode__1(Vrv32im_top_riscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_decode__E1___stl_sequent__TOP__rv32im_top__core__u_decode__1\n"); );
    // Body
    vlSelf->__PVT__fetch_out_instr_exec_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__exec_o;
    vlSelf->__PVT__fetch_out_instr_lsu_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__lsu_o;
    vlSelf->__PVT__fetch_out_instr_branch_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__branch_o;
    vlSelf->__PVT__fetch_out_instr_rd_valid_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__rd_valid_o;
    vlSelf->__PVT__fetch_out_instr_mul_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__mul_o;
    vlSelf->__PVT__fetch_out_instr_div_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__div_o;
    vlSelf->__PVT__fetch_out_instr_invalid_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__invalid_o;
    vlSelf->__PVT__fetch_out_instr_csr_o = vlSymsp->TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec.__PVT__csr_o;
    vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w = 
        (((IData)(vlSelf->__PVT__fetch_in_fault_page_i) 
          | (IData)(vlSelf->__PVT__fetch_in_fault_fetch_i))
          ? 0U : vlSelf->__PVT__fetch_in_instr_i);
}
