// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_aquila_mem_model.h"

VL_ATTR_COLD void Vaquila_top_aquila_mem_model___ctor_var_reset(Vaquila_top_aquila_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_aquila_mem_model___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__code_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_req_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_rw_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_byte_enable_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data_req_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_is_amo_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_amo_type_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cache_flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_addr_ext_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ext_irq_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tmr_irq_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sft_irq_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__file_handle = 0;
    vlSelf->__PVT__imem_read__Vstatic__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_read__Vstatic__generated_instruction = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_read__Vstatic__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_write__Vstatic__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_imem_read__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_imem_read__0__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_instruction_generator__1__Vfuncout = 0;
    vlSelf->__Vtask_dmem_write__2__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_dmem_write__2__wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_dmem_read__3__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_dmem_read__3__m_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__code_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__data_ready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__stall_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__init_pc_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__data_addr_ext_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ext_irq_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tmr_irq_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sft_irq_o = VL_RAND_RESET_I(1);
}
