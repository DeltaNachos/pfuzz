// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_core_top.h"

VL_INLINE_OPT void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__1(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__1\n"); );
    // Body
    vlSelf->__Vdly__csr_irq_taken_r = vlSelf->__PVT__csr_irq_taken_r;
    vlSelf->__Vdly__iS = vlSelf->__PVT__iS;
    vlSelf->__Vdly__data_read_reg = vlSelf->__PVT__data_read_reg;
    vlSelf->__Vdly__dS = vlSelf->__PVT__dS;
    vlSelf->__Vdly__csr_irq_taken_r = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                                       & ((((IData)(vlSelf->__PVT__stall_instr_fetch) 
                                            | (IData)(vlSelf->__PVT__stall_data_fetch)) 
                                           | (IData)(vlSelf->__PVT__stall_from_exe)) 
                                          & ((IData)(vlSelf->__PVT__csr_irq_taken_r) 
                                             | (IData)(vlSelf->__PVT__csr_irq_taken))));
    vlSelf->__Vdly__iS = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                          & (IData)(vlSelf->__PVT__iS_nxt));
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__data_read_reg = 0U;
    } else if (vlSelf->__PVT__data_ready_i) {
        vlSelf->__Vdly__data_read_reg = vlSelf->__PVT__data_i;
    }
    vlSelf->__Vdly__dS = ((IData)(vlSelf->__PVT__rst_i)
                           ? 0U : (IData)(vlSelf->__PVT__dS_nxt));
    vlSelf->__PVT__csr_irq_taken_r = vlSelf->__Vdly__csr_irq_taken_r;
    vlSelf->__PVT__iS = vlSelf->__Vdly__iS;
    vlSelf->__PVT__data_read_reg = vlSelf->__Vdly__data_read_reg;
    vlSelf->__PVT__dS = vlSelf->__Vdly__dS;
    vlSelf->__PVT__code_req_o = (1U & (~ (IData)(vlSelf->__PVT__iS)));
}

VL_INLINE_OPT void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__1(Vaquila_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__1\n"); );
    // Body
    vlSelf->__PVT__data_req_o = ((0U == (IData)(vlSelf->__PVT__dS)) 
                                 & ((IData)(vlSelf->__PVT__exe_re) 
                                    | (IData)(vlSelf->__PVT__exe_we)));
}
