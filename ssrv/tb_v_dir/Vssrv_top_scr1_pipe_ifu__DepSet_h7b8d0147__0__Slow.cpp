// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_ifu.h"

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ifu___eval_initial__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___eval_initial__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu\n"); );
    // Body
    vlSelf->__PVT__imem_cmd = 0U;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ifu___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0\n"); );
    // Body
    vlSelf->__PVT__num_txns_pending_full = VL_REDAND_II(3, (IData)(vlSelf->__PVT__num_txns_pending));
    vlSelf->__PVT__num_vd_txns_pending = (7U & ((IData)(vlSelf->__PVT__num_txns_pending) 
                                                - (IData)(vlSelf->__PVT__discard_resp_cnt)));
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
    vlSelf->__PVT__discard_resp = VL_REDOR_I((IData)(vlSelf->__PVT__discard_resp_cnt));
    vlSelf->__PVT__q_data_head = vlSelf->__PVT__q_data
        [(3U & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__q_rptr), 0U, 2U))];
    vlSelf->__PVT__q_head_rvi = VL_REDAND_II(2, (3U 
                                                 & VL_SEL_IIII(16, (IData)(vlSelf->__PVT__q_data_head), 0U, 2U)));
    vlSelf->__PVT__q_head_rvc = (1U & (~ (IData)(vlSelf->__PVT__q_head_rvi)));
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ifu___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1\n"); );
    // Body
    vlSelf->__PVT__imem_resp_er = (2U == (IData)(vlSelf->__PVT__imem_resp));
    vlSelf->__PVT__imem_resp_ok = (1U == (IData)(vlSelf->__PVT__imem_resp));
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

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ifu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0\n"); );
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

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ifu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1\n"); );
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

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ifu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2\n"); );
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

VL_ATTR_COLD void Vssrv_top_scr1_pipe_ifu___ctor_var_reset(Vssrv_top_scr1_pipe_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_ifu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__new_pc_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stop_fetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2ifu_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu2idu_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu2idu_imem_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu2idu_err_rvi_hi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu2idu_vd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fsm = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr_r = VL_RAND_RESET_I(30);
    vlSelf->__PVT__imem_addr_r_new = VL_RAND_RESET_I(30);
    vlSelf->__PVT__num_txns_pending = VL_RAND_RESET_I(3);
    vlSelf->__PVT__num_txns_pending_new = VL_RAND_RESET_I(3);
    vlSelf->__PVT__discard_resp_cnt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__discard_resp_cnt_new = VL_RAND_RESET_I(3);
    vlSelf->__PVT__discard_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__num_vd_txns_pending = VL_RAND_RESET_I(3);
    vlSelf->__PVT__num_txns_pending_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_resp_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_resp_er = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_resp_vd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_pc_unaligned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q_rptr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__q_rptr_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__q_wptr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__q_wptr_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__q_ocpd_h = VL_RAND_RESET_I(3);
    vlSelf->__PVT__q_free_h_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__q_free_w_next = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__q_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__q_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__q_re = VL_RAND_RESET_I(2);
    vlSelf->__PVT__q_we = VL_RAND_RESET_I(2);
    vlSelf->__PVT__q_head_rvc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q_head_rvi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q_data_head = VL_RAND_RESET_I(16);
    vlSelf->__PVT__q_data_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__q_err_head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q_err_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata_curr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata_ident = VL_RAND_RESET_I(3);
    vlSelf->__PVT__instr_bypass = VL_RAND_RESET_I(2);
    vlSelf->__PVT__instr_bypass_vd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__q_rptr = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__q_wptr = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__q_data__v0 = 0;
    vlSelf->__Vdlyvval__q_data__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__q_data__v0 = 0;
    vlSelf->__Vdlyvdim0__q_err__v0 = 0;
    vlSelf->__Vdlyvval__q_err__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__q_data__v1 = 0;
    vlSelf->__Vdlyvval__q_data__v1 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__q_data__v1 = 0;
    vlSelf->__Vdlyvdim0__q_err__v1 = 0;
    vlSelf->__Vdlyvval__q_err__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__q_data__v2 = 0;
    vlSelf->__Vdlyvval__q_data__v2 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__q_err__v2 = 0;
    vlSelf->__Vdlyvval__q_err__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__q_data__v3 = 0;
    vlSelf->__Vdly__rdata_curr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__imem_addr_r = VL_RAND_RESET_I(30);
    vlSelf->__Vdly__num_txns_pending = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__discard_resp_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__fsm = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__new_pc_unaligned = VL_RAND_RESET_I(1);
}
