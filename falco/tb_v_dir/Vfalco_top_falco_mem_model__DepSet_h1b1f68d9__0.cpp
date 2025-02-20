// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_falco_mem_model.h"

void Vfalco_top_falco_mem_model____Vdpiimwrap_instruction_generator_TOP__falco_top__memory_modelling_inst(IData/*31:0*/ &instruction_generator__Vfuncrtn);

VL_INLINE_OPT void Vfalco_top_falco_mem_model___act_sequent__TOP__falco_top__memory_modelling_inst__0(Vfalco_top_falco_mem_model* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfalco_top_falco_mem_model___act_sequent__TOP__falco_top__memory_modelling_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vtemp_1;
    QData/*63:0*/ __Vtemp_2;
    // Body
    if ((1U & VL_BITSEL_IWII(65, vlSelfRef.__PVT__instruction_req, 0U))) {
        vlSelfRef.__Vfunc_imem_read__0__m_addr = VL_SEL_IWII(65, vlSelfRef.__PVT__instruction_req, 0x21U, 0x20U);
        if ((1U & (~ VL_REDOR_I(vlSelfRef.__PVT__imem.exists(
                                                             VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_imem_read__0__m_addr, 2U)))))) {
            Vfalco_top_falco_mem_model____Vdpiimwrap_instruction_generator_TOP__falco_top__memory_modelling_inst(vlSelfRef.__Vfunc_instruction_generator__1__Vfuncout);
            vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__single_instruction 
                = vlSelfRef.__Vfunc_instruction_generator__1__Vfuncout;
            __Vtemp_1 = (vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction 
                         | VL_EXTEND_QI(64,32, vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__single_instruction));
            vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction 
                = __Vtemp_1;
            vlSelfRef.__Vfunc_imem_read__0__unnamedblk2__DOT__unnamedblk3__DOT__i = 1U;
            Vfalco_top_falco_mem_model____Vdpiimwrap_instruction_generator_TOP__falco_top__memory_modelling_inst(vlSelfRef.__Vfunc_instruction_generator__1__Vfuncout);
            vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__single_instruction 
                = vlSelfRef.__Vfunc_instruction_generator__1__Vfuncout;
            __Vtemp_2 = (vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction 
                         | VL_SHIFTL_QQI(64,64,32, 
                                         VL_EXTEND_QI(64,32, vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__single_instruction), 0x20U));
            vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction 
                = __Vtemp_2;
            vlSelfRef.__Vfunc_imem_read__0__unnamedblk2__DOT__unnamedblk3__DOT__i = 2U;
            vlSelfRef.__PVT__imem.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_imem_read__0__m_addr, 2U)) 
                = vlSelfRef.__PVT__imem_read__Vstatic__unnamedblk2__DOT__instruction;
        }
        vlSelfRef.__PVT__imem_read__Vstatic__mem_rdata 
            = vlSelfRef.__PVT__imem.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_imem_read__0__m_addr, 2U));
        vlSelfRef.__Vfunc_imem_read__0__Vfuncout = vlSelfRef.__PVT__imem_read__Vstatic__mem_rdata;
        vlSelfRef.__PVT__unnamedblk1__DOT__fetched_instructions 
            = vlSelfRef.__Vfunc_imem_read__0__Vfuncout;
        VL_ASSIGNSEL_WI(67,32,0x23U, vlSelfRef.__PVT__instruction_resp, 
                        VL_SEL_IQII(64, vlSelfRef.__PVT__unnamedblk1__DOT__fetched_instructions, 0U, 0x20U));
        VL_ASSIGNSEL_WQ(67,34,1U, vlSelfRef.__PVT__instruction_resp, 
                        VL_CONCAT_QIQ(34,1,33, 1U, 
                                      VL_CONCAT_QII(33,32,1, 
                                                    VL_SEL_IQII(64, vlSelfRef.__PVT__unnamedblk1__DOT__fetched_instructions, 0x20U, 0x20U), 1U)));
        VL_ASSIGNBIT_WO(0U, vlSelfRef.__PVT__instruction_resp);
    }
    if ((1U & VL_BITSEL_IQII(33, vlSelfRef.__PVT__load_data_req, 0x20U))) {
        vlSelfRef.__Vfunc_dmem_read__2__m_addr = VL_SEL_IQII(33, vlSelfRef.__PVT__load_data_req, 0U, 0x20U);
        if ((1U & (~ VL_REDOR_I(vlSelfRef.__PVT__dmem.exists(
                                                             VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_dmem_read__2__m_addr, 2U)))))) {
            vlSelfRef.__PVT__dmem.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_dmem_read__2__m_addr, 2U)) 
                = VL_RANDOM_I();
        }
        vlSelfRef.__PVT__dmem_read__Vstatic__mem_rdata 
            = vlSelfRef.__PVT__dmem.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_dmem_read__2__m_addr, 2U));
        vlSelfRef.__Vfunc_dmem_read__2__Vfuncout = vlSelfRef.__PVT__dmem_read__Vstatic__mem_rdata;
        vlSelfRef.__PVT__load_data_resp = VL_CONCAT_QII(34,2,32, 2U, vlSelfRef.__Vfunc_dmem_read__2__Vfuncout);
    }
    if ((1U & VL_BITSEL_IWII(69, vlSelfRef.__PVT__store_req, 0x44U))) {
        vlSelfRef.__Vtask_dmem_write__3__wdata = VL_SEL_IWII(69, vlSelfRef.__PVT__store_req, 4U, 0x20U);
        vlSelfRef.__Vtask_dmem_write__3__mem_addr = 
            VL_SEL_IWII(69, vlSelfRef.__PVT__store_req, 0x24U, 0x20U);
        vlSelfRef.__PVT__dmem_write__Vstatic__m_addr 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.__Vtask_dmem_write__3__mem_addr, 2U);
        vlSelfRef.__PVT__dmem.at(vlSelfRef.__PVT__dmem_write__Vstatic__m_addr) 
            = vlSelfRef.__Vtask_dmem_write__3__wdata;
        vlSelfRef.__PVT__store_resp = 2U;
    }
    if ((1U & VL_BITSEL_IQII(34, vlSelfRef.__PVT__load_ck_hit_req, 0x21U))) {
        vlSelfRef.__PVT__load_hit_resp = 2U;
    }
}
