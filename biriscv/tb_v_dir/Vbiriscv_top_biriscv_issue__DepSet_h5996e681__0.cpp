// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_issue.h"

bool Vbiriscv_top_biriscv_issue::complete_valid0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_valid0\n"); );
    VL_OUT8(complete_valid0__Vfuncrtn,0,0);
    // Body
    complete_valid0__Vfuncrtn = this->__PVT__pipe0_valid_wb_w;
    // Final
    return (complete_valid0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_pc0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_pc0\n"); );
    VL_OUT(complete_pc0__Vfuncrtn,31,0);
    // Body
    complete_pc0__Vfuncrtn = this->__PVT__pipe0_pc_wb_w;
    // Final
    return (complete_pc0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_opcode0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_opcode0\n"); );
    VL_OUT(complete_opcode0__Vfuncrtn,31,0);
    // Body
    complete_opcode0__Vfuncrtn = this->__PVT__pipe0_opc_wb_w;
    // Final
    return (complete_opcode0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_ra0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_ra0\n"); );
    VL_OUT8(complete_ra0__Vfuncrtn,4,0);
    // Body
    complete_ra0__Vfuncrtn = this->__PVT__v_pipe0_rs1_w;
    // Final
    return (complete_ra0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rb0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rb0\n"); );
    VL_OUT8(complete_rb0__Vfuncrtn,4,0);
    // Body
    complete_rb0__Vfuncrtn = this->__PVT__v_pipe0_rs2_w;
    // Final
    return (complete_rb0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rd0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rd0\n"); );
    VL_OUT8(complete_rd0__Vfuncrtn,4,0);
    // Body
    complete_rd0__Vfuncrtn = this->__PVT__pipe0_rd_wb_w;
    // Final
    return (complete_rd0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_ra_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_ra_val0\n"); );
    VL_OUT(complete_ra_val0__Vfuncrtn,31,0);
    // Body
    complete_ra_val0__Vfuncrtn = this->__PVT__pipe0_ra_val_wb_w;
    // Final
    return (complete_ra_val0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rb_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rb_val0\n"); );
    VL_OUT(complete_rb_val0__Vfuncrtn,31,0);
    // Body
    complete_rb_val0__Vfuncrtn = this->__PVT__pipe0_rb_val_wb_w;
    // Final
    return (complete_rb_val0__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rd_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rd_val0\n"); );
    VL_OUT(complete_rd_val0__Vfuncrtn,31,0);
    // Body
    complete_rd_val0__Vfuncrtn = (VL_REDOR_I((IData)(this->__PVT__pipe0_rd_wb_w))
                                   ? this->__PVT__pipe0_result_wb_w
                                   : 0U);
    // Final
    return (complete_rd_val0__Vfuncrtn);
}

bool Vbiriscv_top_biriscv_issue::complete_valid1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_valid1\n"); );
    VL_OUT8(complete_valid1__Vfuncrtn,0,0);
    // Body
    complete_valid1__Vfuncrtn = this->__PVT__pipe1_valid_wb_w;
    // Final
    return (complete_valid1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_pc1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_pc1\n"); );
    VL_OUT(complete_pc1__Vfuncrtn,31,0);
    // Body
    complete_pc1__Vfuncrtn = this->__PVT__pipe1_pc_wb_w;
    // Final
    return (complete_pc1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_opcode1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_opcode1\n"); );
    VL_OUT(complete_opcode1__Vfuncrtn,31,0);
    // Body
    complete_opcode1__Vfuncrtn = this->__PVT__pipe1_opc_wb_w;
    // Final
    return (complete_opcode1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_ra1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_ra1\n"); );
    VL_OUT8(complete_ra1__Vfuncrtn,4,0);
    // Body
    complete_ra1__Vfuncrtn = this->__PVT__v_pipe1_rs1_w;
    // Final
    return (complete_ra1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rb1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rb1\n"); );
    VL_OUT8(complete_rb1__Vfuncrtn,4,0);
    // Body
    complete_rb1__Vfuncrtn = this->__PVT__v_pipe1_rs2_w;
    // Final
    return (complete_rb1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rd1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rd1\n"); );
    VL_OUT8(complete_rd1__Vfuncrtn,4,0);
    // Body
    complete_rd1__Vfuncrtn = this->__PVT__pipe1_rd_wb_w;
    // Final
    return (complete_rd1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_ra_val1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_ra_val1\n"); );
    VL_OUT(complete_ra_val1__Vfuncrtn,31,0);
    // Body
    complete_ra_val1__Vfuncrtn = this->__PVT__pipe1_ra_val_wb_w;
    // Final
    return (complete_ra_val1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rb_val1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rb_val1\n"); );
    VL_OUT(complete_rb_val1__Vfuncrtn,31,0);
    // Body
    complete_rb_val1__Vfuncrtn = this->__PVT__pipe1_rb_val_wb_w;
    // Final
    return (complete_rb_val1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_rd_val1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_rd_val1\n"); );
    VL_OUT(complete_rd_val1__Vfuncrtn,31,0);
    // Body
    complete_rd_val1__Vfuncrtn = (VL_REDOR_I((IData)(this->__PVT__pipe1_rd_wb_w))
                                   ? this->__PVT__pipe1_result_wb_w
                                   : 0U);
    // Final
    return (complete_rd_val1__Vfuncrtn);
}

uint32_t Vbiriscv_top_biriscv_issue::complete_exception() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue::complete_exception\n"); );
    VL_OUT8(complete_exception__Vfuncrtn,5,0);
    // Body
    complete_exception__Vfuncrtn = ((IData)(this->__PVT__pipe0_exception_wb_w) 
                                    | (IData)(this->__PVT__pipe1_exception_wb_w));
    // Final
    return (complete_exception__Vfuncrtn);
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__0(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__0\n"); );
    // Body
    vlSelf->__Vdly__pc_x_q = vlSelf->__PVT__pc_x_q;
    vlSelf->__Vdly__priv_x_q = vlSelf->__PVT__priv_x_q;
    vlSelf->__Vdly__csr_pending_q = vlSelf->__PVT__csr_pending_q;
    vlSelf->__Vdly__div_pending_q = vlSelf->__PVT__div_pending_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__pc_x_q = 0U;
    } else if (vlSelf->__PVT__branch_csr_request_i) {
        vlSelf->__Vdly__pc_x_q = vlSelf->__PVT__branch_csr_pc_i;
    } else if (vlSelf->__PVT__branch_d_exec1_request_i) {
        vlSelf->__Vdly__pc_x_q = vlSelf->__PVT__branch_d_exec1_pc_i;
    } else if (vlSelf->__PVT__branch_d_exec0_request_i) {
        vlSelf->__Vdly__pc_x_q = vlSelf->__PVT__branch_d_exec0_pc_i;
    } else if (vlSelf->__PVT__dual_issue_w) {
        vlSelf->__Vdly__pc_x_q = ((IData)(8U) + vlSelf->__PVT__pc_x_q);
    } else if (vlSelf->__PVT__single_issue_w) {
        vlSelf->__Vdly__pc_x_q = ((IData)(4U) + vlSelf->__PVT__pc_x_q);
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__priv_x_q = 3U;
    } else if (vlSelf->__PVT__branch_csr_request_i) {
        vlSelf->__Vdly__priv_x_q = vlSelf->__PVT__branch_csr_priv_i;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__csr_pending_q = 0U;
    } else if (((IData)(vlSelf->__PVT__pipe0_squash_e1_e2_w) 
                | (IData)(vlSelf->__PVT__pipe1_squash_e1_e2_w))) {
        vlSelf->__Vdly__csr_pending_q = 0U;
    } else if (((IData)(vlSelf->__PVT__csr_opcode_valid_o) 
                & (IData)(vlSelf->__PVT__issue_a_csr_w))) {
        vlSelf->__Vdly__csr_pending_q = 1U;
    } else if (vlSelf->__PVT__pipe0_csr_wb_w) {
        vlSelf->__Vdly__csr_pending_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__div_pending_q = 0U;
    } else if (((IData)(vlSelf->__PVT__pipe0_squash_e1_e2_w) 
                | (IData)(vlSelf->__PVT__pipe1_squash_e1_e2_w))) {
        vlSelf->__Vdly__div_pending_q = 0U;
    } else if (((IData)(vlSelf->__PVT__div_opcode_valid_o) 
                & (IData)(vlSelf->__PVT__issue_a_div_w))) {
        vlSelf->__Vdly__div_pending_q = 1U;
    } else if (vlSelf->__PVT__writeback_div_valid_i) {
        vlSelf->__Vdly__div_pending_q = 0U;
    }
    vlSelf->__PVT__pc_x_q = vlSelf->__Vdly__pc_x_q;
    vlSelf->__PVT__priv_x_q = vlSelf->__Vdly__priv_x_q;
    vlSelf->__PVT__csr_pending_q = vlSelf->__Vdly__csr_pending_q;
    vlSelf->__PVT__div_pending_q = vlSelf->__Vdly__div_pending_q;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__1(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__1\n"); );
    // Body
    vlSelf->__PVT__issue_b_invalid_w = vlSelf->__PVT__fetch1_instr_invalid_i;
    vlSelf->__PVT__issue_b_div_w = vlSelf->__PVT__fetch1_instr_div_i;
    vlSelf->__PVT__issue_b_csr_w = vlSelf->__PVT__fetch1_instr_csr_i;
    vlSelf->__PVT__issue_b_sb_alloc_w = vlSelf->__PVT__fetch1_instr_rd_valid_i;
    vlSelf->__PVT__issue_b_branch_w = vlSelf->__PVT__fetch1_instr_branch_i;
    vlSelf->__PVT__issue_b_exec_w = vlSelf->__PVT__fetch1_instr_exec_i;
    vlSelf->__PVT__issue_b_lsu_w = vlSelf->__PVT__fetch1_instr_lsu_i;
    vlSelf->__PVT__issue_b_mul_w = vlSelf->__PVT__fetch1_instr_mul_i;
    vlSelf->__PVT__pipe1_ok_w = ((((IData)(vlSelf->__PVT__issue_b_exec_w) 
                                   | (IData)(vlSelf->__PVT__issue_b_branch_w)) 
                                  | (IData)(vlSelf->__PVT__issue_b_lsu_w)) 
                                 | (IData)(vlSelf->__PVT__issue_b_mul_w));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__0(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__0\n"); );
    // Body
    vlSelf->__PVT__branch_info_pc_o = (((IData)(vlSelf->__PVT__pipe1_branch_e1_w) 
                                        & (IData)(vlSelf->__PVT__branch_exec1_request_i))
                                        ? vlSelf->__PVT__branch_exec1_pc_i
                                        : vlSelf->__PVT__branch_exec0_pc_i);
    vlSelf->__PVT__branch_info_source_o = (((IData)(vlSelf->__PVT__pipe1_branch_e1_w) 
                                            & (IData)(vlSelf->__PVT__branch_exec1_request_i))
                                            ? vlSelf->__PVT__branch_exec1_source_i
                                            : vlSelf->__PVT__branch_exec0_source_i);
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__1(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__1\n"); );
    // Body
    vlSelf->__PVT__csr_writeback_exception_pc_o = (
                                                   VL_REDOR_I((IData)(vlSelf->__PVT__pipe0_exception_wb_w))
                                                    ? vlSelf->__PVT__pipe0_pc_wb_w
                                                    : vlSelf->__PVT__pipe1_pc_wb_w);
    vlSelf->__PVT__csr_writeback_exception_o = ((IData)(vlSelf->__PVT__pipe0_exception_wb_w) 
                                                | (IData)(vlSelf->__PVT__pipe1_exception_wb_w));
    vlSelf->__PVT__csr_writeback_exception_addr_o = 
        (VL_REDOR_I((IData)(vlSelf->__PVT__pipe0_exception_wb_w))
          ? vlSelf->__PVT__pipe0_result_wb_w : vlSelf->__PVT__pipe1_result_wb_w);
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__2(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__2\n"); );
    // Body
    vlSelf->__PVT__branch_info_is_taken_o = (((IData)(vlSelf->__PVT__pipe1_branch_e1_w) 
                                              & (IData)(vlSelf->__PVT__branch_exec1_is_taken_i)) 
                                             | ((IData)(vlSelf->__PVT__pipe0_branch_e1_w) 
                                                & (IData)(vlSelf->__PVT__branch_exec0_is_taken_i)));
    vlSelf->__PVT__branch_info_is_not_taken_o = (((IData)(vlSelf->__PVT__pipe1_branch_e1_w) 
                                                  & (IData)(vlSelf->__PVT__branch_exec1_is_not_taken_i)) 
                                                 | ((IData)(vlSelf->__PVT__pipe0_branch_e1_w) 
                                                    & (IData)(vlSelf->__PVT__branch_exec0_is_not_taken_i)));
    vlSelf->__PVT__branch_info_is_jmp_o = (((IData)(vlSelf->__PVT__pipe1_branch_e1_w) 
                                            & (IData)(vlSelf->__PVT__branch_exec1_is_jmp_i)) 
                                           | ((IData)(vlSelf->__PVT__pipe0_branch_e1_w) 
                                              & (IData)(vlSelf->__PVT__branch_exec0_is_jmp_i)));
    vlSelf->__PVT__branch_info_is_call_o = (((IData)(vlSelf->__PVT__pipe1_branch_e1_w) 
                                             & (IData)(vlSelf->__PVT__branch_exec1_is_call_i)) 
                                            | ((IData)(vlSelf->__PVT__pipe0_branch_e1_w) 
                                               & (IData)(vlSelf->__PVT__branch_exec0_is_call_i)));
    vlSelf->__PVT__branch_info_is_ret_o = (((IData)(vlSelf->__PVT__pipe1_branch_e1_w) 
                                            & (IData)(vlSelf->__PVT__branch_exec1_is_ret_i)) 
                                           | ((IData)(vlSelf->__PVT__pipe0_branch_e1_w) 
                                              & (IData)(vlSelf->__PVT__branch_exec0_is_ret_i)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__3(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__3\n"); );
    // Body
    vlSelf->__PVT__branch_pc_o = ((IData)(vlSelf->__PVT__branch_csr_request_i)
                                   ? vlSelf->__PVT__branch_csr_pc_i
                                   : vlSelf->__PVT__pc_x_q);
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__4(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__4\n"); );
    // Body
    vlSelf->__PVT__branch_priv_o = ((IData)(vlSelf->__PVT__branch_csr_request_i)
                                     ? (IData)(vlSelf->__PVT__branch_csr_priv_i)
                                     : (IData)(vlSelf->__PVT__priv_x_q));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__14(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__14\n"); );
    // Body
    vlSelf->__PVT__squash_w = ((IData)(vlSelf->__PVT__pipe0_squash_e1_e2_w) 
                               | (IData)(vlSelf->__PVT__pipe1_squash_e1_e2_w));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__21(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__21\n"); );
    // Body
    vlSelf->__PVT__mul_opcode_rb_operand_o = ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                               ? vlSelf->__PVT__opcode1_rb_operand_o
                                               : vlSelf->__PVT__opcode0_rb_operand_o);
    vlSelf->__PVT__lsu_opcode_rb_operand_o = ((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                               ? vlSelf->__PVT__opcode1_rb_operand_o
                                               : vlSelf->__PVT__opcode0_rb_operand_o);
    vlSelf->__PVT__mul_opcode_ra_operand_o = ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                               ? vlSelf->__PVT__opcode1_ra_operand_o
                                               : vlSelf->__PVT__opcode0_ra_operand_o);
    vlSelf->__PVT__lsu_opcode_ra_operand_o = ((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                               ? vlSelf->__PVT__opcode1_ra_operand_o
                                               : vlSelf->__PVT__opcode0_ra_operand_o);
}
