// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_lsu__pi2.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___ico_sequent__TOP__biriscv_top__u_core__u_lsu__0(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___ico_sequent__TOP__biriscv_top__u_core__u_lsu__0\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__1(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__1\n"); );
    // Body
    vlSelf->__Vcellout__u_lsu_request__data_out_o = vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__data_out_o;
    vlSelf->__PVT__resp_addr_w = VL_SEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 4U, 0x20U);
    vlSelf->__PVT__resp_signed_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 3U));
    vlSelf->__PVT__resp_half_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 2U));
    vlSelf->__PVT__resp_byte_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 1U));
    vlSelf->__PVT__resp_load_w = (1U & VL_BITSEL_IQII(36, vlSelf->__Vcellout__u_lsu_request__data_out_o, 0U));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__2(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__2\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__3(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__3\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__data_in_i 
        = vlSelf->__Vcellinp__u_lsu_request__data_in_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__3(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__3\n"); );
    // Body
    vlSelf->__Vcellinp__u_lsu_request__pop_i = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                                | (IData)(vlSelf->__PVT__mem_unaligned_e2_q));
    vlSelf->__PVT__writeback_valid_o = ((IData)(vlSelf->__PVT__mem_ack_i) 
                                        | (IData)(vlSelf->__PVT__mem_unaligned_e2_q));
    vlSelf->__PVT__delay_lsu_e2_w = ((IData)(vlSelf->__PVT__pending_lsu_e2_q) 
                                     & (~ (IData)(vlSelf->__PVT__complete_ok_e2_w)));
    vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__pop_i 
        = vlSelf->__Vcellinp__u_lsu_request__pop_i;
    vlSelf->__PVT__mem_wr_o = ((IData)(vlSelf->__PVT__mem_wr_q) 
                               & (~ VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__delay_lsu_e2_w), 4U)));
    vlSelf->__PVT__mem_rd_o = ((IData)(vlSelf->__PVT__mem_rd_q) 
                               & (~ (IData)(vlSelf->__PVT__delay_lsu_e2_w)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__6(Vbiriscv_top_biriscv_lsu__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__6\n"); );
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
    vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__push_i 
        = vlSelf->__Vcellinp__u_lsu_request__push_i;
}
