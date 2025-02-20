// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_int_issue_queue_io.h"

VL_ATTR_COLD void Vfalco_top_int_issue_queue_io___ctor_var_reset(Vfalco_top_int_issue_queue_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_issue_queue_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__PVT__instr0_pack);
    VL_RAND_RESET_W(205, vlSelf->__PVT__instr1_pack);
    vlSelf->__PVT__issue_alu0_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_alu1_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_alu0_rd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__issue_alu1_rd = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__instr1_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__instr0_pack);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__instr1_pack);
}
