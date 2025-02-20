// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_Picker4_2.h"

VL_ATTR_COLD void Vfalco_top_Picker4_2___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__alu_picker__l3_picker__0(Vfalco_top_Picker4_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfalco_top_Picker4_2___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__alu_picker__l3_picker__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__big_cmp[0U] = VL_CONCAT_III(5,1,4, 
                                                 vlSelfRef.__PVT__in_big_valid
                                                 [0U], 
                                                 vlSelfRef.__PVT__in_big_age
                                                 [0U]);
    vlSelfRef.__PVT__big_cmp[1U] = VL_CONCAT_III(5,1,4, 
                                                 vlSelfRef.__PVT__in_big_valid
                                                 [1U], 
                                                 vlSelfRef.__PVT__in_big_age
                                                 [1U]);
    vlSelfRef.__PVT__small_cmp[0U] = VL_CONCAT_III(5,1,4, 
                                                   vlSelfRef.__PVT__in_small_valid
                                                   [0U], 
                                                   vlSelfRef.__PVT__in_small_age
                                                   [0U]);
    vlSelfRef.__PVT__small_cmp[1U] = VL_CONCAT_III(5,1,4, 
                                                   vlSelfRef.__PVT__in_small_valid
                                                   [1U], 
                                                   vlSelfRef.__PVT__in_small_age
                                                   [1U]);
    if (((vlSelfRef.__PVT__big_cmp[0U] >= vlSelfRef.__PVT__big_cmp
          [1U]) & (vlSelfRef.__PVT__small_cmp[0U] >= 
                   vlSelfRef.__PVT__big_cmp[1U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [0U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_small_valid
            [0U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_small_age
            [0U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_small_id
            [0U];
    } else if (((vlSelfRef.__PVT__big_cmp[0U] >= vlSelfRef.__PVT__big_cmp
                 [1U]) & (vlSelfRef.__PVT__big_cmp[1U] 
                          > vlSelfRef.__PVT__small_cmp
                          [0U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [0U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_big_id
            [1U];
    } else if (((vlSelfRef.__PVT__big_cmp[1U] > vlSelfRef.__PVT__big_cmp
                 [0U]) & (vlSelfRef.__PVT__big_cmp[0U] 
                          >= vlSelfRef.__PVT__small_cmp
                          [1U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [1U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_big_id
            [0U];
    } else {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [1U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_small_valid
            [1U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_small_age
            [1U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_small_id
            [1U];
    }
}

VL_ATTR_COLD void Vfalco_top_Picker4_2___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__alu_picker__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__0(Vfalco_top_Picker4_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfalco_top_Picker4_2___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__alu_picker__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__big_cmp[0U] = VL_CONCAT_III(5,1,4, 
                                                 vlSelfRef.__PVT__in_big_valid
                                                 [0U], 
                                                 vlSelfRef.__PVT__in_big_age
                                                 [0U]);
    vlSelfRef.__PVT__big_cmp[1U] = VL_CONCAT_III(5,1,4, 
                                                 vlSelfRef.__PVT__in_big_valid
                                                 [1U], 
                                                 vlSelfRef.__PVT__in_big_age
                                                 [1U]);
    vlSelfRef.__PVT__small_cmp[0U] = VL_CONCAT_III(5,1,4, 
                                                   vlSelfRef.__PVT__in_small_valid
                                                   [0U], 
                                                   vlSelfRef.__PVT__in_small_age
                                                   [0U]);
    vlSelfRef.__PVT__small_cmp[1U] = VL_CONCAT_III(5,1,4, 
                                                   vlSelfRef.__PVT__in_small_valid
                                                   [1U], 
                                                   vlSelfRef.__PVT__in_small_age
                                                   [1U]);
    if (((vlSelfRef.__PVT__big_cmp[0U] >= vlSelfRef.__PVT__big_cmp
          [1U]) & (vlSelfRef.__PVT__small_cmp[0U] >= 
                   vlSelfRef.__PVT__big_cmp[1U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [0U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_small_valid
            [0U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_small_age
            [0U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_small_id
            [0U];
    } else if (((vlSelfRef.__PVT__big_cmp[0U] >= vlSelfRef.__PVT__big_cmp
                 [1U]) & (vlSelfRef.__PVT__big_cmp[1U] 
                          > vlSelfRef.__PVT__small_cmp
                          [0U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [0U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_big_id
            [1U];
    } else if (((vlSelfRef.__PVT__big_cmp[1U] > vlSelfRef.__PVT__big_cmp
                 [0U]) & (vlSelfRef.__PVT__big_cmp[0U] 
                          >= vlSelfRef.__PVT__small_cmp
                          [1U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [1U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_big_id
            [0U];
    } else {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [1U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_small_valid
            [1U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_small_age
            [1U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_small_id
            [1U];
    }
}

VL_ATTR_COLD void Vfalco_top_Picker4_2___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__alu_picker__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__0(Vfalco_top_Picker4_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfalco_top_Picker4_2___stl_comb__TOP__falco_top__core__INT_IQ__INT_selector__alu_picker__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__big_cmp[0U] = VL_CONCAT_III(5,1,4, 
                                                 vlSelfRef.__PVT__in_big_valid
                                                 [0U], 
                                                 vlSelfRef.__PVT__in_big_age
                                                 [0U]);
    vlSelfRef.__PVT__big_cmp[1U] = VL_CONCAT_III(5,1,4, 
                                                 vlSelfRef.__PVT__in_big_valid
                                                 [1U], 
                                                 vlSelfRef.__PVT__in_big_age
                                                 [1U]);
    vlSelfRef.__PVT__small_cmp[0U] = VL_CONCAT_III(5,1,4, 
                                                   vlSelfRef.__PVT__in_small_valid
                                                   [0U], 
                                                   vlSelfRef.__PVT__in_small_age
                                                   [0U]);
    vlSelfRef.__PVT__small_cmp[1U] = VL_CONCAT_III(5,1,4, 
                                                   vlSelfRef.__PVT__in_small_valid
                                                   [1U], 
                                                   vlSelfRef.__PVT__in_small_age
                                                   [1U]);
    if (((vlSelfRef.__PVT__big_cmp[0U] >= vlSelfRef.__PVT__big_cmp
          [1U]) & (vlSelfRef.__PVT__small_cmp[0U] >= 
                   vlSelfRef.__PVT__big_cmp[1U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [0U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_small_valid
            [0U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_small_age
            [0U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_small_id
            [0U];
    } else if (((vlSelfRef.__PVT__big_cmp[0U] >= vlSelfRef.__PVT__big_cmp
                 [1U]) & (vlSelfRef.__PVT__big_cmp[1U] 
                          > vlSelfRef.__PVT__small_cmp
                          [0U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [0U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_big_id
            [1U];
    } else if (((vlSelfRef.__PVT__big_cmp[1U] > vlSelfRef.__PVT__big_cmp
                 [0U]) & (vlSelfRef.__PVT__big_cmp[0U] 
                          >= vlSelfRef.__PVT__small_cmp
                          [1U]))) {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [1U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_big_valid
            [0U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_big_age
            [0U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_big_id
            [0U];
    } else {
        vlSelfRef.__PVT__out_big_valid = vlSelfRef.__PVT__in_big_valid
            [1U];
        vlSelfRef.__PVT__out_big_age = vlSelfRef.__PVT__in_big_age
            [1U];
        vlSelfRef.__PVT__out_big_id = vlSelfRef.__PVT__in_big_id
            [1U];
        vlSelfRef.__PVT__out_small_valid = vlSelfRef.__PVT__in_small_valid
            [1U];
        vlSelfRef.__PVT__out_small_age = vlSelfRef.__PVT__in_small_age
            [1U];
        vlSelfRef.__PVT__out_small_id = vlSelfRef.__PVT__in_small_id
            [1U];
    }
}

VL_ATTR_COLD void Vfalco_top_Picker4_2___ctor_var_reset(Vfalco_top_Picker4_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfalco_top_Picker4_2___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__in_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__in_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__in_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__in_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__in_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__in_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__out_big_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__out_small_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__out_big_age = VL_RAND_RESET_I(4);
    vlSelf->__PVT__out_small_age = VL_RAND_RESET_I(4);
    vlSelf->__PVT__out_big_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_small_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__big_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__small_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
}
