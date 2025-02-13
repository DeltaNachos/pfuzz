// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top__Syms.h"
#include "Vsodor_top___024root.h"

VL_ATTR_COLD void Vsodor_top_DatPath___eval_initial__TOP__sodor_top__sodor_core__d(Vsodor_top_DatPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_CSRFile___eval_initial__TOP__sodor_top__sodor_core__d__csr(Vsodor_top_CSRFile* vlSelf);

VL_ATTR_COLD void Vsodor_top___024root___eval_initial(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_initial\n"); );
    // Body
    Vsodor_top_DatPath___eval_initial__TOP__sodor_top__sodor_core__d((&vlSymsp->TOP__sodor_top__sodor_core__d));
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsodor_top_CSRFile___eval_initial__TOP__sodor_top__sodor_core__d__csr((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__clk__0 
        = vlSymsp->TOP__sodor_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d____PVT__clock__0 
        = vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__clock;
    vlSelf->__Vtrigprevexpr___TOP__sodor_top__sodor_core__d__csr____PVT__clock__0 
        = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__clock;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsodor_top___024root___dump_triggers__stl(Vsodor_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsodor_top___024root___eval_triggers__stl(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsodor_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vsodor_top___024root___stl_sequent__TOP__0(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__sodor_top.rst = vlSelf->rst;
    vlSymsp->TOP__sodor_top.clk = vlSelf->clk;
}

VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__0(Vsodor_top_DatPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_CSRFile___stl_sequent__TOP__sodor_top__sodor_core__d__csr__0(Vsodor_top_CSRFile* vlSelf);
VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__0(Vsodor_top_Core* vlSelf);
VL_ATTR_COLD void Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__0(Vsodor_top_sodor_top* vlSelf);
VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__1(Vsodor_top_DatPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__1(Vsodor_top_Core* vlSelf);
VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__2(Vsodor_top_DatPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__2(Vsodor_top_Core* vlSelf);
VL_ATTR_COLD void Vsodor_top_CSRFile___stl_sequent__TOP__sodor_top__sodor_core__d__csr__1(Vsodor_top_CSRFile* vlSelf);
VL_ATTR_COLD void Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__1(Vsodor_top_sodor_top* vlSelf);
VL_ATTR_COLD void Vsodor_top_CtlPath___stl_sequent__TOP__sodor_top__sodor_core__c__0(Vsodor_top_CtlPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__3(Vsodor_top_DatPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__3(Vsodor_top_Core* vlSelf);
VL_ATTR_COLD void Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__2(Vsodor_top_sodor_top* vlSelf);
VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__4(Vsodor_top_DatPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_CSRFile___stl_sequent__TOP__sodor_top__sodor_core__d__csr__2(Vsodor_top_CSRFile* vlSelf);
VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__4(Vsodor_top_Core* vlSelf);
VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__5(Vsodor_top_DatPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__3(Vsodor_top_sodor_top* vlSelf);
VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__5(Vsodor_top_Core* vlSelf);
VL_ATTR_COLD void Vsodor_top_CtlPath___stl_sequent__TOP__sodor_top__sodor_core__c__1(Vsodor_top_CtlPath* vlSelf);
VL_ATTR_COLD void Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__6(Vsodor_top_Core* vlSelf);
VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__6(Vsodor_top_DatPath* vlSelf);

VL_ATTR_COLD void Vsodor_top___024root___eval_stl(Vsodor_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsodor_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__0((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_CSRFile___stl_sequent__TOP__sodor_top__sodor_core__d__csr__0((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__0((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__0((&vlSymsp->TOP__sodor_top));
        Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__1((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__1((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__2((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__2((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_CSRFile___stl_sequent__TOP__sodor_top__sodor_core__d__csr__1((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__1((&vlSymsp->TOP__sodor_top));
        Vsodor_top_CtlPath___stl_sequent__TOP__sodor_top__sodor_core__c__0((&vlSymsp->TOP__sodor_top__sodor_core__c));
        Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__3((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__3((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__2((&vlSymsp->TOP__sodor_top));
        Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__4((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_CSRFile___stl_sequent__TOP__sodor_top__sodor_core__d__csr__2((&vlSymsp->TOP__sodor_top__sodor_core__d__csr));
        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__4((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__5((&vlSymsp->TOP__sodor_top__sodor_core__d));
        Vsodor_top_sodor_top___stl_sequent__TOP__sodor_top__3((&vlSymsp->TOP__sodor_top));
        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__5((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_CtlPath___stl_sequent__TOP__sodor_top__sodor_core__c__1((&vlSymsp->TOP__sodor_top__sodor_core__c));
        Vsodor_top_Core___stl_sequent__TOP__sodor_top__sodor_core__6((&vlSymsp->TOP__sodor_top__sodor_core));
        Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__6((&vlSymsp->TOP__sodor_top__sodor_core__d));
    }
}
