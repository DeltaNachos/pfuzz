// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_lsu.h"

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0\n"); );
    // Body
    vlSelf->__PVT__lsu2exu_l_data = ((3U == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                      ? vlSelf->__PVT__dmem2lsu_rdata
                                      : ((2U == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                          ? VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 0x10U)))
                                          : ((5U == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                              ? VL_EXTEND_II(32,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 0x10U)))
                                              : ((1U 
                                                  == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                                  ? 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 8U)))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 8U)))
                                                   : 0U)))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1\n"); );
    // Body
    if (((1U == (IData)(vlSelf->__PVT__exu2lsu_cmd)) 
         | (4U == (IData)(vlSelf->__PVT__exu2lsu_cmd)))) {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 0U;
    } else if (((2U == (IData)(vlSelf->__PVT__exu2lsu_cmd)) 
                | (5U == (IData)(vlSelf->__PVT__exu2lsu_cmd)))) {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 1U;
    } else if ((3U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 2U;
    } else if ((6U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 1U;
        vlSelf->__PVT__lsu2dmem_width = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 1U;
        vlSelf->__PVT__lsu2dmem_width = 1U;
    } else if ((8U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 1U;
        vlSelf->__PVT__lsu2dmem_width = 2U;
    } else {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 2U;
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2\n"); );
    // Body
    vlSelf->__PVT__lsu2dmem_wdata = vlSelf->__PVT__exu2lsu_s_data;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0\n"); );
    // Body
    vlSelf->__PVT__lsu2dmem_addr = vlSelf->__PVT__exu2lsu_addr;
    VL_ASSIGNSEL_QQ(35,34,0U, vlSelf->__PVT__lsu2tdu_d_mon, 
                    VL_CONCAT_QIQ(34,1,33, (1U & (~ (IData)(vlSelf->__PVT__lsu2dmem_cmd))), 
                                  VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT__lsu2dmem_cmd), vlSelf->__PVT__exu2lsu_addr)));
    vlSelf->__PVT__l_misalign = 0U;
    vlSelf->__PVT__s_misalign = 0U;
    if (vlSelf->__PVT__exu2lsu_req) {
        if (((2U == (IData)(vlSelf->__PVT__exu2lsu_cmd)) 
             | (5U == (IData)(vlSelf->__PVT__exu2lsu_cmd)))) {
            vlSelf->__PVT__l_misalign = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U));
        } else if ((3U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
            vlSelf->__PVT__l_misalign = VL_REDOR_I(
                                                   (3U 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U, 2U)));
        } else if ((7U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
            vlSelf->__PVT__s_misalign = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U));
        } else if ((8U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
            vlSelf->__PVT__s_misalign = VL_REDOR_I(
                                                   (3U 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U, 2U)));
        }
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1\n"); );
    // Body
    vlSelf->__PVT__lsu2exu_exc = ((((IData)(vlSelf->__PVT__dmem_resp_er) 
                                    | (IData)(vlSelf->__PVT__l_misalign)) 
                                   | (IData)(vlSelf->__PVT__s_misalign)) 
                                  | (IData)(vlSelf->__PVT__lsu_hwbrk));
    vlSelf->__PVT__lsu2dmem_req = (((IData)(vlSelf->__PVT__exu2lsu_req) 
                                    & (~ (IData)(vlSelf->__PVT__lsu2exu_exc))) 
                                   & (~ (IData)(vlSelf->__PVT__fsm)));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2\n"); );
    // Body
    VL_ASSIGNBIT_QI(0x22U, vlSelf->__PVT__lsu2tdu_d_mon, 
                    (((IData)(vlSelf->__PVT__exu2lsu_req) 
                      & (~ (IData)(vlSelf->__PVT__fsm))) 
                     & (~ (IData)(vlSelf->__PVT__tdu2lsu_i_x_req))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3\n"); );
    // Body
    vlSelf->__PVT__lsu_hwbrk = (((IData)(vlSelf->__PVT__exu2lsu_req) 
                                 & (IData)(vlSelf->__PVT__tdu2lsu_i_x_req)) 
                                | (IData)(vlSelf->__PVT__tdu2lsu_d_x_req));
    vlSelf->__PVT__lsu2exu_exc_code = ((IData)(vlSelf->__PVT__dmem_resp_er)
                                        ? ((((((1U 
                                                == (IData)(vlSelf->__PVT__lsu_cmd_r)) 
                                               | (2U 
                                                  == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                              | (3U 
                                                 == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                             | (4U 
                                                == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                            | (5U == (IData)(vlSelf->__PVT__lsu_cmd_r)))
                                            ? 5U : 
                                           ((((6U == (IData)(vlSelf->__PVT__lsu_cmd_r)) 
                                              | (7U 
                                                 == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                             | (8U 
                                                == (IData)(vlSelf->__PVT__lsu_cmd_r)))
                                             ? 7U : 0U))
                                        : ((IData)(vlSelf->__PVT__lsu_hwbrk)
                                            ? 3U : 
                                           ((IData)(vlSelf->__PVT__l_misalign)
                                             ? 4U : 
                                            ((IData)(vlSelf->__PVT__s_misalign)
                                              ? 6U : 0U))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0\n"); );
    // Body
    vlSelf->__Vdly__fsm = vlSelf->__PVT__fsm;
    vlSelf->__Vdly__lsu_cmd_r = vlSelf->__PVT__lsu_cmd_r;
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__fsm) {
            if (vlSelf->__PVT__fsm) {
                if (((IData)(vlSelf->__PVT__dmem_resp_ok) 
                     | (IData)(vlSelf->__PVT__dmem_resp_er))) {
                    vlSelf->__Vdly__fsm = 0U;
                }
            }
        } else if ((((IData)(vlSelf->__PVT__exu2lsu_req) 
                     & (IData)(vlSelf->__PVT__dmem2lsu_req_ack)) 
                    & (~ (IData)(vlSelf->__PVT__lsu2exu_exc)))) {
            vlSelf->__Vdly__fsm = 1U;
            vlSelf->__Vdly__lsu_cmd_r = vlSelf->__PVT__exu2lsu_cmd;
        }
    } else {
        vlSelf->__Vdly__fsm = 0U;
        vlSelf->__Vdly__lsu_cmd_r = 0U;
    }
    vlSelf->__PVT__lsu_cmd_r = vlSelf->__Vdly__lsu_cmd_r;
    vlSelf->__PVT__fsm = vlSelf->__Vdly__fsm;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1\n"); );
    // Body
    vlSelf->__PVT__dmem_resp_ok = (1U == (IData)(vlSelf->__PVT__dmem2lsu_resp));
    vlSelf->__PVT__dmem_resp_er = (2U == (IData)(vlSelf->__PVT__dmem2lsu_resp));
    vlSelf->__PVT__lsu2exu_rdy = ((IData)(vlSelf->__PVT__dmem_resp_ok) 
                                  | (IData)(vlSelf->__PVT__dmem_resp_er));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2\n"); );
    // Body
    vlSelf->__PVT__lsu2exu_l_data = ((3U == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                      ? vlSelf->__PVT__dmem2lsu_rdata
                                      : ((2U == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                          ? VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 0x10U)))
                                          : ((5U == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                              ? VL_EXTEND_II(32,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 0x10U)))
                                              : ((1U 
                                                  == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                                  ? 
                                                 VL_EXTENDS_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 8U)))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__lsu_cmd_r))
                                                   ? 
                                                  VL_EXTEND_II(32,8, 
                                                               (0xffU 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__dmem2lsu_rdata, 0U, 8U)))
                                                   : 0U)))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0\n"); );
    // Body
    if (((1U == (IData)(vlSelf->__PVT__exu2lsu_cmd)) 
         | (4U == (IData)(vlSelf->__PVT__exu2lsu_cmd)))) {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 0U;
    } else if (((2U == (IData)(vlSelf->__PVT__exu2lsu_cmd)) 
                | (5U == (IData)(vlSelf->__PVT__exu2lsu_cmd)))) {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 1U;
    } else if ((3U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 2U;
    } else if ((6U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 1U;
        vlSelf->__PVT__lsu2dmem_width = 0U;
    } else if ((7U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 1U;
        vlSelf->__PVT__lsu2dmem_width = 1U;
    } else if ((8U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
        vlSelf->__PVT__lsu2dmem_cmd = 1U;
        vlSelf->__PVT__lsu2dmem_width = 2U;
    } else {
        vlSelf->__PVT__lsu2dmem_cmd = 0U;
        vlSelf->__PVT__lsu2dmem_width = 2U;
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1\n"); );
    // Body
    vlSelf->__PVT__lsu2dmem_wdata = vlSelf->__PVT__exu2lsu_s_data;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2\n"); );
    // Body
    vlSelf->__PVT__lsu2dmem_addr = vlSelf->__PVT__exu2lsu_addr;
    VL_ASSIGNSEL_QQ(35,34,0U, vlSelf->__PVT__lsu2tdu_d_mon, 
                    VL_CONCAT_QIQ(34,1,33, (1U & (~ (IData)(vlSelf->__PVT__lsu2dmem_cmd))), 
                                  VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT__lsu2dmem_cmd), vlSelf->__PVT__exu2lsu_addr)));
    vlSelf->__PVT__l_misalign = 0U;
    vlSelf->__PVT__s_misalign = 0U;
    if (vlSelf->__PVT__exu2lsu_req) {
        if (((2U == (IData)(vlSelf->__PVT__exu2lsu_cmd)) 
             | (5U == (IData)(vlSelf->__PVT__exu2lsu_cmd)))) {
            vlSelf->__PVT__l_misalign = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U));
        } else if ((3U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
            vlSelf->__PVT__l_misalign = VL_REDOR_I(
                                                   (3U 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U, 2U)));
        } else if ((7U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
            vlSelf->__PVT__s_misalign = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U));
        } else if ((8U == (IData)(vlSelf->__PVT__exu2lsu_cmd))) {
            vlSelf->__PVT__s_misalign = VL_REDOR_I(
                                                   (3U 
                                                    & VL_SEL_IIII(32, vlSelf->__PVT__exu2lsu_addr, 0U, 2U)));
        }
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3\n"); );
    // Body
    vlSelf->__PVT__lsu2exu_exc = ((((IData)(vlSelf->__PVT__dmem_resp_er) 
                                    | (IData)(vlSelf->__PVT__l_misalign)) 
                                   | (IData)(vlSelf->__PVT__s_misalign)) 
                                  | (IData)(vlSelf->__PVT__lsu_hwbrk));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__4(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__4\n"); );
    // Body
    vlSelf->__PVT__lsu2dmem_req = (((IData)(vlSelf->__PVT__exu2lsu_req) 
                                    & (~ (IData)(vlSelf->__PVT__lsu2exu_exc))) 
                                   & (~ (IData)(vlSelf->__PVT__fsm)));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__5(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__5\n"); );
    // Body
    VL_ASSIGNBIT_QI(0x22U, vlSelf->__PVT__lsu2tdu_d_mon, 
                    (((IData)(vlSelf->__PVT__exu2lsu_req) 
                      & (~ (IData)(vlSelf->__PVT__fsm))) 
                     & (~ (IData)(vlSelf->__PVT__tdu2lsu_i_x_req))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__6(Vssrv_top_scr1_pipe_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__6\n"); );
    // Body
    vlSelf->__PVT__lsu_hwbrk = (((IData)(vlSelf->__PVT__exu2lsu_req) 
                                 & (IData)(vlSelf->__PVT__tdu2lsu_i_x_req)) 
                                | (IData)(vlSelf->__PVT__tdu2lsu_d_x_req));
    vlSelf->__PVT__lsu2exu_exc_code = ((IData)(vlSelf->__PVT__dmem_resp_er)
                                        ? ((((((1U 
                                                == (IData)(vlSelf->__PVT__lsu_cmd_r)) 
                                               | (2U 
                                                  == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                              | (3U 
                                                 == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                             | (4U 
                                                == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                            | (5U == (IData)(vlSelf->__PVT__lsu_cmd_r)))
                                            ? 5U : 
                                           ((((6U == (IData)(vlSelf->__PVT__lsu_cmd_r)) 
                                              | (7U 
                                                 == (IData)(vlSelf->__PVT__lsu_cmd_r))) 
                                             | (8U 
                                                == (IData)(vlSelf->__PVT__lsu_cmd_r)))
                                             ? 7U : 0U))
                                        : ((IData)(vlSelf->__PVT__lsu_hwbrk)
                                            ? 3U : 
                                           ((IData)(vlSelf->__PVT__l_misalign)
                                             ? 4U : 
                                            ((IData)(vlSelf->__PVT__s_misalign)
                                              ? 6U : 0U))));
}
