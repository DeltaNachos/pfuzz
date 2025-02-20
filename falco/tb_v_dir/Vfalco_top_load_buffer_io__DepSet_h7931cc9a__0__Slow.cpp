// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_load_buffer_io.h"

VL_ATTR_COLD void Vfalco_top_load_buffer_io___ctor_var_reset(Vfalco_top_load_buffer_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_load_buffer_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_allocate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_allocate_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_allocate_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__load_allocate_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__load_store_set_pc = VL_RAND_RESET_I(11);
    vlSelf->__PVT__load_store_set_id = VL_RAND_RESET_I(8);
    vlSelf->__PVT__violation_load_pc = VL_RAND_RESET_I(11);
    vlSelf->__PVT__violation_load_id = VL_RAND_RESET_I(8);
    vlSelf->__PVT__store_instruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__store_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__violation_detect = VL_RAND_RESET_I(1);
}
