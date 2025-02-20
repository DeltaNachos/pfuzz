// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top___024root.h"

void Vfalco_top___024root___eval_triggers__ico(Vfalco_top___024root* vlSelf);
void Vfalco_top___024root___eval_ico(Vfalco_top___024root* vlSelf);

bool Vfalco_top___024root___eval_phase__ico(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfalco_top___024root___eval_triggers__ico(vlSelf);
    vlSelfRef.__VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (vlSelfRef.__VicoExecute) {
        Vfalco_top___024root___eval_ico(vlSelf);
    }
    return (vlSelfRef.__VicoExecute);
}

void Vfalco_top___024root___eval_triggers__act(Vfalco_top___024root* vlSelf);
void Vfalco_top___024root___eval_act(Vfalco_top___024root* vlSelf);

bool Vfalco_top___024root___eval_phase__act(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfalco_top___024root___eval_triggers__act(vlSelf);
    vlSelfRef.__VactExecute = vlSelfRef.__VactTriggered.any();
    if (vlSelfRef.__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfalco_top___024root___eval_act(vlSelf);
    }
    return (vlSelfRef.__VactExecute);
}

void Vfalco_top___024root___eval_nba(Vfalco_top___024root* vlSelf);

bool Vfalco_top___024root___eval_phase__nba(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (vlSelfRef.__VnbaExecute) {
        Vfalco_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (vlSelfRef.__VnbaExecute);
}

#ifdef VL_DEBUG
void Vfalco_top___024root___eval_debug_assertions(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
