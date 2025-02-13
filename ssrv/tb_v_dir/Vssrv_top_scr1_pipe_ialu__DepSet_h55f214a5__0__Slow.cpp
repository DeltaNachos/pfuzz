// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_ialu.h"

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0(Vssrv_top_scr1_pipe_ialu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0\n"); );
    // Body
    vlSelf->__PVT__mul_op1 = 0ULL;
    vlSelf->__PVT__mul_op2 = 0ULL;
    vlSelf->__PVT__mul_res = 0ULL;
    if ((1U == (IData)(vlSelf->__PVT__mdu_cmd))) {
        vlSelf->__PVT__mul_op1 = VL_CONCAT_QII(33,1,32, 
                                               (1U 
                                                & ((~ 
                                                    VL_REDAND_II(2, (IData)(vlSelf->__PVT__mul_cmd))) 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU))), vlSelf->__PVT__ialu_op1);
        vlSelf->__PVT__mul_op2 = VL_CONCAT_QII(33,1,32, 
                                               (1U 
                                                & ((~ 
                                                    VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mul_cmd), 1U)) 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op2, 0x1fU))), vlSelf->__PVT__ialu_op2);
        vlSelf->__PVT__mul_res = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, vlSelf->__PVT__mul_op1), 
                                             VL_EXTENDS_QQ(64,33, vlSelf->__PVT__mul_op2));
    }
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1(Vssrv_top_scr1_pipe_ialu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1\n"); );
    // Body
    vlSelf->__PVT__shft_op1 = vlSelf->__PVT__ialu_op1;
    vlSelf->__PVT__shft_op2 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__ialu_op2, 0U, 5U));
    vlSelf->__PVT__shft_res = ((2U == (IData)(vlSelf->__PVT__shft_cmd))
                                ? (vlSelf->__PVT__shft_op1 
                                   >> (IData)(vlSelf->__PVT__shft_op2))
                                : ((3U == (IData)(vlSelf->__PVT__shft_cmd))
                                    ? VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__shft_op1, (IData)(vlSelf->__PVT__shft_op2))
                                    : (vlSelf->__PVT__shft_op1 
                                       << (IData)(vlSelf->__PVT__shft_op2))));
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__2(Vssrv_top_scr1_pipe_ialu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__2\n"); );
    // Body
    vlSelf->__PVT__sum1_sub = (4U != (IData)(vlSelf->__PVT__ialu_cmd));
    vlSelf->__PVT__sum1_op1 = vlSelf->__PVT__ialu_op1;
    vlSelf->__PVT__sum1_op2 = vlSelf->__PVT__ialu_op2;
    if ((2U == (IData)(vlSelf->__PVT__mdu_cmd))) {
        if (((0U == (IData)(vlSelf->__PVT__curr_state)) 
             | (1U == (IData)(vlSelf->__PVT__curr_state)))) {
            vlSelf->__PVT__sum1_sub = 1U;
            vlSelf->__PVT__sum1_op1 = ((0U == (IData)(vlSelf->__PVT__curr_state))
                                        ? 0x1fU : VL_EXTENDS_II(32,6, 
                                                                VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT__cnt_res_reg))));
            vlSelf->__PVT__sum1_op2 = 1U;
        } else if ((2U == (IData)(vlSelf->__PVT__curr_state))) {
            vlSelf->__PVT__sum1_sub = 1U;
            vlSelf->__PVT__sum1_op1 = 0U;
            vlSelf->__PVT__sum1_op2 = vlSelf->__PVT__res32_2_reg;
        }
    }
    vlSelf->__PVT__sum1_res = (0x1ffffffffULL & ((IData)(vlSelf->__PVT__sum1_sub)
                                                  ? 
                                                 (VL_EXTEND_QI(33,32, vlSelf->__PVT__sum1_op1) 
                                                  - 
                                                  VL_EXTEND_QI(33,32, vlSelf->__PVT__sum1_op2))
                                                  : 
                                                 (VL_EXTEND_QI(33,32, vlSelf->__PVT__sum1_op1) 
                                                  + 
                                                  VL_EXTEND_QI(33,32, vlSelf->__PVT__sum1_op2))));
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__sum1_flags, 
                    (1U & VL_BITSEL_IQII(33, vlSelf->__PVT__sum1_res, 0x20U)));
    VL_ASSIGNBIT_II(3U, vlSelf->__PVT__sum1_flags, 
                    (1U & (~ VL_REDOR_I(VL_SEL_IQII(33, vlSelf->__PVT__sum1_res, 0U, 0x20U)))));
    VL_ASSIGNBIT_II(2U, vlSelf->__PVT__sum1_flags, 
                    (1U & VL_BITSEL_IQII(33, vlSelf->__PVT__sum1_res, 0x1fU)));
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__sum1_flags, 
                    (1U & ((((~ VL_BITSEL_IIII(32, vlSelf->__PVT__sum1_op1, 0x1fU)) 
                             & VL_BITSEL_IIII(32, vlSelf->__PVT__sum1_op2, 0x1fU)) 
                            & VL_BITSEL_IQII(33, vlSelf->__PVT__sum1_res, 0x1fU)) 
                           | ((VL_BITSEL_IIII(32, vlSelf->__PVT__sum1_op1, 0x1fU) 
                               & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__sum1_op2, 0x1fU))) 
                              & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__sum1_res, 0x1fU))))));
    vlSelf->__PVT__cnt_res = (0x1fU & VL_SEL_IQII(33, vlSelf->__PVT__sum1_res, 0U, 5U));
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__3(Vssrv_top_scr1_pipe_ialu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__3\n"); );
    // Body
    vlSelf->__PVT__sum2_sub = 0U;
    vlSelf->__PVT__sum2_op1 = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__ialu_sum2_op1));
    vlSelf->__PVT__sum2_op2 = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__ialu_sum2_op2));
    if ((2U == (IData)(vlSelf->__PVT__mdu_cmd))) {
        if (((0U == (IData)(vlSelf->__PVT__curr_state)) 
             | (1U == (IData)(vlSelf->__PVT__curr_state)))) {
            vlSelf->__PVT__unnamedblk1__DOT__sgn = 
                ((0U != (IData)(vlSelf->__PVT__curr_state)) 
                 & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__res32_2_reg, 0U)));
            vlSelf->__PVT__unnamedblk1__DOT__inv = 
                (1U & ((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                       & (VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU) 
                          ^ VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op2, 0x1fU))));
            vlSelf->__PVT__sum2_sub = (1U & ((~ (IData)(vlSelf->__PVT__unnamedblk1__DOT__inv)) 
                                             ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__sgn)));
            vlSelf->__PVT__sum2_op1 = (0x1ffffffffULL 
                                       & ((0U == (IData)(vlSelf->__PVT__curr_state))
                                           ? VL_EXTENDS_QI(33,2, 
                                                           VL_CONCAT_III(2,1,1, 
                                                                         (1U 
                                                                          & ((~ 
                                                                              VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU))), 
                                                                         (1U 
                                                                          & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU))))
                                           : VL_CONCAT_QII(33,32,1, vlSelf->__PVT__res32_1_reg, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(32, vlSelf->__PVT__res32_3_reg, 0x1fU)))));
            vlSelf->__PVT__sum2_op2 = VL_CONCAT_QII(33,1,32, 
                                                    (1U 
                                                     & ((~ 
                                                         VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op2, 0x1fU))), vlSelf->__PVT__ialu_op2);
        } else if ((2U == (IData)(vlSelf->__PVT__curr_state))) {
            vlSelf->__PVT__unnamedblk2__DOT__sgn = 
                (1U & (((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                        & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU)) 
                       ^ (IData)(vlSelf->__PVT__res32_1_c_reg)));
            vlSelf->__PVT__unnamedblk2__DOT__inv = 
                (1U & ((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                       & (VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU) 
                          ^ VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op2, 0x1fU))));
            vlSelf->__PVT__sum2_sub = (1U & ((~ (IData)(vlSelf->__PVT__unnamedblk2__DOT__inv)) 
                                             ^ (IData)(vlSelf->__PVT__unnamedblk2__DOT__sgn)));
            vlSelf->__PVT__sum2_op1 = VL_EXTEND_QI(33,32, vlSelf->__PVT__res32_1_reg);
            vlSelf->__PVT__sum2_op2 = VL_CONCAT_QII(33,1,32, 
                                                    (1U 
                                                     & ((~ 
                                                         VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op2, 0x1fU))), vlSelf->__PVT__ialu_op2);
        }
    }
    vlSelf->__PVT__sum2_res = (0x1ffffffffULL & ((IData)(vlSelf->__PVT__sum2_sub)
                                                  ? 
                                                 (vlSelf->__PVT__sum2_op1 
                                                  - vlSelf->__PVT__sum2_op2)
                                                  : 
                                                 (vlSelf->__PVT__sum2_op1 
                                                  + vlSelf->__PVT__sum2_op2)));
    vlSelf->__PVT__ialu_sum2_res = VL_SEL_IQII(33, vlSelf->__PVT__sum2_res, 0U, 0x20U);
    vlSelf->__PVT__res32_1_c = 0U;
    vlSelf->__PVT__res32_1 = 0U;
    vlSelf->__PVT__res32_2 = 0U;
    vlSelf->__PVT__res32_3 = 0U;
    if ((2U == (IData)(vlSelf->__PVT__mdu_cmd))) {
        if (((0U == (IData)(vlSelf->__PVT__curr_state)) 
             | (1U == (IData)(vlSelf->__PVT__curr_state)))) {
            vlSelf->__PVT__unnamedblk3__DOT__prev_low 
                = (0x7fffffffU & ((0U == (IData)(vlSelf->__PVT__curr_state))
                                   ? VL_SEL_IIII(32, vlSelf->__PVT__ialu_op1, 0U, 0x1fU)
                                   : VL_SEL_IIII(32, vlSelf->__PVT__res32_3_reg, 0U, 0x1fU)));
            vlSelf->__PVT__unnamedblk3__DOT__quo = 
                (1U & ((~ (((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                            & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU)) 
                           ^ VL_BITSEL_IQII(33, vlSelf->__PVT__sum2_res, 0x20U))) 
                       | (((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                           & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU)) 
                          & (~ (VL_REDOR_Q(vlSelf->__PVT__sum2_res) 
                                | VL_REDOR_I(vlSelf->__PVT__unnamedblk3__DOT__prev_low))))));
            vlSelf->__PVT__res32_1_c = (1U & VL_BITSEL_IQII(33, vlSelf->__PVT__sum2_res, 0x20U));
            vlSelf->__PVT__res32_1 = VL_SEL_IQII(33, vlSelf->__PVT__sum2_res, 0U, 0x20U);
            vlSelf->__PVT__res32_3 = ((0U == (IData)(vlSelf->__PVT__curr_state))
                                       ? VL_CONCAT_III(32,31,1, 
                                                       (0x7fffffffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__ialu_op1, 0U, 0x1fU)), 0U)
                                       : VL_CONCAT_III(32,31,1, 
                                                       (0x7fffffffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__res32_3_reg, 0U, 0x1fU)), 0U));
            vlSelf->__PVT__res32_2 = ((0U == (IData)(vlSelf->__PVT__curr_state))
                                       ? VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__unnamedblk3__DOT__quo))
                                       : VL_CONCAT_III(32,31,1, 
                                                       (0x7fffffffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__res32_2_reg, 0U, 0x1fU)), (IData)(vlSelf->__PVT__unnamedblk3__DOT__quo)));
        }
    }
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__4(Vssrv_top_scr1_pipe_ialu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__4\n"); );
    // Body
    vlSelf->__PVT__iter_req = 0U;
    vlSelf->__PVT__iter_rdy = 0U;
    vlSelf->__PVT__corr_req = ((2U == (IData)(vlSelf->__PVT__mdu_cmd)) 
                               & (((0U == (IData)(vlSelf->__PVT__div_cmd)) 
                                   & (VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU) 
                                      ^ VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op2, 0x1fU))) 
                                  | ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 1U) 
                                      & VL_REDOR_I(vlSelf->__PVT__res32_1)) 
                                     & (((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 0U)) 
                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__ialu_op1, 0x1fU)) 
                                        ^ (IData)(vlSelf->__PVT__res32_1_c)))));
    if ((2U == (IData)(vlSelf->__PVT__mdu_cmd))) {
        vlSelf->__PVT__iter_req = ((VL_REDOR_I(vlSelf->__PVT__ialu_op1) 
                                    & VL_REDOR_I(vlSelf->__PVT__ialu_op2)) 
                                   & (0U == (IData)(vlSelf->__PVT__curr_state)));
        vlSelf->__PVT__iter_rdy = (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 0U) 
                                   & (1U == (IData)(vlSelf->__PVT__curr_state)));
    }
    vlSelf->__PVT__next_state = vlSelf->__PVT__curr_state;
    if ((0U == (IData)(vlSelf->__PVT__curr_state))) {
        if (vlSelf->__PVT__iter_req) {
            vlSelf->__PVT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__curr_state))) {
        if (vlSelf->__PVT__iter_rdy) {
            vlSelf->__PVT__next_state = ((IData)(vlSelf->__PVT__corr_req)
                                          ? 2U : 0U);
        }
    } else if ((2U == (IData)(vlSelf->__PVT__curr_state))) {
        vlSelf->__PVT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__5(Vssrv_top_scr1_pipe_ialu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_ialu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__5\n"); );
    // Body
    vlSelf->__PVT__ialu_res = 0U;
    vlSelf->__PVT__ialu_cmp = 0U;
    vlSelf->__PVT__shft_cmd = 0U;
    vlSelf->__PVT__mdu_cmd = 0U;
    vlSelf->__PVT__mul_cmd = VL_CONCAT_III(2,1,1, (
                                                   (0x10U 
                                                    == (IData)(vlSelf->__PVT__ialu_cmd)) 
                                                   | (0x11U 
                                                      == (IData)(vlSelf->__PVT__ialu_cmd))), 
                                           ((0x10U 
                                             == (IData)(vlSelf->__PVT__ialu_cmd)) 
                                            | (0x12U 
                                               == (IData)(vlSelf->__PVT__ialu_cmd))));
    vlSelf->__PVT__div_cmd = VL_CONCAT_III(2,1,1, (
                                                   (0x15U 
                                                    == (IData)(vlSelf->__PVT__ialu_cmd)) 
                                                   | (0x16U 
                                                      == (IData)(vlSelf->__PVT__ialu_cmd))), 
                                           ((0x16U 
                                             == (IData)(vlSelf->__PVT__ialu_cmd)) 
                                            | (0x14U 
                                               == (IData)(vlSelf->__PVT__ialu_cmd))));
    vlSelf->__PVT__ialu_rdy = 1U;
    if (((((((((1U == (IData)(vlSelf->__PVT__ialu_cmd)) 
               | (2U == (IData)(vlSelf->__PVT__ialu_cmd))) 
              | (3U == (IData)(vlSelf->__PVT__ialu_cmd))) 
             | (4U == (IData)(vlSelf->__PVT__ialu_cmd))) 
            | (5U == (IData)(vlSelf->__PVT__ialu_cmd))) 
           | (6U == (IData)(vlSelf->__PVT__ialu_cmd))) 
          | (7U == (IData)(vlSelf->__PVT__ialu_cmd))) 
         | (8U == (IData)(vlSelf->__PVT__ialu_cmd)))) {
        if ((1U == (IData)(vlSelf->__PVT__ialu_cmd))) {
            vlSelf->__PVT__ialu_res = (vlSelf->__PVT__ialu_op1 
                                       & vlSelf->__PVT__ialu_op2);
        } else if ((2U == (IData)(vlSelf->__PVT__ialu_cmd))) {
            vlSelf->__PVT__ialu_res = (vlSelf->__PVT__ialu_op1 
                                       | vlSelf->__PVT__ialu_op2);
        } else if ((3U == (IData)(vlSelf->__PVT__ialu_cmd))) {
            vlSelf->__PVT__ialu_res = (vlSelf->__PVT__ialu_op1 
                                       ^ vlSelf->__PVT__ialu_op2);
        } else if ((4U == (IData)(vlSelf->__PVT__ialu_cmd))) {
            vlSelf->__PVT__ialu_res = VL_SEL_IQII(33, vlSelf->__PVT__sum1_res, 0U, 0x20U);
        } else if ((5U == (IData)(vlSelf->__PVT__ialu_cmd))) {
            vlSelf->__PVT__ialu_res = VL_SEL_IQII(33, vlSelf->__PVT__sum1_res, 0U, 0x20U);
        } else if ((6U == (IData)(vlSelf->__PVT__ialu_cmd))) {
            vlSelf->__PVT__ialu_res = (VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 2U))) 
                                       ^ VL_EXTEND_II(32,1, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 1U))));
            vlSelf->__PVT__ialu_cmp = (1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 2U) 
                                             ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 1U)));
        } else if ((7U == (IData)(vlSelf->__PVT__ialu_cmd))) {
            vlSelf->__PVT__ialu_res = VL_EXTEND_II(32,1, 
                                                   (1U 
                                                    & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 0U)));
            vlSelf->__PVT__ialu_cmp = (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 0U));
        } else {
            vlSelf->__PVT__ialu_res = VL_EXTEND_II(32,1, 
                                                   (1U 
                                                    & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 3U)));
            vlSelf->__PVT__ialu_cmp = (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 3U));
        }
    } else if ((9U == (IData)(vlSelf->__PVT__ialu_cmd))) {
        vlSelf->__PVT__ialu_res = (~ VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 3U))));
        vlSelf->__PVT__ialu_cmp = (1U & (~ VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 3U)));
    } else if ((0xaU == (IData)(vlSelf->__PVT__ialu_cmd))) {
        vlSelf->__PVT__ialu_res = (~ (VL_EXTEND_II(32,1, 
                                                   (1U 
                                                    & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 2U))) 
                                      ^ VL_EXTEND_II(32,1, 
                                                     (1U 
                                                      & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 1U)))));
        vlSelf->__PVT__ialu_cmp = (1U & (~ (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 2U) 
                                            ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 1U))));
    } else if ((0xbU == (IData)(vlSelf->__PVT__ialu_cmd))) {
        vlSelf->__PVT__ialu_res = (~ VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 0U))));
        vlSelf->__PVT__ialu_cmp = (1U & (~ VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__sum1_flags), 0U)));
    } else if ((((0xcU == (IData)(vlSelf->__PVT__ialu_cmd)) 
                 | (0xdU == (IData)(vlSelf->__PVT__ialu_cmd))) 
                | (0xeU == (IData)(vlSelf->__PVT__ialu_cmd)))) {
        vlSelf->__PVT__shft_cmd = VL_CONCAT_III(2,1,1, 
                                                (0xcU 
                                                 != (IData)(vlSelf->__PVT__ialu_cmd)), 
                                                (0xeU 
                                                 == (IData)(vlSelf->__PVT__ialu_cmd)));
        vlSelf->__PVT__ialu_res = vlSelf->__PVT__shft_res;
    } else if (((((0xfU == (IData)(vlSelf->__PVT__ialu_cmd)) 
                  | (0x10U == (IData)(vlSelf->__PVT__ialu_cmd))) 
                 | (0x11U == (IData)(vlSelf->__PVT__ialu_cmd))) 
                | (0x12U == (IData)(vlSelf->__PVT__ialu_cmd)))) {
        vlSelf->__PVT__mdu_cmd = 1U;
        vlSelf->__PVT__ialu_res = (VL_REDOR_I((IData)(vlSelf->__PVT__mul_cmd))
                                    ? VL_SEL_IQII(64, vlSelf->__PVT__mul_res, 0x20U, 0x20U)
                                    : VL_SEL_IQII(64, vlSelf->__PVT__mul_res, 0U, 0x20U));
    } else if (((((0x13U == (IData)(vlSelf->__PVT__ialu_cmd)) 
                  | (0x14U == (IData)(vlSelf->__PVT__ialu_cmd))) 
                 | (0x15U == (IData)(vlSelf->__PVT__ialu_cmd))) 
                | (0x16U == (IData)(vlSelf->__PVT__ialu_cmd)))) {
        vlSelf->__PVT__mdu_cmd = 2U;
        if ((0U == (IData)(vlSelf->__PVT__curr_state))) {
            vlSelf->__PVT__ialu_res = ((1U & (VL_REDOR_I(vlSelf->__PVT__ialu_op2) 
                                              | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 1U)))
                                        ? vlSelf->__PVT__ialu_op1
                                        : 0xffffffffU);
            vlSelf->__PVT__ialu_rdy = (1U & (~ (IData)(vlSelf->__PVT__iter_req)));
        } else if ((1U == (IData)(vlSelf->__PVT__curr_state))) {
            vlSelf->__PVT__ialu_res = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 1U))
                                        ? vlSelf->__PVT__res32_1
                                        : vlSelf->__PVT__res32_2);
            vlSelf->__PVT__ialu_rdy = ((IData)(vlSelf->__PVT__iter_rdy) 
                                       & (~ (IData)(vlSelf->__PVT__corr_req)));
        } else if ((2U == (IData)(vlSelf->__PVT__curr_state))) {
            vlSelf->__PVT__ialu_res = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__div_cmd), 1U))
                                        ? VL_SEL_IQII(33, vlSelf->__PVT__sum2_res, 0U, 0x20U)
                                        : VL_SEL_IQII(33, vlSelf->__PVT__sum1_res, 0U, 0x20U));
            vlSelf->__PVT__ialu_rdy = 1U;
        }
    }
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ialu___ctor_var_reset(Vssrv_top_scr1_pipe_ialu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_ialu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ialu_vd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ialu_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ialu_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_cmd = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ialu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_cmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ialu_sum2_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_sum2_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_sum2_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__curr_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iter_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iter_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mdu_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mul_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__div_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__corr_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sum1_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sum1_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sum1_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sum1_res = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__sum1_flags = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sum2_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sum2_op1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__sum2_op2 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__sum2_res = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__shft_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__shft_op2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__shft_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__shft_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mul_op1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__mul_op2 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__mul_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cnt_res = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cnt_res_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__res32_1_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__res32_1_c_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__res32_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__res32_1_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__res32_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__res32_2_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__res32_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__res32_3_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk1__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT__inv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk2__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk2__DOT__inv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk3__DOT__prev_low = VL_RAND_RESET_I(31);
    vlSelf->__PVT__unnamedblk3__DOT__quo = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__curr_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__cnt_res_reg = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__res32_1_c_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__res32_1_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__res32_2_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__res32_3_reg = VL_RAND_RESET_I(32);
}
