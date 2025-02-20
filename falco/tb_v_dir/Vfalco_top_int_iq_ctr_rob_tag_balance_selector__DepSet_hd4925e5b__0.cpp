// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_int_iq_ctr_rob_tag_balance_selector.h"

VL_INLINE_OPT void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___ico_sequent__TOP__falco_top__core__INT_IQ__INT_selector__1(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___ico_sequent__TOP__falco_top__core__INT_IQ__INT_selector__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__muldiv_issuable = ((0U == (IData)(vlSelfRef.__PVT__issue_muldiv_counter)) 
                                        & (~ (IData)(vlSelfRef.__PVT__muldiv_busy)));
}

VL_INLINE_OPT void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___nba_comb__TOP__falco_top__core__INT_IQ__INT_selector__0(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___nba_comb__TOP__falco_top__core__INT_IQ__INT_selector__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__muldiv_issuable = ((0U == (IData)(vlSelfRef.__PVT__issue_muldiv_counter)) 
                                        & (~ (IData)(vlSelfRef.__PVT__muldiv_busy)));
}

VL_INLINE_OPT void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___nba_comb__TOP__falco_top__core__INT_IQ__INT_selector__2(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___nba_comb__TOP__falco_top__core__INT_IQ__INT_selector__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_lock = ((((IData)(vlSelfRef.__PVT__branch_miss_flush) 
                                     | (IData)(vlSelfRef.__PVT__load_wake_up_kill)) 
                                    | (IData)(vlSelfRef.__PVT__issue_replay)) 
                                   | ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                      & (IData)(vlSelfRef.__PVT__replay_issue_first)));
}

VL_INLINE_OPT void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___nba_comb__TOP__falco_top__core__INT_IQ__INT_selector__4(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___nba_comb__TOP__falco_top__core__INT_IQ__INT_selector__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__PVT__issue_slot_idx0 = 0U;
        vlSelfRef.__PVT__issue_slot_idx1 = 0U;
        vlSelfRef.__PVT__issue_slot_idx0_valid = 0U;
        vlSelfRef.__PVT__issue_slot_idx1_valid = 0U;
    } else {
        vlSelfRef.__PVT__issue_slot_idx0 = ((IData)(vlSelfRef.__PVT__issue_control_op_slot_valid)
                                             ? (IData)(vlSelfRef.__PVT__issue_control_op_slot)
                                             : (IData)(vlSelfRef.__PVT__issue_alu_op_slot_idx0));
        vlSelfRef.__PVT__issue_slot_idx1 = (((IData)(vlSelfRef.__PVT__issue_muldiv_op_slot_valid) 
                                             & (IData)(vlSelfRef.__PVT__muldiv_issuable))
                                             ? (IData)(vlSelfRef.__PVT__issue_muldiv_op_slot)
                                             : ((IData)(vlSelfRef.__PVT__issue_control_op_slot_valid)
                                                 ? (IData)(vlSelfRef.__PVT__issue_alu_op_slot_idx0)
                                                 : (IData)(vlSelfRef.__PVT__issue_alu_op_slot_idx1)));
        vlSelfRef.__PVT__issue_slot_idx0_valid = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__issue_lock))) 
                                                  && ((IData)(vlSelfRef.__PVT__issue_control_op_slot_valid)
                                                       ? 1U
                                                       : 
                                                      VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__issue_alu_op_slot_idx0_valid))));
        vlSelfRef.__PVT__issue_slot_idx1_valid = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__issue_lock))) 
                                                  && (((IData)(vlSelfRef.__PVT__issue_muldiv_op_slot_valid) 
                                                       & (IData)(vlSelfRef.__PVT__muldiv_issuable))
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__issue_control_op_slot_valid)
                                                        ? 
                                                       VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__issue_alu_op_slot_idx0_valid))
                                                        : 
                                                       VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__issue_alu_op_slot_idx1_valid)))));
    }
}
