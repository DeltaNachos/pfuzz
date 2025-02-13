// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_ssrv_mem_model.h"

VL_ATTR_COLD void Vssrv_top_ssrv_mem_model___ctor_var_reset(Vssrv_top_ssrv_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_ssrv_mem_model___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__dmem.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_read__Vstatic__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_read__Vstatic__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_write__Vstatic__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_imem_read__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_imem_read__0__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_instruction_generator__1__Vfuncout = 0;
    vlSelf->__Vtask_dmem_write__2__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_dmem_write__2__wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_dmem_read__3__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_dmem_read__3__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__imem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__imem_resp = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__dmem_resp = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__dmem_req_ack = VL_RAND_RESET_I(1);
}
