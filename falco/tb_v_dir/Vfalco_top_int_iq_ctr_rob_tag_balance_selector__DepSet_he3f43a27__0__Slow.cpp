// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_int_iq_ctr_rob_tag_balance_selector.h"

VL_ATTR_COLD void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___stl_sequent__TOP__falco_top__core__INT_IQ__INT_selector__0(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___stl_sequent__TOP__falco_top__core__INT_IQ__INT_selector__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[0U] 
        = vlSelfRef.age_counter[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[1U] 
        = vlSelfRef.age_counter[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[2U] 
        = vlSelfRef.age_counter[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[3U] 
        = vlSelfRef.age_counter[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[4U] 
        = vlSelfRef.age_counter[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[5U] 
        = vlSelfRef.age_counter[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[6U] 
        = vlSelfRef.age_counter[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_age[7U] 
        = vlSelfRef.age_counter[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[0U] 
        = vlSelfRef.age_counter[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[1U] 
        = vlSelfRef.age_counter[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[2U] 
        = vlSelfRef.age_counter[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[3U] 
        = vlSelfRef.age_counter[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[4U] 
        = vlSelfRef.age_counter[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[5U] 
        = vlSelfRef.age_counter[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[6U] 
        = vlSelfRef.age_counter[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_age[7U] 
        = vlSelfRef.age_counter[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[0U] 
        = vlSelfRef.age_counter[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[1U] 
        = vlSelfRef.age_counter[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[2U] 
        = vlSelfRef.age_counter[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[3U] 
        = vlSelfRef.age_counter[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[4U] 
        = vlSelfRef.age_counter[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[5U] 
        = vlSelfRef.age_counter[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[6U] 
        = vlSelfRef.age_counter[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_age[7U] 
        = vlSelfRef.age_counter[7U];
    vlSelfRef.__PVT__muldiv_issuable = ((0U == (IData)(vlSelfRef.__PVT__issue_muldiv_counter)) 
                                        & (~ (IData)(vlSelfRef.__PVT__muldiv_busy)));
}

VL_ATTR_COLD void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__0(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__entry_muldiv_valid[0U] = (((vlSelfRef.__PVT__entry_valid
                                                 [0U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [0U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [0U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [0U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
    vlSelfRef.__PVT__entry_muldiv_valid[1U] = (((vlSelfRef.__PVT__entry_valid
                                                 [1U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [1U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [1U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [1U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
    vlSelfRef.__PVT__entry_muldiv_valid[2U] = (((vlSelfRef.__PVT__entry_valid
                                                 [2U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [2U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [2U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [2U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
    vlSelfRef.__PVT__entry_muldiv_valid[3U] = (((vlSelfRef.__PVT__entry_valid
                                                 [3U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [3U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [3U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [3U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.__PVT__entry_muldiv_valid[4U] = (((vlSelfRef.__PVT__entry_valid
                                                 [4U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [4U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [4U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [4U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
    vlSelfRef.__PVT__entry_muldiv_valid[5U] = (((vlSelfRef.__PVT__entry_valid
                                                 [5U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [5U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [5U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [5U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 6U;
    vlSelfRef.__PVT__entry_muldiv_valid[6U] = (((vlSelfRef.__PVT__entry_valid
                                                 [6U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [6U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [6U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [6U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 7U;
    vlSelfRef.__PVT__entry_muldiv_valid[7U] = (((vlSelfRef.__PVT__entry_valid
                                                 [7U] 
                                                 & vlSelfRef.__PVT__entry_ready
                                                 [7U]) 
                                                & vlSelfRef.__PVT__entry_is_muldiv
                                                [7U]) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [7U]))));
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 8U;
    vlSelfRef.__PVT__entry_ctrl_valid[0U] = (((vlSelfRef.__PVT__entry_valid
                                               [0U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [0U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [0U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [0U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [0U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 1U;
    vlSelfRef.__PVT__entry_ctrl_valid[1U] = (((vlSelfRef.__PVT__entry_valid
                                               [1U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [1U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [1U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [1U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [1U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 2U;
    vlSelfRef.__PVT__entry_ctrl_valid[2U] = (((vlSelfRef.__PVT__entry_valid
                                               [2U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [2U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [2U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [2U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [2U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 3U;
    vlSelfRef.__PVT__entry_ctrl_valid[3U] = (((vlSelfRef.__PVT__entry_valid
                                               [3U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [3U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [3U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [3U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [3U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.__PVT__entry_ctrl_valid[4U] = (((vlSelfRef.__PVT__entry_valid
                                               [4U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [4U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [4U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [4U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [4U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 5U;
    vlSelfRef.__PVT__entry_ctrl_valid[5U] = (((vlSelfRef.__PVT__entry_valid
                                               [5U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [5U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [5U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [5U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [5U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 6U;
    vlSelfRef.__PVT__entry_ctrl_valid[6U] = (((vlSelfRef.__PVT__entry_valid
                                               [6U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [6U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [6U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [6U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [6U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 7U;
    vlSelfRef.__PVT__entry_ctrl_valid[7U] = (((vlSelfRef.__PVT__entry_valid
                                               [7U] 
                                               & vlSelfRef.__PVT__entry_ready
                                               [7U]) 
                                              & (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                 [7U] 
                                                 | vlSelfRef.__PVT__entry_is_csr_instr
                                                 [7U])) 
                                             & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                   & (~ 
                                                      vlSelfRef.__PVT__entry_is_critical
                                                      [7U]))));
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 8U;
    vlSelfRef.__PVT__entry_alu_valid[0U] = (((vlSelfRef.__PVT__entry_valid
                                              [0U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [0U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [0U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [0U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [0U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [0U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.__PVT__entry_alu_valid[1U] = (((vlSelfRef.__PVT__entry_valid
                                              [1U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [1U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [1U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [1U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [1U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [1U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.__PVT__entry_alu_valid[2U] = (((vlSelfRef.__PVT__entry_valid
                                              [2U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [2U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [2U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [2U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [2U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [2U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.__PVT__entry_alu_valid[3U] = (((vlSelfRef.__PVT__entry_valid
                                              [3U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [3U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [3U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [3U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [3U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [3U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.__PVT__entry_alu_valid[4U] = (((vlSelfRef.__PVT__entry_valid
                                              [4U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [4U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [4U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [4U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [4U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [4U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    vlSelfRef.__PVT__entry_alu_valid[5U] = (((vlSelfRef.__PVT__entry_valid
                                              [5U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [5U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [5U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [5U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [5U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [5U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    vlSelfRef.__PVT__entry_alu_valid[6U] = (((vlSelfRef.__PVT__entry_valid
                                              [6U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [6U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [6U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [6U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [6U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [6U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    vlSelfRef.__PVT__entry_alu_valid[7U] = (((vlSelfRef.__PVT__entry_valid
                                              [7U] 
                                              & vlSelfRef.__PVT__entry_ready
                                              [7U]) 
                                             & (~ (
                                                   (vlSelfRef.__PVT__entry_is_ctrl_instr
                                                    [7U] 
                                                    | vlSelfRef.__PVT__entry_is_csr_instr
                                                    [7U]) 
                                                   | vlSelfRef.__PVT__entry_is_muldiv
                                                   [7U]))) 
                                            & (~ ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                                  & (~ 
                                                     vlSelfRef.__PVT__entry_is_critical
                                                     [7U]))));
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    vlSelfRef.__PVT__issue_lock = ((((IData)(vlSelfRef.__PVT__branch_miss_flush) 
                                     | (IData)(vlSelfRef.__PVT__load_wake_up_kill)) 
                                    | (IData)(vlSelfRef.__PVT__issue_replay)) 
                                   | ((IData)(vlSelfRef.__PVT__non_posion_issue) 
                                      & (IData)(vlSelfRef.__PVT__replay_issue_first)));
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[0U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[1U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[2U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[3U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[4U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[5U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[6U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__in_valid[7U] 
        = vlSelfRef.__PVT__entry_muldiv_valid[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[0U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[1U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[2U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[3U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[4U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[5U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[6U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__in_valid[7U] 
        = vlSelfRef.__PVT__entry_ctrl_valid[7U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[0U] 
        = vlSelfRef.__PVT__entry_alu_valid[0U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[1U] 
        = vlSelfRef.__PVT__entry_alu_valid[1U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[2U] 
        = vlSelfRef.__PVT__entry_alu_valid[2U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[3U] 
        = vlSelfRef.__PVT__entry_alu_valid[3U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[4U] 
        = vlSelfRef.__PVT__entry_alu_valid[4U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[5U] 
        = vlSelfRef.__PVT__entry_alu_valid[5U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[6U] 
        = vlSelfRef.__PVT__entry_alu_valid[6U];
    vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__in_valid[7U] 
        = vlSelfRef.__PVT__entry_alu_valid[7U];
}

VL_ATTR_COLD void Vfalco_top_int_iq_ctr_rob_tag_balance_selector___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__1(Vfalco_top_int_iq_ctr_rob_tag_balance_selector* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_iq_ctr_rob_tag_balance_selector___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_muldiv_op_slot_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__out_valid;
    vlSelfRef.__PVT__issue_muldiv_op_slot = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker.__PVT__out_id;
    vlSelfRef.__PVT__issue_control_op_slot_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__out_valid;
    vlSelfRef.__PVT__issue_control_op_slot = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__control_picker.__PVT__out_id;
    vlSelfRef.__PVT__issue_alu_op_slot_idx0_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__out_valid_0;
    vlSelfRef.__PVT__issue_alu_op_slot_idx0 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__out_id_0;
    vlSelfRef.__PVT__issue_alu_op_slot_idx1_valid = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__out_valid_1;
    vlSelfRef.__PVT__issue_alu_op_slot_idx1 = vlSymsp->TOP__falco_top__core__INT_IQ__INT_selector__alu_picker.__PVT__out_id_1;
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
