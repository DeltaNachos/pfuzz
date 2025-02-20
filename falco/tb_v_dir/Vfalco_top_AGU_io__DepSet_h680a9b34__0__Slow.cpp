// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_AGU_io.h"

VL_ATTR_COLD void Vfalco_top_AGU_io___ctor_var_reset(Vfalco_top_AGU_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_AGU_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(147, vlSelf->__PVT__agu_pack);
    vlSelf->__PVT__memory_align_exception = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(147, vlSelf->__Vdly__agu_pack);
    vlSelf->__Vdly__memory_align_exception = VL_RAND_RESET_I(1);
}
