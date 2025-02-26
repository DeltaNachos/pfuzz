// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core__Syms.h"
#include "Vpicorv32core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32core___024root___dump_triggers__ico(Vpicorv32core___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32core___024root___eval_triggers__ico(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32core___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vpicorv32core___024root___ico_sequent__TOP__0(Vpicorv32core___024root* vlSelf);
void Vpicorv32core_picorv32core___ico_sequent__TOP__picorv32core__0(Vpicorv32core_picorv32core* vlSelf);
void Vpicorv32core_picorv32___ico_sequent__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf);

void Vpicorv32core___024root___eval_ico(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32core___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vpicorv32core_picorv32core___ico_sequent__TOP__picorv32core__0((&vlSymsp->TOP__picorv32core));
        Vpicorv32core_picorv32___ico_sequent__TOP__picorv32core__picorv32_core__0((&vlSymsp->TOP__picorv32core__picorv32_core));
    }
}

VL_INLINE_OPT void Vpicorv32core___024root___ico_sequent__TOP__0(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__picorv32core.rst = vlSelfRef.rst;
    vlSymsp->TOP__picorv32core.clk = vlSelfRef.clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32core___024root___dump_triggers__act(Vpicorv32core___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32core___024root___eval_triggers__act(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__picorv32core.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__memory_modelling_inst____PVT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__picorv32_core____PVT__clk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__picorv32_core__cpuregs____PVT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__clk__0 
        = vlSymsp->TOP__picorv32core.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__picorv32_core____PVT__clk__0 
        = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__picorv32_core__cpuregs____PVT__clk__0 
        = vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vpicorv32core_picorv32_regs___nba_sequent__TOP__picorv32core__picorv32_core__cpuregs__0(Vpicorv32core_picorv32_regs* vlSelf);
void Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf);
void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__0(Vpicorv32core_picorv32core* vlSelf);
void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__1(Vpicorv32core_picorv32core* vlSelf);
void Vpicorv32core_memory_modelling___nba_sequent__TOP__picorv32core__memory_modelling_inst__0(Vpicorv32core_memory_modelling* vlSelf);
void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__2(Vpicorv32core_picorv32core* vlSelf);
void Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__1(Vpicorv32core_picorv32* vlSelf);
void Vpicorv32core_picorv32_regs___nba_comb__TOP__picorv32core__picorv32_core__cpuregs__0(Vpicorv32core_picorv32_regs* vlSelf);
void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf);
void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__1(Vpicorv32core_picorv32* vlSelf);
void Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__0(Vpicorv32core_picorv32core* vlSelf);
void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__3(Vpicorv32core_picorv32core* vlSelf);
void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__2(Vpicorv32core_picorv32* vlSelf);
void Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__1(Vpicorv32core_picorv32core* vlSelf);
void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__3(Vpicorv32core_picorv32* vlSelf);

void Vpicorv32core___024root___eval_nba(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32_regs___nba_sequent__TOP__picorv32core__picorv32_core__cpuregs__0((&vlSymsp->TOP__picorv32core__picorv32_core__cpuregs));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__0((&vlSymsp->TOP__picorv32core__picorv32_core));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__0((&vlSymsp->TOP__picorv32core));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__1((&vlSymsp->TOP__picorv32core));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_memory_modelling___nba_sequent__TOP__picorv32core__memory_modelling_inst__0((&vlSymsp->TOP__picorv32core__memory_modelling_inst));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__2((&vlSymsp->TOP__picorv32core));
        Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__1((&vlSymsp->TOP__picorv32core__picorv32_core));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32_regs___nba_comb__TOP__picorv32core__picorv32_core__cpuregs__0((&vlSymsp->TOP__picorv32core__picorv32_core__cpuregs));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__0((&vlSymsp->TOP__picorv32core__picorv32_core));
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__1((&vlSymsp->TOP__picorv32core__picorv32_core));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__0((&vlSymsp->TOP__picorv32core));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__3((&vlSymsp->TOP__picorv32core));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__2((&vlSymsp->TOP__picorv32core__picorv32_core));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__1((&vlSymsp->TOP__picorv32core));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__3((&vlSymsp->TOP__picorv32core__picorv32_core));
    }
}
