// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_Picker8_1.h"

VL_ATTR_COLD void Vfalco_top_Picker8_1___eval_initial__TOP__falco_top__core__INT_IQ__INT_selector__control_picker(Vfalco_top_Picker8_1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_Picker8_1___eval_initial__TOP__falco_top__core__INT_IQ__INT_selector__control_picker\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id[0U] = 0U;
    vlSelfRef.__PVT__i = 1U;
    vlSelfRef.__PVT__id[1U] = 1U;
    vlSelfRef.__PVT__i = 2U;
    vlSelfRef.__PVT__id[2U] = 2U;
    vlSelfRef.__PVT__i = 3U;
    vlSelfRef.__PVT__id[3U] = 3U;
    vlSelfRef.__PVT__i = 4U;
    vlSelfRef.__PVT__id[4U] = 4U;
    vlSelfRef.__PVT__i = 5U;
    vlSelfRef.__PVT__id[5U] = 5U;
    vlSelfRef.__PVT__i = 6U;
    vlSelfRef.__PVT__id[6U] = 6U;
    vlSelfRef.__PVT__i = 7U;
    vlSelfRef.__PVT__id[7U] = 7U;
    vlSelfRef.__PVT__i = 8U;
}

VL_ATTR_COLD void Vfalco_top_Picker8_1___eval_initial__TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker(Vfalco_top_Picker8_1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_Picker8_1___eval_initial__TOP__falco_top__core__INT_IQ__INT_selector__muldiv_picker\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id[0U] = 0U;
    vlSelfRef.__PVT__i = 1U;
    vlSelfRef.__PVT__id[1U] = 1U;
    vlSelfRef.__PVT__i = 2U;
    vlSelfRef.__PVT__id[2U] = 2U;
    vlSelfRef.__PVT__i = 3U;
    vlSelfRef.__PVT__id[3U] = 3U;
    vlSelfRef.__PVT__i = 4U;
    vlSelfRef.__PVT__id[4U] = 4U;
    vlSelfRef.__PVT__i = 5U;
    vlSelfRef.__PVT__id[5U] = 5U;
    vlSelfRef.__PVT__i = 6U;
    vlSelfRef.__PVT__id[6U] = 6U;
    vlSelfRef.__PVT__i = 7U;
    vlSelfRef.__PVT__id[7U] = 7U;
    vlSelfRef.__PVT__i = 8U;
}

VL_ATTR_COLD void Vfalco_top_Picker8_1___ctor_var_reset(Vfalco_top_Picker8_1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_Picker8_1___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__out_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__l1_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__l1_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__l1_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__l2_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__l2_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__l2_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__l3_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__l3_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__l3_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_age = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_id = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_age = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_id = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_age = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_id = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_age = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_id = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_age = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_id = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_age = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_id = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
}
