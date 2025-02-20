// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_fast_mul.h"

VL_INLINE_OPT void Vfalco_top_fast_mul___ico_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0(Vfalco_top_fast_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_fast_mul___ico_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_b_neg = (VL_BITSEL_IIII(32, vlSelfRef.b_i, 0x1fU) 
                                 & (IData)(vlSelfRef.__PVT__operation_mulh_in));
    vlSelfRef.__PVT__is_a_neg = (VL_BITSEL_IIII(32, vlSelfRef.a_i, 0x1fU) 
                                 & ((IData)(vlSelfRef.__PVT__operation_mulh_in) 
                                    | (IData)(vlSelfRef.__PVT__operation_mulhsu_in)));
    vlSelfRef.__PVT__op_b = ((IData)(vlSelfRef.__PVT__is_b_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__1__num = vlSelfRef.b_i;
                vlSelfRef.__Vfunc_abs__1__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__1__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__1__num)
                        : vlSelfRef.__Vfunc_abs__1__num);
            }(), vlSelfRef.__Vfunc_abs__1__Vfuncout)
                              : vlSelfRef.b_i);
    vlSelfRef.__PVT__mul_overflow = ((IData)(vlSelfRef.__PVT__is_a_neg) 
                                     & (0U == (0x7fffffffU 
                                               & VL_SEL_IIII(32, vlSelfRef.a_i, 0U, 0x1fU))));
    vlSelfRef.__PVT__op_a = ((IData)(vlSelfRef.__PVT__is_a_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__0__num = vlSelfRef.a_i;
                vlSelfRef.__Vfunc_abs__0__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__0__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__0__num)
                        : vlSelfRef.__Vfunc_abs__0__num);
            }(), vlSelfRef.__Vfunc_abs__0__Vfuncout)
                              : vlSelfRef.a_i);
}

VL_INLINE_OPT void Vfalco_top_fast_mul___act_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0(Vfalco_top_fast_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_fast_mul___act_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_b_neg = (VL_BITSEL_IIII(32, vlSelfRef.b_i, 0x1fU) 
                                 & (IData)(vlSelfRef.__PVT__operation_mulh_in));
    vlSelfRef.__PVT__is_a_neg = (VL_BITSEL_IIII(32, vlSelfRef.a_i, 0x1fU) 
                                 & ((IData)(vlSelfRef.__PVT__operation_mulh_in) 
                                    | (IData)(vlSelfRef.__PVT__operation_mulhsu_in)));
    vlSelfRef.__PVT__op_b = ((IData)(vlSelfRef.__PVT__is_b_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__1__num = vlSelfRef.b_i;
                vlSelfRef.__Vfunc_abs__1__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__1__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__1__num)
                        : vlSelfRef.__Vfunc_abs__1__num);
            }(), vlSelfRef.__Vfunc_abs__1__Vfuncout)
                              : vlSelfRef.b_i);
    vlSelfRef.__PVT__mul_overflow = ((IData)(vlSelfRef.__PVT__is_a_neg) 
                                     & (0U == (0x7fffffffU 
                                               & VL_SEL_IIII(32, vlSelfRef.a_i, 0U, 0x1fU))));
    vlSelfRef.__PVT__op_a = ((IData)(vlSelfRef.__PVT__is_a_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__0__num = vlSelfRef.a_i;
                vlSelfRef.__Vfunc_abs__0__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__0__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__0__num)
                        : vlSelfRef.__Vfunc_abs__0__num);
            }(), vlSelfRef.__Vfunc_abs__0__Vfuncout)
                              : vlSelfRef.a_i);
}

