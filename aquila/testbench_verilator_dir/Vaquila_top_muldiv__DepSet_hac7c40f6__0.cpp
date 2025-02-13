// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_muldiv.h"

VL_INLINE_OPT void Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__0(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    CData/*31:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    // Body
    vlSelf->__Vdly__mul1 = vlSelf->__PVT__mul1;
    vlSelf->__Vdly__mul0 = vlSelf->__PVT__mul0;
    vlSelf->__Vdly__op_b_r = vlSelf->__PVT__op_b_r;
    vlSelf->__Vdly__op_a_r = vlSelf->__PVT__op_a_r;
    vlSelf->__Vdly__fast_mul_counter = vlSelf->__PVT__fast_mul_counter;
    vlSelf->__Vdly__muldiv_result_o = vlSelf->__PVT__muldiv_result_o;
    vlSelf->__Vdly__cnt = vlSelf->__PVT__cnt;
    VL_ASSIGN_W(65,vlSelf->__Vdly__result, vlSelf->__PVT__result);
    vlSelf->__Vdly__ready_o = vlSelf->__PVT__ready_o;
    vlSelf->__Vdly__reg32 = vlSelf->__PVT__reg32;
    vlSelf->__Vdly__muldiv_result_o = ((3U == (IData)(vlSelf->__PVT__S))
                                        ? ((((VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_mul), 0x20U) 
                                              & vlSelf->__PVT__mull) 
                                             | (VL_REPLICATE_IOI(1,
                                                                 (((IData)(vlSelf->__PVT__operation_mulh) 
                                                                   | (IData)(vlSelf->__PVT__operation_mulhsu)) 
                                                                  | (IData)(vlSelf->__PVT__operation_mulhu)), 0x20U) 
                                                & vlSelf->__PVT__mulh)) 
                                            | (VL_REPLICATE_IOI(1,
                                                                ((IData)(vlSelf->__PVT__operation_div) 
                                                                 | (IData)(vlSelf->__PVT__operation_divu)), 0x20U) 
                                               & vlSelf->__PVT__quotient)) 
                                           | (VL_REPLICATE_IOI(1,
                                                               ((IData)(vlSelf->__PVT__operation_rem) 
                                                                | (IData)(vlSelf->__PVT__operation_remu)), 0x20U) 
                                              & vlSelf->__PVT__remainder))
                                        : vlSelf->__PVT__muldiv_result_o);
    vlSelf->__Vdly__ready_o = ((3U == (IData)(vlSelf->__PVT__S)) 
                               | (4U == (IData)(vlSelf->__PVT__S)));
    if (((0U == (IData)(vlSelf->__PVT__S)) & (IData)(vlSelf->__PVT__req_i))) {
        if (vlSelf->__PVT__is_divider) {
            if (vlSelf->__PVT__is_b_zero) {
                VL_CONCAT_WIQ(65,32,33, __Vtemp_1, vlSelf->__PVT__a_i, 0xffffffffULL);
                VL_ASSIGN_W(65,vlSelf->__Vdly__result, __Vtemp_1);
            } else {
                vlSelf->__Vdly__cnt = 0x20U;
                vlSelf->__Vdly__reg32 = vlSelf->__PVT__op_b;
                VL_EXTEND_WI(65,32, __Vtemp_2, vlSelf->__PVT__op_a);
                VL_ASSIGN_W(65,vlSelf->__Vdly__result, __Vtemp_2);
            }
        } else if (((IData)(vlSelf->__PVT__is_a_zero) 
                    | (IData)(vlSelf->__PVT__is_b_zero))) {
            VL_CONST_W_1X(65,vlSelf->__Vdly__result,0x00000000);
        } else {
            vlSelf->__Vdly__cnt = 0x1fU;
            vlSelf->__Vdly__reg32 = vlSelf->__PVT__op_a;
            VL_EXTEND_WI(65,32, __Vtemp_3, vlSelf->__PVT__op_b);
            VL_ASSIGN_W(65,vlSelf->__Vdly__result, __Vtemp_3);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__S))) {
        vlSelf->__Vdly__cnt = (0x3fU & ((IData)(vlSelf->__PVT__cnt) 
                                        - (IData)(1U)));
        VL_CONCAT_WQI(65,64,1, __Vtemp_4, VL_SEL_QWII(65, vlSelf->__PVT__result_tmp, 0U, 0x40U), 1U);
        VL_CONCAT_WQI(65,64,1, __Vtemp_5, VL_SEL_QWII(65, vlSelf->__PVT__result, 0U, 0x40U), 0U);
        VL_COND_WIWW(65, __Vtemp_6, (IData)(vlSelf->__PVT__div_sub), __Vtemp_4, __Vtemp_5);
        VL_EXTEND_WQ(65,64, __Vtemp_7, VL_SEL_QWII(65, vlSelf->__PVT__result_tmp, 1U, 0x40U));
        VL_EXTEND_WQ(65,64, __Vtemp_8, VL_SEL_QWII(65, vlSelf->__PVT__result, 1U, 0x40U));
        VL_COND_WIWW(65, __Vtemp_9, (IData)(vlSelf->__PVT__mul_add), __Vtemp_7, __Vtemp_8);
        VL_COND_WIWW(65, __Vtemp_10, (IData)(vlSelf->__PVT__is_divider), __Vtemp_6, __Vtemp_9);
        VL_ASSIGN_W(65,vlSelf->__Vdly__result, __Vtemp_10);
    } else if ((2U == (IData)(vlSelf->__PVT__S))) {
        if (vlSelf->__PVT__is_divider) {
            VL_ASSIGNSEL_WI(65,32,0x21U, vlSelf->__Vdly__result, 
                            ((IData)(vlSelf->__PVT__is_a_neg)
                              ? (- vlSelf->__PVT__remainder)
                              : vlSelf->__PVT__remainder));
            VL_ASSIGNSEL_WI(65,32,0U, vlSelf->__Vdly__result, 
                            ((IData)(vlSelf->__PVT__signed_adjust)
                              ? (- vlSelf->__PVT__quotient)
                              : vlSelf->__PVT__quotient));
        } else {
            VL_CONST_W_3X(96,__Vtemp_11,0x00000001,0xffffffff,0xffffffff);
            VL_EXTEND_WQ(65,64, __Vtemp_12, vlSelf->__PVT__fast_result);
            VL_NEGATE_W(3, __Vtemp_13, __Vtemp_12);
            VL_EXTEND_WQ(65,64, __Vtemp_14, vlSelf->__PVT__fast_result);
            VL_COND_WIWW(65, __Vtemp_15, (IData)(vlSelf->__PVT__signed_adjust), __Vtemp_13, __Vtemp_14);
            VL_EXTEND_WQ(65,64, __Vtemp_16, vlSelf->__PVT__fast_result);
            VL_NEGATE_W(3, __Vtemp_17, __Vtemp_16);
            VL_EXTEND_WQ(65,64, __Vtemp_18, vlSelf->__PVT__fast_result);
            VL_COND_WIWW(65, __Vtemp_19, (IData)(vlSelf->__PVT__is_a_neg), __Vtemp_17, __Vtemp_18);
            VL_EXTEND_WQ(65,64, __Vtemp_20, vlSelf->__PVT__fast_result);
            VL_COND_WIWW(65, __Vtemp_21, (IData)(vlSelf->__PVT__operation_mulhsu), __Vtemp_19, __Vtemp_20);
            __Vtemp_22 = ((IData)(vlSelf->__PVT__operation_mulh) 
                          | (IData)(vlSelf->__PVT__operation_mulhu));
            VL_COND_WIWW(65, __Vtemp_23, __Vtemp_22, __Vtemp_15, __Vtemp_21);
            VL_AND_W(3, __Vtemp_24, __Vtemp_11, __Vtemp_23);
            VL_ASSIGN_W(65,vlSelf->__Vdly__result, __Vtemp_24);
        }
    }
    vlSelf->__PVT__muldiv_result_o = vlSelf->__Vdly__muldiv_result_o;
    vlSelf->__PVT__ready_o = vlSelf->__Vdly__ready_o;
    vlSelf->__PVT__cnt = vlSelf->__Vdly__cnt;
    vlSelf->__PVT__reg32 = vlSelf->__Vdly__reg32;
    VL_ASSIGN_W(65,vlSelf->__PVT__result, vlSelf->__Vdly__result);
    vlSelf->__Vdly__fast_result = vlSelf->__PVT__fast_result;
    vlSelf->__PVT__mull = VL_SEL_IWII(65, vlSelf->__PVT__result, 0U, 0x20U);
    vlSelf->__PVT__mulh = VL_SEL_IWII(65, vlSelf->__PVT__result, 0x20U, 0x20U);
    vlSelf->__PVT__quotient = VL_SEL_IWII(65, vlSelf->__PVT__result, 0U, 0x20U);
    vlSelf->__PVT__remainder = VL_SEL_IWII(65, vlSelf->__PVT__result, 0x21U, 0x20U);
    vlSelf->__PVT__mul_add = (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__result, 0U));
    vlSelf->__PVT__div_sub = (VL_SEL_IWII(65, vlSelf->__PVT__result, 0x20U, 0x20U) 
                              >= vlSelf->__PVT__reg32);
    vlSelf->__PVT__adder_opb = VL_EXTEND_QI(33,32, 
                                            VL_SEL_IWII(65, vlSelf->__PVT__result, 0x20U, 0x20U));
    if (((IData)(vlSelf->__PVT__rst_i) | ((0U == (IData)(vlSelf->__PVT__S)) 
                                          & (IData)(vlSelf->__PVT__req_i)))) {
        vlSelf->__Vdly__fast_result = 0ULL;
        vlSelf->__Vdly__fast_mul_counter = 0U;
    } else {
        vlSelf->__Vdly__op_a_r = vlSelf->__PVT__op_a;
        vlSelf->__Vdly__op_b_r = vlSelf->__PVT__op_b;
        vlSelf->__Vdly__mul0 = (VL_EXTEND_QI(64,32, vlSelf->__PVT__op_a_r) 
                                * VL_EXTEND_QI(64,32, vlSelf->__PVT__op_b_r));
        vlSelf->__Vdly__mul1 = vlSelf->__PVT__mul0;
        vlSelf->__Vdly__fast_result = vlSelf->__PVT__mul1;
        vlSelf->__Vdly__fast_mul_counter = (3U & VL_SEL_IIII(32, 
                                                             (VL_REDAND_II(2, (IData)(vlSelf->__PVT__fast_mul_counter))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__fast_mul_counter))
                                                               : 
                                                              ((IData)(1U) 
                                                               + 
                                                               VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__fast_mul_counter)))), 0U, 2U));
    }
    vlSelf->__PVT__fast_result = vlSelf->__Vdly__fast_result;
    vlSelf->__PVT__op_a_r = vlSelf->__Vdly__op_a_r;
    vlSelf->__PVT__op_b_r = vlSelf->__Vdly__op_b_r;
    vlSelf->__PVT__mul0 = vlSelf->__Vdly__mul0;
    vlSelf->__PVT__mul1 = vlSelf->__Vdly__mul1;
    vlSelf->__PVT__fast_mul_counter = vlSelf->__Vdly__fast_mul_counter;
    vlSelf->__Vdly__S = vlSelf->__PVT__S;
    vlSelf->__Vdly__S = ((IData)(vlSelf->__PVT__rst_i)
                          ? 0U : (IData)(vlSelf->__PVT__S_nxt));
    vlSelf->__PVT__S = vlSelf->__Vdly__S;
}

VL_INLINE_OPT void Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__1(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__1\n"); );
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
}

VL_INLINE_OPT void Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__0(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
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

VL_INLINE_OPT void Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__1(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__1\n"); );
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

VL_INLINE_OPT void Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__2(Vaquila_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__2\n"); );
    // Body
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
}
