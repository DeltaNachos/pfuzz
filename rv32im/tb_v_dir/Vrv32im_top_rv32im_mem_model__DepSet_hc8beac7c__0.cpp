// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_rv32im_mem_model.h"

void Vrv32im_top_rv32im_mem_model____Vdpiimwrap_instruction_generator_TOP__rv32im_top__memory_modelling_inst(IData/*31:0*/ &instruction_generator__Vfuncrtn);

VL_INLINE_OPT void Vrv32im_top_rv32im_mem_model___nba_sequent__TOP__rv32im_top__memory_modelling_inst__0(Vrv32im_top_rv32im_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_rv32im_mem_model___nba_sequent__TOP__rv32im_top__memory_modelling_inst__0\n"); );
    // Body
    vlSelf->__Vdly__dmem_error_write = vlSelf->__PVT__dmem_error_write;
    vlSelf->__Vdly__dmem_accept_w = vlSelf->__PVT__dmem_accept_w;
    vlSelf->__Vdly__imem_accept = vlSelf->__PVT__imem_accept;
    vlSelf->__Vdly__imem_error = vlSelf->__PVT__imem_error;
    vlSelf->__Vdly__i_intr = vlSelf->__PVT__i_intr;
    vlSelf->__Vdly__imem_valid = vlSelf->__PVT__imem_valid;
    vlSelf->__Vdly__dmem_resp_valid = vlSelf->__PVT__dmem_resp_valid;
    vlSelf->__Vfunc_imem_read__0__m_addr = vlSelf->__PVT__imem_addr;
    if ((1U & (~ (IData)(VL_REDOR_I(vlSelf->__PVT__imem.exists(
                                                               ((0x1fU 
                                                                 >= 2U)
                                                                 ? 
                                                                (vlSelf->__Vfunc_imem_read__0__m_addr 
                                                                 >> 2U)
                                                                 : 0U))))))) {
        Vrv32im_top_rv32im_mem_model____Vdpiimwrap_instruction_generator_TOP__rv32im_top__memory_modelling_inst(vlSelf->__Vfunc_instruction_generator__1__Vfuncout);
        vlSelf->__PVT__imem.at(((0x1fU >= 2U) ? (vlSelf->__Vfunc_imem_read__0__m_addr 
                                                 >> 2U)
                                 : 0U)) = vlSelf->__Vfunc_instruction_generator__1__Vfuncout;
    }
    vlSelf->__PVT__imem_read__Vstatic__mem_rdata = vlSelf->__PVT__imem
        .at(((0x1fU >= 2U) ? (vlSelf->__Vfunc_imem_read__0__m_addr 
                              >> 2U) : 0U));
    vlSelf->__Vfunc_imem_read__0__Vfuncout = vlSelf->__PVT__imem_read__Vstatic__mem_rdata;
    vlSelf->__PVT__imem_data = vlSelf->__Vfunc_imem_read__0__Vfuncout;
    vlSelf->__Vdly__imem_valid = 1U;
    vlSelf->__Vdly__imem_accept = 1U;
    vlSelf->__Vdly__imem_error = 0U;
    vlSelf->__Vdly__i_intr = 0U;
    vlSelf->__Vdly__dmem_accept_w = 1U;
    vlSelf->__Vdly__dmem_error_write = 0U;
    if (VL_REDOR_I((IData)(vlSelf->__PVT__dmem_req_write_en))) {
        vlSelf->__Vtask_dmem_write__2__wdata = vlSelf->__PVT__dmem_req_data;
        vlSelf->__Vtask_dmem_write__2__mem_addr = vlSelf->__PVT__dmem_req_addr;
        vlSelf->__PVT__dmem_write__Vstatic__m_addr 
            = ((0x1fU >= 2U) ? (vlSelf->__Vtask_dmem_write__2__mem_addr 
                                >> 2U) : 0U);
        vlSelf->__PVT__dmem.at(vlSelf->__PVT__dmem_write__Vstatic__m_addr) 
            = vlSelf->__Vtask_dmem_write__2__wdata;
    } else {
        vlSelf->__Vdly__dmem_resp_valid = 1U;
        vlSelf->__Vfunc_dmem_read__3__m_addr = vlSelf->__PVT__dmem_req_addr;
        if ((1U & (~ (IData)(VL_REDOR_I(vlSelf->__PVT__dmem.exists(
                                                                   ((0x1fU 
                                                                     >= 2U)
                                                                     ? 
                                                                    (vlSelf->__Vfunc_dmem_read__3__m_addr 
                                                                     >> 2U)
                                                                     : 0U))))))) {
            vlSelf->__PVT__dmem.at(((0x1fU >= 2U) ? 
                                    (vlSelf->__Vfunc_dmem_read__3__m_addr 
                                     >> 2U) : 0U)) 
                = VL_RANDOM_I();
        }
        vlSelf->__PVT__dmem_read__Vstatic__mem_rdata 
            = vlSelf->__PVT__dmem.at(((0x1fU >= 2U)
                                       ? (vlSelf->__Vfunc_dmem_read__3__m_addr 
                                          >> 2U) : 0U));
        vlSelf->__Vfunc_dmem_read__3__Vfuncout = vlSelf->__PVT__dmem_read__Vstatic__mem_rdata;
        vlSelf->__PVT__dmem_resp_data = vlSelf->__Vfunc_dmem_read__3__Vfuncout;
    }
    vlSelf->__PVT__dmem_accept_w = vlSelf->__Vdly__dmem_accept_w;
    vlSelf->__PVT__dmem_error_write = vlSelf->__Vdly__dmem_error_write;
    vlSelf->__PVT__imem_accept = vlSelf->__Vdly__imem_accept;
    vlSelf->__PVT__imem_error = vlSelf->__Vdly__imem_error;
    vlSelf->__PVT__i_intr = vlSelf->__Vdly__i_intr;
    vlSelf->__PVT__imem_valid = vlSelf->__Vdly__imem_valid;
    vlSelf->__PVT__dmem_resp_valid = vlSelf->__Vdly__dmem_resp_valid;
}
