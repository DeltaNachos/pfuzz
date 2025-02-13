// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__ico(Vbiriscv_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vbiriscv_top___024root___eval_triggers__ico(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbiriscv_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vbiriscv_top___024root___ico_sequent__TOP__0(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__biriscv_top.rst = vlSelf->rst;
    vlSymsp->TOP__biriscv_top.clk = vlSelf->clk;
}

void Vbiriscv_top_biriscv_top___ico_sequent__TOP__biriscv_top__0(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___ico_sequent__TOP__biriscv_top__u_core__0(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___ico_sequent__TOP__biriscv_top__u_core__u_lsu__0(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_csr___ico_sequent__TOP__biriscv_top__u_core__u_csr__0(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_issue___ico_sequent__TOP__biriscv_top__u_core__u_issue__0(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___ico_sequent__TOP__biriscv_top__u_core__u_frontend__0(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_npc___ico_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___ico_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0(Vbiriscv_top_biriscv_decode__E1* vlSelf);

void Vbiriscv_top___024root___eval_ico(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vbiriscv_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vbiriscv_top_biriscv_top___ico_sequent__TOP__biriscv_top__0((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___ico_sequent__TOP__biriscv_top__u_core__0((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_lsu__pi2___ico_sequent__TOP__biriscv_top__u_core__u_lsu__0((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_csr___ico_sequent__TOP__biriscv_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_issue___ico_sequent__TOP__biriscv_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_frontend__E1___ico_sequent__TOP__biriscv_top__u_core__u_frontend__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_npc___ico_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        Vbiriscv_top_biriscv_decode__E1___ico_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__act(Vbiriscv_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vbiriscv_top___024root___eval_triggers__act(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__biriscv_top.clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__biriscv_top__memory_modelling_inst.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__memory_modelling_inst____PVT__clk__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_csr.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_csr.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_mul.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_mul.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_div.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_div.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_issue.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_issue.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(6U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_exec0.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_exec0.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(7U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_exec1.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_exec1.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(8U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_mmu.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_mmu.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_lsu.__PVT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__clk_i__0))) 
                                     | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_lsu.__PVT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__clk_i__0))) 
                                       | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__rst_i) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0xbU, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__clk_i__0))) 
                                       | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__rst_i) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0xcU, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__clk_i__0))) 
                                       | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__rst_i) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0xdU, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__clk_i__0))) 
                                       | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__rst_i) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0xeU, ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__clk_i) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_regfile____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(0xfU, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__clk_i__0))) 
                                       | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__rst_i) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0x10U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__clk_i__0))) 
                                        | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__rst_i) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0x11U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__clk_i__0))) 
                                        | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__rst_i) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0x12U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__clk_i__0))) 
                                        | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__rst_i) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__rst_i__0)))));
    vlSelf->__VactTriggered.set(0x13U, (((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__clk_i__0))) 
                                        | ((IData)(vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__rst_i) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__rst_i__0)))));
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__clk__0 
        = vlSymsp->TOP__biriscv_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__biriscv_top__memory_modelling_inst.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mul.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mul.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_div.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_div.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec0.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec0.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec1.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_exec1.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mmu.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_mmu.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_regfile____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru.__PVT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__clk_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__rst_i__0 
        = vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo.__PVT__rst_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbiriscv_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vbiriscv_top_biriscv_npc_lfsr___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0(Vbiriscv_top_biriscv_npc_lfsr* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__0(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__0(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__0(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_divider___nba_sequent__TOP__biriscv_top__u_core__u_div__0(Vbiriscv_top_biriscv_divider* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__1(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_csr_regfile__SB1___nba_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__0(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__0(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__2(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__1(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__1(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__3(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__1(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__0(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__0(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__4(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__2(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__5(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__0(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___nba_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0(Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__1(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_fetch_fifo___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0(Vbiriscv_top_fetch_fifo* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0(Vbiriscv_top_biriscv_decode__E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__2(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__6(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__1(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_fetch___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__0(Vbiriscv_top_biriscv_fetch* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__3(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__7(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__3(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_biriscv_multiplier___nba_sequent__TOP__biriscv_top__u_core__u_mul__0(Vbiriscv_top_biriscv_multiplier* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__8(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__1(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__9(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__2(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__2(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__4(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__1(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec0__0(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__10(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec1__0(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__11(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__1(Vbiriscv_top_biriscv_decode__E1* vlSelf);
void Vbiriscv_top_biriscv_decoder___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0__0(Vbiriscv_top_biriscv_decoder* vlSelf);
void Vbiriscv_top_biriscv_decoder___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1__0(Vbiriscv_top_biriscv_decoder* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__2(Vbiriscv_top_biriscv_decode__E1* vlSelf);
void Vbiriscv_top_biriscv_regfile___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__0(Vbiriscv_top_biriscv_regfile* vlSelf);
void Vbiriscv_top_biriscv_mem_model___nba_sequent__TOP__biriscv_top__memory_modelling_inst__0(Vbiriscv_top_biriscv_mem_model* vlSelf);
void Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__2(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__12(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__4(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__3(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__13(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__5(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__2(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__3(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__14(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__4(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__2(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__5(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__15(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__5(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__16(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__4(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__17(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__5(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__0(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__0(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__0(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__3(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__3(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__0(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__6(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__18(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__4(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__4(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__0(Vbiriscv_top_biriscv_fetch* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__0(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__1(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__1(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__2(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__1(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__1(Vbiriscv_top_biriscv_fetch* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__2(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__1(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__3(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__2(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__0(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__2(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__19(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__6(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__6(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__3(Vbiriscv_top_biriscv_decode__E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__7(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__4(Vbiriscv_top_biriscv_decode__E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__7(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__8(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_fetch_fifo___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0(Vbiriscv_top_fetch_fifo* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__3(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__4(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__3(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__1(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__2(Vbiriscv_top_biriscv_fetch* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__4(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__8(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__9(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__0(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__5(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__5(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__1(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__10(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__1(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__6(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__0(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__0(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__2(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__7(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__6(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__3(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__8(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__7(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__4(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__9(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__8(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__2(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__3(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__10(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__5(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__4(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__4(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__11(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__6(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__3(Vbiriscv_top_biriscv_fetch* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__9(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__1(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__1(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__5(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__12(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__7(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__8(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__9(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__5(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__13(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__3(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__6(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__14(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__4(Vbiriscv_top_biriscv_fetch* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__10(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__15(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__6(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__16(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__4(Vbiriscv_top_biriscv_top* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__11(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__5(Vbiriscv_top_biriscv_fetch* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__12(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__2(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__1(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__10(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__1(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__11(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__12(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__17(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__2(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__2(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__13(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__7(Vbiriscv_top_biriscv_mmu__pi1* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__2(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__14(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__3(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__3(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__15(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__16(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__18(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__4(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__4(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__13(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__0(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_biriscv_divider___nba_comb__TOP__biriscv_top__u_core__u_div__0(Vbiriscv_top_biriscv_divider* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__0(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__2(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__0(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__0(Vbiriscv_top_biriscv_decode__E1* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__17(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__19(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__5(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__5(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__14(Vbiriscv_top_biriscv_frontend__E1* vlSelf);
void Vbiriscv_top_biriscv_multiplier___nba_comb__TOP__biriscv_top__u_core__u_mul__0(Vbiriscv_top_biriscv_multiplier* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__7(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_divider___nba_comb__TOP__biriscv_top__u_core__u_div__1(Vbiriscv_top_biriscv_divider* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__3(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__1(Vbiriscv_top_biriscv_trace_sim* vlSelf);
void Vbiriscv_top_biriscv_decode__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__1(Vbiriscv_top_biriscv_decode__E1* vlSelf);
void Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__3(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
void Vbiriscv_top_fetch_fifo___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__1(Vbiriscv_top_fetch_fifo* vlSelf);
void Vbiriscv_top_biriscv_regfile___nba_comb__TOP__biriscv_top__u_core__u_issue__u_regfile__0(Vbiriscv_top_biriscv_regfile* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__18(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__3(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__4(Vbiriscv_top_biriscv_npc* vlSelf);
void Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__4(Vbiriscv_top_biriscv_csr_regfile__SB1* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__4(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__19(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__20(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__1(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__1(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__21(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_alu___nba_comb__TOP__biriscv_top__u_core__u_exec1__u_alu__0(Vbiriscv_top_biriscv_alu* vlSelf);
void Vbiriscv_top_biriscv_alu___nba_comb__TOP__biriscv_top__u_core__u_exec0__u_alu__0(Vbiriscv_top_biriscv_alu* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__20(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__2(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__2(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__21(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__5(Vbiriscv_top_biriscv_csr* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__3(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__3(Vbiriscv_top_biriscv_exec* vlSelf);
void Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__22(Vbiriscv_top_riscv_core__SC1_SD1_E1* vlSelf);
void Vbiriscv_top_biriscv_multiplier___nba_comb__TOP__biriscv_top__u_core__u_mul__1(Vbiriscv_top_biriscv_multiplier* vlSelf);
void Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__8(Vbiriscv_top_biriscv_lsu__pi2* vlSelf);
void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__22(Vbiriscv_top_biriscv_issue* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__6(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);
void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__6(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf);

void Vbiriscv_top___024root___eval_nba(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_nba\n"); );
    // Body
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_npc_lfsr___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru));
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__0((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__0((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_divider___nba_sequent__TOP__biriscv_top__u_core__u_div__0((&vlSymsp->TOP__biriscv_top__u_core__u_div));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__1((&vlSymsp->TOP__biriscv_top__u_core));
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_csr_regfile__SB1___nba_sequent__TOP__biriscv_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__2((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__1((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__3((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__0((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__4((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__2((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__5((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__0((&vlSymsp->TOP__biriscv_top));
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___nba_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0((&vlSymsp->TOP__biriscv_top__u_core__u_lsu__u_lsu_request));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__1((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_fetch_fifo___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__6((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_fetch___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_fetch__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__7((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__3((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_multiplier___nba_sequent__TOP__biriscv_top__u_core__u_mul__0((&vlSymsp->TOP__biriscv_top__u_core__u_mul));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__8((&vlSymsp->TOP__biriscv_top__u_core));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__1((&vlSymsp->TOP__biriscv_top));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__9((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__2((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__2((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__4((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec0__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__10((&vlSymsp->TOP__biriscv_top__u_core));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_exec___nba_sequent__TOP__biriscv_top__u_core__u_exec1__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__11((&vlSymsp->TOP__biriscv_top__u_core));
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        Vbiriscv_top_biriscv_decoder___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec0));
        Vbiriscv_top_biriscv_decoder___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_dec1));
        Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_regfile___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile));
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_mem_model___nba_sequent__TOP__biriscv_top__memory_modelling_inst__0((&vlSymsp->TOP__biriscv_top__memory_modelling_inst));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__2((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__12((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__4((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__3((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__13((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__5((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb));
        Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif));
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__3((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__14((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_trace_sim___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif));
        Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__4((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_npc___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_npc__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_csr___nba_sequent__TOP__biriscv_top__u_core__u_csr__5((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__15((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__5((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__16((&vlSymsp->TOP__biriscv_top__u_core));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__4((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__17((&vlSymsp->TOP__biriscv_top__u_core));
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__5((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__0((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__0((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__0((&vlSymsp->TOP__biriscv_top));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__3((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__3((&vlSymsp->TOP__biriscv_top));
    }
    if ((0x10200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__0((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_mmu__pi1___nba_sequent__TOP__biriscv_top__u_core__u_mmu__6((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__18((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_top___nba_sequent__TOP__biriscv_top__4((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_biriscv_lsu__pi2___nba_sequent__TOP__biriscv_top__u_core__u_lsu__4((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
    }
    if ((0x804ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__1((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__1((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__2((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__1((&vlSymsp->TOP__biriscv_top));
    }
    if ((0x900ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__2((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__3((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__2((&vlSymsp->TOP__biriscv_top));
    }
    if ((0xc00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_sequent__TOP__biriscv_top__u_core__19((&vlSymsp->TOP__biriscv_top__u_core));
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__6((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__6((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__7((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_decode__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__4((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__7((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_frontend__E1___nba_sequent__TOP__biriscv_top__u_core__u_frontend__8((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x88000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_fetch_fifo___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo));
    }
    if ((0x102ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__3((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__4((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__1((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
    }
    if ((0x802ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__4((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__8((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__9((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x20c0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__5((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__5((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__10((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x3000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__6((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
    }
    if ((0x30c0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__7((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__6((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x24ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__3((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__8((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__7((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x20024ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__4((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__9((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__8((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x10100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__2((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
    }
    if ((0x302ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__3((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__10((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__5((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__4((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
    }
    if ((0x10302ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__4((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__11((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__6((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x902ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__9((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x23000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
        Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
    }
    if ((0x10300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__5((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        vlSelf->__Vm_traceActivity[0x2aU] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__12((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__7((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x2312ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__8((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x1312ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__9((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x20302ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__5((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        vlSelf->__Vm_traceActivity[0x2bU] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__13((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__3((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__6((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__14((&vlSymsp->TOP__biriscv_top__u_core));
    }
    if ((0x80902ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__4((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        vlSelf->__Vm_traceActivity[0x2cU] = 1U;
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__10((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__15((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__6((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__16((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_top___nba_comb__TOP__biriscv_top__4((&vlSymsp->TOP__biriscv_top));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__11((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_fetch___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_fetch__5((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_fetch));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__12((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
    }
    if ((0x23002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__2((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        vlSelf->__Vm_traceActivity[0x2dU] = 1U;
    }
    if ((0x12302ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        vlSelf->__Vm_traceActivity[0x2eU] = 1U;
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__10((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x11302ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        vlSelf->__Vm_traceActivity[0x2fU] = 1U;
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__11((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x3312ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__12((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x30U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__17((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__2((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__2((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__13((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif));
    }
    if ((0x20b02ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_mmu__pi1___nba_comb__TOP__biriscv_top__u_core__u_mmu__7((&vlSymsp->TOP__biriscv_top__u_core__u_mmu));
    }
    if ((0x80d02ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__2((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
    }
    if ((0x13302ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__14((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x1331aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__3((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        vlSelf->__Vm_traceActivity[0x31U] = 1U;
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__3((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__15((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x93326ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__16((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x32U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__18((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__4((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__4((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__13((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_divider___nba_comb__TOP__biriscv_top__u_core__u_div__0((&vlSymsp->TOP__biriscv_top__u_core__u_div));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__2((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_decode__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__0((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
    }
    if ((0xb3336ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__17((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x33U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__19((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__5((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__5((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
        Vbiriscv_top_biriscv_frontend__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__14((&vlSymsp->TOP__biriscv_top__u_core__u_frontend));
        Vbiriscv_top_biriscv_multiplier___nba_comb__TOP__biriscv_top__u_core__u_mul__0((&vlSymsp->TOP__biriscv_top__u_core__u_mul));
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__7((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_divider___nba_comb__TOP__biriscv_top__u_core__u_div__1((&vlSymsp->TOP__biriscv_top__u_core__u_div));
        Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__3((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_trace_sim___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__1((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d));
        Vbiriscv_top_biriscv_decode__E1___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode));
        Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__3((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        Vbiriscv_top_fetch_fifo___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__1((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo));
    }
    if ((0x97326ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_regfile___nba_comb__TOP__biriscv_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile));
        vlSelf->__Vm_traceActivity[0x34U] = 1U;
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__18((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
    }
    if ((0x937e6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__3((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
        vlSelf->__Vm_traceActivity[0x35U] = 1U;
    }
    if ((0x93fe6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_npc___nba_comb__TOP__biriscv_top__u_core__u_frontend__u_npc__4((&vlSymsp->TOP__biriscv_top__u_core__u_frontend__u_npc));
    }
    if ((0xb3326ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_csr_regfile__SB1___nba_comb__TOP__biriscv_top__u_core__u_csr__u_csrfile__4((&vlSymsp->TOP__biriscv_top__u_core__u_csr__u_csrfile));
        vlSelf->__Vm_traceActivity[0x36U] = 1U;
        Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__4((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
    }
    if ((0x973feULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__19((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x37U] = 1U;
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__20((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__1((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__1((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__21((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_alu___nba_comb__TOP__biriscv_top__u_core__u_exec1__u_alu__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec1__u_alu));
        Vbiriscv_top_biriscv_alu___nba_comb__TOP__biriscv_top__u_core__u_exec0__u_alu__0((&vlSymsp->TOP__biriscv_top__u_core__u_exec0__u_alu));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__20((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__2((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__2((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
    }
    if ((0xb73feULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__21((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        vlSelf->__Vm_traceActivity[0x38U] = 1U;
        Vbiriscv_top_biriscv_csr___nba_comb__TOP__biriscv_top__u_core__u_csr__5((&vlSymsp->TOP__biriscv_top__u_core__u_csr));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__3((&vlSymsp->TOP__biriscv_top__u_core__u_exec1));
        Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__3((&vlSymsp->TOP__biriscv_top__u_core__u_exec0));
        Vbiriscv_top_riscv_core__SC1_SD1_E1___nba_comb__TOP__biriscv_top__u_core__22((&vlSymsp->TOP__biriscv_top__u_core));
        Vbiriscv_top_biriscv_multiplier___nba_comb__TOP__biriscv_top__u_core__u_mul__1((&vlSymsp->TOP__biriscv_top__u_core__u_mul));
        Vbiriscv_top_biriscv_lsu__pi2___nba_comb__TOP__biriscv_top__u_core__u_lsu__8((&vlSymsp->TOP__biriscv_top__u_core__u_lsu));
        Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__22((&vlSymsp->TOP__biriscv_top__u_core__u_issue));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__6((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl));
        Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__6((&vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl));
    }
}
