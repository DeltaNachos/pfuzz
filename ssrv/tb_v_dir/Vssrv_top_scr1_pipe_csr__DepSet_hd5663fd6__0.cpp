// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_csr.h"

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0\n"); );
    // Body
    vlSelf->__PVT__csr2tdu_cmd = vlSelf->__PVT__exu2csr_w_cmd;
    vlSelf->__PVT__csr2tdu_addr = (7U & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 3U));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1\n"); );
    // Body
    vlSelf->__PVT__csr2tdu_wdata = vlSelf->__PVT__exu2csr_w_data;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0\n"); );
    // Body
    vlSelf->__PVT__csr_mstatus_up = 0U;
    vlSelf->__PVT__csr_mie_up = 0U;
    vlSelf->__PVT__csr_mscratch_up = 0U;
    vlSelf->__PVT__csr_mepc_up = 0U;
    vlSelf->__PVT__csr_mcause_up = 0U;
    vlSelf->__PVT__csr_mtval_up = 0U;
    vlSelf->__PVT__csr_mtvec_up = 0U;
    vlSelf->__PVT__csr_cycle_up = 0U;
    vlSelf->__PVT__csr_instret_up = 0U;
    vlSelf->__PVT__csr_mcounten_up = 0U;
    vlSelf->__PVT__csr_w_exc = 0U;
    if (vlSelf->__PVT__exu2csr_w_req) {
        if (((((((((0x300U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                   | (0x301U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                  | (0x304U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                 | (0x305U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                | (0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
               | (0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
              | (0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
             | (0x343U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
            if ((0x300U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                vlSelf->__PVT__csr_mstatus_up = 1U;
            } else if ((0x301U != (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                if ((0x304U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mie_up = 1U;
                } else if ((0x305U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mtvec_up = 1U;
                } else if ((0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mscratch_up = 1U;
                } else if ((0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mepc_up = 1U;
                } else if ((0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mcause_up = 1U;
                } else {
                    vlSelf->__PVT__csr_mtval_up = 1U;
                }
            }
        } else if ((0x344U != (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            if ((0xb00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
                if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    vlSelf->__PVT__csr_w_exc = 1U;
                } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_cycle_up);
                } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_instret_up);
                }
            } else if ((0xb80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
                if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    vlSelf->__PVT__csr_w_exc = 1U;
                } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_cycle_up);
                } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_instret_up);
                }
            } else if ((0x320U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
                if ((((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))) 
                      | (1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) 
                     | (2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))))) {
                    vlSelf->__PVT__csr_w_exc = 1U;
                }
            } else if ((0x7e0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                vlSelf->__PVT__csr_mcounten_up = 1U;
            } else if ((1U & (~ ((((0x7a0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                                   | (0x7a1U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                                  | (0x7a2U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                                 | (0x7a4U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))))) {
                vlSelf->__PVT__csr_w_exc = 1U;
            }
        }
    }
    vlSelf->__PVT__e_mret = vlSelf->__PVT__exu2csr_mret_update;
    vlSelf->__PVT__csr2exu_mstatus_mie_up = (((IData)(vlSelf->__PVT__csr_mstatus_up) 
                                              | (IData)(vlSelf->__PVT__csr_mie_up)) 
                                             | (IData)(vlSelf->__PVT__e_mret));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1\n"); );
    // Body
    vlSelf->__PVT__csr_r_data = 0U;
    vlSelf->__PVT__csr_r_exc = 0U;
    vlSelf->__PVT__csr_brkm_req = 0U;
    if (((((((((0xf11U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
               | (0xf12U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
              | (0xf13U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
             | (0xf14U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
            | (0x300U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
           | (0x301U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
          | (0x304U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
         | (0x305U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        vlSelf->__PVT__csr_r_data = ((0xf11U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                      ? 0U : ((0xf12U 
                                               == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                               ? 8U
                                               : ((0xf13U 
                                                   == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                   ? 0x19040301U
                                                   : 
                                                  ((0xf14U 
                                                    == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                    ? vlSelf->__PVT__fuse_mhartid
                                                    : 
                                                   ((0x300U 
                                                     == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                     ? vlSelf->__PVT__csr_mstatus
                                                     : 
                                                    ((0x301U 
                                                      == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                      ? 0x40001104U
                                                      : 
                                                     ((0x304U 
                                                       == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                       ? vlSelf->__PVT__csr_mie
                                                       : 
                                                      VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 
                                                                    VL_EXTEND_II(6,1, (IData)(vlSelf->__PVT__csr_mtvec_mode))))))))));
    } else if (((((((((0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                      | (0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                     | (0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                    | (0x343U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                   | (0x344U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                  | (0xc00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) 
                 | (0xc80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) 
                | (0xb00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr))))) {
        if ((0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mscratch;
        } else if ((0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = VL_CONCAT_III(32,31,1, vlSelf->__PVT__csr_mepc, 0U);
        } else if ((0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = VL_CONCAT_III(32,1,31, (IData)(vlSelf->__PVT__csr_mcause_i), 
                                                      VL_EXTEND_II(31,4, (IData)(vlSelf->__PVT__csr_mcause_ec)));
        } else if ((0x343U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mtval;
        } else if ((0x344U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mip;
        } else if ((0xc00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
            if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__mtime_ext, 0U, 0x20U);
            } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0U, 0x20U);
            } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0U, 0x20U);
            }
        } else if ((0xc80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
            if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__mtime_ext, 0x20U, 0x20U);
            } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0x20U, 0x20U);
            } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0x20U, 0x20U);
            }
        } else if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
        } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0U, 0x20U);
        } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0U, 0x20U);
        }
    } else if ((0xb80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
        } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0x20U, 0x20U);
        } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0x20U, 0x20U);
        }
    } else if ((0x320U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        if ((((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))) 
              | (1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) 
             | (2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))))) {
            vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
        }
    } else if ((0x7e0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
        vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mcounten;
    } else if (((((0x7a0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                  | (0x7a1U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                 | (0x7a2U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                | (0x7a4U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        vlSelf->__PVT__csr_brkm_req = 1U;
        vlSelf->__PVT__csr_r_data = vlSelf->__PVT__tdu2csr_rdata;
    } else {
        vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
    }
    vlSelf->__PVT__csr_w_data = ((1U == (IData)(vlSelf->__PVT__exu2csr_w_cmd))
                                  ? vlSelf->__PVT__exu2csr_w_data
                                  : ((2U == (IData)(vlSelf->__PVT__exu2csr_w_cmd))
                                      ? (vlSelf->__PVT__exu2csr_w_data 
                                         | vlSelf->__PVT__csr_r_data)
                                      : ((3U == (IData)(vlSelf->__PVT__exu2csr_w_cmd))
                                          ? ((~ vlSelf->__PVT__exu2csr_w_data) 
                                             & vlSelf->__PVT__csr_r_data)
                                          : 0U)));
    vlSelf->__PVT__csr2exu_r_data = vlSelf->__PVT__csr_r_data;
    vlSelf->__PVT__csr2tdu_req = ((IData)(vlSelf->__PVT__csr_brkm_req) 
                                  & (((IData)(vlSelf->__PVT__exu2csr_r_req) 
                                      & (~ (IData)(vlSelf->__PVT__csr_r_exc))) 
                                     | ((IData)(vlSelf->__PVT__exu2csr_w_req) 
                                        & (~ (IData)(vlSelf->__PVT__csr_w_exc)))));
    vlSelf->__PVT__csr_cycle_lo_new = vlSelf->__PVT__csr_cycle_lo;
    vlSelf->__PVT__csr_cycle_hi_new = vlSelf->__PVT__csr_cycle_hi;
    if (vlSelf->__PVT__csr_cycle_inc_lo) {
        vlSelf->__PVT__csr_cycle_lo_new = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__csr_cycle_lo)));
    }
    if (vlSelf->__PVT__csr_cycle_inc_hi) {
        vlSelf->__PVT__csr_cycle_hi_new = (0xffffffffffffffULL 
                                           & (1ULL 
                                              + vlSelf->__PVT__csr_cycle_hi));
    }
    if ((1U == (IData)(vlSelf->__PVT__csr_cycle_up))) {
        vlSelf->__PVT__csr_cycle_lo_new = (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 0U, 8U));
        VL_ASSIGNSEL_QI(56,24,0U, vlSelf->__PVT__csr_cycle_hi_new, 
                        (0xffffffU & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 8U, 0x18U)));
    } else if ((2U == (IData)(vlSelf->__PVT__csr_cycle_up))) {
        VL_ASSIGNSEL_QI(56,32,0x18U, vlSelf->__PVT__csr_cycle_hi_new, vlSelf->__PVT__csr_w_data);
    }
    vlSelf->__PVT__csr2exu_rw_exc = (((IData)(vlSelf->__PVT__csr_r_exc) 
                                      | (IData)(vlSelf->__PVT__csr_w_exc)) 
                                     | ((IData)(vlSelf->__PVT__csr2tdu_req) 
                                        & (IData)(vlSelf->__PVT__tdu2csr_resp)));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2\n"); );
    // Body
    vlSelf->__PVT__csr_instret_inc_lo = ((IData)(vlSelf->__PVT__instret_nexc) 
                                         & (IData)(vlSelf->__PVT__csr_mcounten_ir));
    vlSelf->__PVT__e_exc = vlSelf->__PVT__exu2csr_take_exc;
    vlSelf->__PVT__e_irq = ((IData)(vlSelf->__PVT__exu2csr_take_irq) 
                            & (~ (IData)(vlSelf->__PVT__exu2csr_take_exc)));
    vlSelf->__PVT__csr2exu_new_pc = ((IData)(vlSelf->__PVT__csr_mtvec_mode)
                                      ? ((IData)(vlSelf->__PVT__exu2csr_take_exc)
                                          ? VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0U)
                                          : (((IData)(vlSelf->__PVT__csr_mip_meip) 
                                              & (IData)(vlSelf->__PVT__csr_mie_meie))
                                              ? VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0x2cU)
                                              : (((IData)(vlSelf->__PVT__csr_mip_msip) 
                                                  & (IData)(vlSelf->__PVT__csr_mie_msie))
                                                  ? 
                                                 VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0xcU)
                                                  : 
                                                 (((IData)(vlSelf->__PVT__csr_mip_mtip) 
                                                   & (IData)(vlSelf->__PVT__csr_mie_mtie))
                                                   ? 
                                                  VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0x1cU)
                                                   : 
                                                  VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0U)))))
                                      : VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0U));
    if (((IData)(vlSelf->__PVT__exu2csr_mret_instr) 
         & (~ (IData)(vlSelf->__PVT__exu2csr_take_irq)))) {
        vlSelf->__PVT__csr2exu_new_pc = VL_CONCAT_III(32,31,1, vlSelf->__PVT__csr_mepc, 0U);
    }
    vlSelf->__PVT__csr_instret_inc_hi = ((IData)(vlSelf->__PVT__csr_instret_inc_lo) 
                                         & VL_REDAND_II(8, (IData)(vlSelf->__PVT__csr_instret_lo)));
    vlSelf->__PVT__csr_instret_lo_new = vlSelf->__PVT__csr_instret_lo;
    vlSelf->__PVT__csr_instret_hi_new = vlSelf->__PVT__csr_instret_hi;
    if (vlSelf->__PVT__csr_instret_inc_lo) {
        vlSelf->__PVT__csr_instret_lo_new = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__csr_instret_lo)));
    }
    if (vlSelf->__PVT__csr_instret_inc_hi) {
        vlSelf->__PVT__csr_instret_hi_new = (0xffffffffffffffULL 
                                             & (1ULL 
                                                + vlSelf->__PVT__csr_instret_hi));
    }
    if ((1U == (IData)(vlSelf->__PVT__csr_instret_up))) {
        vlSelf->__PVT__csr_instret_lo_new = (0xffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 0U, 8U));
        VL_ASSIGNSEL_QI(56,24,0U, vlSelf->__PVT__csr_instret_hi_new, 
                        (0xffffffU & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 8U, 0x18U)));
    } else if ((2U == (IData)(vlSelf->__PVT__csr_instret_up))) {
        VL_ASSIGNSEL_QI(56,32,0x18U, vlSelf->__PVT__csr_instret_hi_new, vlSelf->__PVT__csr_w_data);
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0\n"); );
    // Body
    vlSelf->__PVT__csr_mip_msip = vlSelf->__PVT__soft_irq;
    vlSelf->__PVT__csr_mip_mtip = vlSelf->__PVT__timer_irq;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1\n"); );
    // Body
    vlSelf->__Vdly__csr_mstatus_mpie = vlSelf->__PVT__csr_mstatus_mpie;
    vlSelf->__Vdly__csr_mstatus_mie = vlSelf->__PVT__csr_mstatus_mie;
    vlSelf->__Vdly__csr_mscratch = vlSelf->__PVT__csr_mscratch;
    vlSelf->__Vdly__csr_mtval = vlSelf->__PVT__csr_mtval;
    vlSelf->__Vdly__csr_mtvec_mode = vlSelf->__PVT__csr_mtvec_mode;
    vlSelf->__Vdly__csr_mtvec_base = vlSelf->__PVT__csr_mtvec_base;
    vlSelf->__Vdly__csr_mepc = vlSelf->__PVT__csr_mepc;
    vlSelf->__Vdly__csr_mcause_ec = vlSelf->__PVT__csr_mcause_ec;
    vlSelf->__Vdly__csr_mcause_i = vlSelf->__PVT__csr_mcause_i;
    vlSelf->__Vdly__csr_cycle_hi = vlSelf->__PVT__csr_cycle_hi;
    vlSelf->__Vdly__csr_instret_hi = vlSelf->__PVT__csr_instret_hi;
    vlSelf->__Vdly__csr_cycle_lo = vlSelf->__PVT__csr_cycle_lo;
    vlSelf->__Vdly__csr_instret_lo = vlSelf->__PVT__csr_instret_lo;
    vlSelf->__Vdly__csr_mcounten_cy = vlSelf->__PVT__csr_mcounten_cy;
    vlSelf->__Vdly__csr_mcounten_ir = vlSelf->__PVT__csr_mcounten_ir;
    vlSelf->__Vdly__csr_mie_msie = vlSelf->__PVT__csr_mie_msie;
    vlSelf->__Vdly__csr_mie_meie = vlSelf->__PVT__csr_mie_meie;
    vlSelf->__Vdly__csr_mie_mtie = vlSelf->__PVT__csr_mie_mtie;
    if (vlSelf->__PVT__rst_n) {
        if (((IData)(vlSelf->__PVT__e_exc) | (IData)(vlSelf->__PVT__e_irq))) {
            vlSelf->__Vdly__csr_mstatus_mie = 0U;
            vlSelf->__Vdly__csr_mstatus_mpie = vlSelf->__PVT__csr_mstatus_mie;
        } else if (vlSelf->__PVT__e_mret) {
            vlSelf->__Vdly__csr_mstatus_mie = vlSelf->__PVT__csr_mstatus_mpie;
            vlSelf->__Vdly__csr_mstatus_mpie = 1U;
        } else if (vlSelf->__PVT__csr_mstatus_up) {
            vlSelf->__Vdly__csr_mstatus_mie = (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 3U));
            vlSelf->__Vdly__csr_mstatus_mpie = (1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 7U));
        }
    } else {
        vlSelf->__Vdly__csr_mstatus_mie = 0U;
        vlSelf->__Vdly__csr_mstatus_mpie = 1U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__csr_mscratch_up) {
            vlSelf->__Vdly__csr_mscratch = vlSelf->__PVT__csr_w_data;
        }
    } else {
        vlSelf->__Vdly__csr_mscratch = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__e_exc) {
            vlSelf->__Vdly__csr_mtval = vlSelf->__PVT__exu2csr_trap_val;
        } else if (vlSelf->__PVT__e_irq) {
            vlSelf->__Vdly__csr_mtval = 0U;
        } else if (vlSelf->__PVT__csr_mtval_up) {
            vlSelf->__Vdly__csr_mtval = vlSelf->__PVT__csr_w_data;
        }
    } else {
        vlSelf->__Vdly__csr_mtval = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__csr_mtvec_up) {
            vlSelf->__Vdly__csr_mtvec_mode = (1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 0U));
        }
    } else {
        vlSelf->__Vdly__csr_mtvec_mode = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__csr_mtvec_up) {
            vlSelf->__Vdly__csr_mtvec_base = (0x3ffffffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 6U, 0x1aU));
        }
    } else {
        vlSelf->__Vdly__csr_mtvec_base = 7U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__e_exc) {
            vlSelf->__Vdly__csr_mepc = (0x7fffffffU 
                                        & VL_SEL_IIII(32, vlSelf->__PVT__curr_pc, 1U, 0x1fU));
        } else if (((IData)(vlSelf->__PVT__e_irq) & 
                    (~ (IData)(vlSelf->__PVT__exu2csr_mret_instr)))) {
            vlSelf->__Vdly__csr_mepc = (0x7fffffffU 
                                        & VL_SEL_IIII(32, vlSelf->__PVT__next_pc, 1U, 0x1fU));
        } else if (vlSelf->__PVT__csr_mepc_up) {
            vlSelf->__Vdly__csr_mepc = (0x7fffffffU 
                                        & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 1U, 0x1fU));
        }
    } else {
        vlSelf->__Vdly__csr_mepc = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__e_exc) {
            vlSelf->__Vdly__csr_mcause_i = 0U;
            vlSelf->__Vdly__csr_mcause_ec = vlSelf->__PVT__exu2csr_exc_code;
        } else if (vlSelf->__PVT__e_irq) {
            vlSelf->__Vdly__csr_mcause_i = 1U;
            vlSelf->__Vdly__csr_mcause_ec = vlSelf->__PVT__csr_mcause_ec_new;
        } else if (vlSelf->__PVT__csr_mcause_up) {
            vlSelf->__Vdly__csr_mcause_i = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 0x1fU));
            vlSelf->__Vdly__csr_mcause_ec = (0xfU & 
                                             VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 0U, 4U));
        }
    } else {
        vlSelf->__Vdly__csr_mcause_i = 0U;
        vlSelf->__Vdly__csr_mcause_ec = 0U;
    }
    if (vlSelf->__PVT__rst_n) {
        if ((1U & ((IData)(vlSelf->__PVT__csr_cycle_inc_lo) 
                   | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_cycle_up), 0U)))) {
            vlSelf->__Vdly__csr_cycle_lo = vlSelf->__PVT__csr_cycle_lo_new;
        }
        if (((IData)(vlSelf->__PVT__csr_cycle_inc_hi) 
             | VL_REDOR_I((IData)(vlSelf->__PVT__csr_cycle_up)))) {
            vlSelf->__Vdly__csr_cycle_hi = vlSelf->__PVT__csr_cycle_hi_new;
        }
    } else {
        vlSelf->__Vdly__csr_cycle_lo = 0U;
        vlSelf->__Vdly__csr_cycle_hi = 0ULL;
    }
    if (vlSelf->__PVT__rst_n) {
        if ((1U & ((IData)(vlSelf->__PVT__csr_instret_inc_lo) 
                   | VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csr_instret_up), 0U)))) {
            vlSelf->__Vdly__csr_instret_lo = vlSelf->__PVT__csr_instret_lo_new;
        }
        if (((IData)(vlSelf->__PVT__csr_instret_inc_hi) 
             | VL_REDOR_I((IData)(vlSelf->__PVT__csr_instret_up)))) {
            vlSelf->__Vdly__csr_instret_hi = vlSelf->__PVT__csr_instret_hi_new;
        }
    } else {
        vlSelf->__Vdly__csr_instret_lo = 0U;
        vlSelf->__Vdly__csr_instret_hi = 0ULL;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__csr_mcounten_up) {
            vlSelf->__Vdly__csr_mcounten_cy = (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 0U));
            vlSelf->__Vdly__csr_mcounten_ir = (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 2U));
        }
    } else {
        vlSelf->__Vdly__csr_mcounten_cy = 1U;
        vlSelf->__Vdly__csr_mcounten_ir = 1U;
    }
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__csr_mie_up) {
            vlSelf->__Vdly__csr_mie_mtie = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 7U));
            vlSelf->__Vdly__csr_mie_meie = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 0xbU));
            vlSelf->__Vdly__csr_mie_msie = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_w_data, 3U));
        }
    } else {
        vlSelf->__Vdly__csr_mie_mtie = 0U;
        vlSelf->__Vdly__csr_mie_meie = 0U;
        vlSelf->__Vdly__csr_mie_msie = 0U;
    }
    vlSelf->__PVT__csr_mstatus_mpie = vlSelf->__Vdly__csr_mstatus_mpie;
    vlSelf->__PVT__csr_mstatus_mie = vlSelf->__Vdly__csr_mstatus_mie;
    vlSelf->__PVT__csr_mscratch = vlSelf->__Vdly__csr_mscratch;
    vlSelf->__PVT__csr_mtval = vlSelf->__Vdly__csr_mtval;
    vlSelf->__PVT__csr_mtvec_mode = vlSelf->__Vdly__csr_mtvec_mode;
    vlSelf->__PVT__csr_mtvec_base = vlSelf->__Vdly__csr_mtvec_base;
    vlSelf->__PVT__csr_mepc = vlSelf->__Vdly__csr_mepc;
    vlSelf->__PVT__csr_mcause_i = vlSelf->__Vdly__csr_mcause_i;
    vlSelf->__PVT__csr_mcause_ec = vlSelf->__Vdly__csr_mcause_ec;
    vlSelf->__PVT__csr_cycle_hi = vlSelf->__Vdly__csr_cycle_hi;
    vlSelf->__PVT__csr_cycle_lo = vlSelf->__Vdly__csr_cycle_lo;
    vlSelf->__PVT__csr_instret_hi = vlSelf->__Vdly__csr_instret_hi;
    vlSelf->__PVT__csr_instret_lo = vlSelf->__Vdly__csr_instret_lo;
    vlSelf->__PVT__csr_mcounten_cy = vlSelf->__Vdly__csr_mcounten_cy;
    vlSelf->__PVT__csr_mcounten_ir = vlSelf->__Vdly__csr_mcounten_ir;
    vlSelf->__PVT__csr_mie_mtie = vlSelf->__Vdly__csr_mie_mtie;
    vlSelf->__PVT__csr_mie_meie = vlSelf->__Vdly__csr_mie_meie;
    vlSelf->__PVT__csr_mie_msie = vlSelf->__Vdly__csr_mie_msie;
    vlSelf->__PVT__csr_cycle = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT__csr_cycle_hi, (IData)(vlSelf->__PVT__csr_cycle_lo));
    vlSelf->__PVT__csr_instret = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT__csr_instret_hi, (IData)(vlSelf->__PVT__csr_instret_lo));
    vlSelf->__PVT__csr_cycle_inc_lo = vlSelf->__PVT__csr_mcounten_cy;
    vlSelf->__PVT__csr_cycle_inc_hi = ((IData)(vlSelf->__PVT__csr_cycle_inc_lo) 
                                       & VL_REDAND_II(8, (IData)(vlSelf->__PVT__csr_cycle_lo)));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0\n"); );
    // Body
    vlSelf->__PVT__csr_mcause_ec_new = (((IData)(vlSelf->__PVT__csr_mip_meip) 
                                         & (IData)(vlSelf->__PVT__csr_mie_meie))
                                         ? 0xbU : (
                                                   ((IData)(vlSelf->__PVT__csr_mip_msip) 
                                                    & (IData)(vlSelf->__PVT__csr_mie_msie))
                                                    ? 3U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__csr_mip_mtip) 
                                                     & (IData)(vlSelf->__PVT__csr_mie_mtie))
                                                     ? 7U
                                                     : 0xbU)));
    vlSelf->__PVT__csr2exu_ip_ie = ((((IData)(vlSelf->__PVT__csr_mip_meip) 
                                      & (IData)(vlSelf->__PVT__csr_mie_meie)) 
                                     | ((IData)(vlSelf->__PVT__csr_mip_msip) 
                                        & (IData)(vlSelf->__PVT__csr_mie_msie))) 
                                    | ((IData)(vlSelf->__PVT__csr_mip_mtip) 
                                       & (IData)(vlSelf->__PVT__csr_mie_mtie)));
    vlSelf->__PVT__csr_mstatus = 0U;
    vlSelf->__PVT__csr_mie = 0U;
    vlSelf->__PVT__csr_mip = 0U;
    vlSelf->__PVT__csr_mcounten = 0U;
    VL_ASSIGNBIT_II(3U, vlSelf->__PVT__csr_mstatus, vlSelf->__PVT__csr_mstatus_mie);
    VL_ASSIGNBIT_II(7U, vlSelf->__PVT__csr_mstatus, vlSelf->__PVT__csr_mstatus_mpie);
    VL_ASSIGNSEL_II(32,2,0xbU, vlSelf->__PVT__csr_mstatus, 3U);
    VL_ASSIGNBIT_II(3U, vlSelf->__PVT__csr_mie, vlSelf->__PVT__csr_mie_msie);
    VL_ASSIGNBIT_II(7U, vlSelf->__PVT__csr_mie, vlSelf->__PVT__csr_mie_mtie);
    VL_ASSIGNBIT_II(0xbU, vlSelf->__PVT__csr_mie, vlSelf->__PVT__csr_mie_meie);
    VL_ASSIGNBIT_II(3U, vlSelf->__PVT__csr_mip, vlSelf->__PVT__csr_mip_msip);
    VL_ASSIGNBIT_II(7U, vlSelf->__PVT__csr_mip, vlSelf->__PVT__csr_mip_mtip);
    VL_ASSIGNBIT_II(0xbU, vlSelf->__PVT__csr_mip, vlSelf->__PVT__csr_mip_meip);
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__csr_mcounten, vlSelf->__PVT__csr_mcounten_cy);
    VL_ASSIGNBIT_II(2U, vlSelf->__PVT__csr_mcounten, vlSelf->__PVT__csr_mcounten_ir);
    vlSelf->__PVT__csr2exu_irq = ((IData)(vlSelf->__PVT__csr2exu_ip_ie) 
                                  & (IData)(vlSelf->__PVT__csr_mstatus_mie));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1\n"); );
    // Body
    vlSelf->__PVT__csr2tdu_cmd = vlSelf->__PVT__exu2csr_w_cmd;
    vlSelf->__PVT__csr2tdu_addr = (7U & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 3U));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2\n"); );
    // Body
    vlSelf->__PVT__csr_mstatus_up = 0U;
    vlSelf->__PVT__csr_mie_up = 0U;
    vlSelf->__PVT__csr_mscratch_up = 0U;
    vlSelf->__PVT__csr_mepc_up = 0U;
    vlSelf->__PVT__csr_mcause_up = 0U;
    vlSelf->__PVT__csr_mtval_up = 0U;
    vlSelf->__PVT__csr_mtvec_up = 0U;
    vlSelf->__PVT__csr_cycle_up = 0U;
    vlSelf->__PVT__csr_instret_up = 0U;
    vlSelf->__PVT__csr_mcounten_up = 0U;
    vlSelf->__PVT__csr_w_exc = 0U;
    if (vlSelf->__PVT__exu2csr_w_req) {
        if (((((((((0x300U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                   | (0x301U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                  | (0x304U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                 | (0x305U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                | (0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
               | (0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
              | (0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
             | (0x343U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
            if ((0x300U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                vlSelf->__PVT__csr_mstatus_up = 1U;
            } else if ((0x301U != (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                if ((0x304U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mie_up = 1U;
                } else if ((0x305U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mtvec_up = 1U;
                } else if ((0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mscratch_up = 1U;
                } else if ((0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mepc_up = 1U;
                } else if ((0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                    vlSelf->__PVT__csr_mcause_up = 1U;
                } else {
                    vlSelf->__PVT__csr_mtval_up = 1U;
                }
            }
        } else if ((0x344U != (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            if ((0xb00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
                if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    vlSelf->__PVT__csr_w_exc = 1U;
                } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_cycle_up);
                } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(0U, vlSelf->__PVT__csr_instret_up);
                }
            } else if ((0xb80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
                if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    vlSelf->__PVT__csr_w_exc = 1U;
                } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_cycle_up);
                } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                    VL_ASSIGNBIT_IO(1U, vlSelf->__PVT__csr_instret_up);
                }
            } else if ((0x320U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
                if ((((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))) 
                      | (1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) 
                     | (2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))))) {
                    vlSelf->__PVT__csr_w_exc = 1U;
                }
            } else if ((0x7e0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
                vlSelf->__PVT__csr_mcounten_up = 1U;
            } else if ((1U & (~ ((((0x7a0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                                   | (0x7a1U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                                  | (0x7a2U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                                 | (0x7a4U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))))) {
                vlSelf->__PVT__csr_w_exc = 1U;
            }
        }
    }
    vlSelf->__PVT__e_mret = vlSelf->__PVT__exu2csr_mret_update;
    vlSelf->__PVT__csr2exu_mstatus_mie_up = (((IData)(vlSelf->__PVT__csr_mstatus_up) 
                                              | (IData)(vlSelf->__PVT__csr_mie_up)) 
                                             | (IData)(vlSelf->__PVT__e_mret));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__3(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__3\n"); );
    // Body
    vlSelf->__PVT__csr2tdu_wdata = vlSelf->__PVT__exu2csr_w_data;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__4(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__4\n"); );
    // Body
    vlSelf->__PVT__csr_r_data = 0U;
    vlSelf->__PVT__csr_r_exc = 0U;
    vlSelf->__PVT__csr_brkm_req = 0U;
    if (((((((((0xf11U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
               | (0xf12U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
              | (0xf13U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
             | (0xf14U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
            | (0x300U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
           | (0x301U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
          | (0x304U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
         | (0x305U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        vlSelf->__PVT__csr_r_data = ((0xf11U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                      ? 0U : ((0xf12U 
                                               == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                               ? 8U
                                               : ((0xf13U 
                                                   == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                   ? 0x19040301U
                                                   : 
                                                  ((0xf14U 
                                                    == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                    ? vlSelf->__PVT__fuse_mhartid
                                                    : 
                                                   ((0x300U 
                                                     == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                     ? vlSelf->__PVT__csr_mstatus
                                                     : 
                                                    ((0x301U 
                                                      == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                      ? 0x40001104U
                                                      : 
                                                     ((0x304U 
                                                       == (IData)(vlSelf->__PVT__exu2csr_rw_addr))
                                                       ? vlSelf->__PVT__csr_mie
                                                       : 
                                                      VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 
                                                                    VL_EXTEND_II(6,1, (IData)(vlSelf->__PVT__csr_mtvec_mode))))))))));
    } else if (((((((((0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                      | (0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                     | (0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                    | (0x343U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                   | (0x344U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                  | (0xc00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) 
                 | (0xc80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) 
                | (0xb00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr))))) {
        if ((0x340U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mscratch;
        } else if ((0x341U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = VL_CONCAT_III(32,31,1, vlSelf->__PVT__csr_mepc, 0U);
        } else if ((0x342U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = VL_CONCAT_III(32,1,31, (IData)(vlSelf->__PVT__csr_mcause_i), 
                                                      VL_EXTEND_II(31,4, (IData)(vlSelf->__PVT__csr_mcause_ec)));
        } else if ((0x343U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mtval;
        } else if ((0x344U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
            vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mip;
        } else if ((0xc00U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
            if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__mtime_ext, 0U, 0x20U);
            } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0U, 0x20U);
            } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0U, 0x20U);
            }
        } else if ((0xc80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
            if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__mtime_ext, 0x20U, 0x20U);
            } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0x20U, 0x20U);
            } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
                vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0x20U, 0x20U);
            }
        } else if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
        } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0U, 0x20U);
        } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0U, 0x20U);
        }
    } else if ((0xb80U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        if ((1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
        } else if ((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_cycle, 0x20U, 0x20U);
        } else if ((2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) {
            vlSelf->__PVT__csr_r_data = VL_SEL_IQII(64, vlSelf->__PVT__csr_instret, 0x20U, 0x20U);
        }
    } else if ((0x320U == (0xfe0U & (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        if ((((0U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))) 
              | (1U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U)))) 
             | (2U == (0x1fU & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 0U, 5U))))) {
            vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
        }
    } else if ((0x7e0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) {
        vlSelf->__PVT__csr_r_data = vlSelf->__PVT__csr_mcounten;
    } else if (((((0x7a0U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)) 
                  | (0x7a1U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                 | (0x7a2U == (IData)(vlSelf->__PVT__exu2csr_rw_addr))) 
                | (0x7a4U == (IData)(vlSelf->__PVT__exu2csr_rw_addr)))) {
        vlSelf->__PVT__csr_brkm_req = 1U;
        vlSelf->__PVT__csr_r_data = vlSelf->__PVT__tdu2csr_rdata;
    } else {
        vlSelf->__PVT__csr_r_exc = vlSelf->__PVT__exu2csr_r_req;
    }
    vlSelf->__PVT__csr_w_data = ((1U == (IData)(vlSelf->__PVT__exu2csr_w_cmd))
                                  ? vlSelf->__PVT__exu2csr_w_data
                                  : ((2U == (IData)(vlSelf->__PVT__exu2csr_w_cmd))
                                      ? (vlSelf->__PVT__exu2csr_w_data 
                                         | vlSelf->__PVT__csr_r_data)
                                      : ((3U == (IData)(vlSelf->__PVT__exu2csr_w_cmd))
                                          ? ((~ vlSelf->__PVT__exu2csr_w_data) 
                                             & vlSelf->__PVT__csr_r_data)
                                          : 0U)));
    vlSelf->__PVT__csr2exu_r_data = vlSelf->__PVT__csr_r_data;
    vlSelf->__PVT__csr2tdu_req = ((IData)(vlSelf->__PVT__csr_brkm_req) 
                                  & (((IData)(vlSelf->__PVT__exu2csr_r_req) 
                                      & (~ (IData)(vlSelf->__PVT__csr_r_exc))) 
                                     | ((IData)(vlSelf->__PVT__exu2csr_w_req) 
                                        & (~ (IData)(vlSelf->__PVT__csr_w_exc)))));
    vlSelf->__PVT__csr_cycle_lo_new = vlSelf->__PVT__csr_cycle_lo;
    vlSelf->__PVT__csr_cycle_hi_new = vlSelf->__PVT__csr_cycle_hi;
    if (vlSelf->__PVT__csr_cycle_inc_lo) {
        vlSelf->__PVT__csr_cycle_lo_new = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__csr_cycle_lo)));
    }
    if (vlSelf->__PVT__csr_cycle_inc_hi) {
        vlSelf->__PVT__csr_cycle_hi_new = (0xffffffffffffffULL 
                                           & (1ULL 
                                              + vlSelf->__PVT__csr_cycle_hi));
    }
    if ((1U == (IData)(vlSelf->__PVT__csr_cycle_up))) {
        vlSelf->__PVT__csr_cycle_lo_new = (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 0U, 8U));
        VL_ASSIGNSEL_QI(56,24,0U, vlSelf->__PVT__csr_cycle_hi_new, 
                        (0xffffffU & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 8U, 0x18U)));
    } else if ((2U == (IData)(vlSelf->__PVT__csr_cycle_up))) {
        VL_ASSIGNSEL_QI(56,32,0x18U, vlSelf->__PVT__csr_cycle_hi_new, vlSelf->__PVT__csr_w_data);
    }
    vlSelf->__PVT__csr2exu_rw_exc = (((IData)(vlSelf->__PVT__csr_r_exc) 
                                      | (IData)(vlSelf->__PVT__csr_w_exc)) 
                                     | ((IData)(vlSelf->__PVT__csr2tdu_req) 
                                        & (IData)(vlSelf->__PVT__tdu2csr_resp)));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__5(Vssrv_top_scr1_pipe_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__5\n"); );
    // Body
    vlSelf->__PVT__csr_instret_inc_lo = ((IData)(vlSelf->__PVT__instret_nexc) 
                                         & (IData)(vlSelf->__PVT__csr_mcounten_ir));
    vlSelf->__PVT__e_exc = vlSelf->__PVT__exu2csr_take_exc;
    vlSelf->__PVT__e_irq = ((IData)(vlSelf->__PVT__exu2csr_take_irq) 
                            & (~ (IData)(vlSelf->__PVT__exu2csr_take_exc)));
    vlSelf->__PVT__csr2exu_new_pc = ((IData)(vlSelf->__PVT__csr_mtvec_mode)
                                      ? ((IData)(vlSelf->__PVT__exu2csr_take_exc)
                                          ? VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0U)
                                          : (((IData)(vlSelf->__PVT__csr_mip_meip) 
                                              & (IData)(vlSelf->__PVT__csr_mie_meie))
                                              ? VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0x2cU)
                                              : (((IData)(vlSelf->__PVT__csr_mip_msip) 
                                                  & (IData)(vlSelf->__PVT__csr_mie_msie))
                                                  ? 
                                                 VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0xcU)
                                                  : 
                                                 (((IData)(vlSelf->__PVT__csr_mip_mtip) 
                                                   & (IData)(vlSelf->__PVT__csr_mie_mtie))
                                                   ? 
                                                  VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0x1cU)
                                                   : 
                                                  VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0U)))))
                                      : VL_CONCAT_III(32,26,6, vlSelf->__PVT__csr_mtvec_base, 0U));
    if (((IData)(vlSelf->__PVT__exu2csr_mret_instr) 
         & (~ (IData)(vlSelf->__PVT__exu2csr_take_irq)))) {
        vlSelf->__PVT__csr2exu_new_pc = VL_CONCAT_III(32,31,1, vlSelf->__PVT__csr_mepc, 0U);
    }
    vlSelf->__PVT__csr_instret_inc_hi = ((IData)(vlSelf->__PVT__csr_instret_inc_lo) 
                                         & VL_REDAND_II(8, (IData)(vlSelf->__PVT__csr_instret_lo)));
    vlSelf->__PVT__csr_instret_lo_new = vlSelf->__PVT__csr_instret_lo;
    vlSelf->__PVT__csr_instret_hi_new = vlSelf->__PVT__csr_instret_hi;
    if (vlSelf->__PVT__csr_instret_inc_lo) {
        vlSelf->__PVT__csr_instret_lo_new = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__csr_instret_lo)));
    }
    if (vlSelf->__PVT__csr_instret_inc_hi) {
        vlSelf->__PVT__csr_instret_hi_new = (0xffffffffffffffULL 
                                             & (1ULL 
                                                + vlSelf->__PVT__csr_instret_hi));
    }
    if ((1U == (IData)(vlSelf->__PVT__csr_instret_up))) {
        vlSelf->__PVT__csr_instret_lo_new = (0xffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 0U, 8U));
        VL_ASSIGNSEL_QI(56,24,0U, vlSelf->__PVT__csr_instret_hi_new, 
                        (0xffffffU & VL_SEL_IIII(32, vlSelf->__PVT__csr_w_data, 8U, 0x18U)));
    } else if ((2U == (IData)(vlSelf->__PVT__csr_instret_up))) {
        VL_ASSIGNSEL_QI(56,32,0x18U, vlSelf->__PVT__csr_instret_hi_new, vlSelf->__PVT__csr_w_data);
    }
}