VL_INLINE_OPT void Vfalco_top_fast_mul___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0(Vfalco_top_fast_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_fast_mul___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__mul0 = vlSelfRef.__PVT__mul0;
    vlSelfRef.__Vdly__mul1 = vlSelfRef.__PVT__mul1;
    vlSelfRef.__Vdly__fast_result = vlSelfRef.__PVT__fast_result;
    vlSelfRef.__Vdly__mul_p0 = vlSelfRef.__PVT__mul_p0;
    vlSelfRef.__Vdly__mul_p1 = vlSelfRef.__PVT__mul_p1;
    vlSelfRef.__Vdly__valid0 = vlSelfRef.__PVT__valid0;
    vlSelfRef.__Vdly__valid1 = vlSelfRef.__PVT__valid1;
    vlSelfRef.__Vdly__result_valid_o = vlSelfRef.__PVT__result_valid_o;
    vlSelfRef.__Vdly__mul_p2 = vlSelfRef.__PVT__mul_p2;
    if (vlSelfRef.__PVT__rst_i) {
        vlSelfRef.__Vdly__fast_result = 0ULL;
    } else if (vlSelfRef.__PVT__stall_i) {
        vlSelfRef.__Vdly__mul0 = vlSelfRef.__PVT__mul0;
        vlSelfRef.__Vdly__mul1 = vlSelfRef.__PVT__mul1;
        vlSelfRef.__Vdly__fast_result = vlSelfRef.__PVT__fast_result;
    } else {
        vlSelfRef.__Vdly__mul0 = (VL_EXTEND_QI(64,32, vlSelfRef.__PVT__op_a) 
                                  * VL_EXTEND_QI(64,32, vlSelfRef.__PVT__op_b));
        vlSelfRef.__Vdly__mul1 = vlSelfRef.__PVT__mul0;
        vlSelfRef.__Vdly__fast_result = vlSelfRef.__PVT__mul1;
    }
    if (((IData)(vlSelfRef.__PVT__rst_i) | (IData)(vlSelfRef.__PVT__kill_i))) {
        vlSelfRef.__Vdly__valid0 = 0U;
        vlSelfRef.__Vdly__valid1 = 0U;
        vlSelfRef.__Vdly__result_valid_o = 0U;
        vlSelfRef.__Vdly__mul_p0 = 0U;
        vlSelfRef.__Vdly__mul_p1 = 0U;
        vlSelfRef.__Vdly__mul_p2 = 0U;
    } else if (vlSelfRef.__PVT__stall_i) {
        vlSelfRef.__Vdly__valid0 = vlSelfRef.__PVT__valid0;
        vlSelfRef.__Vdly__valid1 = vlSelfRef.__PVT__valid1;
        vlSelfRef.__Vdly__result_valid_o = vlSelfRef.__PVT__result_valid_o;
        vlSelfRef.__Vdly__mul_p0 = vlSelfRef.__PVT__mul_p0;
        vlSelfRef.__Vdly__mul_p1 = vlSelfRef.__PVT__mul_p1;
        vlSelfRef.__Vdly__mul_p2 = vlSelfRef.__PVT__mul_p2;
    } else {
        vlSelfRef.__Vdly__valid0 = vlSelfRef.__PVT__req_i;
        vlSelfRef.__Vdly__valid1 = vlSelfRef.__PVT__valid0;
        vlSelfRef.__Vdly__result_valid_o = vlSelfRef.__PVT__valid1;
        vlSelfRef.__Vdly__mul_p0 = VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__operation_sel_i), (IData)(vlSelfRef.__PVT__is_a_neg)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__is_b_neg), (IData)(vlSelfRef.__PVT__mul_overflow)));
        vlSelfRef.__Vdly__mul_p1 = vlSelfRef.__PVT__mul_p0;
        vlSelfRef.__Vdly__mul_p2 = vlSelfRef.__PVT__mul_p1;
    }
    vlSelfRef.__PVT__mul0 = vlSelfRef.__Vdly__mul0;
    vlSelfRef.__PVT__mul1 = vlSelfRef.__Vdly__mul1;
    vlSelfRef.__PVT__fast_result = vlSelfRef.__Vdly__fast_result;
    vlSelfRef.__PVT__mul_p0 = vlSelfRef.__Vdly__mul_p0;
    vlSelfRef.__PVT__mul_p1 = vlSelfRef.__Vdly__mul_p1;
    vlSelfRef.__PVT__valid0 = vlSelfRef.__Vdly__valid0;
    vlSelfRef.__PVT__valid1 = vlSelfRef.__Vdly__valid1;
    vlSelfRef.__PVT__result_valid_o = vlSelfRef.__Vdly__result_valid_o;
    vlSelfRef.__PVT__mul_p2 = vlSelfRef.__Vdly__mul_p2;
    vlSelfRef.__PVT__early_wake_up_o = vlSelfRef.__PVT__valid1;
    vlSelfRef.__PVT__ready_o = (1U & (~ (((IData)(vlSelfRef.__PVT__valid0) 
                                          | (IData)(vlSelfRef.__PVT__valid1)) 
                                         | (IData)(vlSelfRef.__PVT__result_valid_o))));
    vlSelfRef.__PVT__operation_mul_final = (0U == (3U 
                                                   & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__mul_p2), 3U, 2U)));
    vlSelfRef.__PVT__signed_adjust_final = (1U & (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__mul_p2), 2U) 
                                                  ^ 
                                                  VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__mul_p2), 1U)));
    vlSelfRef.__PVT__operation_mulh_final = (1U == 
                                             (3U & 
                                              VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__mul_p2), 3U, 2U)));
    vlSelfRef.__PVT__operation_mulhsu_final = (2U == 
                                               (3U 
                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__mul_p2), 3U, 2U)));
    vlSelfRef.__PVT__operation_mulhu_final = (3U == 
                                              (3U & 
                                               VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__mul_p2), 3U, 2U)));
    vlSelfRef.__PVT__result = (((IData)(vlSelfRef.__PVT__operation_mulh_final) 
                                | (IData)(vlSelfRef.__PVT__operation_mulhu_final))
                                ? ((IData)(vlSelfRef.__PVT__signed_adjust_final)
                                    ? (- vlSelfRef.__PVT__fast_result)
                                    : vlSelfRef.__PVT__fast_result)
                                : ((IData)(vlSelfRef.__PVT__operation_mulhsu_final)
                                    ? ((1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__mul_p2), 2U))
                                        ? (- vlSelfRef.__PVT__fast_result)
                                        : vlSelfRef.__PVT__fast_result)
                                    : vlSelfRef.__PVT__fast_result));
    vlSelfRef.__PVT__mull = VL_SEL_IQII(64, vlSelfRef.__PVT__result, 0U, 0x20U);
    vlSelfRef.__PVT__mulh = VL_SEL_IQII(64, vlSelfRef.__PVT__result, 0x20U, 0x20U);
    vlSelfRef.__PVT__mul_result_o = ((VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__operation_mul_final), 0x20U) 
                                      & vlSelfRef.__PVT__mull) 
                                     | (VL_REPLICATE_IOI(1,
                                                         (((IData)(vlSelfRef.__PVT__operation_mulh_final) 
                                                           | (IData)(vlSelfRef.__PVT__operation_mulhsu_final)) 
                                                          | (IData)(vlSelfRef.__PVT__operation_mulhu_final)), 0x20U) 
                                        & vlSelfRef.__PVT__mulh));
}

