// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_ssrv_top.h"

VL_INLINE_OPT void Vssrv_top_ssrv_top___ico_sequent__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___ico_sequent__TOP__ssrv_top__0\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ssrv_top__core.__PVT__clk = vlSelf->clk;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__0\n"); );
    // Body
    vlSelf->__PVT__dmem_rdata = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_rdata;
    vlSelf->__PVT__imem_rdata = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_rdata;
    vlSymsp->TOP__ssrv_top__core.__PVT__dmem_rdata 
        = vlSelf->__PVT__dmem_rdata;
    vlSymsp->TOP__ssrv_top__core.__PVT__imem_rdata 
        = vlSelf->__PVT__imem_rdata;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__1\n"); );
    // Body
    vlSelf->__PVT__dmem_width = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_width;
    vlSelf->__PVT__dmem_cmd = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_cmd;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_width 
        = vlSelf->__PVT__dmem_width;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_cmd 
        = vlSelf->__PVT__dmem_cmd;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__2\n"); );
    // Body
    vlSelf->__PVT__dmem_wdata = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_wdata;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_wdata 
        = vlSelf->__PVT__dmem_wdata;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__0\n"); );
    // Body
    vlSelf->__PVT__dmem_addr = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_addr;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_addr 
        = vlSelf->__PVT__dmem_addr;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__1\n"); );
    // Body
    vlSelf->__PVT__dmem_req = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_req;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_req 
        = vlSelf->__PVT__dmem_req;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__2\n"); );
    // Body
    vlSelf->__PVT__imem_req = vlSymsp->TOP__ssrv_top__core.__PVT__imem_req;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_req 
        = vlSelf->__PVT__imem_req;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__3(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__3\n"); );
    // Body
    vlSelf->__PVT__imem_addr = vlSymsp->TOP__ssrv_top__core.__PVT__imem_addr;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_addr 
        = vlSelf->__PVT__imem_addr;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__0\n"); );
    // Body
    vlSelf->__Vdly__mtime_ext = vlSelf->__PVT__mtime_ext;
    vlSelf->__Vdly__tdi = vlSelf->__PVT__tdi;
    vlSelf->__Vdly__tms = vlSelf->__PVT__tms;
    vlSelf->__Vdly__tck = vlSelf->__PVT__tck;
    vlSelf->__Vdly__trst_n = vlSelf->__PVT__trst_n;
    vlSelf->__Vdly__cpu_rst_n = vlSelf->__PVT__cpu_rst_n;
    vlSelf->__Vdly__rst_n = vlSelf->__PVT__rst_n;
    vlSelf->__Vdly__pwrup_rst_n = vlSelf->__PVT__pwrup_rst_n;
    vlSelf->__Vdly__test_rst_n = vlSelf->__PVT__test_rst_n;
    vlSelf->__Vdly__test_mode = vlSelf->__PVT__test_mode;
    vlSelf->__Vdly__fuse_mhartid = vlSelf->__PVT__fuse_mhartid;
    vlSelf->__Vdly__timer_irq = vlSelf->__PVT__timer_irq;
    vlSelf->__Vdly__soft_irq = vlSelf->__PVT__soft_irq;
    vlSelf->__Vdly__pwrup_rst_n = 1U;
    vlSelf->__Vdly__rst_n = 1U;
    vlSelf->__Vdly__cpu_rst_n = 1U;
    vlSelf->__Vdly__test_mode = 0U;
    vlSelf->__Vdly__test_rst_n = 0U;
    vlSelf->__Vdly__fuse_mhartid = VL_RANDOM_I();
    vlSelf->__Vdly__soft_irq = 0U;
    vlSelf->__Vdly__timer_irq = 0U;
    vlSelf->__Vdly__mtime_ext = (1ULL + vlSelf->__PVT__mtime_ext);
    vlSelf->__Vdly__trst_n = 0U;
    vlSelf->__Vdly__tck = 0U;
    vlSelf->__Vdly__tms = 0U;
    vlSelf->__Vdly__tdi = 0U;
    vlSelf->__PVT__trst_n = vlSelf->__Vdly__trst_n;
    vlSelf->__PVT__tck = vlSelf->__Vdly__tck;
    vlSelf->__PVT__tms = vlSelf->__Vdly__tms;
    vlSelf->__PVT__tdi = vlSelf->__Vdly__tdi;
    vlSelf->__PVT__rst_n = vlSelf->__Vdly__rst_n;
    vlSelf->__PVT__cpu_rst_n = vlSelf->__Vdly__cpu_rst_n;
    vlSelf->__PVT__pwrup_rst_n = vlSelf->__Vdly__pwrup_rst_n;
    vlSelf->__PVT__test_mode = vlSelf->__Vdly__test_mode;
    vlSelf->__PVT__test_rst_n = vlSelf->__Vdly__test_rst_n;
    vlSelf->__PVT__fuse_mhartid = vlSelf->__Vdly__fuse_mhartid;
    vlSelf->__PVT__mtime_ext = vlSelf->__Vdly__mtime_ext;
    vlSelf->__PVT__soft_irq = vlSelf->__Vdly__soft_irq;
    vlSelf->__PVT__timer_irq = vlSelf->__Vdly__timer_irq;
    vlSymsp->TOP__ssrv_top__core.__PVT__rst_n = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ssrv_top__core.__PVT__cpu_rst_n = vlSelf->__PVT__cpu_rst_n;
    vlSymsp->TOP__ssrv_top__core.__PVT__pwrup_rst_n 
        = vlSelf->__PVT__pwrup_rst_n;
    vlSymsp->TOP__ssrv_top__core.__PVT__test_mode = vlSelf->__PVT__test_mode;
    vlSymsp->TOP__ssrv_top__core.__PVT__test_rst_n 
        = vlSelf->__PVT__test_rst_n;
    vlSymsp->TOP__ssrv_top__core.__PVT__fuse_mhartid 
        = vlSelf->__PVT__fuse_mhartid;
    vlSymsp->TOP__ssrv_top__core.__PVT__mtime_ext = vlSelf->__PVT__mtime_ext;
    vlSymsp->TOP__ssrv_top__core.__PVT__soft_irq = vlSelf->__PVT__soft_irq;
    vlSymsp->TOP__ssrv_top__core.__PVT__timer_irq = vlSelf->__PVT__timer_irq;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__1\n"); );
    // Body
    vlSelf->__PVT__dmem_req_ack = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_req_ack;
    vlSelf->__PVT__imem_req_ack = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_req_ack;
    vlSelf->__PVT__dmem_resp = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_resp;
    vlSelf->__PVT__imem_resp = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_resp;
    vlSymsp->TOP__ssrv_top__core.__PVT__dmem_req_ack 
        = vlSelf->__PVT__dmem_req_ack;
    vlSymsp->TOP__ssrv_top__core.__PVT__imem_req_ack 
        = vlSelf->__PVT__imem_req_ack;
    vlSymsp->TOP__ssrv_top__core.__PVT__dmem_resp = vlSelf->__PVT__dmem_resp;
    vlSymsp->TOP__ssrv_top__core.__PVT__imem_resp = vlSelf->__PVT__imem_resp;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__0\n"); );
    // Body
    vlSelf->__PVT__core_rst_n_out = vlSymsp->TOP__ssrv_top__core.__PVT__core_rst_n_out;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__1\n"); );
    // Body
    vlSelf->__PVT__dmem_width = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_width;
    vlSelf->__PVT__dmem_cmd = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_cmd;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_width 
        = vlSelf->__PVT__dmem_width;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_cmd 
        = vlSelf->__PVT__dmem_cmd;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__2\n"); );
    // Body
    vlSelf->__PVT__dmem_wdata = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_wdata;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_wdata 
        = vlSelf->__PVT__dmem_wdata;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__3(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__3\n"); );
    // Body
    vlSelf->__PVT__dmem_addr = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_addr;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_addr 
        = vlSelf->__PVT__dmem_addr;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__4(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__4\n"); );
    // Body
    vlSelf->__PVT__dmem_req = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_req;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_req 
        = vlSelf->__PVT__dmem_req;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__5(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__5\n"); );
    // Body
    vlSelf->__PVT__imem_req = vlSymsp->TOP__ssrv_top__core.__PVT__imem_req;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_req 
        = vlSelf->__PVT__imem_req;
}

VL_INLINE_OPT void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__6(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__6\n"); );
    // Body
    vlSelf->__PVT__imem_addr = vlSymsp->TOP__ssrv_top__core.__PVT__imem_addr;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_addr 
        = vlSelf->__PVT__imem_addr;
}
