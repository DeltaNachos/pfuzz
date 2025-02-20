// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_mem_iq_balance_selector_wo_store.h"

VL_ATTR_COLD void Vfalco_top_mem_iq_balance_selector_wo_store___stl_comb__TOP__falco_top__core__MEM_IQ__selector__0(Vfalco_top_mem_iq_balance_selector_wo_store* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_iq_balance_selector_wo_store___stl_comb__TOP__falco_top__core__MEM_IQ__selector__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_slot_idx_valid = ((1U & 
                                              (~ (IData)(vlSelfRef.__PVT__rst))) 
                                             && (1U 
                                                 & VL_BITSEL_IIII(32, 
                                                                  ((IData)(vlSelfRef.__PVT__issue_lock)
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__issue_slot_idx_pre_valid))), 0U)));
}

VL_ATTR_COLD void Vfalco_top_mem_iq_balance_selector_wo_store___ctor_var_reset(Vfalco_top_mem_iq_balance_selector_wo_store* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_iq_balance_selector_wo_store___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__issue_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__issue_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_slot_idx = VL_RAND_RESET_I(3);
    vlSelf->__PVT__issue_slot_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_slot_idx_pre_valid = VL_RAND_RESET_I(1);
}
