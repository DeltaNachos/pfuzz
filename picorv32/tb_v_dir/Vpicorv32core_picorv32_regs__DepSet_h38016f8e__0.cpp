// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core_picorv32_regs.h"

VL_INLINE_OPT void Vpicorv32core_picorv32_regs___nba_sequent__TOP__picorv32core__picorv32_core__cpuregs__0(Vpicorv32core_picorv32_regs* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpicorv32core_picorv32_regs___nba_sequent__TOP__picorv32core__picorv32_core__cpuregs__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__regs__v0 = 0U;
    if (vlSelfRef.__PVT__wen) {
        vlSelfRef.__Vlvbound_h42af6e1e__0 = vlSelfRef.__PVT__wdata;
        if (VL_LIKELY((0x1eU >= (0x1fU & (~ VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__waddr), 0U, 5U)))))) {
            vlSelfRef.__VdlyVal__regs__v0 = vlSelfRef.__Vlvbound_h42af6e1e__0;
            vlSelfRef.__VdlyDim0__regs__v0 = (0x1fU 
                                              & (~ 
                                                 VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__waddr), 0U, 5U)));
            vlSelfRef.__VdlySet__regs__v0 = 1U;
        }
    }
    if (vlSelfRef.__VdlySet__regs__v0) {
        vlSelfRef.__PVT__regs[vlSelfRef.__VdlyDim0__regs__v0] 
            = vlSelfRef.__VdlyVal__regs__v0;
    }
}

VL_INLINE_OPT void Vpicorv32core_picorv32_regs___nba_comb__TOP__picorv32core__picorv32_core__cpuregs__0(Vpicorv32core_picorv32_regs* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpicorv32core_picorv32_regs___nba_comb__TOP__picorv32core__picorv32_core__cpuregs__0\n"); );
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
