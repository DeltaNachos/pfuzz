// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_ssrv_top.h"

VL_ATTR_COLD void Vssrv_top_ssrv_top___eval_static__TOP__ssrv_top(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___eval_static__TOP__ssrv_top\n"); );
    // Body
    vlSelf->__PVT__pwrup_rst_n = 1U;
    vlSelf->__PVT__rst_n = 1U;
    vlSelf->__PVT__cpu_rst_n = 1U;
    vlSelf->__PVT__test_mode = 0U;
    vlSelf->__PVT__test_rst_n = 0U;
    vlSelf->__PVT__mtime_ext = 0ULL;
}

VL_ATTR_COLD void Vssrv_top_ssrv_top___ctor_var_reset(Vssrv_top_ssrv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vssrv_top_ssrv_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_rst_n_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_width = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pwrup_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fuse_mhartid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__soft_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mtime_ext = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__trst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tck = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tms = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tdi = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pwrup_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cpu_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__test_mode = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__test_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__fuse_mhartid = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__soft_irq = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__timer_irq = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mtime_ext = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__trst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tck = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tms = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tdi = VL_RAND_RESET_I(1);
}
