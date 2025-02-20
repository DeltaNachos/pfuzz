// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_mem_iq_balance_selector_wo_store.h"

VL_INLINE_OPT void Vfalco_top_mem_iq_balance_selector_wo_store___ico_sequent__TOP__falco_top__core__MEM_IQ__selector__0(Vfalco_top_mem_iq_balance_selector_wo_store* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_iq_balance_selector_wo_store___ico_sequent__TOP__falco_top__core__MEM_IQ__selector__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[0U] 
        = vlSelfRef.__PVT__issue_ready[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[1U] 
        = vlSelfRef.__PVT__issue_ready[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[2U] 
        = vlSelfRef.__PVT__issue_ready[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[3U] 
        = vlSelfRef.__PVT__issue_ready[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[4U] 
        = vlSelfRef.__PVT__issue_ready[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[5U] 
        = vlSelfRef.__PVT__issue_ready[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[6U] 
        = vlSelfRef.__PVT__issue_ready[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[7U] 
        = vlSelfRef.__PVT__issue_ready[7U];
}

VL_INLINE_OPT void Vfalco_top_mem_iq_balance_selector_wo_store___ico_sequent__TOP__falco_top__core__MEM_IQ__selector__1(Vfalco_top_mem_iq_balance_selector_wo_store* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_iq_balance_selector_wo_store___ico_sequent__TOP__falco_top__core__MEM_IQ__selector__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx = vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__out_id;
    vlSelfRef.__PVT__issue_slot_idx_pre_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__out_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_iq_balance_selector_wo_store___nba_sequent__TOP__falco_top__core__MEM_IQ__selector__0(Vfalco_top_mem_iq_balance_selector_wo_store* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_iq_balance_selector_wo_store___nba_sequent__TOP__falco_top__core__MEM_IQ__selector__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[0U] 
        = vlSelfRef.__PVT__issue_ready[0U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[1U] 
        = vlSelfRef.__PVT__issue_ready[1U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[2U] 
        = vlSelfRef.__PVT__issue_ready[2U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[3U] 
        = vlSelfRef.__PVT__issue_ready[3U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[4U] 
        = vlSelfRef.__PVT__issue_ready[4U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[5U] 
        = vlSelfRef.__PVT__issue_ready[5U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[6U] 
        = vlSelfRef.__PVT__issue_ready[6U];
    vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__in_valid[7U] 
        = vlSelfRef.__PVT__issue_ready[7U];
}

VL_INLINE_OPT void Vfalco_top_mem_iq_balance_selector_wo_store___nba_sequent__TOP__falco_top__core__MEM_IQ__selector__1(Vfalco_top_mem_iq_balance_selector_wo_store* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_iq_balance_selector_wo_store___nba_sequent__TOP__falco_top__core__MEM_IQ__selector__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx = vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__out_id;
    vlSelfRef.__PVT__issue_slot_idx_pre_valid = vlSymsp->TOP__falco_top__core__MEM_IQ__selector__mem_picker.__PVT__out_valid;
}
