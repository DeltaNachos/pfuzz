// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_lsu__MBffffffff_M0.h"

VL_INLINE_OPT void Vrv32im_top_riscv_lsu__MBffffffff_M0___ico_sequent__TOP__rv32im_top__core__u_lsu__0(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___ico_sequent__TOP__rv32im_top__core__u_lsu__0\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_lsu__0(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_lsu__0\n"); );
    // Body
    vlSelf->__Vcellout__u_lsu_request__data_out_o = vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__data_out_o;
    vlSelf->__PVT__resp_addr_w = VL_SEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 4U, 0x20U);
    vlSelf->__PVT__resp_signed_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 3U));
    vlSelf->__PVT__resp_half_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 2U));
    vlSelf->__PVT__resp_byte_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 1U));
    vlSelf->__PVT__resp_load_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 0U));
}

VL_INLINE_OPT void Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_lsu__1(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_lsu__1\n"); );
    // Body
    vlSelf->__Vdly__mem_unaligned_e1_q = vlSelf->__PVT__mem_unaligned_e1_q;
    vlSelf->__Vdly__mem_wr_q = vlSelf->__PVT__mem_wr_q;
    vlSelf->__Vdly__mem_rd_q = vlSelf->__PVT__mem_rd_q;
    vlSelf->__Vdly__pending_lsu_e2_q = vlSelf->__PVT__pending_lsu_e2_q;
    vlSelf->__Vdly__mem_cacheable_q = vlSelf->__PVT__mem_cacheable_q;
    vlSelf->__Vdly__mem_ls_q = vlSelf->__PVT__mem_ls_q;
    vlSelf->__Vdly__mem_xh_q = vlSelf->__PVT__mem_xh_q;
    vlSelf->__Vdly__mem_xb_q = vlSelf->__PVT__mem_xb_q;
    vlSelf->__Vdly__mem_load_q = vlSelf->__PVT__mem_load_q;
    vlSelf->__Vdly__mem_data_wr_q = vlSelf->__PVT__mem_data_wr_q;
    vlSelf->__Vdly__mem_flush_q = vlSelf->__PVT__mem_flush_q;
    vlSelf->__Vdly__mem_writeback_q = vlSelf->__PVT__mem_writeback_q;
    vlSelf->__Vdly__mem_invalidate_q = vlSelf->__PVT__mem_invalidate_q;
    vlSelf->__Vdly__mem_addr_q = vlSelf->__PVT__mem_addr_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__pending_lsu_e2_q = 0U;
    } else if (vlSelf->__PVT__issue_lsu_e1_w) {
        vlSelf->__Vdly__pending_lsu_e2_q = 1U;
    } else if (((IData)(vlSelf->__PVT__complete_ok_e2_w) 
                | (IData)(vlSelf->__PVT__complete_err_e2_w))) {
        vlSelf->__Vdly__pending_lsu_e2_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__mem_addr_q = 0U;
        vlSelf->__Vdly__mem_data_wr_q = 0U;
        vlSelf->__Vdly__mem_rd_q = 0U;
        vlSelf->__Vdly__mem_wr_q = 0U;
        vlSelf->__Vdly__mem_cacheable_q = 0U;
        vlSelf->__Vdly__mem_invalidate_q = 0U;
        vlSelf->__Vdly__mem_writeback_q = 0U;
        vlSelf->__Vdly__mem_flush_q = 0U;
        vlSelf->__Vdly__mem_unaligned_e1_q = 0U;
        vlSelf->__Vdly__mem_load_q = 0U;
        vlSelf->__Vdly__mem_xb_q = 0U;
        vlSelf->__Vdly__mem_xh_q = 0U;
        vlSelf->__Vdly__mem_ls_q = 0U;
    } else if (((IData)(vlSelf->__PVT__complete_err_e2_w) 
                | (IData)(vlSelf->__PVT__mem_unaligned_e2_q))) {
        vlSelf->__Vdly__mem_addr_q = 0U;
        vlSelf->__Vdly__mem_data_wr_q = 0U;
        vlSelf->__Vdly__mem_rd_q = 0U;
        vlSelf->__Vdly__mem_wr_q = 0U;
        vlSelf->__Vdly__mem_cacheable_q = 0U;
        vlSelf->__Vdly__mem_invalidate_q = 0U;
        vlSelf->__Vdly__mem_writeback_q = 0U;
        vlSelf->__Vdly__mem_flush_q = 0U;
        vlSelf->__Vdly__mem_unaligned_e1_q = 0U;
        vlSelf->__Vdly__mem_load_q = 0U;
        vlSelf->__Vdly__mem_xb_q = 0U;
        vlSelf->__Vdly__mem_xh_q = 0U;
        vlSelf->__Vdly__mem_ls_q = 0U;
    } else if ((1U & (~ ((((IData)(vlSelf->__PVT__mem_rd_q) 
                           | VL_REDOR_I((IData)(vlSelf->__PVT__mem_wr_q))) 
                          | (IData)(vlSelf->__PVT__mem_unaligned_e1_q)) 
                         & (IData)(vlSelf->__PVT__delay_lsu_e2_w))))) {
        if ((1U & (~ ((((((IData)(vlSelf->__PVT__mem_writeback_o) 
                          | (IData)(vlSelf->__PVT__mem_invalidate_o)) 
                         | (IData)(vlSelf->__PVT__mem_flush_o)) 
                        | (IData)(vlSelf->__PVT__mem_rd_o)) 
                       | (0U != (IData)(vlSelf->__PVT__mem_wr_o))) 
                      & (~ (IData)(vlSelf->__PVT__mem_accept_i)))))) {
            vlSelf->__Vdly__mem_addr_q = 0U;
            vlSelf->__Vdly__mem_data_wr_q = vlSelf->__PVT__mem_data_r;
            vlSelf->__Vdly__mem_rd_q = vlSelf->__PVT__mem_rd_r;
            vlSelf->__Vdly__mem_wr_q = vlSelf->__PVT__mem_wr_r;
            vlSelf->__Vdly__mem_cacheable_q = 0U;
            vlSelf->__Vdly__mem_invalidate_q = 0U;
            vlSelf->__Vdly__mem_writeback_q = 0U;
            vlSelf->__Vdly__mem_flush_q = 0U;
            vlSelf->__Vdly__mem_unaligned_e1_q = vlSelf->__PVT__mem_unaligned_r;
            vlSelf->__Vdly__mem_load_q = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                          & (IData)(vlSelf->__PVT__load_inst_w));
            vlSelf->__Vdly__mem_xb_q = ((IData)(vlSelf->__PVT__req_lb_w) 
                                        | (IData)(vlSelf->__PVT__req_sb_w));
            vlSelf->__Vdly__mem_xh_q = ((IData)(vlSelf->__PVT__req_lh_w) 
                                        | (IData)(vlSelf->__PVT__req_sh_w));
            vlSelf->__Vdly__mem_ls_q = vlSelf->__PVT__load_signed_inst_w;
            vlSelf->__Vdly__mem_cacheable_q = 1U;
            vlSelf->__Vdly__mem_invalidate_q = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                                & (IData)(vlSelf->__PVT__dcache_invalidate_w));
            vlSelf->__Vdly__mem_writeback_q = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                               & (IData)(vlSelf->__PVT__dcache_writeback_w));
            vlSelf->__Vdly__mem_flush_q = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                           & (IData)(vlSelf->__PVT__dcache_flush_w));
            vlSelf->__Vdly__mem_addr_q = vlSelf->__PVT__mem_addr_r;
        }
    }
    vlSelf->__PVT__pending_lsu_e2_q = vlSelf->__Vdly__pending_lsu_e2_q;
    vlSelf->__PVT__mem_cacheable_q = vlSelf->__Vdly__mem_cacheable_q;
    vlSelf->__PVT__mem_load_q = vlSelf->__Vdly__mem_load_q;
    vlSelf->__PVT__mem_xb_q = vlSelf->__Vdly__mem_xb_q;
    vlSelf->__PVT__mem_xh_q = vlSelf->__Vdly__mem_xh_q;
    vlSelf->__PVT__mem_ls_q = vlSelf->__Vdly__mem_ls_q;
    vlSelf->__PVT__mem_data_wr_q = vlSelf->__Vdly__mem_data_wr_q;
    vlSelf->__PVT__mem_invalidate_q = vlSelf->__Vdly__mem_invalidate_q;
    vlSelf->__PVT__mem_writeback_q = vlSelf->__Vdly__mem_writeback_q;
    vlSelf->__PVT__mem_flush_q = vlSelf->__Vdly__mem_flush_q;
    vlSelf->__PVT__mem_addr_q = vlSelf->__Vdly__mem_addr_q;
    vlSelf->__PVT__mem_wr_q = vlSelf->__Vdly__mem_wr_q;
    vlSelf->__PVT__mem_rd_q = vlSelf->__Vdly__mem_rd_q;
    vlSelf->__Vdly__mem_unaligned_e2_q = vlSelf->__PVT__mem_unaligned_e2_q;
    vlSelf->__PVT__mem_cacheable_o = vlSelf->__PVT__mem_cacheable_q;
    vlSelf->__PVT__mem_data_wr_o = vlSelf->__PVT__mem_data_wr_q;
    vlSelf->__PVT__mem_invalidate_o = vlSelf->__PVT__mem_invalidate_q;
    vlSelf->__PVT__mem_writeback_o = vlSelf->__PVT__mem_writeback_q;
    vlSelf->__PVT__mem_flush_o = vlSelf->__PVT__mem_flush_q;
    vlSelf->__Vcellinp__u_lsu_request__data_in_i = 
        VL_CONCAT_QII(36,32,4, vlSelf->__PVT__mem_addr_q, 
                      VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__mem_ls_q), 
                                    VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__mem_xh_q), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__mem_xb_q), (IData)(vlSelf->__PVT__mem_load_q)))));
    vlSelf->__PVT__mem_addr_o = VL_CONCAT_III(32,30,2, 
                                              (0x3fffffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_q, 2U, 0x1eU)), 0U);
    vlSelf->__Vdly__mem_unaligned_e2_q = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                                          & ((IData)(vlSelf->__PVT__mem_unaligned_e1_q) 
                                             & (~ (IData)(vlSelf->__PVT__delay_lsu_e2_w))));
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__data_in_i 
        = vlSelf->__Vcellinp__u_lsu_request__data_in_i;
    vlSelf->__PVT__mem_unaligned_e1_q = vlSelf->__Vdly__mem_unaligned_e1_q;
    vlSelf->__PVT__mem_unaligned_e2_q = vlSelf->__Vdly__mem_unaligned_e2_q;
}

