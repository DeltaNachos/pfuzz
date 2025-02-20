// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_divider.h"

VL_ATTR_COLD void Vfalco_top_divider___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__quotient = VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0U, 0x20U);
    vlSelfRef.__PVT__remainder = VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0x21U, 0x20U);
    vlSelfRef.__PVT__div_sub = (VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0x20U, 0x20U) 
                                >= vlSelfRef.__PVT__reg32);
    vlSelfRef.__PVT__adder_opa = (0x1ffffffffULL & 
                                  (- VL_EXTEND_QI(33,32, vlSelfRef.__PVT__reg32)));
    vlSelfRef.__PVT__adder_opb = VL_EXTEND_QI(33,32, 
                                              VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0x20U, 0x20U));
    vlSelfRef.__PVT__is_calc_done = (1U & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__cnt))));
    vlSelfRef.__PVT__adder_tmp = (0x1ffffffffULL & 
                                  (vlSelfRef.__PVT__adder_opa 
                                   + vlSelfRef.__PVT__adder_opb));
    VL_CONCAT_WQI(65,33,32, vlSelfRef.__PVT__result_tmp, vlSelfRef.__PVT__adder_tmp, 
                  VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0U, 0x20U));
}

VL_ATTR_COLD void Vfalco_top_divider___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__1(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_b_zero = (0U == vlSelfRef.__PVT__b_i);
    vlSelfRef.__PVT__is_a_zero = (0U == vlSelfRef.__PVT__a_i);
    vlSelfRef.__PVT__operation_divu = (1U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_remu = (3U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_div = (0U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_rem = (2U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__is_a_neg = (VL_BITSEL_IIII(32, vlSelfRef.__PVT__a_i, 0x1fU) 
                                 & ((IData)(vlSelfRef.__PVT__operation_div) 
                                    | (IData)(vlSelfRef.__PVT__operation_rem)));
    vlSelfRef.__PVT__is_b_neg = (VL_BITSEL_IIII(32, vlSelfRef.__PVT__b_i, 0x1fU) 
                                 & ((IData)(vlSelfRef.__PVT__operation_div) 
                                    | (IData)(vlSelfRef.__PVT__operation_rem)));
    vlSelfRef.__PVT__op_a = ((IData)(vlSelfRef.__PVT__is_a_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__0__num = vlSelfRef.__PVT__a_i;
                vlSelfRef.__Vfunc_abs__0__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__0__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__0__num)
                        : vlSelfRef.__Vfunc_abs__0__num);
            }(), vlSelfRef.__Vfunc_abs__0__Vfuncout)
                              : vlSelfRef.__PVT__a_i);
    vlSelfRef.__PVT__signed_adjust = ((IData)(vlSelfRef.__PVT__is_a_neg) 
                                      ^ (IData)(vlSelfRef.__PVT__is_b_neg));
    vlSelfRef.__PVT__op_b = ((IData)(vlSelfRef.__PVT__is_b_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__1__num = vlSelfRef.__PVT__b_i;
                vlSelfRef.__Vfunc_abs__1__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__1__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__1__num)
                        : vlSelfRef.__Vfunc_abs__1__num);
            }(), vlSelfRef.__Vfunc_abs__1__Vfuncout)
                              : vlSelfRef.__PVT__b_i);
}

VL_ATTR_COLD void Vfalco_top_divider___stl_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___stl_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__S_nxt = ((0U == (IData)(vlSelfRef.__PVT__S))
                               ? ((IData)(vlSelfRef.__PVT__req_i)
                                   ? (((IData)(vlSelfRef.__PVT__is_a_zero) 
                                       | (IData)(vlSelfRef.__PVT__is_b_zero))
                                       ? 3U : 1U) : 0U)
                               : ((1U == (IData)(vlSelfRef.__PVT__S))
                                   ? ((IData)(vlSelfRef.__PVT__kill_i)
                                       ? 5U : ((IData)(vlSelfRef.__PVT__is_calc_done)
                                                ? 2U
                                                : 1U))
                                   : ((2U == (IData)(vlSelfRef.__PVT__S))
                                       ? ((IData)(vlSelfRef.__PVT__kill_i)
                                           ? 5U : 3U)
                                       : ((3U == (IData)(vlSelfRef.__PVT__S))
                                           ? ((IData)(vlSelfRef.__PVT__stall_i)
                                               ? 4U
                                               : 0U)
                                           : ((4U == (IData)(vlSelfRef.__PVT__S))
                                               ? ((IData)(vlSelfRef.__PVT__stall_i)
                                                   ? 4U
                                                   : 0U)
                                               : 0U)))));
}

VL_ATTR_COLD void Vfalco_top_divider___ctor_var_reset(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__req_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__kill_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_sel_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__div_result_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_divu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_rem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_remu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_a_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_b_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_a_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_b_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signed_adjust = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__is_calc_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__result);
    vlSelf->__PVT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__S_nxt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__div_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__adder_opa = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__adder_opb = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__adder_tmp = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(65, vlSelf->__PVT__result_tmp);
    vlSelf->__Vfunc_abs__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_abs__0__num = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_abs__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_abs__1__num = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__S = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(65, vlSelf->__Vdly__result);
    vlSelf->__Vdly__cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__reg32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__result_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__div_result_o = VL_RAND_RESET_I(32);
}
