// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___stl_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0(Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___stl_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0\n"); );
    // Body
    vlSelf->__PVT__valid_o = (0U != (IData)(vlSelf->__PVT__count_q));
    vlSelf->__PVT__accept_o = (2U != (IData)(vlSelf->__PVT__count_q));
    vlSelf->__PVT__data_out_o = vlSelf->__PVT__ram_q
        [vlSelf->__PVT__rd_ptr_q];
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___ctor_var_reset(Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_in_i = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__push_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pop_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_out_o = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_q[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__count_q = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ram_q__v0 = 0;
    vlSelf->__Vdlyvset__ram_q__v1 = 0;
    vlSelf->__Vdlyvdim0__ram_q__v2 = 0;
    vlSelf->__Vdlyvval__ram_q__v2 = VL_RAND_RESET_Q(36);
    vlSelf->__Vdlyvset__ram_q__v2 = 0;
}
