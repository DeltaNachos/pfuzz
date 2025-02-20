// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_divider.h"

VL_INLINE_OPT void Vfalco_top_divider___ico_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___ico_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0\n"); );
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

VL_INLINE_OPT void Vfalco_top_divider___act_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___act_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0\n"); );
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

VL_INLINE_OPT void Vfalco_top_divider___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__Vdly__result_valid_o = vlSelfRef.__PVT__result_valid_o;
    vlSelfRef.__Vdly__div_result_o = vlSelfRef.__PVT__div_result_o;
    vlSelfRef.__Vdly__cnt = vlSelfRef.__PVT__cnt;
    VL_ASSIGN_W(65,vlSelfRef.__Vdly__result, vlSelfRef.__PVT__result);
    vlSelfRef.__Vdly__ready_o = vlSelfRef.__PVT__ready_o;
    vlSelfRef.__Vdly__reg32 = vlSelfRef.__PVT__reg32;
    vlSelfRef.__Vdly__result_valid_o = (((3U == (IData)(vlSelfRef.__PVT__S)) 
                                         & (~ (IData)(vlSelfRef.__PVT__kill_i))) 
                                        | ((((4U == (IData)(vlSelfRef.__PVT__S)) 
                                             | (IData)(vlSelfRef.__PVT__stall_i)) 
                                            & (~ (IData)(vlSelfRef.__PVT__kill_i))) 
                                           & (IData)(vlSelfRef.__PVT__result_valid_o)));
    vlSelfRef.__Vdly__div_result_o = ((3U == (IData)(vlSelfRef.__PVT__S))
                                       ? ((VL_REPLICATE_IOI(1,
                                                            ((IData)(vlSelfRef.__PVT__operation_div) 
                                                             | (IData)(vlSelfRef.__PVT__operation_divu)), 0x20U) 
                                           & vlSelfRef.__PVT__quotient) 
                                          | (VL_REPLICATE_IOI(1,
                                                              ((IData)(vlSelfRef.__PVT__operation_rem) 
                                                               | (IData)(vlSelfRef.__PVT__operation_remu)), 0x20U) 
                                             & vlSelfRef.__PVT__remainder))
                                       : vlSelfRef.__PVT__div_result_o);
    vlSelfRef.__Vdly__ready_o = ((((3U == (IData)(vlSelfRef.__PVT__S)) 
                                   | (4U == (IData)(vlSelfRef.__PVT__S))) 
                                  | (5U == (IData)(vlSelfRef.__PVT__S))) 
                                 | ((0U == (IData)(vlSelfRef.__PVT__S)) 
                                    & (~ (IData)(vlSelfRef.__PVT__req_i))));
    if (((0U == (IData)(vlSelfRef.__PVT__S)) & (IData)(vlSelfRef.__PVT__req_i))) {
        if (vlSelfRef.__PVT__is_b_zero) {
            VL_CONCAT_WIQ(65,32,33, vlSelfRef.__Vdly__result, vlSelfRef.__PVT__a_i, 0xffffffffULL);
        } else {
            vlSelfRef.__Vdly__cnt = 0x20U;
            vlSelfRef.__Vdly__reg32 = vlSelfRef.__PVT__op_b;
            VL_EXTEND_WI(65,32, vlSelfRef.__Vdly__result, vlSelfRef.__PVT__op_a);
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__S))) {
        vlSelfRef.__Vdly__cnt = (0x3fU & ((IData)(vlSelfRef.__PVT__cnt) 
                                          - (IData)(1U)));
        VL_CONCAT_WQI(65,64,1, __Vtemp_1, VL_SEL_QWII(65, vlSelfRef.__PVT__result_tmp, 0U, 0x40U), 1U);
        VL_CONCAT_WQI(65,64,1, __Vtemp_2, VL_SEL_QWII(65, vlSelfRef.__PVT__result, 0U, 0x40U), 0U);
        VL_COND_WIWW(65, vlSelfRef.__Vdly__result, (IData)(vlSelfRef.__PVT__div_sub), __Vtemp_1, __Vtemp_2);
    } else if ((2U == (IData)(vlSelfRef.__PVT__S))) {
        VL_ASSIGNSEL_WI(65,32,0x21U, vlSelfRef.__Vdly__result, 
                        ((IData)(vlSelfRef.__PVT__is_a_neg)
                          ? (- vlSelfRef.__PVT__remainder)
                          : vlSelfRef.__PVT__remainder));
        VL_ASSIGNSEL_WI(65,32,0U, vlSelfRef.__Vdly__result, 
                        ((IData)(vlSelfRef.__PVT__signed_adjust)
                          ? (- vlSelfRef.__PVT__quotient)
                          : vlSelfRef.__PVT__quotient));
    } else {
        VL_ASSIGN_W(65,vlSelfRef.__Vdly__result, vlSelfRef.__PVT__result);
    }
    vlSelfRef.__PVT__result_valid_o = vlSelfRef.__Vdly__result_valid_o;
    vlSelfRef.__PVT__div_result_o = vlSelfRef.__Vdly__div_result_o;
    vlSelfRef.__PVT__ready_o = vlSelfRef.__Vdly__ready_o;
    vlSelfRef.__PVT__cnt = vlSelfRef.__Vdly__cnt;
    vlSelfRef.__PVT__reg32 = vlSelfRef.__Vdly__reg32;
    VL_ASSIGN_W(65,vlSelfRef.__PVT__result, vlSelfRef.__Vdly__result);
    vlSelfRef.__Vdly__S = vlSelfRef.__PVT__S;
    vlSelfRef.__PVT__is_calc_done = (1U & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__cnt))));
    vlSelfRef.__PVT__adder_opa = (0x1ffffffffULL & 
                                  (- VL_EXTEND_QI(33,32, vlSelfRef.__PVT__reg32)));
    vlSelfRef.__PVT__quotient = VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0U, 0x20U);
    vlSelfRef.__PVT__remainder = VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0x21U, 0x20U);
    vlSelfRef.__PVT__div_sub = (VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0x20U, 0x20U) 
                                >= vlSelfRef.__PVT__reg32);
    vlSelfRef.__PVT__adder_opb = VL_EXTEND_QI(33,32, 
                                              VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0x20U, 0x20U));
    vlSelfRef.__Vdly__S = ((IData)(vlSelfRef.__PVT__rst_i)
                            ? 0U : (IData)(vlSelfRef.__PVT__S_nxt));
    vlSelfRef.__PVT__adder_tmp = (0x1ffffffffULL & 
                                  (vlSelfRef.__PVT__adder_opa 
                                   + vlSelfRef.__PVT__adder_opb));
    vlSelfRef.__PVT__S = vlSelfRef.__Vdly__S;
    VL_CONCAT_WQI(65,33,32, vlSelfRef.__PVT__result_tmp, vlSelfRef.__PVT__adder_tmp, 
                  VL_SEL_IWII(65, vlSelfRef.__PVT__result, 0U, 0x20U));
}

