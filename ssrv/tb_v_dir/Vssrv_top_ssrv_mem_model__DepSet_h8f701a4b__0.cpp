// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_ssrv_mem_model.h"

VL_INLINE_OPT void Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__0(Vssrv_top_ssrv_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__0\n"); );
    // Body
    vlSelf->__Vdly__dmem_req_ack = vlSelf->__PVT__dmem_req_ack;
    vlSelf->__Vdly__dmem_resp = vlSelf->__PVT__dmem_resp;
    vlSelf->__Vdly__imem_resp = vlSelf->__PVT__imem_resp;
    vlSelf->__Vdly__imem_req_ack = vlSelf->__PVT__imem_req_ack;
}

void Vssrv_top_ssrv_mem_model____Vdpiimwrap_instruction_generator_TOP__ssrv_top__memory_modelling_inst(IData/*31:0*/ &instruction_generator__Vfuncrtn);

VL_INLINE_OPT void Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__1(Vssrv_top_ssrv_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_req) & (~ (IData)(vlSelf->__PVT__imem_cmd)))) {
        vlSelf->__Vfunc_imem_read__0__m_addr = vlSelf->__PVT__imem_addr;
        if ((1U & (~ (IData)(VL_REDOR_I(vlSelf->__PVT__imem.exists(
                                                                   ((0x1fU 
                                                                     >= 2U)
                                                                     ? 
                                                                    (vlSelf->__Vfunc_imem_read__0__m_addr 
                                                                     >> 2U)
                                                                     : 0U))))))) {
            Vssrv_top_ssrv_mem_model____Vdpiimwrap_instruction_generator_TOP__ssrv_top__memory_modelling_inst(vlSelf->__Vfunc_instruction_generator__1__Vfuncout);
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
        vlSelf->__PVT__imem_rdata = vlSelf->__Vfunc_imem_read__0__Vfuncout;
        vlSelf->__Vdly__imem_req_ack = 1U;
        vlSelf->__Vdly__imem_resp = 1U;
    }
    if (vlSelf->__PVT__dmem_req) {
        if (vlSelf->__PVT__dmem_cmd) {
            if (vlSelf->__PVT__dmem_cmd) {
                vlSelf->__Vtask_dmem_write__2__wdata 
                    = vlSelf->__PVT__dmem_wdata;
                vlSelf->__Vtask_dmem_write__2__mem_addr 
                    = vlSelf->__PVT__dmem_addr;
                vlSelf->__PVT__dmem_write__Vstatic__m_addr 
                    = ((0x1fU >= 2U) ? (vlSelf->__Vtask_dmem_write__2__mem_addr 
                                        >> 2U) : 0U);
                vlSelf->__PVT__dmem.at(vlSelf->__PVT__dmem_write__Vstatic__m_addr) 
                    = vlSelf->__Vtask_dmem_write__2__wdata;
            }
        } else {
            vlSelf->__Vfunc_dmem_read__3__m_addr = vlSelf->__PVT__dmem_addr;
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
            vlSelf->__PVT__dmem_rdata = vlSelf->__Vfunc_dmem_read__3__Vfuncout;
        }
        vlSelf->__Vdly__dmem_resp = 1U;
        vlSelf->__Vdly__dmem_req_ack = 1U;
    }
}

VL_INLINE_OPT void Vssrv_top_ssrv_mem_model___nba_sequent__TOP__ssrv_top__memory_modelling_inst__0(Vssrv_top_ssrv_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_ssrv_mem_model___nba_sequent__TOP__ssrv_top__memory_modelling_inst__0\n"); );
    // Body
    vlSelf->__PVT__dmem_req_ack = vlSelf->__Vdly__dmem_req_ack;
    vlSelf->__PVT__imem_req_ack = vlSelf->__Vdly__imem_req_ack;
    vlSelf->__PVT__dmem_resp = vlSelf->__Vdly__dmem_resp;
    vlSelf->__PVT__imem_resp = vlSelf->__Vdly__imem_resp;
}
