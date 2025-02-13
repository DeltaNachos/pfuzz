// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_divider.h"

VL_INLINE_OPT void Vrv32im_top_riscv_divider___nba_sequent__TOP__rv32im_top__core__u_div__0(Vrv32im_top_riscv_divider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_divider___nba_sequent__TOP__rv32im_top__core__u_div__0\n"); );
    // Body
    vlSelf->__Vdly__divisor_q = vlSelf->__PVT__divisor_q;
    vlSelf->__Vdly__q_mask_q = vlSelf->__PVT__q_mask_q;
    vlSelf->__Vdly__div_busy_q = vlSelf->__PVT__div_busy_q;
    vlSelf->__Vdly__quotient_q = vlSelf->__PVT__quotient_q;
    vlSelf->__Vdly__dividend_q = vlSelf->__PVT__dividend_q;
    vlSelf->__Vdly__wb_result_q = vlSelf->__PVT__wb_result_q;
    vlSelf->__Vdly__div_inst_q = vlSelf->__PVT__div_inst_q;
    vlSelf->__Vdly__invert_res_q = vlSelf->__PVT__invert_res_q;
    vlSelf->__Vdly__valid_q = vlSelf->__PVT__valid_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__wb_result_q = 0U;
    } else if (vlSelf->__PVT__div_complete_w) {
        vlSelf->__Vdly__wb_result_q = vlSelf->__PVT__div_result_r;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__div_busy_q = 0U;
        vlSelf->__Vdly__dividend_q = 0U;
        vlSelf->__Vdly__divisor_q = 0ULL;
        vlSelf->__Vdly__invert_res_q = 0U;
        vlSelf->__Vdly__quotient_q = 0U;
        vlSelf->__Vdly__q_mask_q = 0U;
        vlSelf->__Vdly__div_inst_q = 0U;
    } else if (vlSelf->__PVT__div_start_w) {
        vlSelf->__Vdly__div_busy_q = 1U;
        vlSelf->__Vdly__div_inst_q = vlSelf->__PVT__div_operation_w;
        vlSelf->__Vdly__dividend_q = (((IData)(vlSelf->__PVT__signed_operation_w) 
                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_ra_operand_i, 0x1fU))
                                       ? (- vlSelf->__PVT__opcode_ra_operand_i)
                                       : vlSelf->__PVT__opcode_ra_operand_i);
        vlSelf->__Vdly__divisor_q = (((IData)(vlSelf->__PVT__signed_operation_w) 
                                      & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0x1fU))
                                      ? VL_CONCAT_QII(63,32,31, 
                                                      (- vlSelf->__PVT__opcode_rb_operand_i), 0U)
                                      : VL_CONCAT_QII(63,32,31, vlSelf->__PVT__opcode_rb_operand_i, 0U));
        vlSelf->__Vdly__invert_res_q = ((((0x2004033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__PVT__opcode_opcode_i)) 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_ra_operand_i, 0x1fU)) 
                                             != (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0x1fU)))) 
                                         & VL_REDOR_I(vlSelf->__PVT__opcode_rb_operand_i)) 
                                        | ((0x2006033U 
                                            == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)) 
                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_ra_operand_i, 0x1fU)));
        vlSelf->__Vdly__quotient_q = 0U;
        vlSelf->__Vdly__q_mask_q = 0x80000000U;
    } else if (vlSelf->__PVT__div_complete_w) {
        vlSelf->__Vdly__div_busy_q = 0U;
    } else if (vlSelf->__PVT__div_busy_q) {
        if ((vlSelf->__PVT__divisor_q <= VL_EXTEND_QI(63,32, vlSelf->__PVT__dividend_q))) {
            vlSelf->__Vdly__dividend_q = (vlSelf->__PVT__dividend_q 
                                          - VL_SEL_IQII(63, vlSelf->__PVT__divisor_q, 0U, 0x20U));
            vlSelf->__Vdly__quotient_q = (vlSelf->__PVT__quotient_q 
                                          | vlSelf->__PVT__q_mask_q);
        }
        vlSelf->__Vdly__divisor_q = VL_EXTEND_QQ(63,62, 
                                                 (0x3fffffffffffffffULL 
                                                  & VL_SEL_QQII(63, vlSelf->__PVT__divisor_q, 1U, 0x3eU)));
        vlSelf->__Vdly__q_mask_q = VL_EXTEND_II(32,31, 
                                                (0x7fffffffU 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__q_mask_q, 1U, 0x1fU)));
    }
    vlSelf->__Vdly__valid_q = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                               & (IData)(vlSelf->__PVT__div_complete_w));
    vlSelf->__PVT__wb_result_q = vlSelf->__Vdly__wb_result_q;
    vlSelf->__PVT__divisor_q = vlSelf->__Vdly__divisor_q;
    vlSelf->__PVT__div_busy_q = vlSelf->__Vdly__div_busy_q;
    vlSelf->__PVT__q_mask_q = vlSelf->__Vdly__q_mask_q;
    vlSelf->__PVT__dividend_q = vlSelf->__Vdly__dividend_q;
    vlSelf->__PVT__invert_res_q = vlSelf->__Vdly__invert_res_q;
    vlSelf->__PVT__quotient_q = vlSelf->__Vdly__quotient_q;
    vlSelf->__PVT__div_inst_q = vlSelf->__Vdly__div_inst_q;
    vlSelf->__PVT__valid_q = vlSelf->__Vdly__valid_q;
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__wb_result_q;
    vlSelf->__PVT__div_complete_w = ((~ VL_REDOR_I(vlSelf->__PVT__q_mask_q)) 
                                     & (IData)(vlSelf->__PVT__div_busy_q));
    vlSelf->__PVT__div_result_r = 0U;
    vlSelf->__PVT__div_result_r = ((IData)(vlSelf->__PVT__div_inst_q)
                                    ? ((IData)(vlSelf->__PVT__invert_res_q)
                                        ? (- vlSelf->__PVT__quotient_q)
                                        : vlSelf->__PVT__quotient_q)
                                    : ((IData)(vlSelf->__PVT__invert_res_q)
                                        ? (- vlSelf->__PVT__dividend_q)
                                        : vlSelf->__PVT__dividend_q));
    vlSelf->__PVT__writeback_valid_o = vlSelf->__PVT__valid_q;
}

