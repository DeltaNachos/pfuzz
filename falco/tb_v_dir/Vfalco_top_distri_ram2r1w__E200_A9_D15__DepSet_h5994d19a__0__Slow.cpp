// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_distri_ram2r1w__E200_A9_D15.h"

VL_ATTR_COLD void Vfalco_top_distri_ram2r1w__E200_A9_D15___eval_initial__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag(Vfalco_top_distri_ram2r1w__E200_A9_D15* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_distri_ram2r1w__E200_A9_D15___eval_initial__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__i = 0U;
    while (VL_GTS_III(32, 0x200U, vlSelfRef.__PVT__i)) {
        vlSelfRef.__PVT__history_table[(0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__i, 0U, 9U))] = 0U;
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__PVT__i);
        vlSelfRef.__PVT__i = __Vtemp_1;
    }
}

VL_ATTR_COLD void Vfalco_top_distri_ram2r1w__E200_A9_D15___stl_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag__0(Vfalco_top_distri_ram2r1w__E200_A9_D15* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_distri_ram2r1w__E200_A9_D15___stl_sequent__TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_0_o = vlSelfRef.__PVT__history_table
        [vlSelfRef.__PVT__read_0_addr];
    vlSelfRef.__PVT__data_1_o = vlSelfRef.__PVT__history_table
        [vlSelfRef.__PVT__read_1_addr];
}

VL_ATTR_COLD void Vfalco_top_distri_ram2r1w__E200_A9_D15___ctor_var_reset(Vfalco_top_distri_ram2r1w__E200_A9_D15* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_distri_ram2r1w__E200_A9_D15___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_i = VL_RAND_RESET_I(21);
    vlSelf->__PVT__write_addr = VL_RAND_RESET_I(9);
    vlSelf->__PVT__read_0_addr = VL_RAND_RESET_I(9);
    vlSelf->__PVT__read_1_addr = VL_RAND_RESET_I(9);
    vlSelf->__PVT__data_0_o = VL_RAND_RESET_I(21);
    vlSelf->__PVT__data_1_o = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__history_table[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__history_table__v0 = VL_RAND_RESET_I(21);
    vlSelf->__VdlyDim0__history_table__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__history_table__v0 = 0;
}
