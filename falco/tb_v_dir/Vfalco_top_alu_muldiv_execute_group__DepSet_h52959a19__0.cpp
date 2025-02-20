// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_alu_muldiv_execute_group.h"

VL_INLINE_OPT void Vfalco_top_alu_muldiv_execute_group___ico_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__0(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___ico_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.muldiv_ready = ((IData)(vlSelfRef.div_ready) 
                              & (IData)(vlSelfRef.mul_ready));
}

VL_INLINE_OPT void Vfalco_top_alu_muldiv_execute_group___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__0(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__muldiv_result_valid = ((IData)(vlSelfRef.__PVT__mul_result_valid) 
                                            | (IData)(vlSelfRef.__PVT__div_result_valid));
    vlSelfRef.__PVT__muldiv_BCAST_valid = ((IData)(vlSelfRef.__PVT__mul_early_wake_up) 
                                           | (IData)(vlSelfRef.__PVT__div_result_valid));
    vlSelfRef.muldiv_ready = ((IData)(vlSelfRef.div_ready) 
                              & (IData)(vlSelfRef.mul_ready));
    vlSelfRef.__PVT__muldiv_result = ((IData)(vlSelfRef.__PVT__mul_result_valid)
                                       ? vlSelfRef.__PVT__mul_result
                                       : vlSelfRef.__PVT__div_result);
}
