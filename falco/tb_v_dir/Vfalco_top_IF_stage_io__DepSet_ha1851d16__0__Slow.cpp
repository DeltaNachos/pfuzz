// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_IF_stage_io.h"

VL_ATTR_COLD void Vfalco_top_IF_stage_io___ctor_var_reset(Vfalco_top_IF_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_IF_stage_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__raw_instr0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__raw_instr1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__current_instr0_BHSR = VL_RAND_RESET_I(10);
    vlSelf->__PVT__current_instr1_BHSR = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__current_instr0_BHSR = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__instr1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__current_instr1_BHSR = VL_RAND_RESET_I(10);
}
