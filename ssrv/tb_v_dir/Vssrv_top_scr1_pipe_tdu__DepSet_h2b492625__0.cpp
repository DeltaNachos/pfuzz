// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_tdu.h"

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0\n"); );
    // Body
    vlSelf->__PVT__csr_addr_tselect_cmb = 0U;
    vlSelf->__PVT__csr_addr_tdata2_cmb = 0U;
    vlSelf->__PVT__csr_addr_mcontrol_cmb = 0U;
    vlSelf->__PVT__csr_addr_icount_cmb = 0U;
    vlSelf->__PVT__csr_wr_cmb = 0U;
    vlSelf->__PVT__csr_wr_data_cmb = 0U;
    vlSelf->__PVT__csr2tdu_rdata = 0U;
    vlSelf->__PVT__csr2tdu_resp = 1U;
    if (vlSelf->__PVT__csr2tdu_req) {
        vlSelf->__PVT__csr2tdu_resp = 0U;
        if ((0U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            vlSelf->__PVT__csr_addr_tselect_cmb = 1U;
            vlSelf->__PVT__csr2tdu_rdata = VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__tselect_ff));
        }
        if ((2U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            if ((0U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_addr_tdata2_cmb);
                vlSelf->__PVT__csr2tdu_rdata = VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0U, 0x20U);
            }
            vlSelf->__PVT__unnamedblk1__DOT__i = 1U;
            if ((1U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_addr_tdata2_cmb);
                vlSelf->__PVT__csr2tdu_rdata = VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0x20U, 0x20U);
            }
            vlSelf->__PVT__unnamedblk1__DOT__i = 2U;
        }
        if ((1U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            if ((0U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_addr_mcontrol_cmb);
                VL_ASSIGNSEL_II(32,11,0x15U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(11,4,7, 2U, 
                                              VL_CONCAT_III(7,1,6, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_dmode_ff), 0U)), 0U)));
                VL_ASSIGNSEL_II(32,9,0xcU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(9,1,8, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_hit_ff), 0U)), 
                                              VL_EXTEND_II(8,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 0U)))));
                VL_ASSIGNSEL_II(32,10,2U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(10,6,4, 
                                              VL_EXTEND_II(6,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))), 
                                              VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 0U)))));
                VL_ASSIGNSEL_II(32,2,0U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(2,1,1, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 0U)), 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 0U))));
            }
            vlSelf->__PVT__unnamedblk2__DOT__i = 1U;
            if ((1U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_addr_mcontrol_cmb);
                VL_ASSIGNSEL_II(32,11,0x15U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(11,4,7, 2U, 
                                              VL_CONCAT_III(7,1,6, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_dmode_ff), 1U)), 0U)));
                VL_ASSIGNSEL_II(32,9,0xcU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(9,1,8, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_hit_ff), 1U)), 
                                              VL_EXTEND_II(8,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 1U)))));
                VL_ASSIGNSEL_II(32,10,2U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(10,6,4, 
                                              VL_EXTEND_II(6,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))), 
                                              VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 1U)))));
                VL_ASSIGNSEL_II(32,2,0U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(2,1,1, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 1U)), 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 1U))));
            }
            vlSelf->__PVT__unnamedblk2__DOT__i = 2U;
            if ((2U == (IData)(vlSelf->__PVT__tselect_ff))) {
                vlSelf->__PVT__csr_addr_icount_cmb = 1U;
                VL_ASSIGNSEL_II(32,5,0x1bU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(5,4,1, 3U, (IData)(vlSelf->__PVT__icount_dmode_ff)));
                VL_ASSIGNSEL_II(32,15,0xaU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(15,1,14, (IData)(vlSelf->__PVT__icount_hit_ff), (IData)(vlSelf->__PVT__icount_count_ff)));
                VL_ASSIGNSEL_II(32,2,6U, vlSelf->__PVT__csr2tdu_rdata, 0U);
                VL_ASSIGNBIT_II(9U, vlSelf->__PVT__csr2tdu_rdata, vlSelf->__PVT__icount_m_ff);
                VL_ASSIGNSEL_II(32,6,0U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_EXTEND_II(6,1, (IData)(vlSelf->__PVT__icount_action_ff)));
            }
        }
        if ((4U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            if ((0U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(2U, vlSelf->__PVT__csr2tdu_rdata);
            }
            vlSelf->__PVT__unnamedblk3__DOT__i = 1U;
            if ((1U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(2U, vlSelf->__PVT__csr2tdu_rdata);
            }
            vlSelf->__PVT__unnamedblk3__DOT__i = 2U;
            if ((2U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(3U, vlSelf->__PVT__csr2tdu_rdata);
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__csr2tdu_cmd))) {
            vlSelf->__PVT__csr_wr_cmb = 1U;
            vlSelf->__PVT__csr_wr_data_cmb = vlSelf->__PVT__csr2tdu_wdata;
        }
        if ((2U == (IData)(vlSelf->__PVT__csr2tdu_cmd))) {
            vlSelf->__PVT__csr_wr_cmb = VL_REDOR_I(vlSelf->__PVT__csr2tdu_wdata);
            vlSelf->__PVT__csr_wr_data_cmb = (vlSelf->__PVT__csr2tdu_rdata 
                                              | vlSelf->__PVT__csr2tdu_wdata);
        }
        if ((3U == (IData)(vlSelf->__PVT__csr2tdu_cmd))) {
            vlSelf->__PVT__csr_wr_cmb = VL_REDOR_I(vlSelf->__PVT__csr2tdu_wdata);
            vlSelf->__PVT__csr_wr_data_cmb = (vlSelf->__PVT__csr2tdu_rdata 
                                              & (~ vlSelf->__PVT__csr2tdu_wdata));
        }
    }
    vlSelf->__PVT__clk_en_icount_cmb = (((IData)(vlSelf->__PVT__csr_addr_icount_cmb) 
                                         & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                                        | (IData)(vlSelf->__PVT__icount_m_ff));
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__clk_en_mcontrol_cmb, 
                    (1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 0U) 
                            & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                           | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))));
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__clk_en_mcontrol_cmb, 
                    (1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 1U) 
                            & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                           | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    // Body
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 0U))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 
                                (VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                 & (VL_SEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0U, 0x20U) 
                                    == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0U, 0x20U))));
            }
        }
    }
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 1U))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 
                                (VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                 & (VL_SEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0U, 0x20U) 
                                    == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0x20U, 0x20U))));
            }
        }
    }
    vlSelf->__PVT__icount_hit_cmb = 0U;
    vlSelf->__PVT__icount_decrement_cmb = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if (vlSelf->__PVT__icount_m_ff) {
            vlSelf->__PVT__icount_hit_cmb = ((VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__icount_count_ff))) 
                                             & (~ (IData)(vlSelf->__PVT__icount_skip_ff)));
            vlSelf->__PVT__icount_decrement_cmb = (
                                                   VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                                   & (0U 
                                                      != (IData)(vlSelf->__PVT__icount_count_ff)));
        }
    }
    vlSelf->__PVT__tdu2exu_i_match = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__mcontrol_execution_hit_cmb));
    vlSelf->__PVT__tdu2lsu_i_x_req = VL_REDOR_I((IData)(vlSelf->__PVT__mcontrol_execution_hit_cmb));
    vlSelf->__PVT__tdu2exu_i_x_req = VL_REDOR_I((IData)(vlSelf->__PVT__mcontrol_execution_hit_cmb));
    VL_ASSIGNBIT_II(2U, vlSelf->__PVT__tdu2exu_i_match, vlSelf->__PVT__icount_hit_cmb);
    __Vtemp_1 = ((IData)(vlSelf->__PVT__tdu2lsu_i_x_req) 
                 | (IData)(vlSelf->__PVT__icount_hit_cmb));
    vlSelf->__PVT__tdu2lsu_i_x_req = __Vtemp_1;
    __Vtemp_2 = ((IData)(vlSelf->__PVT__tdu2exu_i_x_req) 
                 | (IData)(vlSelf->__PVT__icount_hit_cmb));
    vlSelf->__PVT__tdu2exu_i_x_req = __Vtemp_2;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2\n"); );
    // Body
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 
                            ((VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x22U) 
                              & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 0U) 
                                  & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x21U)) 
                                 | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 0U) 
                                    & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x20U)))) 
                             & (VL_SEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0U, 0x20U) 
                                == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0U, 0x20U))));
        }
    }
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 
                            ((VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x22U) 
                              & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 1U) 
                                  & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x21U)) 
                                 | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 1U) 
                                    & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x20U)))) 
                             & (VL_SEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0U, 0x20U) 
                                == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0x20U, 0x20U))));
        }
    }
    vlSelf->__PVT__tdu2lsu_d_match = vlSelf->__PVT__mcontrol_ldst_hit_cmb;
    vlSelf->__PVT__tdu2lsu_d_x_req = VL_REDOR_I((IData)(vlSelf->__PVT__mcontrol_ldst_hit_cmb));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    // Body
    vlSelf->__PVT__tdu2hdu_dmode_req = 0U;
    __Vtemp_1 = (1U & ((IData)(vlSelf->__PVT__tdu2hdu_dmode_req) 
                       | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 0U) 
                          & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 0U))));
    vlSelf->__PVT__tdu2hdu_dmode_req = __Vtemp_1;
    vlSelf->__PVT__unnamedblk4__DOT__i = 1U;
    __Vtemp_2 = (1U & ((IData)(vlSelf->__PVT__tdu2hdu_dmode_req) 
                       | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 1U) 
                          & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 1U))));
    vlSelf->__PVT__tdu2hdu_dmode_req = __Vtemp_2;
    vlSelf->__PVT__unnamedblk4__DOT__i = 2U;
    __Vtemp_3 = ((IData)(vlSelf->__PVT__tdu2hdu_dmode_req) 
                 | ((IData)(vlSelf->__PVT__icount_action_ff) 
                    & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 2U)));
    vlSelf->__PVT__tdu2hdu_dmode_req = __Vtemp_3;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0\n"); );
    // Body
    vlSelf->__Vdly__icount_skip_ff = vlSelf->__PVT__icount_skip_ff;
    vlSelf->__Vdly__icount_count_ff = vlSelf->__PVT__icount_count_ff;
    vlSelf->__Vdly__tselect_ff = vlSelf->__PVT__tselect_ff;
    vlSelf->__Vdly__icount_hit_ff = vlSelf->__PVT__icount_hit_ff;
    vlSelf->__Vdly__icount_dmode_ff = vlSelf->__PVT__icount_dmode_ff;
    vlSelf->__Vdly__icount_action_ff = vlSelf->__PVT__icount_action_ff;
    vlSelf->__Vdly__icount_m_ff = vlSelf->__PVT__icount_m_ff;
    vlSelf->__Vdly__mcontrol_hit_ff = vlSelf->__PVT__mcontrol_hit_ff;
    vlSelf->__Vdly__mcontrol_action_ff = vlSelf->__PVT__mcontrol_action_ff;
    vlSelf->__Vdly__mcontrol_dmode_ff = vlSelf->__PVT__mcontrol_dmode_ff;
    vlSelf->__Vdly__mcontrol_store_ff = vlSelf->__PVT__mcontrol_store_ff;
    vlSelf->__Vdly__mcontrol_load_ff = vlSelf->__PVT__mcontrol_load_ff;
    vlSelf->__Vdly__mcontrol_execution_ff = vlSelf->__PVT__mcontrol_execution_ff;
    vlSelf->__Vdly__mcontrol_m_ff = vlSelf->__PVT__mcontrol_m_ff;
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__clk_en) {
            if (((IData)(vlSelf->__PVT__csr_addr_tselect_cmb) 
                 & (IData)(vlSelf->__PVT__csr_wr_cmb))) {
                if ((3U > (3U & VL_SEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0U, 2U)))) {
                    vlSelf->__Vdly__tselect_ff = (3U 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0U, 2U));
                }
            }
        }
    } else {
        vlSelf->__Vdly__tselect_ff = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__clk_en) {
            if (vlSelf->__PVT__clk_en_icount_cmb) {
                if ((((IData)(vlSelf->__PVT__csr_addr_icount_cmb) 
                      & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                     & (IData)(vlSelf->__PVT__icount_write_en))) {
                    vlSelf->__Vdly__icount_dmode_ff 
                        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0x1bU));
                    vlSelf->__Vdly__icount_m_ff = (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 9U));
                    vlSelf->__Vdly__icount_action_ff 
                        = (1U == (0x3fU & VL_SEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0U, 6U)));
                }
                if ((((IData)(vlSelf->__PVT__csr_addr_icount_cmb) 
                      & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                     & (IData)(vlSelf->__PVT__icount_write_en))) {
                    vlSelf->__Vdly__icount_hit_ff = 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0x18U));
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 2U))) {
                    vlSelf->__Vdly__icount_hit_ff = 1U;
                }
                if ((((IData)(vlSelf->__PVT__csr_addr_icount_cmb) 
                      & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                     & (IData)(vlSelf->__PVT__icount_write_en))) {
                    vlSelf->__Vdly__icount_count_ff 
                        = (0x3fffU & VL_SEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0xaU, 0xeU));
                } else if ((((IData)(vlSelf->__PVT__icount_decrement_cmb) 
                             & VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x20U)) 
                            & (~ (IData)(vlSelf->__PVT__icount_skip_ff)))) {
                    vlSelf->__Vdly__icount_count_ff 
                        = (0x3fffU & ((IData)(vlSelf->__PVT__icount_count_ff) 
                                      - (IData)(1U)));
                }
                if (((IData)(vlSelf->__PVT__csr_addr_icount_cmb) 
                     & (IData)(vlSelf->__PVT__csr_wr_cmb))) {
                    vlSelf->__Vdly__icount_skip_ff 
                        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 9U));
                } else if ((((IData)(vlSelf->__PVT__icount_skip_ff) 
                             & (IData)(vlSelf->__PVT__icount_decrement_cmb)) 
                            & VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x20U))) {
                    vlSelf->__Vdly__icount_skip_ff = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__icount_dmode_ff = 0U;
        vlSelf->__Vdly__icount_m_ff = 0U;
        vlSelf->__Vdly__icount_action_ff = 0U;
        vlSelf->__Vdly__icount_hit_ff = 0U;
        vlSelf->__Vdly__icount_count_ff = 0U;
        vlSelf->__Vdly__icount_skip_ff = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__clk_en) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__clk_en_mcontrol_cmb), 0U))) {
                if (((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 0U) 
                      & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                     & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_write_en), 0U))) {
                    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_dmode_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0x1bU)));
                    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_m_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 6U)));
                    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_execution_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 2U)));
                    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_load_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0U)));
                    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_store_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 1U)));
                    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_action_ff, 
                                    (1U == (0x3fU & 
                                            VL_SEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0xcU, 6U))));
                }
                if (((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 0U) 
                      & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                     & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_write_en), 0U))) {
                    VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_hit_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0x14U)));
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 0U))) {
                    VL_ASSIGNBIT_IO(0U, vlSelf->__Vdly__mcontrol_hit_ff);
                }
            }
        }
    } else {
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_dmode_ff, 0U);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_m_ff, 0U);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_execution_ff, 0U);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_load_ff, 0U);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_store_ff, 0U);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_action_ff, 0U);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__mcontrol_hit_ff, 0U);
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__clk_en) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__clk_en_mcontrol_cmb), 1U))) {
                if (((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 1U) 
                      & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                     & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_write_en), 1U))) {
                    VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_dmode_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0x1bU)));
                    VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_m_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 6U)));
                    VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_execution_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 2U)));
                    VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_load_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0U)));
                    VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_store_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 1U)));
                    VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_action_ff, 
                                    (1U == (0x3fU & 
                                            VL_SEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0xcU, 6U))));
                }
                if (((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 1U) 
                      & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                     & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_write_en), 1U))) {
                    VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_hit_ff, 
                                    (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_wr_data_cmb, 0x14U)));
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 1U))) {
                    VL_ASSIGNBIT_IO(1U, vlSelf->__Vdly__mcontrol_hit_ff);
                }
            }
        }
    } else {
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_dmode_ff, 0U);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_m_ff, 0U);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_execution_ff, 0U);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_load_ff, 0U);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_store_ff, 0U);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_action_ff, 0U);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__mcontrol_hit_ff, 0U);
    }
    vlSelf->__PVT__tselect_ff = vlSelf->__Vdly__tselect_ff;
    vlSelf->__PVT__icount_skip_ff = vlSelf->__Vdly__icount_skip_ff;
    vlSelf->__PVT__icount_hit_ff = vlSelf->__Vdly__icount_hit_ff;
    vlSelf->__PVT__icount_dmode_ff = vlSelf->__Vdly__icount_dmode_ff;
    vlSelf->__PVT__icount_action_ff = vlSelf->__Vdly__icount_action_ff;
    vlSelf->__PVT__icount_count_ff = vlSelf->__Vdly__icount_count_ff;
    vlSelf->__PVT__icount_m_ff = vlSelf->__Vdly__icount_m_ff;
    vlSelf->__PVT__mcontrol_hit_ff = vlSelf->__Vdly__mcontrol_hit_ff;
    vlSelf->__PVT__mcontrol_action_ff = vlSelf->__Vdly__mcontrol_action_ff;
    vlSelf->__PVT__mcontrol_dmode_ff = vlSelf->__Vdly__mcontrol_dmode_ff;
    vlSelf->__PVT__mcontrol_load_ff = vlSelf->__Vdly__mcontrol_load_ff;
    vlSelf->__PVT__mcontrol_store_ff = vlSelf->__Vdly__mcontrol_store_ff;
    vlSelf->__PVT__mcontrol_execution_ff = vlSelf->__Vdly__mcontrol_execution_ff;
    vlSelf->__PVT__mcontrol_m_ff = vlSelf->__Vdly__mcontrol_m_ff;
    vlSelf->__PVT__icount_write_en = (1U & ((~ (IData)(vlSelf->__PVT__icount_dmode_ff)) 
                                            | (IData)(vlSelf->__PVT__dsbl)));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1\n"); );
    // Body
    vlSelf->__Vdly__tdata2 = vlSelf->__PVT__tdata2;
    if (vlSelf->__PVT__clk_en) {
        if ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_tdata2_cmb), 0U) 
             & (IData)(vlSelf->__PVT__csr_wr_cmb))) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_write_en), 0U))) {
                VL_ASSIGNSEL_QI(64,32,0U, vlSelf->__Vdly__tdata2, vlSelf->__PVT__csr_wr_data_cmb);
            }
        }
    }
    if (vlSelf->__PVT__clk_en) {
        if ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_tdata2_cmb), 1U) 
             & (IData)(vlSelf->__PVT__csr_wr_cmb))) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_write_en), 1U))) {
                VL_ASSIGNSEL_QI(64,32,0x20U, vlSelf->__Vdly__tdata2, vlSelf->__PVT__csr_wr_data_cmb);
            }
        }
    }
    vlSelf->__PVT__tdata2 = vlSelf->__Vdly__tdata2;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2\n"); );
    // Body
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_write_en, 
                    (1U & ((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_dmode_ff), 0U)) 
                           | (IData)(vlSelf->__PVT__dsbl))));
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_write_en, 
                    (1U & ((~ VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_dmode_ff), 1U)) 
                           | (IData)(vlSelf->__PVT__dsbl))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0\n"); );
    // Body
    vlSelf->__PVT__csr_addr_tselect_cmb = 0U;
    vlSelf->__PVT__csr_addr_tdata2_cmb = 0U;
    vlSelf->__PVT__csr_addr_mcontrol_cmb = 0U;
    vlSelf->__PVT__csr_addr_icount_cmb = 0U;
    vlSelf->__PVT__csr_wr_cmb = 0U;
    vlSelf->__PVT__csr_wr_data_cmb = 0U;
    vlSelf->__PVT__csr2tdu_rdata = 0U;
    vlSelf->__PVT__csr2tdu_resp = 1U;
    if (vlSelf->__PVT__csr2tdu_req) {
        vlSelf->__PVT__csr2tdu_resp = 0U;
        if ((0U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            vlSelf->__PVT__csr_addr_tselect_cmb = 1U;
            vlSelf->__PVT__csr2tdu_rdata = VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__tselect_ff));
        }
        if ((2U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            if ((0U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_addr_tdata2_cmb);
                vlSelf->__PVT__csr2tdu_rdata = VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0U, 0x20U);
            }
            vlSelf->__PVT__unnamedblk1__DOT__i = 1U;
            if ((1U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_addr_tdata2_cmb);
                vlSelf->__PVT__csr2tdu_rdata = VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0x20U, 0x20U);
            }
            vlSelf->__PVT__unnamedblk1__DOT__i = 2U;
        }
        if ((1U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            if ((0U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_addr_mcontrol_cmb);
                VL_ASSIGNSEL_II(32,11,0x15U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(11,4,7, 2U, 
                                              VL_CONCAT_III(7,1,6, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_dmode_ff), 0U)), 0U)));
                VL_ASSIGNSEL_II(32,9,0xcU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(9,1,8, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_hit_ff), 0U)), 
                                              VL_EXTEND_II(8,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 0U)))));
                VL_ASSIGNSEL_II(32,10,2U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(10,6,4, 
                                              VL_EXTEND_II(6,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))), 
                                              VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 0U)))));
                VL_ASSIGNSEL_II(32,2,0U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(2,1,1, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 0U)), 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 0U))));
            }
            vlSelf->__PVT__unnamedblk2__DOT__i = 1U;
            if ((1U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_addr_mcontrol_cmb);
                VL_ASSIGNSEL_II(32,11,0x15U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(11,4,7, 2U, 
                                              VL_CONCAT_III(7,1,6, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_dmode_ff), 1U)), 0U)));
                VL_ASSIGNSEL_II(32,9,0xcU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(9,1,8, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_hit_ff), 1U)), 
                                              VL_EXTEND_II(8,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 1U)))));
                VL_ASSIGNSEL_II(32,10,2U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(10,6,4, 
                                              VL_EXTEND_II(6,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))), 
                                              VL_EXTEND_II(4,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 1U)))));
                VL_ASSIGNSEL_II(32,2,0U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(2,1,1, 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 1U)), 
                                              (1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 1U))));
            }
            vlSelf->__PVT__unnamedblk2__DOT__i = 2U;
            if ((2U == (IData)(vlSelf->__PVT__tselect_ff))) {
                vlSelf->__PVT__csr_addr_icount_cmb = 1U;
                VL_ASSIGNSEL_II(32,5,0x1bU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(5,4,1, 3U, (IData)(vlSelf->__PVT__icount_dmode_ff)));
                VL_ASSIGNSEL_II(32,15,0xaU, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_CONCAT_III(15,1,14, (IData)(vlSelf->__PVT__icount_hit_ff), (IData)(vlSelf->__PVT__icount_count_ff)));
                VL_ASSIGNSEL_II(32,2,6U, vlSelf->__PVT__csr2tdu_rdata, 0U);
                VL_ASSIGNBIT_II(9U, vlSelf->__PVT__csr2tdu_rdata, vlSelf->__PVT__icount_m_ff);
                VL_ASSIGNSEL_II(32,6,0U, vlSelf->__PVT__csr2tdu_rdata, 
                                VL_EXTEND_II(6,1, (IData)(vlSelf->__PVT__icount_action_ff)));
            }
        }
        if ((4U == (IData)(vlSelf->__PVT__csr2tdu_addr))) {
            if ((0U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(2U, vlSelf->__PVT__csr2tdu_rdata);
            }
            vlSelf->__PVT__unnamedblk3__DOT__i = 1U;
            if ((1U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(2U, vlSelf->__PVT__csr2tdu_rdata);
            }
            vlSelf->__PVT__unnamedblk3__DOT__i = 2U;
            if ((2U == (IData)(vlSelf->__PVT__tselect_ff))) {
                VL_ASSIGNBIT_IO(3U, vlSelf->__PVT__csr2tdu_rdata);
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__csr2tdu_cmd))) {
            vlSelf->__PVT__csr_wr_cmb = 1U;
            vlSelf->__PVT__csr_wr_data_cmb = vlSelf->__PVT__csr2tdu_wdata;
        }
        if ((2U == (IData)(vlSelf->__PVT__csr2tdu_cmd))) {
            vlSelf->__PVT__csr_wr_cmb = VL_REDOR_I(vlSelf->__PVT__csr2tdu_wdata);
            vlSelf->__PVT__csr_wr_data_cmb = (vlSelf->__PVT__csr2tdu_rdata 
                                              | vlSelf->__PVT__csr2tdu_wdata);
        }
        if ((3U == (IData)(vlSelf->__PVT__csr2tdu_cmd))) {
            vlSelf->__PVT__csr_wr_cmb = VL_REDOR_I(vlSelf->__PVT__csr2tdu_wdata);
            vlSelf->__PVT__csr_wr_data_cmb = (vlSelf->__PVT__csr2tdu_rdata 
                                              & (~ vlSelf->__PVT__csr2tdu_wdata));
        }
    }
    vlSelf->__PVT__clk_en_icount_cmb = (((IData)(vlSelf->__PVT__csr_addr_icount_cmb) 
                                         & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                                        | (IData)(vlSelf->__PVT__icount_m_ff));
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__clk_en_mcontrol_cmb, 
                    (1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 0U) 
                            & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                           | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))));
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__clk_en_mcontrol_cmb, 
                    (1U & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_addr_mcontrol_cmb), 1U) 
                            & (IData)(vlSelf->__PVT__csr_wr_cmb)) 
                           | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1\n"); );
    // Body
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 0U))) {
                VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 
                                (VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                 & (VL_SEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0U, 0x20U) 
                                    == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0U, 0x20U))));
            }
        }
    }
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))) {
            if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_execution_ff), 1U))) {
                VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_execution_hit_cmb, 
                                (VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                 & (VL_SEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0U, 0x20U) 
                                    == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0x20U, 0x20U))));
            }
        }
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2\n"); );
    // Body
    vlSelf->__PVT__icount_hit_cmb = 0U;
    vlSelf->__PVT__icount_decrement_cmb = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if (vlSelf->__PVT__icount_m_ff) {
            vlSelf->__PVT__icount_hit_cmb = ((VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__icount_count_ff))) 
                                             & (~ (IData)(vlSelf->__PVT__icount_skip_ff)));
            vlSelf->__PVT__icount_decrement_cmb = (
                                                   VL_BITSEL_IQII(34, vlSelf->__PVT__exu2tdu_i_mon, 0x21U) 
                                                   & (0U 
                                                      != (IData)(vlSelf->__PVT__icount_count_ff)));
        }
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    // Body
    vlSelf->__PVT__tdu2exu_i_match = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__mcontrol_execution_hit_cmb));
    vlSelf->__PVT__tdu2lsu_i_x_req = VL_REDOR_I((IData)(vlSelf->__PVT__mcontrol_execution_hit_cmb));
    vlSelf->__PVT__tdu2exu_i_x_req = VL_REDOR_I((IData)(vlSelf->__PVT__mcontrol_execution_hit_cmb));
    VL_ASSIGNBIT_II(2U, vlSelf->__PVT__tdu2exu_i_match, vlSelf->__PVT__icount_hit_cmb);
    __Vtemp_1 = ((IData)(vlSelf->__PVT__tdu2lsu_i_x_req) 
                 | (IData)(vlSelf->__PVT__icount_hit_cmb));
    vlSelf->__PVT__tdu2lsu_i_x_req = __Vtemp_1;
    __Vtemp_2 = ((IData)(vlSelf->__PVT__tdu2exu_i_x_req) 
                 | (IData)(vlSelf->__PVT__icount_hit_cmb));
    vlSelf->__PVT__tdu2exu_i_x_req = __Vtemp_2;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__4(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__4\n"); );
    // Body
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 0U))) {
            VL_ASSIGNBIT_II(0U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 
                            ((VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x22U) 
                              & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 0U) 
                                  & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x21U)) 
                                 | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 0U) 
                                    & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x20U)))) 
                             & (VL_SEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0U, 0x20U) 
                                == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0U, 0x20U))));
        }
    }
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 0U);
    if ((1U & (~ (IData)(vlSelf->__PVT__dsbl)))) {
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_m_ff), 1U))) {
            VL_ASSIGNBIT_II(1U, vlSelf->__PVT__mcontrol_ldst_hit_cmb, 
                            ((VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x22U) 
                              & ((VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_load_ff), 1U) 
                                  & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x21U)) 
                                 | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_store_ff), 1U) 
                                    & VL_BITSEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0x20U)))) 
                             & (VL_SEL_IQII(35, vlSelf->__PVT__tdu2lsu_d_mon, 0U, 0x20U) 
                                == VL_SEL_IQII(64, vlSelf->__PVT__tdata2, 0x20U, 0x20U))));
        }
    }
    vlSelf->__PVT__tdu2lsu_d_match = vlSelf->__PVT__mcontrol_ldst_hit_cmb;
    vlSelf->__PVT__tdu2lsu_d_x_req = VL_REDOR_I((IData)(vlSelf->__PVT__mcontrol_ldst_hit_cmb));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__5(Vssrv_top_scr1_pipe_tdu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__5\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    // Body
    vlSelf->__PVT__tdu2hdu_dmode_req = 0U;
    __Vtemp_1 = (1U & ((IData)(vlSelf->__PVT__tdu2hdu_dmode_req) 
                       | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 0U) 
                          & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 0U))));
    vlSelf->__PVT__tdu2hdu_dmode_req = __Vtemp_1;
    vlSelf->__PVT__unnamedblk4__DOT__i = 1U;
    __Vtemp_2 = (1U & ((IData)(vlSelf->__PVT__tdu2hdu_dmode_req) 
                       | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mcontrol_action_ff), 1U) 
                          & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 1U))));
    vlSelf->__PVT__tdu2hdu_dmode_req = __Vtemp_2;
    vlSelf->__PVT__unnamedblk4__DOT__i = 2U;
    __Vtemp_3 = ((IData)(vlSelf->__PVT__tdu2hdu_dmode_req) 
                 | ((IData)(vlSelf->__PVT__icount_action_ff) 
                    & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 2U)));
    vlSelf->__PVT__tdu2hdu_dmode_req = __Vtemp_3;
}
