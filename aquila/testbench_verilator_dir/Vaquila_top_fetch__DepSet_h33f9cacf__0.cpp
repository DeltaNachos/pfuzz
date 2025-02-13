// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_fetch.h"

VL_INLINE_OPT void Vaquila_top_fetch___nba_sequent__TOP__aquila_top__core__Fetch__0(Vaquila_top_fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_fetch___nba_sequent__TOP__aquila_top__core__Fetch__0\n"); );
    // Body
    vlSelf->__Vdly__branch_decision_o = vlSelf->__PVT__branch_decision_o;
    vlSelf->__Vdly__branch_hit_o = vlSelf->__PVT__branch_hit_o;
    vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_o;
    vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_o;
    vlSelf->__Vdly__instruction_delay = vlSelf->__PVT__instruction_delay;
    vlSelf->__Vdly__stall_delay = vlSelf->__PVT__stall_delay;
    vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_o;
    vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_o;
    vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_o;
    vlSelf->__Vdly__flush_delay = vlSelf->__PVT__flush_delay;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__pc_o = 0U;
        vlSelf->__Vdly__fetch_valid_o = 0U;
        vlSelf->__Vdly__branch_hit_o = 0U;
        vlSelf->__Vdly__branch_decision_o = 0U;
    } else if (vlSelf->__PVT__stall_i) {
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_o;
        vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_o;
        vlSelf->__Vdly__branch_hit_o = vlSelf->__PVT__branch_hit_o;
        vlSelf->__Vdly__branch_decision_o = vlSelf->__PVT__branch_decision_o;
    } else if (vlSelf->__PVT__flush_i) {
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_i;
        vlSelf->__Vdly__fetch_valid_o = 0U;
        vlSelf->__Vdly__branch_hit_o = 0U;
        vlSelf->__Vdly__branch_decision_o = 0U;
    } else {
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_i;
        vlSelf->__Vdly__fetch_valid_o = 1U;
        vlSelf->__Vdly__branch_hit_o = vlSelf->__PVT__branch_hit_i;
        vlSelf->__Vdly__branch_decision_o = vlSelf->__PVT__branch_decision_i;
    }
    vlSelf->__Vdly__xcpt_valid_o = 0U;
    vlSelf->__Vdly__xcpt_cause_o = 0U;
    vlSelf->__Vdly__xcpt_tval_o = 0U;
    vlSelf->__Vdly__stall_delay = vlSelf->__PVT__stall_i;
    vlSelf->__Vdly__flush_delay = vlSelf->__PVT__flush_i;
    vlSelf->__Vdly__instruction_delay = ((IData)(vlSelf->__PVT__stall_delay)
                                          ? vlSelf->__PVT__instruction_delay
                                          : vlSelf->__PVT__instruction_i);
    vlSelf->__PVT__branch_hit_o = vlSelf->__Vdly__branch_hit_o;
    vlSelf->__PVT__branch_decision_o = vlSelf->__Vdly__branch_decision_o;
    vlSelf->__PVT__pc_o = vlSelf->__Vdly__pc_o;
    vlSelf->__PVT__fetch_valid_o = vlSelf->__Vdly__fetch_valid_o;
    vlSelf->__PVT__xcpt_valid_o = vlSelf->__Vdly__xcpt_valid_o;
    vlSelf->__PVT__xcpt_cause_o = vlSelf->__Vdly__xcpt_cause_o;
    vlSelf->__PVT__xcpt_tval_o = vlSelf->__Vdly__xcpt_tval_o;
    vlSelf->__PVT__stall_delay = vlSelf->__Vdly__stall_delay;
    vlSelf->__PVT__flush_delay = vlSelf->__Vdly__flush_delay;
    vlSelf->__PVT__instruction_delay = vlSelf->__Vdly__instruction_delay;
}

VL_INLINE_OPT void Vaquila_top_fetch___nba_comb__TOP__aquila_top__core__Fetch__0(Vaquila_top_fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_fetch___nba_comb__TOP__aquila_top__core__Fetch__0\n"); );
    // Body
    vlSelf->__PVT__instruction_o = ((IData)(vlSelf->__PVT__rst_i)
                                     ? 0x13U : ((IData)(vlSelf->__PVT__fetch_valid_o)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__stall_delay)
                                                  ? vlSelf->__PVT__instruction_delay
                                                  : 
                                                 ((IData)(vlSelf->__PVT__flush_delay)
                                                   ? 0x13U
                                                   : vlSelf->__PVT__instruction_i))
                                                 : 0x13U));
}