VL_INLINE_OPT void Vfalco_top_divider___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__1(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__operation_divu = (1U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_remu = (3U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_div = (0U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_rem = (2U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__is_b_zero = (0U == vlSelfRef.__PVT__b_i);
    vlSelfRef.__PVT__is_b_neg = (VL_BITSEL_IIII(32, vlSelfRef.__PVT__b_i, 0x1fU) 
                                 & ((IData)(vlSelfRef.__PVT__operation_div) 
                                    | (IData)(vlSelfRef.__PVT__operation_rem)));
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

VL_INLINE_OPT void Vfalco_top_divider___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__2(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_a_zero = (0U == vlSelfRef.__PVT__a_i);
    vlSelfRef.__PVT__is_a_neg = (VL_BITSEL_IIII(32, vlSelfRef.__PVT__a_i, 0x1fU) 
                                 & ((IData)(vlSelfRef.__PVT__operation_div) 
                                    | (IData)(vlSelfRef.__PVT__operation_rem)));
    vlSelfRef.__PVT__signed_adjust = ((IData)(vlSelfRef.__PVT__is_a_neg) 
                                      ^ (IData)(vlSelfRef.__PVT__is_b_neg));
    vlSelfRef.__PVT__op_a = ((IData)(vlSelfRef.__PVT__is_a_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__0__num = vlSelfRef.__PVT__a_i;
                vlSelfRef.__Vfunc_abs__0__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__0__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__0__num)
                        : vlSelfRef.__Vfunc_abs__0__num);
            }(), vlSelfRef.__Vfunc_abs__0__Vfuncout)
                              : vlSelfRef.__PVT__a_i);
}

VL_INLINE_OPT void Vfalco_top_divider___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0(Vfalco_top_divider* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_divider___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv__0\n"); );
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
