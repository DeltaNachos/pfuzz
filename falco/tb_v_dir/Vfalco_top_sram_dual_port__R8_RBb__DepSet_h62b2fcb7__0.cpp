// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_sram_dual_port__R8_RBb.h"

VL_INLINE_OPT void Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__0(Vfalco_top_sram_dual_port__R8_RBb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__RAM__v0 = 0U;
    vlSelfRef.__VdlySet__RAM__v1 = 0U;
}

VL_INLINE_OPT void Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__1(Vfalco_top_sram_dual_port__R8_RBb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_oA = vlSelfRef.__PVT__data_oA;
    if (((IData)(vlSelfRef.__PVT__en_A) & (IData)(vlSelfRef.__PVT__we_A))) {
        vlSelfRef.__VdlyVal__RAM__v0 = vlSelfRef.__PVT__data_iA;
        vlSelfRef.__VdlyDim0__RAM__v0 = vlSelfRef.__PVT__addr_A;
        vlSelfRef.__VdlySet__RAM__v0 = 1U;
    }
    vlSelfRef.__Vdly__data_oA = (((IData)(vlSelfRef.__PVT__en_A) 
                                  & (IData)(vlSelfRef.__PVT__we_A))
                                  ? (IData)(vlSelfRef.__PVT__data_iA)
                                  : vlSelfRef.__PVT__RAM
                                 [vlSelfRef.__PVT__addr_A]);
    vlSelfRef.__PVT__data_oA = vlSelfRef.__Vdly__data_oA;
}

VL_INLINE_OPT void Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__2(Vfalco_top_sram_dual_port__R8_RBb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_oB = vlSelfRef.__PVT__data_oB;
    if (((IData)(vlSelfRef.__PVT__en_B) & (IData)(vlSelfRef.__PVT__we_B))) {
        vlSelfRef.__VdlyVal__RAM__v1 = vlSelfRef.__PVT__data_iB;
        vlSelfRef.__VdlyDim0__RAM__v1 = vlSelfRef.__PVT__addr_B;
        vlSelfRef.__VdlySet__RAM__v1 = 1U;
    }
    vlSelfRef.__Vdly__data_oB = (((IData)(vlSelfRef.__PVT__en_B) 
                                  & (IData)(vlSelfRef.__PVT__we_B))
                                  ? (IData)(vlSelfRef.__PVT__data_iB)
                                  : vlSelfRef.__PVT__RAM
                                 [vlSelfRef.__PVT__addr_B]);
    vlSelfRef.__PVT__data_oB = vlSelfRef.__Vdly__data_oB;
}

VL_INLINE_OPT void Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__3(Vfalco_top_sram_dual_port__R8_RBb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_sram_dual_port__R8_RBb___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__store_set_id__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__RAM__v0) {
        vlSelfRef.__PVT__RAM[vlSelfRef.__VdlyDim0__RAM__v0] 
            = vlSelfRef.__VdlyVal__RAM__v0;
    }
    if (vlSelfRef.__VdlySet__RAM__v1) {
        vlSelfRef.__PVT__RAM[vlSelfRef.__VdlyDim0__RAM__v1] 
            = vlSelfRef.__VdlyVal__RAM__v1;
    }
}
