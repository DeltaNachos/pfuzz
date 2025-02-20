// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_core_top.h"

VL_INLINE_OPT void Vssrv_top_scr1_core_top___ico_sequent__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___ico_sequent__TOP__ssrv_top__core__0\n"); );
    // Body
    vlSelf->__PVT__rst_n_sync = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT__core_rst_n_sync = ((IData)(vlSelf->__PVT__rst_n_sync) 
                                      & (IData)(vlSelf->__PVT__cpu_rst_n_sync));
    vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_in 
        = vlSelf->__PVT__core_rst_n_sync;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__0\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_rdata 
        = vlSelf->__PVT__dmem_rdata;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_rdata 
        = vlSelf->__PVT__imem_rdata;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__1\n"); );
    // Body
    vlSelf->__PVT__dmem_width = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_width;
    vlSelf->__PVT__dmem_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_cmd;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__2\n"); );
    // Body
    vlSelf->__PVT__dmem_wdata = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_wdata;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__0\n"); );
    // Body
    vlSelf->__PVT__dmem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_addr;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__1\n"); );
    // Body
    vlSelf->__PVT__dmem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__2\n"); );
    // Body
    vlSelf->__PVT__imem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__3(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__3\n"); );
    // Body
    vlSelf->__PVT__imem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_addr;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__0\n"); );
    // Body
    vlSelf->__PVT__core_rst_n_qlfy = vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_out_qlfy;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__1\n"); );
    // Body
    vlSelf->__PVT__cpu_rst_n_sync = vlSelf->__PVT__cpu_rst_n;
    vlSelf->__PVT__pwrup_rst_n_sync = vlSelf->__PVT__pwrup_rst_n;
    vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__test_mode 
        = vlSelf->__PVT__test_mode;
    vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__test_rst_n 
        = vlSelf->__PVT__test_rst_n;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__fuse_mhartid 
        = vlSelf->__PVT__fuse_mhartid;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__mtime_ext 
        = vlSelf->__PVT__mtime_ext;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__soft_irq 
        = vlSelf->__PVT__soft_irq;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__timer_irq 
        = vlSelf->__PVT__timer_irq;
    vlSelf->__PVT__core_rst_n_sync = ((IData)(vlSelf->__PVT__rst_n_sync) 
                                      & (IData)(vlSelf->__PVT__cpu_rst_n_sync));
    vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__rst_n 
        = vlSelf->__PVT__pwrup_rst_n_sync;
    vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_in 
        = vlSelf->__PVT__core_rst_n_sync;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__2\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_req_ack 
        = vlSelf->__PVT__dmem_req_ack;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_req_ack 
        = vlSelf->__PVT__imem_req_ack;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_resp 
        = vlSelf->__PVT__dmem_resp;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_resp 
        = vlSelf->__PVT__imem_resp;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__0\n"); );
    // Body
    vlSelf->__PVT__core_rst_n = vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_out;
    vlSelf->__PVT__core_rst_n_out = vlSelf->__PVT__core_rst_n;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__pipe_rst_n 
        = vlSelf->__PVT__core_rst_n;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__1\n"); );
    // Body
    vlSelf->__PVT__dmem_width = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_width;
    vlSelf->__PVT__dmem_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_cmd;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__2\n"); );
    // Body
    vlSelf->__PVT__dmem_wdata = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_wdata;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__3(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__3\n"); );
    // Body
    vlSelf->__PVT__dmem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_addr;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__4(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__4\n"); );
    // Body
    vlSelf->__PVT__dmem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__5(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__5\n"); );
    // Body
    vlSelf->__PVT__imem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__6(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__6\n"); );
    // Body
    vlSelf->__PVT__imem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_addr;
}
