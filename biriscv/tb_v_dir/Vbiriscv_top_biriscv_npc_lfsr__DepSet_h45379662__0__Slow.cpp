// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_npc_lfsr.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_npc_lfsr___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0(Vbiriscv_top_biriscv_npc_lfsr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_npc_lfsr___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0\n"); );
    // Body
    vlSelf->__PVT__alloc_entry_o = (0x1fU & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__lfsr_q), 0U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_npc_lfsr___ctor_var_reset(Vbiriscv_top_biriscv_npc_lfsr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_npc_lfsr___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hit_entry_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alloc_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alloc_entry_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__lfsr_q = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__lfsr_q = VL_RAND_RESET_I(16);
}
