// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_reset_buf_qlfy_cell.h"

VL_ATTR_COLD void Vssrv_top_scr1_reset_buf_qlfy_cell___stl_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_reset_buf_qlfy_cell___stl_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__0\n"); );
    // Body
    vlSelf->__PVT__reset_n_status = vlSelf->__PVT__reset_n_status_ff;
    vlSelf->__PVT__reset_n_out_qlfy = vlSelf->__PVT__reset_n_qualifier_ff;
}

VL_ATTR_COLD void Vssrv_top_scr1_reset_buf_qlfy_cell___stl_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__1(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_reset_buf_qlfy_cell___stl_sequent__TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell__1\n"); );
    // Body
    vlSelf->__PVT__reset_n_out = ((IData)(vlSelf->__PVT__test_mode)
                                   ? (IData)(vlSelf->__PVT__test_rst_n)
                                   : (IData)(vlSelf->__PVT__reset_n_lucky_ff));
    vlSelf->__PVT__rst_n_mux = ((IData)(vlSelf->__PVT__test_mode)
                                 ? (IData)(vlSelf->__PVT__test_rst_n)
                                 : (IData)(vlSelf->__PVT__rst_n));
    vlSelf->__PVT__reset_n_in_mux = ((IData)(vlSelf->__PVT__test_mode)
                                      ? (IData)(vlSelf->__PVT__test_rst_n)
                                      : ((IData)(vlSelf->__PVT__rst_n) 
                                         & (IData)(vlSelf->__PVT__reset_n_in)));
}

VL_ATTR_COLD void Vssrv_top_scr1_reset_buf_qlfy_cell___ctor_var_reset(Vssrv_top_scr1_reset_buf_qlfy_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_reset_buf_qlfy_cell___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test_mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_out_qlfy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_status = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n_mux = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_in_mux = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_front_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_victim_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_qualifier_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_lucky_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_n_status_ff = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_n_front_ff = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_n_victim_ff = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_n_qualifier_ff = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_n_lucky_ff = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_n_status_ff = VL_RAND_RESET_I(1);
}
