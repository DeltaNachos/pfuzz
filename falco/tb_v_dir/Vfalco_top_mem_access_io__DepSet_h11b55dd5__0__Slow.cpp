// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_mem_access_io.h"

VL_ATTR_COLD void Vfalco_top_mem_access_io___ctor_var_reset(Vfalco_top_mem_access_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_mem_access_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__load_wb = VL_RAND_RESET_Q(39);
    vlSelf->__PVT__load_commit = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__load_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vdly__load_commit = VL_RAND_RESET_I(7);
}
