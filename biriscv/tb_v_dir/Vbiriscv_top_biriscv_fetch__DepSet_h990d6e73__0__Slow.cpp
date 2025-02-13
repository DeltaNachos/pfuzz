// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_fetch.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_fetch(Vbiriscv_top_biriscv_fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_fetch___eval_initial__TOP__biriscv_top__u_core__u_frontend__u_fetch\n"); );
    // Body
    vlSelf->__PVT__icache_invalidate_o = 0U;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__0(Vbiriscv_top_biriscv_fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__0\n"); );
    // Body
    vlSelf->__PVT__branch_pc_w = vlSelf->__PVT__branch_pc_q;
    vlSelf->__PVT__branch_priv_w = vlSelf->__PVT__branch_priv_q;
    vlSelf->__PVT__fetch_pc_o = ((IData)(vlSelf->__PVT__skid_valid_q)
                                  ? VL_SEL_IWII(100, vlSelf->__PVT__skid_buffer_q, 0x40U, 0x20U)
                                  : VL_CONCAT_III(32,29,3, 
                                                  (0x1fffffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__pc_d_q, 3U, 0x1dU)), 0U));
    vlSelf->__PVT__fetch_pred_branch_o = (3U & ((IData)(vlSelf->__PVT__skid_valid_q)
                                                 ? 
                                                VL_SEL_IWII(100, vlSelf->__PVT__skid_buffer_q, 0x60U, 2U)
                                                 : (IData)(vlSelf->__PVT__pred_d_q)));
    vlSelf->__PVT__branch_w = vlSelf->__PVT__branch_q;
    vlSelf->__PVT__icache_priv_w = vlSelf->__PVT__genblk2__DOT__priv_f_q;
    vlSelf->__PVT__icache_pc_w = vlSelf->__PVT__pc_f_q;
    vlSelf->__PVT__fetch_resp_drop_w = ((IData)(vlSelf->__PVT__branch_w) 
                                        | (IData)(vlSelf->__PVT__genblk2__DOT__branch_d_q));
    vlSelf->__PVT__icache_priv_o = vlSelf->__PVT__icache_priv_w;
    vlSelf->__PVT__icache_pc_o = VL_CONCAT_III(32,29,3, 
                                               (0x1fffffffU 
                                                & VL_SEL_IIII(32, vlSelf->__PVT__icache_pc_w, 3U, 0x1dU)), 0U);
    vlSelf->__PVT__pc_f_o = vlSelf->__PVT__icache_pc_w;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__1(Vbiriscv_top_biriscv_fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__1\n"); );
    // Body
    vlSelf->__PVT__icache_flush_o = ((IData)(vlSelf->__PVT__fetch_invalidate_i) 
                                     | (IData)(vlSelf->__PVT__icache_invalidate_q));
    vlSelf->__PVT__fetch_fault_page_o = (1U & ((IData)(vlSelf->__PVT__skid_valid_q)
                                                ? VL_BITSEL_IWII(100, vlSelf->__PVT__skid_buffer_q, 0x63U)
                                                : (IData)(vlSelf->__PVT__icache_page_fault_i)));
    vlSelf->__PVT__fetch_instr_o = ((IData)(vlSelf->__PVT__skid_valid_q)
                                     ? VL_SEL_QWII(100, vlSelf->__PVT__skid_buffer_q, 0U, 0x40U)
                                     : vlSelf->__PVT__icache_inst_i);
    vlSelf->__PVT__fetch_fault_fetch_o = (1U & ((IData)(vlSelf->__PVT__skid_valid_q)
                                                 ? 
                                                VL_BITSEL_IWII(100, vlSelf->__PVT__skid_buffer_q, 0x62U)
                                                 : (IData)(vlSelf->__PVT__icache_error_i)));
    vlSelf->__PVT__fetch_valid_o = (((IData)(vlSelf->__PVT__icache_valid_i) 
                                     | (IData)(vlSelf->__PVT__skid_valid_q)) 
                                    & (~ (IData)(vlSelf->__PVT__fetch_resp_drop_w)));
    vlSelf->__PVT__icache_busy_w = ((IData)(vlSelf->__PVT__icache_fetch_q) 
                                    & (~ (IData)(vlSelf->__PVT__icache_valid_i)));
    vlSelf->__PVT__icache_rd_o = (((IData)(vlSelf->__PVT__active_q) 
                                   & (IData)(vlSelf->__PVT__fetch_accept_i)) 
                                  & (~ (IData)(vlSelf->__PVT__icache_busy_w)));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__2(Vbiriscv_top_biriscv_fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_fetch___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__2\n"); );
    // Body
    vlSelf->__PVT__stall_w = (1U & (((~ (IData)(vlSelf->__PVT__fetch_accept_i)) 
                                     | (IData)(vlSelf->__PVT__icache_busy_w)) 
                                    | (~ (IData)(vlSelf->__PVT__icache_accept_i))));
    vlSelf->__PVT__pc_accept_o = (1U & (~ (IData)(vlSelf->__PVT__stall_w)));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_fetch___ctor_var_reset(Vbiriscv_top_biriscv_fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_fetch___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_error_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_inst_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__icache_page_fault_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_request_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_priv_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_pc_f_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_taken_f_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__fetch_pred_branch_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_fault_fetch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_fault_page_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__icache_rd_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_invalidate_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__icache_priv_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pc_f_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__active_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_busy_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_priv_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__branch_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_priv_w = VL_RAND_RESET_I(2);
    vlSelf->__PVT__stall_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_fetch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__icache_invalidate_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_f_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_d_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pred_d_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__icache_pc_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__icache_priv_w = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_resp_drop_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(100, vlSelf->__PVT__skid_buffer_q);
    vlSelf->__PVT__skid_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__DOT__priv_f_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk2__DOT__branch_d_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__branch_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__branch_pc_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__branch_priv_q = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__active_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__stall_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__icache_fetch_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__icache_invalidate_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pc_f_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__genblk2__DOT__priv_f_q = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__genblk2__DOT__branch_d_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pc_d_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pred_d_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(100, vlSelf->__Vdly__skid_buffer_q);
    vlSelf->__Vdly__skid_valid_q = VL_RAND_RESET_I(1);
}
