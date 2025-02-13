// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_npc_lfsr.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_npc_lfsr___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0(Vbiriscv_top_biriscv_npc_lfsr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_npc_lfsr___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0\n"); );
    // Body
    vlSelf->__Vdly__lfsr_q = vlSelf->__PVT__lfsr_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__lfsr_q = 1U;
    } else if (vlSelf->__PVT__alloc_i) {
        vlSelf->__Vdly__lfsr_q = ((1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__lfsr_q), 0U))
                                   ? (0xb400U ^ VL_EXTEND_II(16,15, 
                                                             (0x7fffU 
                                                              & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__lfsr_q), 1U, 0xfU))))
                                   : VL_EXTEND_II(16,15, 
                                                  (0x7fffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__lfsr_q), 1U, 0xfU))));
    }
    vlSelf->__PVT__lfsr_q = vlSelf->__Vdly__lfsr_q;
    vlSelf->__PVT__alloc_entry_o = (0x1fU & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__lfsr_q), 0U, 5U));
}
