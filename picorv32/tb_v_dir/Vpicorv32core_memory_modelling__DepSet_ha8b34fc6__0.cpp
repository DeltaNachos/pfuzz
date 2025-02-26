// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core_memory_modelling.h"

void Vpicorv32core_memory_modelling____Vdpiimwrap_instruction_generator_TOP__picorv32core__memory_modelling_inst(IData/*31:0*/ &instruction_generator__Vfuncrtn);

VL_INLINE_OPT void Vpicorv32core_memory_modelling___nba_sequent__TOP__picorv32core__memory_modelling_inst__0(Vpicorv32core_memory_modelling* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32core_memory_modelling___nba_sequent__TOP__picorv32core__memory_modelling_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__mem_ready = vlSelfRef.__PVT__mem_ready;
    vlSelfRef.__Vdly__mem_ready = 1U;
    if (vlSelfRef.__PVT__mem_la_read) {
        vlSelfRef.__Vfunc_mem_read__0__m_addr = vlSelfRef.__PVT__mem_la_addr;
        if ((1U & (~ VL_REDOR_I(vlSelfRef.__PVT__initial_db.exists(
                                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U)))))) {
            if ((0xffffU < vlSelfRef.__Vfunc_mem_read__0__m_addr)) {
                vlSelfRef.__PVT__current_db.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U)) 
                    = VL_RANDOM_I();
                vlSelfRef.__PVT__initial_db.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U)) 
                    = vlSelfRef.__PVT__current_db.at(
                                                     VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U));
            } else {
                Vpicorv32core_memory_modelling____Vdpiimwrap_instruction_generator_TOP__picorv32core__memory_modelling_inst(vlSelfRef.__Vfunc_instruction_generator__1__Vfuncout);
                vlSelfRef.__PVT__initial_db.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U)) 
                    = vlSelfRef.__Vfunc_instruction_generator__1__Vfuncout;
                vlSelfRef.__PVT__current_db.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U)) 
                    = vlSelfRef.__PVT__initial_db.at(
                                                     VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U));
            }
        }
        vlSelfRef.__PVT__mem_read__Vstatic__mem_rdata 
            = vlSelfRef.__PVT__initial_db.at(VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_mem_read__0__m_addr, 2U));
        vlSelfRef.__Vfunc_mem_read__0__Vfuncout = vlSelfRef.__PVT__mem_read__Vstatic__mem_rdata;
        vlSelfRef.__PVT__mem_rdata = vlSelfRef.__Vfunc_mem_read__0__Vfuncout;
    }
    if (vlSelfRef.__PVT__mem_la_write) {
        vlSelfRef.__Vtask_mem_write__2__wdata = vlSelfRef.__PVT__mem_la_wdata;
        vlSelfRef.__Vtask_mem_write__2__write_strobe 
            = vlSelfRef.__PVT__mem_la_wstrb;
        vlSelfRef.__Vtask_mem_write__2__mem_addr = vlSelfRef.__PVT__mem_la_addr;
        vlSelfRef.__PVT__mem_write__Vstatic__m_addr 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.__Vtask_mem_write__2__mem_addr, 2U);
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vtask_mem_write__2__write_strobe), 0U))) {
            VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__current_db
                            .at(vlSelfRef.__PVT__mem_write__Vstatic__m_addr), 
                            (0xffU & VL_SEL_IIII(32, vlSelfRef.__Vtask_mem_write__2__wdata, 0U, 8U)));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vtask_mem_write__2__write_strobe), 1U))) {
            VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__current_db
                            .at(vlSelfRef.__PVT__mem_write__Vstatic__m_addr), 
                            (0xffU & VL_SEL_IIII(32, vlSelfRef.__Vtask_mem_write__2__wdata, 8U, 8U)));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vtask_mem_write__2__write_strobe), 2U))) {
            VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__current_db
                            .at(vlSelfRef.__PVT__mem_write__Vstatic__m_addr), 
                            (0xffU & VL_SEL_IIII(32, vlSelfRef.__Vtask_mem_write__2__wdata, 0x10U, 8U)));
        }
        if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vtask_mem_write__2__write_strobe), 3U))) {
            VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__current_db
                            .at(vlSelfRef.__PVT__mem_write__Vstatic__m_addr), 
                            (0xffU & VL_SEL_IIII(32, vlSelfRef.__Vtask_mem_write__2__wdata, 0x18U, 8U)));
        }
    }
    vlSelfRef.__PVT__mem_ready = vlSelfRef.__Vdly__mem_ready;
}
