// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_alu.h"

VL_INLINE_OPT void Vrv32im_top_riscv_alu___nba_comb__TOP__rv32im_top__core__u_exec__u_alu__0(Vrv32im_top_riscv_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_alu___nba_comb__TOP__rv32im_top__core__u_exec__u_alu__0\n"); );
    // Body
    vlSelf->__PVT__sub_res_w = (vlSelf->__PVT__alu_a_i 
                                - vlSelf->__PVT__alu_b_i);
    vlSelf->__PVT__shift_right_fill_r = 0U;
    vlSelf->__PVT__shift_right_1_r = 0U;
    vlSelf->__PVT__shift_right_2_r = 0U;
    vlSelf->__PVT__shift_right_4_r = 0U;
    vlSelf->__PVT__shift_right_8_r = 0U;
    vlSelf->__PVT__shift_left_1_r = 0U;
    vlSelf->__PVT__shift_left_2_r = 0U;
    vlSelf->__PVT__shift_left_4_r = 0U;
    vlSelf->__PVT__shift_left_8_r = 0U;
    if (((((((((1U == (IData)(vlSelf->__PVT__alu_op_i)) 
               | ((2U == (IData)(vlSelf->__PVT__alu_op_i)) 
                  | (3U == (IData)(vlSelf->__PVT__alu_op_i)))) 
              | (4U == (IData)(vlSelf->__PVT__alu_op_i))) 
             | (6U == (IData)(vlSelf->__PVT__alu_op_i))) 
            | (7U == (IData)(vlSelf->__PVT__alu_op_i))) 
           | (8U == (IData)(vlSelf->__PVT__alu_op_i))) 
          | (9U == (IData)(vlSelf->__PVT__alu_op_i))) 
         | (0xaU == (IData)(vlSelf->__PVT__alu_op_i)))) {
        if ((1U == (IData)(vlSelf->__PVT__alu_op_i))) {
            vlSelf->__PVT__shift_left_1_r = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 0U))
                                              ? VL_CONCAT_III(32,31,1, 
                                                              (0x7fffffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__alu_a_i, 0U, 0x1fU)), 0U)
                                              : vlSelf->__PVT__alu_a_i);
            vlSelf->__PVT__shift_left_2_r = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 1U))
                                              ? VL_CONCAT_III(32,30,2, 
                                                              (0x3fffffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__shift_left_1_r, 0U, 0x1eU)), 0U)
                                              : vlSelf->__PVT__shift_left_1_r);
            vlSelf->__PVT__shift_left_4_r = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 2U))
                                              ? VL_CONCAT_III(32,28,4, 
                                                              (0xfffffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__shift_left_2_r, 0U, 0x1cU)), 0U)
                                              : vlSelf->__PVT__shift_left_2_r);
            vlSelf->__PVT__shift_left_8_r = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 3U))
                                              ? VL_CONCAT_III(32,24,8, 
                                                              (0xffffffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__shift_left_4_r, 0U, 0x18U)), 0U)
                                              : vlSelf->__PVT__shift_left_4_r);
            vlSelf->__PVT__result_r = ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 4U))
                                        ? VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__shift_left_8_r, 0U, 0x10U)), 0U)
                                        : vlSelf->__PVT__shift_left_8_r);
        } else if (((2U == (IData)(vlSelf->__PVT__alu_op_i)) 
                    | (3U == (IData)(vlSelf->__PVT__alu_op_i)))) {
            vlSelf->__PVT__shift_right_fill_r = ((VL_BITSEL_IIII(32, vlSelf->__PVT__alu_a_i, 0x1fU) 
                                                  & (3U 
                                                     == (IData)(vlSelf->__PVT__alu_op_i)))
                                                  ? 0xffffU
                                                  : 0U);
            vlSelf->__PVT__shift_right_1_r = ((1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 0U))
                                               ? VL_CONCAT_III(32,1,31, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__shift_right_fill_r), 0xfU)), 
                                                               (0x7fffffffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__alu_a_i, 1U, 0x1fU)))
                                               : vlSelf->__PVT__alu_a_i);
            vlSelf->__PVT__shift_right_2_r = ((1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 1U))
                                               ? VL_CONCAT_III(32,2,30, 
                                                               (3U 
                                                                & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__shift_right_fill_r), 0xeU, 2U)), 
                                                               (0x3fffffffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__shift_right_1_r, 2U, 0x1eU)))
                                               : vlSelf->__PVT__shift_right_1_r);
            vlSelf->__PVT__shift_right_4_r = ((1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 2U))
                                               ? VL_CONCAT_III(32,4,28, 
                                                               (0xfU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__shift_right_fill_r), 0xcU, 4U)), 
                                                               (0xfffffffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__shift_right_2_r, 4U, 0x1cU)))
                                               : vlSelf->__PVT__shift_right_2_r);
            vlSelf->__PVT__shift_right_8_r = ((1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 3U))
                                               ? VL_CONCAT_III(32,8,24, 
                                                               (0xffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__shift_right_fill_r), 8U, 8U)), 
                                                               (0xffffffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__shift_right_4_r, 8U, 0x18U)))
                                               : vlSelf->__PVT__shift_right_4_r);
            vlSelf->__PVT__result_r = ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 4U))
                                        ? VL_CONCAT_III(32,16,16, (IData)(vlSelf->__PVT__shift_right_fill_r), 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__shift_right_8_r, 0x10U, 0x10U)))
                                        : vlSelf->__PVT__shift_right_8_r);
        } else {
            vlSelf->__PVT__result_r = ((4U == (IData)(vlSelf->__PVT__alu_op_i))
                                        ? (vlSelf->__PVT__alu_a_i 
                                           + vlSelf->__PVT__alu_b_i)
                                        : ((6U == (IData)(vlSelf->__PVT__alu_op_i))
                                            ? vlSelf->__PVT__sub_res_w
                                            : ((7U 
                                                == (IData)(vlSelf->__PVT__alu_op_i))
                                                ? (vlSelf->__PVT__alu_a_i 
                                                   & vlSelf->__PVT__alu_b_i)
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->__PVT__alu_op_i))
                                                    ? 
                                                   (vlSelf->__PVT__alu_a_i 
                                                    | vlSelf->__PVT__alu_b_i)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__alu_op_i))
                                                     ? 
                                                    (vlSelf->__PVT__alu_a_i 
                                                     ^ vlSelf->__PVT__alu_b_i)
                                                     : 
                                                    ((vlSelf->__PVT__alu_a_i 
                                                      < vlSelf->__PVT__alu_b_i)
                                                      ? 1U
                                                      : 0U))))));
        }
    } else {
        vlSelf->__PVT__result_r = ((0xbU == (IData)(vlSelf->__PVT__alu_op_i))
                                    ? (((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_a_i, 0x1fU)) 
                                        != (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_b_i, 0x1fU)))
                                        ? ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_a_i, 0x1fU))
                                            ? 1U : 0U)
                                        : ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sub_res_w, 0x1fU))
                                            ? 1U : 0U))
                                    : vlSelf->__PVT__alu_a_i);
    }
    vlSelf->__PVT__alu_p_o = vlSelf->__PVT__result_r;
}
