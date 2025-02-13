// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_lsu__pi2.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__0(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__0\n"); );
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
            vlSelf->__Vdly__mem_cacheable_q = (((0x80000000U 
                                                 <= vlSelf->__PVT__mem_addr_r) 
                                                & (0x8fffffffU 
                                                   >= vlSelf->__PVT__mem_addr_r)) 
                                               | ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                                  & (((IData)(vlSelf->__PVT__dcache_invalidate_w) 
                                                      | (IData)(vlSelf->__PVT__dcache_writeback_w)) 
                                                     | (IData)(vlSelf->__PVT__dcache_flush_w))));
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
    vlSelf->__PVT__mem_unaligned_e1_q = vlSelf->__Vdly__mem_unaligned_e1_q;
    vlSelf->__PVT__mem_unaligned_e2_q = vlSelf->__Vdly__mem_unaligned_e2_q;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__0(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__0\n"); );
    // Body
    vlSelf->__PVT__fault_load_align_w = ((IData)(vlSelf->__PVT__mem_unaligned_e2_q) 
                                         & (IData)(vlSelf->__PVT__resp_load_w));
    vlSelf->__PVT__fault_store_align_w = ((IData)(vlSelf->__PVT__mem_unaligned_e2_q) 
                                          & (~ (IData)(vlSelf->__PVT__resp_load_w)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__4(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__4\n"); );
    // Body
    vlSelf->__PVT__fault_load_page_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                        & (IData)(vlSelf->__PVT__mem_load_fault_i));
    vlSelf->__PVT__fault_store_page_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                         & (IData)(vlSelf->__PVT__mem_store_fault_i));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__1(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__1\n"); );
    // Body
    vlSelf->__PVT__complete_err_e2_w = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                        & (IData)(vlSelf->__PVT__mem_error_i));
    vlSelf->__PVT__complete_ok_e2_w = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                       & (~ (IData)(vlSelf->__PVT__mem_error_i)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__2(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__2\n"); );
    // Body
    vlSelf->__PVT__fault_load_bus_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                       & (IData)(vlSelf->__PVT__resp_load_w));
    vlSelf->__PVT__fault_store_bus_w = ((IData)(vlSelf->__PVT__mem_error_i) 
                                        & (~ (IData)(vlSelf->__PVT__resp_load_w)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__4(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__4\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelf->__PVT__wb_result_r = 0U;
    vlSelf->__PVT__addr_lsb_r = (3U & VL_SEL_IIII(32, vlSelf->__PVT__resp_addr_w, 0U, 2U));
    vlSelf->__PVT__load_byte_r = vlSelf->__PVT__resp_byte_w;
    vlSelf->__PVT__load_half_r = vlSelf->__PVT__resp_half_w;
    vlSelf->__PVT__load_signed_r = vlSelf->__PVT__resp_signed_w;
    if ((((IData)(vlSelf->__PVT__mem_ack_i) & (IData)(vlSelf->__PVT__mem_error_i)) 
         | (IData)(vlSelf->__PVT__mem_unaligned_e2_q))) {
        vlSelf->__PVT__wb_result_r = vlSelf->__PVT__resp_addr_w;
    } else if (((IData)(vlSelf->__PVT__mem_ack_i) & (IData)(vlSelf->__PVT__resp_load_w))) {
        if (vlSelf->__PVT__load_byte_r) {
            if ((3U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0x18U, 8U)));
            } else if ((2U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0x10U, 8U)));
            } else if ((1U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 8U, 8U)));
            } else if ((0U == (IData)(vlSelf->__PVT__addr_lsb_r))) {
                vlSelf->__PVT__wb_result_r = VL_EXTEND_II(32,8, 
                                                          (0xffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0U, 8U)));
            }
            if (((IData)(vlSelf->__PVT__load_signed_r) 
                 & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_r, 7U))) {
                __Vtemp_1 = VL_CONCAT_III(32,24,8, 0xffffffU, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wb_result_r, 0U, 8U)));
                vlSelf->__PVT__wb_result_r = __Vtemp_1;
            }
        } else if (vlSelf->__PVT__load_half_r) {
            vlSelf->__PVT__wb_result_r = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__addr_lsb_r), 1U))
                                           ? VL_EXTEND_II(32,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0x10U, 0x10U)))
                                           : VL_EXTEND_II(32,16, 
                                                          (0xffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__mem_data_rd_i, 0U, 0x10U))));
            if (((IData)(vlSelf->__PVT__load_signed_r) 
                 & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_r, 0xfU))) {
                __Vtemp_2 = VL_CONCAT_III(32,16,16, 0xffffU, 
                                          (0xffffU 
                                           & VL_SEL_IIII(32, vlSelf->__PVT__wb_result_r, 0U, 0x10U)));
                vlSelf->__PVT__wb_result_r = __Vtemp_2;
            }
        } else {
            vlSelf->__PVT__wb_result_r = vlSelf->__PVT__mem_data_rd_i;
        }
    }
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__wb_result_r;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__5(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__5\n"); );
    // Body
    vlSelf->__PVT__writeback_exception_o = ((IData)(vlSelf->__PVT__fault_load_align_w)
                                             ? 0x14U
                                             : ((IData)(vlSelf->__PVT__fault_store_align_w)
                                                 ? 0x16U
                                                 : 
                                                ((IData)(vlSelf->__PVT__fault_load_page_w)
                                                  ? 0x1dU
                                                  : 
                                                 ((IData)(vlSelf->__PVT__fault_store_page_w)
                                                   ? 0x1fU
                                                   : 
                                                  ((IData)(vlSelf->__PVT__fault_load_bus_w)
                                                    ? 0x15U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__fault_store_bus_w)
                                                     ? 0x17U
                                                     : 0U))))));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__7(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__7\n"); );
    // Body
    vlSelf->__PVT__load_signed_inst_w = (((3U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i)) 
                                          | (0x1003U 
                                             == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i))) 
                                         | (0x2003U 
                                            == (0x707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__store_inst_w = (((0x23U == (0x707fU 
                                               & vlSelf->__PVT__opcode_opcode_i)) 
                                    | (0x1023U == (0x707fU 
                                                   & vlSelf->__PVT__opcode_opcode_i))) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_lb_w = ((3U == (0x707fU & vlSelf->__PVT__opcode_opcode_i)) 
                               | (0x4003U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_lh_w = ((0x1003U == (0x707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)) 
                               | (0x5003U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_lw_w = ((0x2003U == (0x707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)) 
                               | (0x6003U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_sb_w = (0x23U == (0x707fU & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__req_sh_w = (0x1023U == (0x707fU 
                                           & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__req_sw_w = (0x2023U == (0x707fU 
                                           & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__dcache_flush_w = ((0x1073U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i)) 
                                     & (0x3a0U == (0xfffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))));
    vlSelf->__PVT__dcache_writeback_w = ((0x1073U == 
                                          (0x707fU 
                                           & vlSelf->__PVT__opcode_opcode_i)) 
                                         & (0x3a1U 
                                            == (0xfffU 
                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))));
    vlSelf->__PVT__dcache_invalidate_w = ((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->__PVT__opcode_opcode_i)) 
                                          & (0x3a2U 
                                             == (0xfffU 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))));
    vlSelf->__PVT__load_inst_w = ((((((3U == (0x707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)) 
                                      | (0x1003U == 
                                         (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
                                     | (0x2003U == 
                                        (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
                                    | (0x4003U == (0x707fU 
                                                   & vlSelf->__PVT__opcode_opcode_i))) 
                                   | (0x5003U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))) 
                                  | (0x6003U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_sw_lw_w = (((0x2023U == (0x707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)) 
                                   | (0x2003U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))) 
                                  | (0x6003U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__req_sh_lh_w = (((0x1023U == (0x707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)) 
                                   | (0x1003U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_opcode_i))) 
                                  | (0x5003U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__8(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__8\n"); );
    // Body
    vlSelf->__PVT__mem_addr_r = 0U;
    vlSelf->__PVT__mem_data_r = 0U;
    vlSelf->__PVT__mem_unaligned_r = 0U;
    vlSelf->__PVT__mem_wr_r = 0U;
    vlSelf->__PVT__mem_rd_r = 0U;
    vlSelf->__PVT__mem_addr_r = (((IData)(vlSelf->__PVT__opcode_valid_i) 
                                  & (0x1073U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i)))
                                  ? vlSelf->__PVT__opcode_ra_operand_i
                                  : (((IData)(vlSelf->__PVT__opcode_valid_i) 
                                      & (IData)(vlSelf->__PVT__load_inst_w))
                                      ? (vlSelf->__PVT__opcode_ra_operand_i 
                                         + VL_CONCAT_III(32,20,12, 
                                                         (0xfffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x14U)), 
                                                         (0xfffU 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x14U, 0xcU))))
                                      : (vlSelf->__PVT__opcode_ra_operand_i 
                                         + VL_CONCAT_III(32,20,12, 
                                                         (0xfffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x1fU)), 0x14U)), 
                                                         VL_CONCAT_III(12,7,5, 
                                                                       (0x7fU 
                                                                        & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 0x19U, 7U)), 
                                                                       (0x1fU 
                                                                        & VL_SEL_IIII(32, vlSelf->__PVT__opcode_opcode_i, 7U, 5U)))))));
    if (((IData)(vlSelf->__PVT__opcode_valid_i) & (IData)(vlSelf->__PVT__req_sw_lw_w))) {
        vlSelf->__PVT__mem_unaligned_r = (0U != (3U 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)));
    } else if (((IData)(vlSelf->__PVT__opcode_valid_i) 
                & (IData)(vlSelf->__PVT__req_sh_lh_w))) {
        vlSelf->__PVT__mem_unaligned_r = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U));
    }
    vlSelf->__PVT__mem_rd_r = (((IData)(vlSelf->__PVT__opcode_valid_i) 
                                & (IData)(vlSelf->__PVT__load_inst_w)) 
                               & (~ (IData)(vlSelf->__PVT__mem_unaligned_r)));
    if ((((IData)(vlSelf->__PVT__opcode_valid_i) & 
          (0x2023U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
         & (~ (IData)(vlSelf->__PVT__mem_unaligned_r)))) {
        vlSelf->__PVT__mem_data_r = vlSelf->__PVT__opcode_rb_operand_i;
        vlSelf->__PVT__mem_wr_r = 0xfU;
    } else if ((((IData)(vlSelf->__PVT__opcode_valid_i) 
                 & (0x1023U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) 
                & (~ (IData)(vlSelf->__PVT__mem_unaligned_r)))) {
        if ((2U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,16,16, 
                                                      (0xffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 0x10U)), 0U);
            vlSelf->__PVT__mem_wr_r = 0xcU;
        } else {
            vlSelf->__PVT__mem_data_r = VL_EXTEND_II(32,16, 
                                                     (0xffffU 
                                                      & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 0x10U)));
            vlSelf->__PVT__mem_wr_r = 3U;
        }
    } else if (((IData)(vlSelf->__PVT__opcode_valid_i) 
                & (0x23U == (0x707fU & vlSelf->__PVT__opcode_opcode_i)))) {
        if ((3U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,8,24, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U)), 0U);
            vlSelf->__PVT__mem_wr_r = 8U;
        } else if ((2U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,16,16, 
                                                      VL_EXTEND_II(16,8, 
                                                                   (0xffU 
                                                                    & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U))), 0U);
            vlSelf->__PVT__mem_wr_r = 4U;
        } else if ((1U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_CONCAT_III(32,24,8, 
                                                      VL_EXTEND_II(24,8, 
                                                                   (0xffU 
                                                                    & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U))), 0U);
            vlSelf->__PVT__mem_wr_r = 2U;
        } else if ((0U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mem_addr_r, 0U, 2U)))) {
            vlSelf->__PVT__mem_data_r = VL_EXTEND_II(32,8, 
                                                     (0xffU 
                                                      & VL_SEL_IIII(32, vlSelf->__PVT__opcode_rb_operand_i, 0U, 8U)));
            vlSelf->__PVT__mem_wr_r = 1U;
        }
    } else {
        vlSelf->__PVT__mem_wr_r = 0U;
    }
}
