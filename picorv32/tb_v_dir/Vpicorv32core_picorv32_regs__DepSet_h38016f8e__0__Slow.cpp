// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core_picorv32_regs.h"

VL_ATTR_COLD void Vpicorv32core_picorv32_regs___stl_sequent__TOP__picorv32core__picorv32_core__cpuregs__0(Vpicorv32core_picorv32_regs* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpicorv32core_picorv32_regs___stl_sequent__TOP__picorv32core__picorv32_core__cpuregs__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rdata1 = ((0x1eU >= (0x1fU & (~ 
                                                   VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__raddr1), 0U, 5U))))
                                ? vlSelfRef.__PVT__regs
                               [(0x1fU & (~ VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__raddr1), 0U, 5U)))]
                                : 0U);
    vlSelfRef.__PVT__rdata2 = ((0x1eU >= (0x1fU & (~ 
                                                   VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__raddr2), 0U, 5U))))
                                ? vlSelfRef.__PVT__regs
                               [(0x1fU & (~ VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__raddr2), 0U, 5U)))]
                                : 0U);
}

VL_ATTR_COLD void Vpicorv32core_picorv32_regs___ctor_var_reset(Vpicorv32core_picorv32_regs* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpicorv32core_picorv32_regs___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__waddr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__raddr1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__raddr2 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rdata1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rdata2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->__PVT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vlvbound_h42af6e1e__0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__regs__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__regs__v0 = 0;
}
