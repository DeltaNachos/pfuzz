// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_mem_model.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_mem_model___eval_static__TOP__biriscv_top__memory_modelling_inst(Vbiriscv_top_biriscv_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbiriscv_top_biriscv_mem_model___eval_static__TOP__biriscv_top__memory_modelling_inst\n"); );
    // Body
    vlSelf->__PVT__imem_read__Vstatic__unnamedblk1__DOT__instruction = 0ULL;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_mem_model___ctor_var_reset(Vbiriscv_top_biriscv_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbiriscv_top_biriscv_mem_model___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__dmem_req_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_req_write_en = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dmem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_resp_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_accept = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_intr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem.atDefault() = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__file_handle = 0;
    vlSelf->__PVT__imem_read__Vstatic__mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__imem_read__Vstatic__unnamedblk1__DOT__instruction = 0;
    vlSelf->__PVT__imem_read__Vstatic__unnamedblk1__DOT__single_instruction = 0;
    vlSelf->__PVT__dmem_read__Vstatic__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_write__Vstatic__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_imem_read__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_imem_read__0__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_instruction_generator__1__Vfuncout = 0;
    vlSelf->__Vtask_dmem_write__2__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_dmem_write__2__wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_dmem_read__3__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_dmem_read__3__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__imem_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__imem_accept = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__imem_error = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__i_intr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dmem_resp_valid = VL_RAND_RESET_I(1);
}
