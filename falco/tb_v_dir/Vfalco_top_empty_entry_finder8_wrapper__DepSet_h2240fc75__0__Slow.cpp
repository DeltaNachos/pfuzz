// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_empty_entry_finder8_wrapper.h"

VL_ATTR_COLD void Vfalco_top_empty_entry_finder8_wrapper___eval_initial__TOP__falco_top__core__INT_IQ__empty_entry_finder(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___eval_initial__TOP__falco_top__core__INT_IQ__empty_entry_finder\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__entry_id[0U] = 0U;
    vlSelfRef.__PVT__entry_id[1U] = 1U;
    vlSelfRef.__PVT__entry_id[2U] = 2U;
    vlSelfRef.__PVT__entry_id[3U] = 3U;
    vlSelfRef.__PVT__entry_id[4U] = 4U;
    vlSelfRef.__PVT__entry_id[5U] = 5U;
    vlSelfRef.__PVT__entry_id[6U] = 6U;
    vlSelfRef.__PVT__entry_id[7U] = 7U;
}

VL_ATTR_COLD void Vfalco_top_empty_entry_finder8_wrapper___eval_initial__TOP__falco_top__core__MEM_IQ__empty_entry_finder(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___eval_initial__TOP__falco_top__core__MEM_IQ__empty_entry_finder\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__entry_id[0U] = 0U;
    vlSelfRef.__PVT__entry_id[1U] = 1U;
    vlSelfRef.__PVT__entry_id[2U] = 2U;
    vlSelfRef.__PVT__entry_id[3U] = 3U;
    vlSelfRef.__PVT__entry_id[4U] = 4U;
    vlSelfRef.__PVT__entry_id[5U] = 5U;
    vlSelfRef.__PVT__entry_id[6U] = 6U;
    vlSelfRef.__PVT__entry_id[7U] = 7U;
}

VL_ATTR_COLD void Vfalco_top_empty_entry_finder8_wrapper___ctor_var_reset(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__dispatch_slot_idx0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dispatch_slot_idx1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dispatch_slot_idx0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dispatch_slot_idx1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__slot_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__allocatable_slot_idx0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__allocatable_slot_idx1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__allocatable_slot_idx0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__allocatable_slot_idx1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__allocate_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__entry_id[__Vi0] = VL_RAND_RESET_I(3);
    }
}
