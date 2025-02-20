// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_ssrv_top.h"

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__0\n"); );
    // Body
    vlSelf->__PVT__dmem_req_ack = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_req_ack;
    vlSymsp->TOP__ssrv_top__core.__PVT__cpu_rst_n = vlSelf->__PVT__cpu_rst_n;
    vlSymsp->TOP__ssrv_top__core.__PVT__pwrup_rst_n 
        = vlSelf->__PVT__pwrup_rst_n;
    vlSelf->__PVT__imem_req_ack = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_req_ack;
    vlSymsp->TOP__ssrv_top__core.__PVT__test_rst_n 
        = vlSelf->__PVT__test_rst_n;
    vlSymsp->TOP__ssrv_top__core.__PVT__test_mode = vlSelf->__PVT__test_mode;
    vlSelf->__PVT__dmem_rdata = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_rdata;
    vlSymsp->TOP__ssrv_top__core.__PVT__mtime_ext = vlSelf->__PVT__mtime_ext;
    vlSymsp->TOP__ssrv_top__core.__PVT__fuse_mhartid 
        = vlSelf->__PVT__fuse_mhartid;
    vlSymsp->TOP__ssrv_top__core.__PVT__timer_irq = vlSelf->__PVT__timer_irq;
    vlSymsp->TOP__ssrv_top__core.__PVT__soft_irq = vlSelf->__PVT__soft_irq;
    vlSelf->__PVT__dmem_resp = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_resp;
    vlSelf->__PVT__imem_rdata = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_rdata;
    vlSelf->__PVT__imem_resp = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_resp;
    vlSymsp->TOP__ssrv_top__core.__PVT__dmem_req_ack 
        = vlSelf->__PVT__dmem_req_ack;
    vlSymsp->TOP__ssrv_top__core.__PVT__imem_req_ack 
        = vlSelf->__PVT__imem_req_ack;
    vlSymsp->TOP__ssrv_top__core.__PVT__dmem_rdata 
        = vlSelf->__PVT__dmem_rdata;
    vlSymsp->TOP__ssrv_top__core.__PVT__dmem_resp = vlSelf->__PVT__dmem_resp;
    vlSymsp->TOP__ssrv_top__core.__PVT__imem_rdata 
        = vlSelf->__PVT__imem_rdata;
    vlSymsp->TOP__ssrv_top__core.__PVT__imem_resp = vlSelf->__PVT__imem_resp;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__1\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core.__PVT__rst_n = vlSelf->rst_n;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ssrv_top__core.__PVT__clk = vlSelf->clk;
    vlSelf->__PVT__imem_cmd = vlSymsp->TOP__ssrv_top__core.__PVT__imem_cmd;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_cmd 
        = vlSelf->__PVT__imem_cmd;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__2\n"); );
    // Body
    vlSelf->__PVT__core_rst_n_out = vlSymsp->TOP__ssrv_top__core.__PVT__core_rst_n_out;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__3(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__3\n"); );
    // Body
    vlSelf->__PVT__dmem_width = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_width;
    vlSelf->__PVT__dmem_cmd = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_cmd;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_width 
        = vlSelf->__PVT__dmem_width;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_cmd 
        = vlSelf->__PVT__dmem_cmd;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__4(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_sequent__TOP__ssrv_top__4\n"); );
    // Body
    vlSelf->__PVT__dmem_wdata = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_wdata;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_wdata 
        = vlSelf->__PVT__dmem_wdata;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__0\n"); );
    // Body
    vlSelf->__PVT__dmem_addr = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_addr;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_addr 
        = vlSelf->__PVT__dmem_addr;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__1\n"); );
    // Body
    vlSelf->__PVT__dmem_req = vlSymsp->TOP__ssrv_top__core.__PVT__dmem_req;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_req 
        = vlSelf->__PVT__dmem_req;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__2\n"); );
    // Body
    vlSelf->__PVT__imem_req = vlSymsp->TOP__ssrv_top__core.__PVT__imem_req;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_req 
        = vlSelf->__PVT__imem_req;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__3(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___stl_comb__TOP__ssrv_top__3\n"); );
    // Body
    vlSelf->__PVT__imem_addr = vlSymsp->TOP__ssrv_top__core.__PVT__imem_addr;
    vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_addr 
        = vlSelf->__PVT__imem_addr;
}
