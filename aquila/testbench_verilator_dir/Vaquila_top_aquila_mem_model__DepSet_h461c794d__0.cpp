// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_aquila_mem_model.h"

void Vaquila_top_aquila_mem_model____Vdpiimwrap_instruction_generator_TOP__aquila_top__memory_modelling_inst(IData/*31:0*/ &instruction_generator__Vfuncrtn);

VL_INLINE_OPT void Vaquila_top_aquila_mem_model___nba_sequent__TOP__aquila_top__memory_modelling_inst__0(Vaquila_top_aquila_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_aquila_mem_model___nba_sequent__TOP__aquila_top__memory_modelling_inst__0\n"); );
    // Body
    vlSelf->__Vdly__stall_o = vlSelf->__PVT__stall_o;
    vlSelf->__Vdly__init_pc_addr_o = vlSelf->__PVT__init_pc_addr_o;
    vlSelf->__Vdly__data_ready_o = vlSelf->__PVT__data_ready_o;
    vlSelf->__Vdly__code_ready_o = vlSelf->__PVT__code_ready_o;
    vlSelf->__Vdly__sft_irq_o = vlSelf->__PVT__sft_irq_o;
    vlSelf->__Vdly__tmr_irq_o = vlSelf->__PVT__tmr_irq_o;
    vlSelf->__Vdly__ext_irq_o = vlSelf->__PVT__ext_irq_o;
    vlSelf->__Vdly__data_addr_ext_o = vlSelf->__PVT__data_addr_ext_o;
    if (vlSelf->__PVT__code_req_i) {
        vlSelf->__Vfunc_imem_read__0__m_addr = vlSelf->__PVT__code_addr_i;
        if ((1U & (~ (IData)(VL_REDOR_I(vlSelf->__PVT__imem.exists(
                                                                   ((0x1fU 
                                                                     >= 2U)
                                                                     ? 
                                                                    (vlSelf->__Vfunc_imem_read__0__m_addr 
                                                                     >> 2U)
                                                                     : 0U))))))) {
            Vaquila_top_aquila_mem_model____Vdpiimwrap_instruction_generator_TOP__aquila_top__memory_modelling_inst(vlSelf->__Vfunc_instruction_generator__1__Vfuncout);
            vlSelf->__PVT__imem.at(((0x1fU >= 2U) ? 
                                    (vlSelf->__Vfunc_imem_read__0__m_addr 
                                     >> 2U) : 0U)) 
                = vlSelf->__Vfunc_instruction_generator__1__Vfuncout;
        }
        vlSelf->__PVT__imem_read__Vstatic__mem_rdata 
            = vlSelf->__PVT__imem.at(((0x1fU >= 2U)
                                       ? (vlSelf->__Vfunc_imem_read__0__m_addr 
                                          >> 2U) : 0U));
        vlSelf->__Vfunc_imem_read__0__Vfuncout = vlSelf->__PVT__imem_read__Vstatic__mem_rdata;
        vlSelf->__PVT__code_o = vlSelf->__Vfunc_imem_read__0__Vfuncout;
        vlSelf->__Vdly__code_ready_o = 1U;
    }
    if (vlSelf->__PVT__data_req_i) {
        if (vlSelf->__PVT__data_rw_i) {
            vlSelf->__Vtask_dmem_write__2__wdata = vlSelf->__PVT__data_i;
            vlSelf->__Vtask_dmem_write__2__mem_addr 
                = vlSelf->__PVT__data_addr_i;
            vlSelf->__PVT__dmem_write__Vstatic__m_addr 
                = ((0x1fU >= 2U) ? (vlSelf->__Vtask_dmem_write__2__mem_addr 
                                    >> 2U) : 0U);
            vlSelf->__PVT__dmem.at(vlSelf->__PVT__dmem_write__Vstatic__m_addr) 
                = vlSelf->__Vtask_dmem_write__2__wdata;
        } else {
            vlSelf->__Vfunc_dmem_read__3__m_addr = vlSelf->__PVT__data_addr_i;
            if ((1U & (~ (IData)(VL_REDOR_I(vlSelf->__PVT__dmem.exists(
                                                                       ((0x1fU 
                                                                         >= 2U)
                                                                         ? 
                                                                        (vlSelf->__Vfunc_dmem_read__3__m_addr 
                                                                         >> 2U)
                                                                         : 0U))))))) {
                vlSelf->__PVT__dmem.at(((0x1fU >= 2U)
                                         ? (vlSelf->__Vfunc_dmem_read__3__m_addr 
                                            >> 2U) : 0U)) 
                    = VL_RANDOM_I();
            }
            vlSelf->__PVT__dmem_read__Vstatic__mem_rdata 
                = vlSelf->__PVT__dmem.at(((0x1fU >= 2U)
                                           ? (vlSelf->__Vfunc_dmem_read__3__m_addr 
                                              >> 2U)
                                           : 0U));
            vlSelf->__Vfunc_dmem_read__3__Vfuncout 
                = vlSelf->__PVT__dmem_read__Vstatic__mem_rdata;
            vlSelf->__PVT__data_o = vlSelf->__Vfunc_dmem_read__3__Vfuncout;
            vlSelf->__Vdly__data_ready_o = 1U;
        }
    }
    vlSelf->__Vdly__stall_o = 0U;
    vlSelf->__Vdly__init_pc_addr_o = 0U;
    vlSelf->__Vdly__data_addr_ext_o = 0U;
    vlSelf->__Vdly__ext_irq_o = 0U;
    vlSelf->__Vdly__tmr_irq_o = 0U;
    vlSelf->__Vdly__sft_irq_o = 0U;
    vlSelf->__PVT__stall_o = vlSelf->__Vdly__stall_o;
    vlSelf->__PVT__init_pc_addr_o = vlSelf->__Vdly__init_pc_addr_o;
    vlSelf->__PVT__data_ready_o = vlSelf->__Vdly__data_ready_o;
    vlSelf->__PVT__code_ready_o = vlSelf->__Vdly__code_ready_o;
    vlSelf->__PVT__ext_irq_o = vlSelf->__Vdly__ext_irq_o;
    vlSelf->__PVT__tmr_irq_o = vlSelf->__Vdly__tmr_irq_o;
    vlSelf->__PVT__sft_irq_o = vlSelf->__Vdly__sft_irq_o;
    vlSelf->__PVT__data_addr_ext_o = vlSelf->__Vdly__data_addr_ext_o;
}
