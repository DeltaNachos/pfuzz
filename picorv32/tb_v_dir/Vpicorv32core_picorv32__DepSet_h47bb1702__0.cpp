// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core_picorv32.h"

VL_INLINE_OPT void Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__1(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_mem_rdata = vlSelfRef.__PVT__mem_rdata;
    vlSelfRef.__PVT__dbg_mem_ready = vlSelfRef.__PVT__mem_ready;
}

VL_INLINE_OPT void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__2(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = vlSelfRef.__PVT__reg_op2;
        vlSelfRef.__PVT__mem_la_wstrb = 0xfU;
        vlSelfRef.__PVT__mem_rdata_word = vlSelfRef.__PVT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = VL_REPLICATE_III(16, 
                                                         (0xffffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op2, 0U, 0x10U)), 2U);
        vlSelfRef.__PVT__mem_la_wstrb = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 1U))
                                          ? 0xcU : 3U);
        if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 1U))) {
            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 1U))) {
                vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0x10U, 0x10U)));
            }
        } else {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,16, 
                                                           (0xffffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0U, 0x10U)));
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = VL_REPLICATE_III(8, 
                                                         (0xffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op2, 0U, 8U)), 4U);
        vlSelfRef.__PVT__mem_la_wstrb = (0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U))));
        if ((0U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0U, 8U)));
        } else if ((1U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 8U, 8U)));
        } else if ((2U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0x10U, 8U)));
        } else if ((3U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0x18U, 8U)));
        }
    }
    vlSelfRef.__PVT__mem_xfer = (((IData)(vlSelfRef.__PVT__mem_valid) 
                                  & (IData)(vlSelfRef.__PVT__mem_ready)) 
                                 | ((IData)(vlSelfRef.__PVT__mem_la_use_prefetched_high_word) 
                                    & (IData)(vlSelfRef.__PVT__mem_do_rinst)));
    vlSelfRef.__PVT__mem_rdata_latched_noshuffle = 
        ((IData)(vlSelfRef.__PVT__mem_xfer) ? vlSelfRef.__PVT__mem_rdata
          : vlSelfRef.__PVT__mem_rdata_q);
    vlSelfRef.__PVT__mem_rdata_latched = vlSelfRef.__PVT__mem_rdata_latched_noshuffle;
}

VL_INLINE_OPT void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__3(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_done = (((IData)(vlSelfRef.__PVT__resetn) 
                                  & ((((IData)(vlSelfRef.__PVT__mem_xfer) 
                                       & VL_REDOR_I((IData)(vlSelfRef.__PVT__mem_state))) 
                                      & (((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                          | (IData)(vlSelfRef.__PVT__mem_do_rdata)) 
                                         | (IData)(vlSelfRef.__PVT__mem_do_wdata))) 
                                     | (VL_REDAND_II(2, (IData)(vlSelfRef.__PVT__mem_state)) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_rinst)))) 
                                 & ((~ (IData)(vlSelfRef.__PVT__mem_la_firstword)) 
                                    | ((~ VL_REDAND_II(2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 2U)))) 
                                       & (IData)(vlSelfRef.__PVT__mem_xfer))));
}
