// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_ID_stage_io.h"

VL_ATTR_COLD void Vfalco_top_ID_stage_io___ctor_var_reset(Vfalco_top_ID_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ID_stage_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(192, vlSelf->__PVT__decoded_instr0);
    VL_RAND_RESET_W(192, vlSelf->__PVT__decoded_instr1);
    vlSelf->__PVT__instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_issue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_issue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_BHSR = VL_RAND_RESET_I(10);
    vlSelf->__PVT__instr1_BHSR = VL_RAND_RESET_I(10);
    vlSelf->instr0_store_set_id = VL_RAND_RESET_I(8);
    vlSelf->instr1_store_set_id = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(192, vlSelf->__Vdly__decoded_instr0);
    vlSelf->__Vdly__instr0_BHSR = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(192, vlSelf->__Vdly__decoded_instr1);
    vlSelf->__Vdly__instr1_BHSR = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__instr1_valid = VL_RAND_RESET_I(1);
}
