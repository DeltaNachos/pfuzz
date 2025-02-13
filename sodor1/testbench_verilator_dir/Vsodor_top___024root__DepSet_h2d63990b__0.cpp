// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top__Syms.h"
#include "Vsodor_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__ico(Vsodor_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsodor_top___024root___eval_triggers__ico(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsodor_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vsodor_top___024root___ico_sequent__TOP__0(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__sodor_top.rst = vlSelf->rst;
    vlSymsp->TOP__sodor_top.clk = vlSelf->clk;
}

void Vsodor_top_sodor_top___ico_sequent__TOP__sodor_top__0(Vsodor_top_sodor_top* vlSelf);
void Vsodor_top_Core___ico_sequent__TOP__sodor_top__sodor_core__0(Vsodor_top_Core* vlSelf);
void Vsodor_top_DatPath___ico_sequent__TOP__sodor_top__sodor_core__d__0(Vsodor_top_DatPath* vlSelf);

void Vsodor_top___024root___eval_ico(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsodor_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vsodor_top_sodor_top___ico_sequent__TOP__sodor_top__0((&vlSymsp->TOP__sodor_top));
        Vsodor_top_Core___ico_sequent__TOP__sodor_top__sodor_core__0((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_DatPath___ico_sequent__TOP__sodor_top__sodor_core__d__0((&vlSymsp->TOP__sodor_top__sodor_core__d));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__act(Vsodor_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsodor_top___024root___eval_triggers__act(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__sodor_top.clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sodor_top__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sodor_top__memory_modelling_inst____PVT__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d____PVT__clock__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d__csr____PVT__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__clk__0 
        = vlSymsp->TOP__sodor_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d____PVT__clock__0 
        = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__clock;
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d__csr____PVT__clock__0 
        = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsodor_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__0(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__0(Vsodor_top_Core* vlSelf);
void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__0(Vsodor_top_sodor_top* vlSelf);
void Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__0(Vsodor_top_CSRFile* vlSelf);
void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__1(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__1(Vsodor_top_sodor_top* vlSelf);
void Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__1(Vsodor_top_Core* vlSelf);
void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__2(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_sodor_mem_model___nba_sequent__TOP__sodor_top__memory_modelling_inst__0(Vsodor_top_sodor_mem_model* vlSelf);
void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__2(Vsodor_top_sodor_top* vlSelf);
void Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__2(Vsodor_top_Core* vlSelf);
void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__3(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__3(Vsodor_top_Core* vlSelf);
void Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__1(Vsodor_top_CSRFile* vlSelf);
void Vsodor_top_CtlPath___nba_sequent__TOP__sodor_top__sodor_core__c__0(Vsodor_top_CtlPath* vlSelf);
void Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__4(Vsodor_top_Core* vlSelf);
void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__3(Vsodor_top_sodor_top* vlSelf);
void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__4(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__2(Vsodor_top_CSRFile* vlSelf);
void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__5(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__5(Vsodor_top_Core* vlSelf);
void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__6(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__4(Vsodor_top_sodor_top* vlSelf);
void Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__6(Vsodor_top_Core* vlSelf);
void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__0(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_Core___nba_comb__TOP__sodor_top__sodor_core__0(Vsodor_top_Core* vlSelf);
void Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__0(Vsodor_top_CSRFile* vlSelf);
void Vsodor_top_sodor_top___nba_comb__TOP__sodor_top__0(Vsodor_top_sodor_top* vlSelf);
void Vsodor_top_CtlPath___nba_comb__TOP__sodor_top__sodor_core__c__0(Vsodor_top_CtlPath* vlSelf);
void Vsodor_top_Core___nba_comb__TOP__sodor_top__sodor_core__1(Vsodor_top_Core* vlSelf);
void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__1(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__1(Vsodor_top_CSRFile* vlSelf);
void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__2(Vsodor_top_DatPath* vlSelf);
void Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__2(Vsodor_top_CSRFile* vlSelf);
void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__3(Vsodor_top_DatPath* vlSelf);

void Vsodor_top___024root___eval_nba(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__0((&vlSymsp->TOP__sodor_top__sodor_core__d));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__0((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__0((&vlSymsp->TOP__sodor_top));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__0((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__1((&vlSymsp->TOP__sodor_top__sodor_core__d));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__1((&vlSymsp->TOP__sodor_top));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__1((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__2((&vlSymsp->TOP__sodor_top__sodor_core__d));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_sodor_mem_model___nba_sequent__TOP__sodor_top__memory_modelling_inst__0((&vlSymsp->TOP__sodor_top__memory_modelling_inst));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__2((&vlSymsp->TOP__sodor_top));
        Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__2((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__3((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__3((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__1((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        Vsodor_top_CtlPath___nba_sequent__TOP__sodor_top__sodor_core__c__0((&vlSymsp->TOP__sodor_top__sodor_core__c));
        Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__4((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__3((&vlSymsp->TOP__sodor_top));
        Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__4((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__2((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__5((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__5((&vlSymsp->TOP__sodor_top__sodor_core));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__6((&vlSymsp->TOP__sodor_top__sodor_core__d));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__4((&vlSymsp->TOP__sodor_top));
        Vsodor_top_Core___nba_sequent__TOP__sodor_top__sodor_core__6((&vlSymsp->TOP__sodor_top__sodor_core));
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__0((&vlSymsp->TOP__sodor_top__sodor_core__d));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vsodor_top_Core___nba_comb__TOP__sodor_top__sodor_core__0((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__0((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        Vsodor_top_sodor_top___nba_comb__TOP__sodor_top__0((&vlSymsp->TOP__sodor_top));
        Vsodor_top_CtlPath___nba_comb__TOP__sodor_top__sodor_core__c__0((&vlSymsp->TOP__sodor_top__sodor_core__c));
        Vsodor_top_Core___nba_comb__TOP__sodor_top__sodor_core__1((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__1((&vlSymsp->TOP__sodor_top__sodor_core__d));
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__1((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__2((&vlSymsp->TOP__sodor_top__sodor_core__d));
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__2((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__3((&vlSymsp->TOP__sodor_top__sodor_core__d));
    }
}
