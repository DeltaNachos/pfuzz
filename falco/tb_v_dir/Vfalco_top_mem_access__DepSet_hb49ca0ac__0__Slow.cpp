// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_mem_access.h"

VL_ATTR_COLD void Vfalco_top_mem_access___ctor_var_reset(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_data_resp = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__load_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_forward_data_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_primitive_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_alignment_data = VL_RAND_RESET_I(32);
    vlSelf->load_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_data_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_access_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_access_stall_delay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_forward_data_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_forward_hit_mask_reg = VL_RAND_RESET_I(4);
    vlSelf->__PVT__load_addr_alignment_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mem_load_ext_sel_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_mem_input_sel_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_byte_sel_reg = VL_RAND_RESET_I(4);
    vlSelf->__PVT__load_rob_tag_reg = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__mem_access_stall_delay = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__load_forward_data_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__load_addr_alignment_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__mem_load_ext_sel_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__load_mem_input_sel_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__load_byte_sel_reg = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__load_forward_data_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__load_rob_tag_reg = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__load_forward_hit_mask_reg = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__load_data_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__load_data_valid = VL_RAND_RESET_I(1);
}
