// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_sram_dual_port__R8_RBb.h"

VL_ATTR_COLD void Vfalco_top_sram_dual_port__R8_RBb___eval_initial__TOP__falco_top__core__instruction_decode__SSIT__store_set_id(Vfalco_top_sram_dual_port__R8_RBb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_sram_dual_port__R8_RBb___eval_initial__TOP__falco_top__core__instruction_decode__SSIT__store_set_id\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONST_W_5X(136,__Vtemp_1,0x00000069,0x6e697469,0x616c5f74,0x61626c65,0x2e6d656d);
    VL_READMEM_N(true, 8, 2048, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.__PVT__RAM), 0, ~0ULL);
}

VL_ATTR_COLD void Vfalco_top_sram_dual_port__R8_RBb___ctor_var_reset(Vfalco_top_sram_dual_port__R8_RBb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_sram_dual_port__R8_RBb___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clka = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clkb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we_A = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we_B = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_A = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_B = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_A = VL_RAND_RESET_I(11);
    vlSelf->__PVT__addr_B = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data_iA = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data_iB = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data_oA = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data_oB = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__RAM[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__data_oA = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__data_oB = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__RAM__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__RAM__v0 = VL_RAND_RESET_I(11);
    vlSelf->__VdlySet__RAM__v0 = 0;
    vlSelf->__VdlyVal__RAM__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__RAM__v1 = VL_RAND_RESET_I(11);
    vlSelf->__VdlySet__RAM__v1 = 0;
}
