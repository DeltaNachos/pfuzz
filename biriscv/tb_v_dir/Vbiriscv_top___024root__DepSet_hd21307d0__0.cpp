// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top___024root.h"

void Vbiriscv_top___024root___eval_act(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_act\n"); );
}

void Vbiriscv_top___024root___eval_triggers__ico(Vbiriscv_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__ico(Vbiriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vbiriscv_top___024root___eval_ico(Vbiriscv_top___024root* vlSelf);
void Vbiriscv_top___024root___eval_triggers__act(Vbiriscv_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__act(Vbiriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__nba(Vbiriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vbiriscv_top___024root___eval_nba(Vbiriscv_top___024root* vlSelf);

void Vbiriscv_top___024root___eval(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    // Body
    vlSelf->__VicoIterCount = 0U;
    vlSelf->__VicoContinue = 1U;
    while (vlSelf->__VicoContinue) {
        vlSelf->__VicoContinue = 0U;
        Vbiriscv_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            vlSelf->__VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vbiriscv_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("biriscv_top.v", 6, "", "Input combinational region did not converge.");
            }
            __Vtemp_1 = ((IData)(1U) + vlSelf->__VicoIterCount);
            vlSelf->__VicoIterCount = __Vtemp_1;
            Vbiriscv_top___024root___eval_ico(vlSelf);
        }
    }
    vlSelf->__VnbaIterCount = 0U;
    vlSelf->__VnbaContinue = 1U;
    while (vlSelf->__VnbaContinue) {
        vlSelf->__VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vbiriscv_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vbiriscv_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("biriscv_top.v", 6, "", "Active region did not converge.");
                }
                __Vtemp_2 = ((IData)(1U) + vlSelf->__VactIterCount);
                vlSelf->__VactIterCount = __Vtemp_2;
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vbiriscv_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            vlSelf->__VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VnbaIterCount))) {
#ifdef VL_DEBUG
                Vbiriscv_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("biriscv_top.v", 6, "", "NBA region did not converge.");
            }
            __Vtemp_3 = ((IData)(1U) + vlSelf->__VnbaIterCount);
            vlSelf->__VnbaIterCount = __Vtemp_3;
            Vbiriscv_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vbiriscv_top___024root___eval_debug_assertions(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
