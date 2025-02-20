// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vssrv_top___024root___dump_triggers__ico(Vssrv_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vssrv_top___024root___eval_triggers__ico(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vssrv_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vssrv_top___024root___ico_sequent__TOP__0(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__ssrv_top.rst_n = vlSelf->rst_n;
    vlSymsp->TOP__ssrv_top.clk = vlSelf->clk;
}

void Vssrv_top_ssrv_top___ico_sequent__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_core_top___ico_sequent__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_top___ico_sequent__TOP__ssrv_top__core__i_pipe_top__0(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_reset_buf_qlfy_cell___ico_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf);
void Vssrv_top_scr1_pipe_exu___ico_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf);

void Vssrv_top___024root___eval_ico(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vssrv_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vssrv_top_ssrv_top___ico_sequent__TOP__ssrv_top__0((&vlSymsp->TOP__ssrv_top));
        Vssrv_top_scr1_core_top___ico_sequent__TOP__ssrv_top__core__0((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_scr1_pipe_top___ico_sequent__TOP__ssrv_top__core__i_pipe_top__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_reset_buf_qlfy_cell___ico_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0((&vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell));
        Vssrv_top_scr1_pipe_exu___ico_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vssrv_top___024root___dump_triggers__act(Vssrv_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vssrv_top___024root___eval_triggers__act(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__memory_modelling_inst____PVT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2exu_i_x_req) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__tdu2exu_i_x_req__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_req) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__csr2tdu_req__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mdu_cmd) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__1)));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mdu_cmd) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__1)) 
                                     | ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__div_cmd) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__div_cmd__1))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mdu_cmd) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__1)) 
                                     | ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mul_cmd) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mul_cmd__1))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__shft_cmd) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__shft_cmd__1)));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu_hwbrk) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__lsu_hwbrk__1)));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSymsp->TOP__ssrv_top.clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__clk__0))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__clk__0))) 
                                     | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_in_mux)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__reset_n_in_mux__0))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__rst_n_mux)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__rst_n_mux__0))));
    vlSelf->__VactTriggered.set(0xbU, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__rst_n)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(0xcU, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__rst_n)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(0xdU, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__rst_n)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(0xeU, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__rst_n)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(0xfU, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__rst_n)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(0x10U, ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__clk__0))));
    vlSelf->__VactTriggered.set(0x11U, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__clk) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__clk__0))) 
                                        | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__rst_n)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(0x12U, ((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__clk__0))));
    vlSelf->__VactTriggered.set(0x13U, (((IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__clk) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__clk__0))) 
                                        | ((~ (IData)(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__rst_n)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__tdu2exu_i_x_req__1 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2exu_i_x_req;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__csr2tdu_req__1 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_req;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__1 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mdu_cmd;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__div_cmd__1 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__div_cmd;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mul_cmd__1 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mul_cmd;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__shft_cmd__1 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__shft_cmd;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__lsu_hwbrk__1 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu_hwbrk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__clk__0 
        = vlSymsp->TOP__ssrv_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__reset_n_in_mux__0 
        = vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_in_mux;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__rst_n_mux__0 
        = vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__rst_n_mux;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__rst_n__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__rst_n__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__rst_n__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__rst_n__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__rst_n__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__rst_n__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__clk__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__rst_n__0 
        = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vssrv_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__0(Vssrv_top_ssrv_mem_model* vlSelf);
void Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__1(Vssrv_top_ssrv_mem_model* vlSelf);
void Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__0(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_ifu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__1(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_idu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0(Vssrv_top_scr1_pipe_idu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__2(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__3(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_mprf___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0(Vssrv_top_scr1_pipe_mprf* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__4(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__5(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__6(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__0(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__1(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__2(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__2(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__3(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__3(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__4(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__4(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__5(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__5(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__6(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__7(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_idu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0(Vssrv_top_scr1_pipe_idu* vlSelf);
void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__8(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__9(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__10(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__11(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__12(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__13(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__14(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__15(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__3(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__3(Vssrv_top_ssrv_top* vlSelf);

void Vssrv_top___024root___eval_act(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VpreTriggered.word(0U))) {
        Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__0((&vlSymsp->TOP__ssrv_top__memory_modelling_inst));
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_ssrv_mem_model___act_sequent__TOP__ssrv_top__memory_modelling_inst__1((&vlSymsp->TOP__ssrv_top__memory_modelling_inst));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__0((&vlSymsp->TOP__ssrv_top));
        Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__0((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_ifu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_idu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu));
        Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_mprf___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf));
        Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__1((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__1((&vlSymsp->TOP__ssrv_top));
        Vssrv_top_scr1_pipe_lsu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_csr___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_top___act_sequent__TOP__ssrv_top__core__i_pipe_top__6((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___act_sequent__TOP__ssrv_top__core__2((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___act_sequent__TOP__ssrv_top__2((&vlSymsp->TOP__ssrv_top));
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x23ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
    }
    if ((0x43ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
    }
    if ((0xbULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x13ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__0((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__0((&vlSymsp->TOP__ssrv_top));
    }
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x1bULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
    }
    if ((0x93ULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__1((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__1((&vlSymsp->TOP__ssrv_top));
    }
    if ((0x7bULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__6((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0xfbULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__7((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_idu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu));
        Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__8((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__9((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__10((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__11((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_lsu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_tdu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0xffULL & vlSelf->__VactTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__12((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_csr___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__13((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__2((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__2((&vlSymsp->TOP__ssrv_top));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__14((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_ifu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        Vssrv_top_scr1_pipe_top___act_comb__TOP__ssrv_top__core__i_pipe_top__15((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___act_comb__TOP__ssrv_top__core__3((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___act_comb__TOP__ssrv_top__3((&vlSymsp->TOP__ssrv_top));
    }
}

void Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf);
void Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__0(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__1(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__1(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_ssrv_mem_model___nba_sequent__TOP__ssrv_top__memory_modelling_inst__0(Vssrv_top_ssrv_mem_model* vlSelf);
void Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__2(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_mprf___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0(Vssrv_top_scr1_pipe_mprf* vlSelf);
void Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__2(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf);
void Vssrv_top_scr1_reset_buf_qlfy_cell___nba_comb__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf);
void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__0(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__0(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__0(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__3(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__1(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__2(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0(Vssrv_top_scr1_pipe_idu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__3(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__4(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__5(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__1(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__1(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__3(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__6(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__7(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__8(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__9(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_mprf___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0(Vssrv_top_scr1_pipe_mprf* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__10(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__11(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__3(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__12(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__2(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__2(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__13(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__2(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__3(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__14(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__3(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__3(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__4(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__15(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__4(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__12(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__5(Vssrv_top_scr1_pipe_ialu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__13(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__16(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__4(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__14(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__17(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__4(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__4(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__15(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__18(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__1(Vssrv_top_scr1_pipe_idu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__19(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__16(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__20(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__21(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__17(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__5(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__18(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__22(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__4(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__23(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__19(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__24(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__6(Vssrv_top_scr1_pipe_lsu* vlSelf);
void Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__5(Vssrv_top_scr1_pipe_tdu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__20(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__21(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__25(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__5(Vssrv_top_scr1_pipe_csr* vlSelf);
void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__26(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__5(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__22(Vssrv_top_scr1_pipe_exu* vlSelf);
void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__5(Vssrv_top_ssrv_top* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__27(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__3(Vssrv_top_scr1_pipe_ifu* vlSelf);
void Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__28(Vssrv_top_scr1_pipe_top* vlSelf);
void Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__6(Vssrv_top_scr1_core_top* vlSelf);
void Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__6(Vssrv_top_ssrv_top* vlSelf);

void Vssrv_top___024root___eval_nba(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___eval_nba\n"); );
    // Body
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0((&vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__0((&vlSymsp->TOP__ssrv_top__core));
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__0((&vlSymsp->TOP__ssrv_top));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__1((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__1((&vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell));
        Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_csr___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_ssrv_mem_model___nba_sequent__TOP__ssrv_top__memory_modelling_inst__0((&vlSymsp->TOP__ssrv_top__memory_modelling_inst));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        Vssrv_top_ssrv_top___nba_sequent__TOP__ssrv_top__1((&vlSymsp->TOP__ssrv_top));
        Vssrv_top_scr1_core_top___nba_sequent__TOP__ssrv_top__core__2((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_ifu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_mprf___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__2((&vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell));
    }
    if ((0x500ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_reset_buf_qlfy_cell___nba_comb__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0((&vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__0((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__0((&vlSymsp->TOP__ssrv_top));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_top___nba_sequent__TOP__ssrv_top__core__i_pipe_top__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x4100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_lsu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0x801ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__1((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__1((&vlSymsp->TOP__ssrv_top));
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_reset_buf_qlfy_cell___nba_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__3((&vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell));
    }
    if ((0x1801ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__6((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x5901ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__7((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x1803ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__8((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__9((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x3801ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_mprf___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf));
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__10((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__11((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__12((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__2((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__2((&vlSymsp->TOP__ssrv_top));
    }
    if ((0x3803ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x1b805ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__13((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x3823ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__0((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
    }
    if ((0x3843ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
    }
    if ((0x6380bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((0x63813ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__14((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__3((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__3((&vlSymsp->TOP__ssrv_top));
    }
    if ((0x1f907ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__15((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x6381bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
    }
    if ((0x63893ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__12((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0x6387bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_ialu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu));
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__13((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__16((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0xe3893ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__14((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__17((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__4((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__4((&vlSymsp->TOP__ssrv_top));
    }
    if ((0x638fbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__15((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__18((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__19((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
    }
    if ((0x679fbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__16((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__20((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
    }
    if ((0x7b8fbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__1((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
    }
    if ((0x6b8fbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
    }
    if ((0x7b8fbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__21((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__17((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0xfb8fbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__18((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__22((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__4((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__23((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__19((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__24((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_lsu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu__6((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu));
        Vssrv_top_scr1_pipe_tdu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__20((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
    }
    if ((0xff9ffULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__21((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__25((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_csr___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_csr__5((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr));
        Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__2((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__26((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__5((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__22((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu));
        Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__5((&vlSymsp->TOP__ssrv_top));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__27((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_pipe_ifu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu__3((&vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu));
        Vssrv_top_scr1_pipe_top___nba_comb__TOP__ssrv_top__core__i_pipe_top__28((&vlSymsp->TOP__ssrv_top__core__i_pipe_top));
        Vssrv_top_scr1_core_top___nba_comb__TOP__ssrv_top__core__6((&vlSymsp->TOP__ssrv_top__core));
        Vssrv_top_ssrv_top___nba_comb__TOP__ssrv_top__6((&vlSymsp->TOP__ssrv_top));
    }
}