VL_INLINE_OPT void Vrv32im_top_riscv_divider___nba_sequent__TOP__rv32im_top__core__u_div__1(Vrv32im_top_riscv_divider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_divider___nba_sequent__TOP__rv32im_top__core__u_div__1\n"); );
    // Body
    vlSelf->__PVT__inst_div_w = (0x2004033U == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__inst_divu_w = (0x2005033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__inst_rem_w = (0x2006033U == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__inst_remu_w = (0x2007033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__signed_operation_w = ((0x2004033U 
                                          == (0xfe00707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)) 
                                         | (0x2006033U 
                                            == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__div_operation_w = ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_opcode_i)) 
                                      | (0x2005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__div_rem_inst_w = ((((0x2004033U 
                                        == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)) 
                                       | (0x2005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->__PVT__opcode_opcode_i))) 
                                      | (0x2006033U 
                                         == (0xfe00707fU 
                                             & vlSelf->__PVT__opcode_opcode_i))) 
                                     | (0x2007033U 
                                        == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)));
}

VL_INLINE_OPT void Vrv32im_top_riscv_divider___nba_comb__TOP__rv32im_top__core__u_div__0(Vrv32im_top_riscv_divider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_divider___nba_comb__TOP__rv32im_top__core__u_div__0\n"); );
    // Body
    vlSelf->__PVT__div_start_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                  & (IData)(vlSelf->__PVT__div_rem_inst_w));
}
