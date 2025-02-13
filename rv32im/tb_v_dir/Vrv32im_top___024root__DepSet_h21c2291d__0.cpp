// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top___024root.h"

void Vrv32im_top___024root___eval_act(Vrv32im_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32im_top___024root___eval_act\n"); );
}

void Vrv32im_top___024root___eval_triggers__ico(Vrv32im_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32im_top___024root___dump_triggers__ico(Vrv32im_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv32im_top___024root___eval_ico(Vrv32im_top___024root* vlSelf);
void Vrv32im_top___024root___eval_triggers__act(Vrv32im_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32im_top___024root___dump_triggers__act(Vrv32im_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32im_top___024root___dump_triggers__nba(Vrv32im_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv32im_top___024root___eval_nba(Vrv32im_top___024root* vlSelf);

void Vrv32im_top___024root___eval(Vrv32im_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32im_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    // Body
    vlSelf->__VicoIterCount = 0U;
    vlSelf->__VicoContinue = 1U;
    while (vlSelf->__VicoContinue) {
        vlSelf->__VicoContinue = 0U;
        Vrv32im_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            vlSelf->__VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vrv32im_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("rv32im_top.v", 4, "", "Input combinational region did not converge.");
            }
            __Vtemp_1 = ((IData)(1U) + vlSelf->__VicoIterCount);
            vlSelf->__VicoIterCount = __Vtemp_1;
            Vrv32im_top___024root___eval_ico(vlSelf);
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
            Vrv32im_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrv32im_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("rv32im_top.v", 4, "", "Active region did not converge.");
                }
                __Vtemp_2 = ((IData)(1U) + vlSelf->__VactIterCount);
                vlSelf->__VactIterCount = __Vtemp_2;
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vrv32im_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            vlSelf->__VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrv32im_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("rv32im_top.v", 4, "", "NBA region did not converge.");
            }
            __Vtemp_3 = ((IData)(1U) + vlSelf->__VnbaIterCount);
            vlSelf->__VnbaIterCount = __Vtemp_3;
            Vrv32im_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrv32im_top___024root___eval_debug_assertions(Vrv32im_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32im_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
