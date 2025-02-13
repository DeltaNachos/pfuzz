// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_issue__SE1.h"

bool Vrv32im_top_riscv_issue__SE1::complete_valid0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_valid0\n"); );
    VL_OUT8(complete_valid0__Vfuncrtn,0,0);
    // Body
    complete_valid0__Vfuncrtn = this->__PVT__pipe_valid_wb_w;
    // Final
    return (complete_valid0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_pc0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_pc0\n"); );
    VL_OUT(complete_pc0__Vfuncrtn,31,0);
    // Body
    complete_pc0__Vfuncrtn = this->__PVT__pipe_pc_wb_w;
    // Final
    return (complete_pc0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_opcode0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_opcode0\n"); );
    VL_OUT(complete_opcode0__Vfuncrtn,31,0);
    // Body
    complete_opcode0__Vfuncrtn = this->__PVT__pipe_opc_wb_w;
    // Final
    return (complete_opcode0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_ra0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_ra0\n"); );
    VL_OUT8(complete_ra0__Vfuncrtn,4,0);
    // Body
    complete_ra0__Vfuncrtn = this->__PVT__v_pipe_rs1_w;
    // Final
    return (complete_ra0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_rb0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_rb0\n"); );
    VL_OUT8(complete_rb0__Vfuncrtn,4,0);
    // Body
    complete_rb0__Vfuncrtn = this->__PVT__v_pipe_rs2_w;
    // Final
    return (complete_rb0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_rd0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_rd0\n"); );
    VL_OUT8(complete_rd0__Vfuncrtn,4,0);
    // Body
    complete_rd0__Vfuncrtn = this->__PVT__pipe_rd_wb_w;
    // Final
    return (complete_rd0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_ra_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_ra_val0\n"); );
    VL_OUT(complete_ra_val0__Vfuncrtn,31,0);
    // Body
    complete_ra_val0__Vfuncrtn = this->__PVT__pipe_ra_val_wb_w;
    // Final
    return (complete_ra_val0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_rb_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_rb_val0\n"); );
    VL_OUT(complete_rb_val0__Vfuncrtn,31,0);
    // Body
    complete_rb_val0__Vfuncrtn = this->__PVT__pipe_rb_val_wb_w;
    // Final
    return (complete_rb_val0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_rd_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_rd_val0\n"); );
    VL_OUT(complete_rd_val0__Vfuncrtn,31,0);
    // Body
    complete_rd_val0__Vfuncrtn = (VL_REDOR_I((IData)(this->__PVT__pipe_rd_wb_w))
                                   ? this->__PVT__pipe_result_wb_w
                                   : 0U);
    // Final
    return (complete_rd_val0__Vfuncrtn);
}

uint32_t Vrv32im_top_riscv_issue__SE1::complete_exception() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1::complete_exception\n"); );
    VL_OUT8(complete_exception__Vfuncrtn,5,0);
    // Body
    complete_exception__Vfuncrtn = this->__PVT__pipe_exception_wb_w;
    // Final
    return (complete_exception__Vfuncrtn);
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__0(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__0\n"); );
    // Body
    vlSelf->__Vdly__priv_x_q = vlSelf->__PVT__priv_x_q;
    vlSelf->__Vdly__csr_pending_q = vlSelf->__PVT__csr_pending_q;
    vlSelf->__Vdly__div_pending_q = vlSelf->__PVT__div_pending_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__priv_x_q = 3U;
    } else if (vlSelf->__PVT__branch_csr_request_i) {
        vlSelf->__Vdly__priv_x_q = vlSelf->__PVT__branch_csr_priv_i;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__csr_pending_q = 0U;
    } else if (vlSelf->__PVT__pipe_squash_e1_e2_w) {
        vlSelf->__Vdly__csr_pending_q = 0U;
    } else if (((IData)(vlSelf->__PVT__csr_opcode_valid_o) 
                & (IData)(vlSelf->__PVT__issue_csr_w))) {
        vlSelf->__Vdly__csr_pending_q = 1U;
    } else if (vlSelf->__PVT__pipe_csr_wb_w) {
        vlSelf->__Vdly__csr_pending_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__div_pending_q = 0U;
    } else if (vlSelf->__PVT__pipe_squash_e1_e2_w) {
        vlSelf->__Vdly__div_pending_q = 0U;
    } else if (((IData)(vlSelf->__PVT__div_opcode_valid_o) 
                & (IData)(vlSelf->__PVT__issue_div_w))) {
        vlSelf->__Vdly__div_pending_q = 1U;
    } else if (vlSelf->__PVT__writeback_div_valid_i) {
        vlSelf->__Vdly__div_pending_q = 0U;
    }
    vlSelf->__PVT__priv_x_q = vlSelf->__Vdly__priv_x_q;
    vlSelf->__PVT__csr_pending_q = vlSelf->__Vdly__csr_pending_q;
    vlSelf->__PVT__div_pending_q = vlSelf->__Vdly__div_pending_q;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__0(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__0\n"); );
    // Body
    vlSelf->__PVT__interrupt_inhibit_o = ((IData)(vlSelf->__PVT__csr_pending_q) 
                                          | (IData)(vlSelf->__PVT__issue_csr_w));
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__1(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__1\n"); );
    // Body
    vlSelf->__PVT__branch_priv_o = ((IData)(vlSelf->__PVT__branch_csr_request_i)
                                     ? (IData)(vlSelf->__PVT__branch_csr_priv_i)
                                     : (IData)(vlSelf->__PVT__priv_x_q));
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__10(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__10\n"); );
    // Body
    vlSelf->__PVT__opcode_valid_w = (((IData)(vlSelf->__PVT__fetch_valid_i) 
                                      & (~ (IData)(vlSelf->__PVT__squash_w))) 
                                     & (~ (IData)(vlSelf->__PVT__branch_csr_request_i)));
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__14(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__14\n"); );
    // Body
    vlSelf->__PVT__branch_pc_o = ((IData)(vlSelf->__PVT__branch_csr_request_i)
                                   ? vlSelf->__PVT__branch_csr_pc_i
                                   : vlSelf->__PVT__branch_d_exec_pc_i);
}
