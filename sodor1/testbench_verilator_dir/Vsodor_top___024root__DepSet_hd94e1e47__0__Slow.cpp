// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top___024root.h"

VL_ATTR_COLD void Vsodor_top___024root___eval_static(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsodor_top___024root___eval_final(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsodor_top___024root___eval_triggers__stl(Vsodor_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__stl(Vsodor_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___eval_stl(Vsodor_top___024root* vlSelf);

VL_ATTR_COLD void Vsodor_top___024root___eval_settle(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__VstlIterCount = 0U;
    vlSelf->__VstlContinue = 1U;
    while (vlSelf->__VstlContinue) {
        vlSelf->__VstlContinue = 0U;
        Vsodor_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            vlSelf->__VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsodor_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("sodor_top.v", 3, "", "Settle region did not converge.");
            }
            __Vtemp_1 = ((IData)(1U) + vlSelf->__VstlIterCount);
            vlSelf->__VstlIterCount = __Vtemp_1;
            Vsodor_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__stl(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__ico(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__act(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sodor_top.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge sodor_top.memory_modelling_inst.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge sodor_top.sodor_core.d.clock)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge sodor_top.sodor_core.d.csr.clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__nba(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sodor_top.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge sodor_top.memory_modelling_inst.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge sodor_top.sodor_core.d.clock)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge sodor_top.sodor_core.d.csr.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsodor_top___024root___ctor_var_reset(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__memory_modelling_inst____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d____PVT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d__csr____PVT__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
