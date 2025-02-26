// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core__Syms.h"
#include "Vpicorv32core___024root.h"

VL_ATTR_COLD void Vpicorv32core_picorv32___eval_initial__TOP__picorv32core__picorv32_core(Vpicorv32core_picorv32* vlSelf);
VL_ATTR_COLD void Vpicorv32core___024root____Vm_traceActivitySetAll(Vpicorv32core___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32core___024root___eval_initial(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32core_picorv32___eval_initial__TOP__picorv32core__picorv32_core((&vlSymsp->TOP__picorv32core__picorv32_core));
    Vpicorv32core___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__clk__0 
        = vlSymsp->TOP__picorv32core.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__picorv32_core____PVT__clk__0 
        = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32core__picorv32_core__cpuregs____PVT__clk__0 
        = vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32core___024root___dump_triggers__stl(Vpicorv32core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32core___024root___eval_triggers__stl(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vpicorv32core___024root___stl_sequent__TOP__0(Vpicorv32core___024root* vlSelf);
VL_ATTR_COLD void Vpicorv32core_picorv32core___stl_sequent__TOP__picorv32core__0(Vpicorv32core_picorv32core* vlSelf);
VL_ATTR_COLD void Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf);
VL_ATTR_COLD void Vpicorv32core_picorv32core___stl_sequent__TOP__picorv32core__1(Vpicorv32core_picorv32core* vlSelf);
VL_ATTR_COLD void Vpicorv32core_picorv32_regs___stl_sequent__TOP__picorv32core__picorv32_core__cpuregs__0(Vpicorv32core_picorv32_regs* vlSelf);
VL_ATTR_COLD void Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__1(Vpicorv32core_picorv32* vlSelf);

VL_ATTR_COLD void Vpicorv32core___024root___eval_stl(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpicorv32core___024root___stl_sequent__TOP__0(vlSelf);
        Vpicorv32core___024root____Vm_traceActivitySetAll(vlSelf);
        Vpicorv32core_picorv32core___stl_sequent__TOP__picorv32core__0((&vlSymsp->TOP__picorv32core));
        Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__0((&vlSymsp->TOP__picorv32core__picorv32_core));
        Vpicorv32core_picorv32core___stl_sequent__TOP__picorv32core__1((&vlSymsp->TOP__picorv32core));
        Vpicorv32core_picorv32_regs___stl_sequent__TOP__picorv32core__picorv32_core__cpuregs__0((&vlSymsp->TOP__picorv32core__picorv32_core__cpuregs));
        Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__1((&vlSymsp->TOP__picorv32core__picorv32_core));
    }
}

VL_ATTR_COLD void Vpicorv32core___024root___stl_sequent__TOP__0(Vpicorv32core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__picorv32core.rst = vlSelfRef.rst;
    vlSymsp->TOP__picorv32core.clk = vlSelfRef.clk;
}
