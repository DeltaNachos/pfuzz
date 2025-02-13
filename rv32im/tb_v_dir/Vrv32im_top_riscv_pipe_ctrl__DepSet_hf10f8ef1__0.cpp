// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_pipe_ctrl.h"

VL_INLINE_OPT void Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__0(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__0\n"); );
    // Body
    vlSelf->__PVT__stall_o = (1U & ((VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 4U) 
                                     & (~ (IData)(vlSelf->__PVT__div_complete_i))) 
                                    | ((VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                        | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)) 
                                       & (~ (IData)(vlSelf->__PVT__mem_complete_i)))));
}

VL_INLINE_OPT void Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__2(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__2\n"); );
    // Body
    vlSelf->__PVT__exception_e2_r = ((((IData)(vlSelf->__PVT__valid_e2_q) 
                                       & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                          | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U))) 
                                      & (IData)(vlSelf->__PVT__mem_complete_i))
                                      ? (IData)(vlSelf->__PVT__mem_exception_e2_i)
                                      : (IData)(vlSelf->__PVT__exception_e2_q));
    vlSelf->__PVT__squash_e1_e2_w = VL_REDOR_I((IData)(vlSelf->__PVT__exception_e2_r));
    vlSelf->__PVT__squash_e1_e2_o = ((IData)(vlSelf->__PVT__squash_e1_e2_w) 
                                     | (IData)(vlSelf->__PVT__squash_e1_e2_q));
}

VL_INLINE_OPT void Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__3(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__3\n"); );
    // Body
    vlSelf->__PVT__result_e2_r = vlSelf->__PVT__result_e2_q;
    if (((IData)(vlSelf->__PVT__valid_e2_w) & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                               | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)))) {
        vlSelf->__PVT__result_e2_r = vlSelf->__PVT__mem_result_e2_i;
    } else if (((IData)(vlSelf->__PVT__valid_e2_w) 
                & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 5U))) {
        vlSelf->__PVT__result_e2_r = vlSelf->__PVT__mul_result_e2_i;
    }
    vlSelf->__PVT__result_e2_o = vlSelf->__PVT__result_e2_r;
}

VL_INLINE_OPT void Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__5(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___nba_comb__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__5\n"); );
    // Body
    vlSelf->__PVT__branch_misaligned_w = ((IData)(vlSelf->__PVT__issue_branch_taken_i) 
                                          & (0U != 
                                             (3U & 
                                              VL_SEL_IIII(32, vlSelf->__PVT__issue_branch_target_i, 0U, 2U))));
}