VL_INLINE_OPT void Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_lsu__2(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_lsu__2\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_lsu__3(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_lsu__3\n"); );
    // Body
    vlSelf->__Vcellinp__u_lsu_request__pop_i = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                                | (IData)(vlSelf->__PVT__mem_unaligned_e2_q));
    vlSelf->__PVT__writeback_valid_o = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                        | (IData)(vlSelf->__PVT__mem_unaligned_e2_q));
    vlSelf->__PVT__delay_lsu_e2_w = ((IData)(vlSelf->__PVT__pending_lsu_e2_q) 
                                     & (~ (IData)(vlSelf->__PVT__complete_ok_e2_w)));
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__pop_i 
        = vlSelf->__Vcellinp__u_lsu_request__pop_i;
    vlSelf->__PVT__mem_wr_o = ((IData)(vlSelf->__PVT__mem_wr_q) 
                               & (~ VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__delay_lsu_e2_w), 4U)));
    vlSelf->__PVT__mem_rd_o = ((IData)(vlSelf->__PVT__mem_rd_q) 
                               & (~ (IData)(vlSelf->__PVT__delay_lsu_e2_w)));
}

VL_INLINE_OPT void Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_lsu__6(Vrv32im_top_riscv_lsu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_lsu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_lsu__6\n"); );
    // Body
    vlSelf->__PVT__issue_lsu_e1_w = ((((((IData)(vlSelf->__PVT__mem_rd_o) 
                                         | VL_REDOR_I((IData)(vlSelf->__PVT__mem_wr_o))) 
                                        | (IData)(vlSelf->__PVT__mem_writeback_o)) 
                                       | (IData)(vlSelf->__PVT__mem_invalidate_o)) 
                                      | (IData)(vlSelf->__PVT__mem_flush_o)) 
                                     & (IData)(vlSelf->__PVT__mem_accept_i));
    vlSelf->__Vcellinp__u_lsu_request__push_i = (((
                                                   ((((IData)(vlSelf->__PVT__mem_rd_o) 
                                                      | VL_REDOR_I((IData)(vlSelf->__PVT__mem_wr_o))) 
                                                     | (IData)(vlSelf->__PVT__mem_writeback_o)) 
                                                    | (IData)(vlSelf->__PVT__mem_invalidate_o)) 
                                                   | (IData)(vlSelf->__PVT__mem_flush_o)) 
                                                  & (IData)(vlSelf->__PVT__mem_accept_i)) 
                                                 | ((IData)(vlSelf->__PVT__mem_unaligned_e1_q) 
                                                    & (~ (IData)(vlSelf->__PVT__delay_lsu_e2_w))));
    vlSelf->__PVT__stall_o = ((((((((IData)(vlSelf->__PVT__mem_writeback_o) 
                                    | (IData)(vlSelf->__PVT__mem_invalidate_o)) 
                                   | (IData)(vlSelf->__PVT__mem_flush_o)) 
                                  | (IData)(vlSelf->__PVT__mem_rd_o)) 
                                 | (0U != (IData)(vlSelf->__PVT__mem_wr_o))) 
                                & (~ (IData)(vlSelf->__PVT__mem_accept_i))) 
                               | (IData)(vlSelf->__PVT__delay_lsu_e2_w)) 
                              | (IData)(vlSelf->__PVT__mem_unaligned_e1_q));
    vlSymsp->TOP__rv32im_top__core__u_lsu__u_lsu_request.__PVT__push_i 
        = vlSelf->__Vcellinp__u_lsu_request__push_i;
}
