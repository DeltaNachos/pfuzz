// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_sodor_mem_model.h"

VL_ATTR_COLD void Vsodor_top_sodor_mem_model___ctor_var_reset(Vsodor_top_sodor_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsodor_top_sodor_mem_model___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_req_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_req_bits_typ = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dmem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_resp_data = VL_RAND_RESET_I(32);
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
    vlSelf->__Vdly__dmem_resp_valid = VL_RAND_RESET_I(1);
}
