// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_store_buffer.h"

VL_INLINE_OPT void Vfalco_top_store_buffer___act_sequent__TOP__falco_top__core__SDB__0(Vfalco_top_store_buffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_store_buffer___act_sequent__TOP__falco_top__core__SDB__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__store_pop = (1U & (VL_BITSEL_IWII(69, vlSelfRef.__PVT__store_req, 0x44U) 
                                        & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__store_resp), 1U)));
}
