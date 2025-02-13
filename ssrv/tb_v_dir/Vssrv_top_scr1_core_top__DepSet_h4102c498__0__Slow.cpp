// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_core_top.h"

VL_ATTR_COLD void Vssrv_top_scr1_core_top___ctor_var_reset(Vssrv_top_scr1_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_scr1_core_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__pwrup_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_rst_n_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fuse_mhartid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ext_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__soft_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mtime_ext = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__imem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_width = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__core_rst_n_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_rst_n_qlfy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pwrup_rst_n_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_rst_n_sync = VL_RAND_RESET_I(1);
}
