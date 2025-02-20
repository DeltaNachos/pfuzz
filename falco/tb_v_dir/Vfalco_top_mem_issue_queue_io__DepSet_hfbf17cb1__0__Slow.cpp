// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_mem_issue_queue_io.h"

VL_ATTR_COLD void Vfalco_top_mem_issue_queue_io___ctor_var_reset(Vfalco_top_mem_issue_queue_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_issue_queue_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__instr_pack);
    vlSelf->__PVT__BCAST_ld_spec = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__Vdly__instr_pack);
    vlSelf->__Vdly__BCAST_ld_spec = VL_RAND_RESET_I(7);
}
