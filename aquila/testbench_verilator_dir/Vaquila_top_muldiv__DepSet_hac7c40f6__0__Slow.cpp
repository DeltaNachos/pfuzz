// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_muldiv.h"

VL_ATTR_COLD void Vaquila_top_muldiv___stl_sequent__TOP__aquila_top__core__Execute__MulDiv__0(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___stl_sequent__TOP__aquila_top__core__Execute__MulDiv__0\n"); );
    // Body
    vlSelf->__PVT__mull = VL_SEL_IWII(65, vlSelf->__PVT__result, 0U, 0x20U);
    vlSelf->__PVT__mulh = VL_SEL_IWII(65, vlSelf->__PVT__result, 0x20U, 0x20U);
    vlSelf->__PVT__quotient = VL_SEL_IWII(65, vlSelf->__PVT__result, 0U, 0x20U);
    vlSelf->__PVT__remainder = VL_SEL_IWII(65, vlSelf->__PVT__result, 0x21U, 0x20U);
    vlSelf->__PVT__mul_add = (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__result, 0U));
    vlSelf->__PVT__div_sub = (VL_SEL_IWII(65, vlSelf->__PVT__result, 0x20U, 0x20U) 
                              >= vlSelf->__PVT__reg32);
    vlSelf->__PVT__adder_opb = VL_EXTEND_QI(33,32, 
                                            VL_SEL_IWII(65, vlSelf->__PVT__result, 0x20U, 0x20U));
}

VL_ATTR_COLD void Vaquila_top_muldiv___stl_sequent__TOP__aquila_top__core__Execute__MulDiv__1(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___stl_sequent__TOP__aquila_top__core__Execute__MulDiv__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__operation_divu = (5U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_remu = (7U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__is_divider = (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__operation_sel_i), 2U));
    vlSelf->__PVT__operation_mul = (0U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_mulhu = (3U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_mulhsu = (2U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_div = (4U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_rem = (6U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_mulh = (1U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__adder_opa = (0x1ffffffffULL & ((IData)(vlSelf->__PVT__is_divider)
                                                   ? 
                                                  (- 
                                                   VL_EXTEND_QI(33,32, vlSelf->__PVT__reg32))
                                                   : 
                                                  VL_EXTEND_QI(33,32, vlSelf->__PVT__reg32)));
    vlSelf->__PVT__is_calc_done = (1U & (((((IData)(vlSelf->__PVT__operation_mul) 
                                            | (IData)(vlSelf->__PVT__operation_mulh)) 
                                           | (IData)(vlSelf->__PVT__operation_mulhsu)) 
                                          | (IData)(vlSelf->__PVT__operation_mulhu))
                                          ? VL_REDAND_II(2, (IData)(vlSelf->__PVT__fast_mul_counter))
                                          : (~ VL_REDOR_I((IData)(vlSelf->__PVT__cnt)))));
    vlSelf->__PVT__adder_tmp = (0x1ffffffffULL & (vlSelf->__PVT__adder_opa 
                                                  + vlSelf->__PVT__adder_opb));
    VL_CONCAT_WQI(65,33,32, __Vtemp_1, vlSelf->__PVT__adder_tmp, 
                  VL_SEL_IWII(65, vlSelf->__PVT__result, 0U, 0x20U));
    VL_ASSIGN_W(65,vlSelf->__PVT__result_tmp, __Vtemp_1);
}

VL_ATTR_COLD void Vaquila_top_muldiv___stl_sequent__TOP__aquila_top__core__Execute__MulDiv__2(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___stl_sequent__TOP__aquila_top__core__Execute__MulDiv__2\n"); );
    // Body
    vlSelf->__PVT__is_b_zero = (0U == vlSelf->__PVT__b_i);
    vlSelf->__PVT__is_b_neg = (VL_BITSEL_IIII(32, vlSelf->__PVT__b_i, 0x1fU) 
                               & (((IData)(vlSelf->__PVT__operation_mulh) 
                                   | (IData)(vlSelf->__PVT__operation_div)) 
                                  | (IData)(vlSelf->__PVT__operation_rem)));
    vlSelf->__PVT__is_a_zero = (0U == vlSelf->__PVT__a_i);
    vlSelf->__PVT__is_a_neg = (VL_BITSEL_IIII(32, vlSelf->__PVT__a_i, 0x1fU) 
                               & ((((IData)(vlSelf->__PVT__operation_mulh) 
                                    | (IData)(vlSelf->__PVT__operation_mulhsu)) 
                                   | (IData)(vlSelf->__PVT__operation_div)) 
                                  | (IData)(vlSelf->__PVT__operation_rem)));
    vlSelf->__PVT__op_b = ((IData)(vlSelf->__PVT__is_b_neg)
                            ? ([&]() {
                vlSelf->__Vfunc_abs__1__num = vlSelf->__PVT__b_i;
                vlSelf->__Vfunc_abs__1__Vfuncout = 
                    ((1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_abs__1__num, 0x1fU))
                      ? (- vlSelf->__Vfunc_abs__1__num)
                      : vlSelf->__Vfunc_abs__1__num);
            }(), vlSelf->__Vfunc_abs__1__Vfuncout) : vlSelf->__PVT__b_i);
    vlSelf->__PVT__S_nxt = ((0U == (IData)(vlSelf->__PVT__S))
                             ? ((IData)(vlSelf->__PVT__req_i)
                                 ? (((IData)(vlSelf->__PVT__is_a_zero) 
                                     | (IData)(vlSelf->__PVT__is_b_zero))
                                     ? 3U : 1U) : 0U)
                             : ((1U == (IData)(vlSelf->__PVT__S))
                                 ? ((IData)(vlSelf->__PVT__is_calc_done)
                                     ? 2U : 1U) : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__S))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->__PVT__S))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__stall_i)
                                                      ? 4U
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->__PVT__S))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__stall_i)
                                                       ? 4U
                                                       : 0U)
                                                      : 0U)))));
    vlSelf->__PVT__signed_adjust = ((IData)(vlSelf->__PVT__is_a_neg) 
                                    ^ (IData)(vlSelf->__PVT__is_b_neg));
    vlSelf->__PVT__mul_overflow = ((IData)(vlSelf->__PVT__is_a_neg) 
                                   & (0U == (0x7fffffffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__a_i, 0U, 0x1fU))));
    vlSelf->__PVT__op_a = ((IData)(vlSelf->__PVT__is_a_neg)
                            ? ([&]() {
                vlSelf->__Vfunc_abs__0__num = vlSelf->__PVT__a_i;
                vlSelf->__Vfunc_abs__0__Vfuncout = 
                    ((1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_abs__0__num, 0x1fU))
                      ? (- vlSelf->__Vfunc_abs__0__num)
                      : vlSelf->__Vfunc_abs__0__num);
            }(), vlSelf->__Vfunc_abs__0__Vfuncout) : vlSelf->__PVT__a_i);
}

VL_ATTR_COLD void Vaquila_top_muldiv___ctor_var_reset(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__req_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_sel_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__muldiv_result_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_mulh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_mulhu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_divu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_rem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_remu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_divider = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__op_a_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op_b_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fast_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__fast_mul_counter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mull = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mulh = VL_RAND_RESET_I(32);
    vlSelf->__PVT__quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__S_nxt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__mul_add = VL_RAND_RESET_I(1);
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
    vlSelf->__Vdly__fast_result = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__fast_mul_counter = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__op_a_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__op_b_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mul0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__mul1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->__Vdly__result);
    vlSelf->__Vdly__cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__reg32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__muldiv_result_o = VL_RAND_RESET_I(32);
}
