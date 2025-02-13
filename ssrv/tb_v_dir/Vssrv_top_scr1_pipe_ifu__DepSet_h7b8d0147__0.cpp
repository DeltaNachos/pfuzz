// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_ifu.h"

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0\n"); );
    // Body
    vlSelf->__PVT__rdata_ident = 0U;
    if (((IData)(vlSelf->__PVT__imem_resp_ok) & (~ (IData)(vlSelf->__PVT__discard_resp)))) {
        if (vlSelf->__PVT__new_pc_unaligned) {
            vlSelf->__PVT__rdata_ident = (VL_REDAND_II(2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U)))
                                           ? 7U : 6U);
        } else if (vlSelf->__PVT__rdata_curr) {
            if ((1U == (1U & VL_CONCAT_III(2,1,1, VL_REDAND_II(2, 
                                                               (3U 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U))), 
                                           VL_REDAND_II(2, 
                                                        (3U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 2U))))))) {
                vlSelf->__PVT__rdata_ident = 1U;
            } else if ((0U == VL_CONCAT_III(2,1,1, 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U))), 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 2U)))))) {
                vlSelf->__PVT__rdata_ident = 2U;
            } else if ((2U == VL_CONCAT_III(2,1,1, 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U))), 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 2U)))))) {
                vlSelf->__PVT__rdata_ident = 3U;
            }
        } else {
            vlSelf->__PVT__rdata_ident = (VL_REDAND_II(2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U)))
                                           ? 5U : 4U);
        }
    }
    vlSelf->__PVT__rdata_next = (1U & (~ (((7U == (IData)(vlSelf->__PVT__rdata_ident)) 
                                           | (5U == (IData)(vlSelf->__PVT__rdata_ident))) 
                                          | (3U == (IData)(vlSelf->__PVT__rdata_ident)))));
    vlSelf->__PVT__instr_bypass = 0U;
    if (vlSelf->__PVT__imem_resp_vd) {
        if (vlSelf->__PVT__q_empty) {
            if ((((6U == (IData)(vlSelf->__PVT__rdata_ident)) 
                  | (2U == (IData)(vlSelf->__PVT__rdata_ident))) 
                 | (3U == (IData)(vlSelf->__PVT__rdata_ident)))) {
                vlSelf->__PVT__instr_bypass = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__instr_bypass = 3U;
            }
        } else if (((1U == (IData)(vlSelf->__PVT__q_ocpd_h)) 
                    & (IData)(vlSelf->__PVT__q_head_rvi))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__rdata_curr)))) {
                vlSelf->__PVT__instr_bypass = 2U;
            }
        }
    }
    vlSelf->__PVT__instr_bypass_vd = (0U != (IData)(vlSelf->__PVT__instr_bypass));
    vlSelf->__PVT__ifu2idu_instr = ((1U == (IData)(vlSelf->__PVT__instr_bypass))
                                     ? ((IData)(vlSelf->__PVT__new_pc_unaligned)
                                         ? VL_EXTEND_II(32,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 0x10U)))
                                         : VL_EXTEND_II(32,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 0x10U))))
                                     : ((3U == (IData)(vlSelf->__PVT__instr_bypass))
                                         ? vlSelf->__PVT__imem_rdata
                                         : ((2U == (IData)(vlSelf->__PVT__instr_bypass))
                                             ? VL_CONCAT_III(32,16,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 0x10U)), (IData)(vlSelf->__PVT__q_data_head))
                                             : ((IData)(vlSelf->__PVT__q_head_rvc)
                                                 ? 
                                                VL_EXTEND_II(32,16, (IData)(vlSelf->__PVT__q_data_head))
                                                 : 
                                                VL_CONCAT_III(32,16,16, (IData)(vlSelf->__PVT__q_data_next), (IData)(vlSelf->__PVT__q_data_head))))));
    vlSelf->__PVT__ifu2idu_vd = 0U;
    vlSelf->__PVT__ifu2idu_imem_err = 0U;
    vlSelf->__PVT__ifu2idu_err_rvi_hi = 0U;
    if ((1U & ((IData)(vlSelf->__PVT__fsm) | (~ (IData)(vlSelf->__PVT__q_empty))))) {
        if (vlSelf->__PVT__instr_bypass_vd) {
            vlSelf->__PVT__ifu2idu_vd = 1U;
            vlSelf->__PVT__ifu2idu_imem_err = ((2U 
                                                == (IData)(vlSelf->__PVT__instr_bypass))
                                                ? ((IData)(vlSelf->__PVT__imem_resp_er) 
                                                   | (IData)(vlSelf->__PVT__q_err_head))
                                                : (IData)(vlSelf->__PVT__imem_resp_er));
            vlSelf->__PVT__ifu2idu_err_rvi_hi = ((2U 
                                                  == (IData)(vlSelf->__PVT__instr_bypass)) 
                                                 & (IData)(vlSelf->__PVT__imem_resp_er));
        } else if ((1U & (~ (IData)(vlSelf->__PVT__q_empty)))) {
            if ((1U == (IData)(vlSelf->__PVT__q_ocpd_h))) {
                vlSelf->__PVT__ifu2idu_vd = ((IData)(vlSelf->__PVT__q_head_rvc) 
                                             | (IData)(vlSelf->__PVT__q_err_head));
                vlSelf->__PVT__ifu2idu_imem_err = vlSelf->__PVT__q_err_head;
            } else {
                vlSelf->__PVT__ifu2idu_vd = 1U;
                vlSelf->__PVT__ifu2idu_imem_err = ((IData)(vlSelf->__PVT__q_err_head) 
                                                   | ((IData)(vlSelf->__PVT__q_head_rvi) 
                                                      & (IData)(vlSelf->__PVT__q_err_next)));
                vlSelf->__PVT__ifu2idu_err_rvi_hi = 
                    (((~ (IData)(vlSelf->__PVT__q_err_head)) 
                      & (IData)(vlSelf->__PVT__q_head_rvi)) 
                     & (IData)(vlSelf->__PVT__q_err_next));
            }
        }
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0\n"); );
    // Body
    vlSelf->__PVT__q_we = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__discard_resp)))) {
        if (vlSelf->__PVT__imem_resp_ok) {
            if ((0U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = 0U;
            } else if ((7U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = 2U;
            } else if ((6U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = (((IData)(vlSelf->__PVT__instr_bypass_vd) 
                                        & (IData)(vlSelf->__PVT__idu2ifu_rdy))
                                        ? 0U : 2U);
            } else if ((1U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = (((IData)(vlSelf->__PVT__instr_bypass_vd) 
                                        & (IData)(vlSelf->__PVT__idu2ifu_rdy))
                                        ? 0U : 1U);
            } else if (((((2U == (IData)(vlSelf->__PVT__rdata_ident)) 
                          | (3U == (IData)(vlSelf->__PVT__rdata_ident))) 
                         | (4U == (IData)(vlSelf->__PVT__rdata_ident))) 
                        | (5U == (IData)(vlSelf->__PVT__rdata_ident)))) {
                vlSelf->__PVT__q_we = (((IData)(vlSelf->__PVT__instr_bypass_vd) 
                                        & (IData)(vlSelf->__PVT__idu2ifu_rdy))
                                        ? 2U : 1U);
            }
        } else if (vlSelf->__PVT__imem_resp_er) {
            vlSelf->__PVT__q_we = 1U;
        }
    }
    vlSelf->__PVT__q_re = 0U;
    if ((((~ (IData)(vlSelf->__PVT__q_empty)) & (IData)(vlSelf->__PVT__ifu2idu_vd)) 
         & (IData)(vlSelf->__PVT__idu2ifu_rdy))) {
        vlSelf->__PVT__q_re = ((((IData)(vlSelf->__PVT__q_head_rvc) 
                                 | (IData)(vlSelf->__PVT__q_err_head)) 
                                | ((IData)(vlSelf->__PVT__q_head_rvi) 
                                   & (IData)(vlSelf->__PVT__instr_bypass_vd)))
                                ? 1U : 2U);
    }
    vlSelf->__PVT__q_rptr_next = vlSelf->__PVT__q_rptr;
    vlSelf->__PVT__q_wptr_next = vlSelf->__PVT__q_wptr;
    if (((2U == (IData)(vlSelf->__PVT__q_we)) | (1U 
                                                 == (IData)(vlSelf->__PVT__q_we)))) {
        vlSelf->__PVT__q_wptr_next = (7U & ((IData)(vlSelf->__PVT__q_wptr) 
                                            + ((1U 
                                                == (IData)(vlSelf->__PVT__q_we))
                                                ? 2U
                                                : 1U)));
    }
    if (((2U == (IData)(vlSelf->__PVT__q_re)) | (1U 
                                                 == (IData)(vlSelf->__PVT__q_re)))) {
        vlSelf->__PVT__q_rptr_next = (7U & ((IData)(vlSelf->__PVT__q_rptr) 
                                            + ((2U 
                                                == (IData)(vlSelf->__PVT__q_re))
                                                ? 2U
                                                : 1U)));
    }
    vlSelf->__PVT__q_free_h_next = (7U & ((IData)(4U) 
                                          - ((IData)(vlSelf->__PVT__q_wptr) 
                                             - (IData)(vlSelf->__PVT__q_rptr_next))));
    vlSelf->__PVT__q_free_w_next = (3U & VL_SEL_IIII(3, 
                                                     (7U 
                                                      & ((IData)(vlSelf->__PVT__q_free_h_next) 
                                                         >> 1U)), 0U, 2U));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1\n"); );
    // Body
    vlSelf->__PVT__q_flush = ((IData)(vlSelf->__PVT__new_pc_req) 
                              | (IData)(vlSelf->__PVT__stop_fetch));
    vlSelf->__PVT__imem_req = ((((IData)(vlSelf->__PVT__new_pc_req) 
                                 & (~ (IData)(vlSelf->__PVT__num_txns_pending_full))) 
                                & (~ (IData)(vlSelf->__PVT__stop_fetch))) 
                               | (((IData)(vlSelf->__PVT__fsm) 
                                   & (~ (IData)(vlSelf->__PVT__num_txns_pending_full))) 
                                  & (VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__q_free_w_next)) 
                                     > (IData)(vlSelf->__PVT__num_vd_txns_pending))));
    vlSelf->__PVT__num_txns_pending_new = (7U & (((IData)(vlSelf->__PVT__num_txns_pending) 
                                                  + 
                                                  (VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req)) 
                                                   & VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req_ack)))) 
                                                 - 
                                                 (VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_resp_ok)) 
                                                  | VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_resp_er)))));
    vlSelf->__PVT__discard_resp_cnt_new = (7U & ((IData)(vlSelf->__PVT__new_pc_req)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__num_txns_pending_new) 
                                                  - 
                                                  (VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req)) 
                                                   & VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req_ack))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__imem_resp_er) 
                                                   & (~ (IData)(vlSelf->__PVT__discard_resp)))
                                                   ? (IData)(vlSelf->__PVT__num_txns_pending_new)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__discard_resp_cnt) 
                                                   - (IData)(1U)))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2\n"); );
    // Body
    vlSelf->__PVT__imem_addr_r_new = (0x3fffffffU & 
                                      ((IData)(1U) 
                                       + ((IData)(vlSelf->__PVT__new_pc_req)
                                           ? VL_SEL_IIII(32, vlSelf->__PVT__new_pc, 2U, 0x1eU)
                                           : vlSelf->__PVT__imem_addr_r)));
    vlSelf->__PVT__imem_addr = VL_CONCAT_III(32,30,2, 
                                             (0x3fffffffU 
                                              & ((IData)(vlSelf->__PVT__new_pc_req)
                                                  ? 
                                                 VL_SEL_IIII(32, vlSelf->__PVT__new_pc, 2U, 0x1eU)
                                                  : vlSelf->__PVT__imem_addr_r)), 0U);
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0\n"); );
    // Body
    vlSelf->__Vdly__imem_addr_r = vlSelf->__PVT__imem_addr_r;
    vlSelf->__Vdly__fsm = vlSelf->__PVT__fsm;
    vlSelf->__Vdlyvset__q_data__v0 = 0U;
    vlSelf->__Vdlyvset__q_data__v1 = 0U;
    vlSelf->__Vdlyvset__q_data__v3 = 0U;
    vlSelf->__Vdly__num_txns_pending = vlSelf->__PVT__num_txns_pending;
    vlSelf->__Vdly__new_pc_unaligned = vlSelf->__PVT__new_pc_unaligned;
    vlSelf->__Vdly__rdata_curr = vlSelf->__PVT__rdata_curr;
    vlSelf->__Vdly__discard_resp_cnt = vlSelf->__PVT__discard_resp_cnt;
    vlSelf->__Vdly__q_rptr = vlSelf->__PVT__q_rptr;
    if (vlSelf->__PVT__rst_n) {
        if (((IData)(vlSelf->__PVT__imem_req) & (IData)(vlSelf->__PVT__imem_req_ack))) {
            if (vlSelf->__PVT__new_pc_req) {
                vlSelf->__Vdly__imem_addr_r = vlSelf->__PVT__imem_addr_r_new;
            } else {
                VL_ASSIGNSEL_II(30,4,0U, vlSelf->__Vdly__imem_addr_r, 
                                (0xfU & VL_SEL_IIII(30, vlSelf->__PVT__imem_addr_r_new, 0U, 4U)));
                if (VL_REDAND_II(4, (0xfU & VL_SEL_IIII(30, vlSelf->__PVT__imem_addr_r, 0U, 4U)))) {
                    VL_ASSIGNSEL_II(30,26,4U, vlSelf->__Vdly__imem_addr_r, 
                                    (0x3ffffffU & VL_SEL_IIII(30, vlSelf->__PVT__imem_addr_r_new, 4U, 0x1aU)));
                }
            }
        } else if (vlSelf->__PVT__new_pc_req) {
            vlSelf->__Vdly__imem_addr_r = (0x3fffffffU 
                                           & VL_SEL_IIII(32, vlSelf->__PVT__new_pc, 2U, 0x1eU));
        }
    } else {
        vlSelf->__Vdly__imem_addr_r = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__fsm) {
            if (vlSelf->__PVT__fsm) {
                if (((IData)(vlSelf->__PVT__stop_fetch) 
                     | (((IData)(vlSelf->__PVT__imem_resp_er) 
                         & (~ (IData)(vlSelf->__PVT__discard_resp))) 
                        & (~ (IData)(vlSelf->__PVT__new_pc_req))))) {
                    vlSelf->__Vdly__fsm = 0U;
                }
            }
        } else if (((IData)(vlSelf->__PVT__new_pc_req) 
                    & (~ (IData)(vlSelf->__PVT__stop_fetch)))) {
            vlSelf->__Vdly__fsm = 1U;
        }
    } else {
        vlSelf->__Vdly__fsm = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (((IData)(vlSelf->__PVT__imem_resp_vd) & 
             (~ (IData)(vlSelf->__PVT__q_flush)))) {
            if ((2U == (IData)(vlSelf->__PVT__q_we))) {
                vlSelf->__Vdlyvval__q_data__v0 = (0xffffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 0x10U));
                vlSelf->__Vdlyvset__q_data__v0 = 1U;
                vlSelf->__Vdlyvdim0__q_data__v0 = (3U 
                                                   & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_wptr), 0U, 2U));
                vlSelf->__Vdlyvval__q_err__v0 = vlSelf->__PVT__imem_resp_er;
                vlSelf->__Vdlyvdim0__q_err__v0 = (3U 
                                                  & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_wptr), 0U, 2U));
            } else if ((1U == (IData)(vlSelf->__PVT__q_we))) {
                vlSelf->__Vdlyvval__q_data__v1 = (0xffffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 0x10U));
                vlSelf->__Vdlyvset__q_data__v1 = 1U;
                vlSelf->__Vdlyvdim0__q_data__v1 = (3U 
                                                   & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_wptr), 0U, 2U));
                vlSelf->__Vdlyvval__q_err__v1 = vlSelf->__PVT__imem_resp_er;
                vlSelf->__Vdlyvdim0__q_err__v1 = (3U 
                                                  & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_wptr), 0U, 2U));
                vlSelf->__Vdlyvval__q_data__v2 = (0xffffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 0x10U));
                vlSelf->__Vdlyvdim0__q_data__v2 = (3U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_wptr), 0U, 2U)));
                vlSelf->__Vdlyvval__q_err__v2 = vlSelf->__PVT__imem_resp_er;
                vlSelf->__Vdlyvdim0__q_err__v2 = (3U 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_wptr), 0U, 2U)));
            }
        }
    } else {
        vlSelf->__Vdlyvset__q_data__v3 = 1U;
    }
    if (vlSelf->__PVT__rst_n) {
        if ((((IData)(vlSelf->__PVT__imem_req) & (IData)(vlSelf->__PVT__imem_req_ack)) 
             ^ ((IData)(vlSelf->__PVT__imem_resp_ok) 
                | (IData)(vlSelf->__PVT__imem_resp_er)))) {
            vlSelf->__Vdly__num_txns_pending = vlSelf->__PVT__num_txns_pending_new;
        }
    } else {
        vlSelf->__Vdly__num_txns_pending = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__new_pc_req) {
            vlSelf->__Vdly__new_pc_unaligned = (1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__new_pc, 1U));
        } else if (vlSelf->__PVT__imem_resp_vd) {
            vlSelf->__Vdly__new_pc_unaligned = 0U;
        }
    } else {
        vlSelf->__Vdly__new_pc_unaligned = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__new_pc_req) {
            vlSelf->__Vdly__rdata_curr = 1U;
        } else if (vlSelf->__PVT__imem_resp_vd) {
            vlSelf->__Vdly__rdata_curr = vlSelf->__PVT__rdata_next;
        }
    } else {
        vlSelf->__Vdly__rdata_curr = 1U;
    }
    if (vlSelf->__PVT__rst_n) {
        if ((((IData)(vlSelf->__PVT__new_pc_req) | (IData)(vlSelf->__PVT__imem_resp_er)) 
             | ((IData)(vlSelf->__PVT__imem_resp_ok) 
                & (IData)(vlSelf->__PVT__discard_resp)))) {
            vlSelf->__Vdly__discard_resp_cnt = vlSelf->__PVT__discard_resp_cnt_new;
        }
    } else {
        vlSelf->__Vdly__discard_resp_cnt = 0U;
    }
    vlSelf->__PVT__imem_addr_r = vlSelf->__Vdly__imem_addr_r;
    vlSelf->__PVT__fsm = vlSelf->__Vdly__fsm;
    if (vlSelf->__Vdlyvset__q_data__v0) {
        vlSelf->__PVT__q_err[vlSelf->__Vdlyvdim0__q_err__v0] 
            = vlSelf->__Vdlyvval__q_err__v0;
    }
    if (vlSelf->__Vdlyvset__q_data__v1) {
        vlSelf->__PVT__q_err[vlSelf->__Vdlyvdim0__q_err__v1] 
            = vlSelf->__Vdlyvval__q_err__v1;
        vlSelf->__PVT__q_err[vlSelf->__Vdlyvdim0__q_err__v2] 
            = vlSelf->__Vdlyvval__q_err__v2;
    }
    if (vlSelf->__Vdlyvset__q_data__v3) {
        vlSelf->__PVT__q_err[0U] = 0U;
        vlSelf->__PVT__q_err[1U] = 0U;
        vlSelf->__PVT__q_err[2U] = 0U;
        vlSelf->__PVT__q_err[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__q_data__v0) {
        vlSelf->__PVT__q_data[vlSelf->__Vdlyvdim0__q_data__v0] 
            = vlSelf->__Vdlyvval__q_data__v0;
    }
    if (vlSelf->__Vdlyvset__q_data__v1) {
        vlSelf->__PVT__q_data[vlSelf->__Vdlyvdim0__q_data__v1] 
            = vlSelf->__Vdlyvval__q_data__v1;
        vlSelf->__PVT__q_data[vlSelf->__Vdlyvdim0__q_data__v2] 
            = vlSelf->__Vdlyvval__q_data__v2;
    }
    if (vlSelf->__Vdlyvset__q_data__v3) {
        vlSelf->__PVT__q_data[0U] = 0U;
        vlSelf->__PVT__q_data[1U] = 0U;
        vlSelf->__PVT__q_data[2U] = 0U;
        vlSelf->__PVT__q_data[3U] = 0U;
    }
    vlSelf->__Vdly__q_wptr = vlSelf->__PVT__q_wptr;
    vlSelf->__PVT__num_txns_pending = vlSelf->__Vdly__num_txns_pending;
    vlSelf->__PVT__new_pc_unaligned = vlSelf->__Vdly__new_pc_unaligned;
    vlSelf->__PVT__rdata_curr = vlSelf->__Vdly__rdata_curr;
    vlSelf->__PVT__discard_resp_cnt = vlSelf->__Vdly__discard_resp_cnt;
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__q_flush) {
            vlSelf->__Vdly__q_rptr = 0U;
            vlSelf->__Vdly__q_wptr = 0U;
        } else {
            if (((2U == (IData)(vlSelf->__PVT__q_we)) 
                 | (1U == (IData)(vlSelf->__PVT__q_we)))) {
                vlSelf->__Vdly__q_wptr = vlSelf->__PVT__q_wptr_next;
            }
            if (((2U == (IData)(vlSelf->__PVT__q_re)) 
                 | (1U == (IData)(vlSelf->__PVT__q_re)))) {
                vlSelf->__Vdly__q_rptr = vlSelf->__PVT__q_rptr_next;
            }
        }
    } else {
        vlSelf->__Vdly__q_rptr = 0U;
        vlSelf->__Vdly__q_wptr = 0U;
    }
    vlSelf->__PVT__num_txns_pending_full = VL_REDAND_II(3, (IData)(vlSelf->__PVT__num_txns_pending));
    vlSelf->__PVT__num_vd_txns_pending = (7U & ((IData)(vlSelf->__PVT__num_txns_pending) 
                                                - (IData)(vlSelf->__PVT__discard_resp_cnt)));
    vlSelf->__PVT__discard_resp = VL_REDOR_I((IData)(vlSelf->__PVT__discard_resp_cnt));
    vlSelf->__PVT__q_wptr = vlSelf->__Vdly__q_wptr;
    vlSelf->__PVT__q_rptr = vlSelf->__Vdly__q_rptr;
    vlSelf->__PVT__q_err_next = vlSelf->__PVT__q_err
        [(3U & ((IData)(1U) + VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_rptr), 0U, 2U)))];
    vlSelf->__PVT__q_err_head = vlSelf->__PVT__q_err
        [(3U & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_rptr), 0U, 2U))];
    vlSelf->__PVT__q_data_next = vlSelf->__PVT__q_data
        [(3U & ((IData)(1U) + VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_rptr), 0U, 2U)))];
    vlSelf->__PVT__q_ocpd_h = (7U & ((IData)(vlSelf->__PVT__q_wptr) 
                                     - (IData)(vlSelf->__PVT__q_rptr)));
    vlSelf->__PVT__q_empty = ((IData)(vlSelf->__PVT__q_rptr) 
                              == (IData)(vlSelf->__PVT__q_wptr));
    vlSelf->__PVT__q_data_head = vlSelf->__PVT__q_data
        [(3U & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_rptr), 0U, 2U))];
    vlSelf->__PVT__q_head_rvi = VL_REDAND_II(2, (3U 
                                                 & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__q_data_head), 0U, 2U)));
    vlSelf->__PVT__q_head_rvc = (1U & (~ (IData)(vlSelf->__PVT__q_head_rvi)));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1\n"); );
    // Body
    vlSelf->__PVT__imem_resp_er = (2U == (IData)(vlSelf->__PVT__imem_resp));
    vlSelf->__PVT__imem_resp_ok = (1U == (IData)(vlSelf->__PVT__imem_resp));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0\n"); );
    // Body
    vlSelf->__PVT__imem_resp_vd = (((IData)(vlSelf->__PVT__imem_resp_ok) 
                                    | (IData)(vlSelf->__PVT__imem_resp_er)) 
                                   & (~ (IData)(vlSelf->__PVT__discard_resp)));
    vlSelf->__PVT__rdata_ident = 0U;
    if (((IData)(vlSelf->__PVT__imem_resp_ok) & (~ (IData)(vlSelf->__PVT__discard_resp)))) {
        if (vlSelf->__PVT__new_pc_unaligned) {
            vlSelf->__PVT__rdata_ident = (VL_REDAND_II(2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U)))
                                           ? 7U : 6U);
        } else if (vlSelf->__PVT__rdata_curr) {
            if ((1U == (1U & VL_CONCAT_III(2,1,1, VL_REDAND_II(2, 
                                                               (3U 
                                                                & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U))), 
                                           VL_REDAND_II(2, 
                                                        (3U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 2U))))))) {
                vlSelf->__PVT__rdata_ident = 1U;
            } else if ((0U == VL_CONCAT_III(2,1,1, 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U))), 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 2U)))))) {
                vlSelf->__PVT__rdata_ident = 2U;
            } else if ((2U == VL_CONCAT_III(2,1,1, 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U))), 
                                            VL_REDAND_II(2, 
                                                         (3U 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 2U)))))) {
                vlSelf->__PVT__rdata_ident = 3U;
            }
        } else {
            vlSelf->__PVT__rdata_ident = (VL_REDAND_II(2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 2U)))
                                           ? 5U : 4U);
        }
    }
    vlSelf->__PVT__rdata_next = (1U & (~ (((7U == (IData)(vlSelf->__PVT__rdata_ident)) 
                                           | (5U == (IData)(vlSelf->__PVT__rdata_ident))) 
                                          | (3U == (IData)(vlSelf->__PVT__rdata_ident)))));
    vlSelf->__PVT__instr_bypass = 0U;
    if (vlSelf->__PVT__imem_resp_vd) {
        if (vlSelf->__PVT__q_empty) {
            if ((((6U == (IData)(vlSelf->__PVT__rdata_ident)) 
                  | (2U == (IData)(vlSelf->__PVT__rdata_ident))) 
                 | (3U == (IData)(vlSelf->__PVT__rdata_ident)))) {
                vlSelf->__PVT__instr_bypass = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__instr_bypass = 3U;
            }
        } else if (((1U == (IData)(vlSelf->__PVT__q_ocpd_h)) 
                    & (IData)(vlSelf->__PVT__q_head_rvi))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__rdata_curr)))) {
                vlSelf->__PVT__instr_bypass = 2U;
            }
        }
    }
    vlSelf->__PVT__instr_bypass_vd = (0U != (IData)(vlSelf->__PVT__instr_bypass));
    vlSelf->__PVT__ifu2idu_instr = ((1U == (IData)(vlSelf->__PVT__instr_bypass))
                                     ? ((IData)(vlSelf->__PVT__new_pc_unaligned)
                                         ? VL_EXTEND_II(32,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0x10U, 0x10U)))
                                         : VL_EXTEND_II(32,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 0x10U))))
                                     : ((3U == (IData)(vlSelf->__PVT__instr_bypass))
                                         ? vlSelf->__PVT__imem_rdata
                                         : ((2U == (IData)(vlSelf->__PVT__instr_bypass))
                                             ? VL_CONCAT_III(32,16,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(32, vlSelf->__PVT__imem_rdata, 0U, 0x10U)), (IData)(vlSelf->__PVT__q_data_head))
                                             : ((IData)(vlSelf->__PVT__q_head_rvc)
                                                 ? 
                                                VL_EXTEND_II(32,16, (IData)(vlSelf->__PVT__q_data_head))
                                                 : 
                                                VL_CONCAT_III(32,16,16, (IData)(vlSelf->__PVT__q_data_next), (IData)(vlSelf->__PVT__q_data_head))))));
    vlSelf->__PVT__ifu2idu_vd = 0U;
    vlSelf->__PVT__ifu2idu_imem_err = 0U;
    vlSelf->__PVT__ifu2idu_err_rvi_hi = 0U;
    if ((1U & ((IData)(vlSelf->__PVT__fsm) | (~ (IData)(vlSelf->__PVT__q_empty))))) {
        if (vlSelf->__PVT__instr_bypass_vd) {
            vlSelf->__PVT__ifu2idu_vd = 1U;
            vlSelf->__PVT__ifu2idu_imem_err = ((2U 
                                                == (IData)(vlSelf->__PVT__instr_bypass))
                                                ? ((IData)(vlSelf->__PVT__imem_resp_er) 
                                                   | (IData)(vlSelf->__PVT__q_err_head))
                                                : (IData)(vlSelf->__PVT__imem_resp_er));
            vlSelf->__PVT__ifu2idu_err_rvi_hi = ((2U 
                                                  == (IData)(vlSelf->__PVT__instr_bypass)) 
                                                 & (IData)(vlSelf->__PVT__imem_resp_er));
        } else if ((1U & (~ (IData)(vlSelf->__PVT__q_empty)))) {
            if ((1U == (IData)(vlSelf->__PVT__q_ocpd_h))) {
                vlSelf->__PVT__ifu2idu_vd = ((IData)(vlSelf->__PVT__q_head_rvc) 
                                             | (IData)(vlSelf->__PVT__q_err_head));
                vlSelf->__PVT__ifu2idu_imem_err = vlSelf->__PVT__q_err_head;
            } else {
                vlSelf->__PVT__ifu2idu_vd = 1U;
                vlSelf->__PVT__ifu2idu_imem_err = ((IData)(vlSelf->__PVT__q_err_head) 
                                                   | ((IData)(vlSelf->__PVT__q_head_rvi) 
                                                      & (IData)(vlSelf->__PVT__q_err_next)));
                vlSelf->__PVT__ifu2idu_err_rvi_hi = 
                    (((~ (IData)(vlSelf->__PVT__q_err_head)) 
                      & (IData)(vlSelf->__PVT__q_head_rvi)) 
                     & (IData)(vlSelf->__PVT__q_err_next));
            }
        }
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1\n"); );
    // Body
    vlSelf->__PVT__q_we = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__discard_resp)))) {
        if (vlSelf->__PVT__imem_resp_ok) {
            if ((0U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = 0U;
            } else if ((7U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = 2U;
            } else if ((6U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = (((IData)(vlSelf->__PVT__instr_bypass_vd) 
                                        & (IData)(vlSelf->__PVT__idu2ifu_rdy))
                                        ? 0U : 2U);
            } else if ((1U == (IData)(vlSelf->__PVT__rdata_ident))) {
                vlSelf->__PVT__q_we = (((IData)(vlSelf->__PVT__instr_bypass_vd) 
                                        & (IData)(vlSelf->__PVT__idu2ifu_rdy))
                                        ? 0U : 1U);
            } else if (((((2U == (IData)(vlSelf->__PVT__rdata_ident)) 
                          | (3U == (IData)(vlSelf->__PVT__rdata_ident))) 
                         | (4U == (IData)(vlSelf->__PVT__rdata_ident))) 
                        | (5U == (IData)(vlSelf->__PVT__rdata_ident)))) {
                vlSelf->__PVT__q_we = (((IData)(vlSelf->__PVT__instr_bypass_vd) 
                                        & (IData)(vlSelf->__PVT__idu2ifu_rdy))
                                        ? 2U : 1U);
            }
        } else if (vlSelf->__PVT__imem_resp_er) {
            vlSelf->__PVT__q_we = 1U;
        }
    }
    vlSelf->__PVT__q_re = 0U;
    if ((((~ (IData)(vlSelf->__PVT__q_empty)) & (IData)(vlSelf->__PVT__ifu2idu_vd)) 
         & (IData)(vlSelf->__PVT__idu2ifu_rdy))) {
        vlSelf->__PVT__q_re = ((((IData)(vlSelf->__PVT__q_head_rvc) 
                                 | (IData)(vlSelf->__PVT__q_err_head)) 
                                | ((IData)(vlSelf->__PVT__q_head_rvi) 
                                   & (IData)(vlSelf->__PVT__instr_bypass_vd)))
                                ? 1U : 2U);
    }
    vlSelf->__PVT__q_rptr_next = vlSelf->__PVT__q_rptr;
    vlSelf->__PVT__q_wptr_next = vlSelf->__PVT__q_wptr;
    if (((2U == (IData)(vlSelf->__PVT__q_we)) | (1U 
                                                 == (IData)(vlSelf->__PVT__q_we)))) {
        vlSelf->__PVT__q_wptr_next = (7U & ((IData)(vlSelf->__PVT__q_wptr) 
                                            + ((1U 
                                                == (IData)(vlSelf->__PVT__q_we))
                                                ? 2U
                                                : 1U)));
    }
    if (((2U == (IData)(vlSelf->__PVT__q_re)) | (1U 
                                                 == (IData)(vlSelf->__PVT__q_re)))) {
        vlSelf->__PVT__q_rptr_next = (7U & ((IData)(vlSelf->__PVT__q_rptr) 
                                            + ((2U 
                                                == (IData)(vlSelf->__PVT__q_re))
                                                ? 2U
                                                : 1U)));
    }
    vlSelf->__PVT__q_free_h_next = (7U & ((IData)(4U) 
                                          - ((IData)(vlSelf->__PVT__q_wptr) 
                                             - (IData)(vlSelf->__PVT__q_rptr_next))));
    vlSelf->__PVT__q_free_w_next = (3U & VL_SEL_IIII(3, 
                                                     (7U 
                                                      & ((IData)(vlSelf->__PVT__q_free_h_next) 
                                                         >> 1U)), 0U, 2U));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2\n"); );
    // Body
    vlSelf->__PVT__q_flush = ((IData)(vlSelf->__PVT__new_pc_req) 
                              | (IData)(vlSelf->__PVT__stop_fetch));
    vlSelf->__PVT__imem_req = ((((IData)(vlSelf->__PVT__new_pc_req) 
                                 & (~ (IData)(vlSelf->__PVT__num_txns_pending_full))) 
                                & (~ (IData)(vlSelf->__PVT__stop_fetch))) 
                               | (((IData)(vlSelf->__PVT__fsm) 
                                   & (~ (IData)(vlSelf->__PVT__num_txns_pending_full))) 
                                  & (VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__q_free_w_next)) 
                                     > (IData)(vlSelf->__PVT__num_vd_txns_pending))));
    vlSelf->__PVT__num_txns_pending_new = (7U & (((IData)(vlSelf->__PVT__num_txns_pending) 
                                                  + 
                                                  (VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req)) 
                                                   & VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req_ack)))) 
                                                 - 
                                                 (VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_resp_ok)) 
                                                  | VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_resp_er)))));
    vlSelf->__PVT__discard_resp_cnt_new = (7U & ((IData)(vlSelf->__PVT__new_pc_req)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__num_txns_pending_new) 
                                                  - 
                                                  (VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req)) 
                                                   & VL_EXTEND_II(3,1, (IData)(vlSelf->__PVT__imem_req_ack))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__imem_resp_er) 
                                                   & (~ (IData)(vlSelf->__PVT__discard_resp)))
                                                   ? (IData)(vlSelf->__PVT__num_txns_pending_new)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__discard_resp_cnt) 
                                                   - (IData)(1U)))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__3(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__3\n"); );
    // Body
    vlSelf->__PVT__imem_addr_r_new = (0x3fffffffU & 
                                      ((IData)(1U) 
                                       + ((IData)(vlSelf->__PVT__new_pc_req)
                                           ? VL_SEL_IIII(32, vlSelf->__PVT__new_pc, 2U, 0x1eU)
                                           : vlSelf->__PVT__imem_addr_r)));
    vlSelf->__PVT__imem_addr = VL_CONCAT_III(32,30,2, 
                                             (0x3fffffffU 
                                              & ((IData)(vlSelf->__PVT__new_pc_req)
                                                  ? 
                                                 VL_SEL_IIII(32, vlSelf->__PVT__new_pc, 2U, 0x1eU)
                                                  : vlSelf->__PVT__imem_addr_r)), 0U);
}