VL_INLINE_OPT void Vfalco_top_fast_mul___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__1(Vfalco_top_fast_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_fast_mul___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__operation_mul_in = (0U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_mulhu_in = (3U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_mulhsu_in = (2U == (IData)(vlSelfRef.__PVT__operation_sel_i));
    vlSelfRef.__PVT__operation_mulh_in = (1U == (IData)(vlSelfRef.__PVT__operation_sel_i));
}

VL_INLINE_OPT void Vfalco_top_fast_mul___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0(Vfalco_top_fast_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_fast_mul___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__imul__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_b_neg = (VL_BITSEL_IIII(32, vlSelfRef.b_i, 0x1fU) 
                                 & (IData)(vlSelfRef.__PVT__operation_mulh_in));
    vlSelfRef.__PVT__is_a_neg = (VL_BITSEL_IIII(32, vlSelfRef.a_i, 0x1fU) 
                                 & ((IData)(vlSelfRef.__PVT__operation_mulh_in) 
                                    | (IData)(vlSelfRef.__PVT__operation_mulhsu_in)));
    vlSelfRef.__PVT__op_b = ((IData)(vlSelfRef.__PVT__is_b_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__1__num = vlSelfRef.b_i;
                vlSelfRef.__Vfunc_abs__1__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__1__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__1__num)
                        : vlSelfRef.__Vfunc_abs__1__num);
            }(), vlSelfRef.__Vfunc_abs__1__Vfuncout)
                              : vlSelfRef.b_i);
    vlSelfRef.__PVT__mul_overflow = ((IData)(vlSelfRef.__PVT__is_a_neg) 
                                     & (0U == (0x7fffffffU 
                                               & VL_SEL_IIII(32, vlSelfRef.a_i, 0U, 0x1fU))));
    vlSelfRef.__PVT__op_a = ((IData)(vlSelfRef.__PVT__is_a_neg)
                              ? ([&]() {
                vlSelfRef.__Vfunc_abs__0__num = vlSelfRef.a_i;
                vlSelfRef.__Vfunc_abs__0__Vfuncout 
                    = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_abs__0__num, 0x1fU))
                        ? (- vlSelfRef.__Vfunc_abs__0__num)
                        : vlSelfRef.__Vfunc_abs__0__num);
            }(), vlSelfRef.__Vfunc_abs__0__Vfuncout)
                              : vlSelfRef.a_i);
}
