// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_csr_io.h"

VL_INLINE_OPT void Vfalco_top_csr_io___nba_sequent__TOP__falco_top__core__csr_io_inst__0(Vfalco_top_csr_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_csr_io___nba_sequent__TOP__falco_top__core__csr_io_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__csr_we_i = vlSelfRef.__PVT__csr_we_i;
    vlSelfRef.__Vdly__csr_waddr_i = vlSelfRef.__PVT__csr_waddr_i;
    vlSelfRef.__Vdly__csr_wdata_i = vlSelfRef.__PVT__csr_wdata_i;
}

VL_INLINE_OPT void Vfalco_top_csr_io___nba_sequent__TOP__falco_top__core__csr_io_inst__1(Vfalco_top_csr_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_csr_io___nba_sequent__TOP__falco_top__core__csr_io_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_we_i = vlSelfRef.__Vdly__csr_we_i;
    vlSelfRef.__PVT__csr_waddr_i = vlSelfRef.__Vdly__csr_waddr_i;
    vlSelfRef.__PVT__csr_wdata_i = vlSelfRef.__Vdly__csr_wdata_i;
}

std::string VL_TO_STRING(const Vfalco_top_csr_io* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_csr_io::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
