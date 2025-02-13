// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_fetch_fifo.h"

VL_ATTR_COLD void Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0(Vbiriscv_top_fetch_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__0\n"); );
    // Body
    vlSelf->__PVT__accept_o = (2U != (IData)(vlSelf->__PVT__count_q));
    vlSelf->__PVT__data0_out_o = VL_SEL_IQII(64, vlSelf->__PVT__ram_q
                                             [vlSelf->__PVT__rd_ptr_q], 0U, 0x20U);
    vlSelf->__PVT__data1_out_o = VL_SEL_IQII(64, vlSelf->__PVT__ram_q
                                             [vlSelf->__PVT__rd_ptr_q], 0x20U, 0x20U);
    vlSelf->__PVT__info0_out_o = vlSelf->__PVT__info0_q
        [vlSelf->__PVT__rd_ptr_q];
    vlSelf->__PVT__valid0_o = ((0U != (IData)(vlSelf->__PVT__count_q)) 
                               & vlSelf->__PVT__valid0_q
                               [vlSelf->__PVT__rd_ptr_q]);
    vlSelf->__PVT__info1_out_o = vlSelf->__PVT__info1_q
        [vlSelf->__PVT__rd_ptr_q];
    vlSelf->__PVT__pc0_out_o = VL_CONCAT_III(32,29,3, 
                                             (0x1fffffffU 
                                              & VL_SEL_IIII(32, 
                                                            vlSelf->__PVT__pc_q
                                                            [vlSelf->__PVT__rd_ptr_q], 3U, 0x1dU)), 0U);
    vlSelf->__PVT__pc1_out_o = VL_CONCAT_III(32,29,3, 
                                             (0x1fffffffU 
                                              & VL_SEL_IIII(32, 
                                                            vlSelf->__PVT__pc_q
                                                            [vlSelf->__PVT__rd_ptr_q], 3U, 0x1dU)), 4U);
    vlSelf->__PVT__valid1_o = ((0U != (IData)(vlSelf->__PVT__count_q)) 
                               & vlSelf->__PVT__valid1_q
                               [vlSelf->__PVT__rd_ptr_q]);
    vlSelf->__PVT__push_w = ((IData)(vlSelf->__PVT__push_i) 
                             & (IData)(vlSelf->__PVT__accept_o));
}

VL_ATTR_COLD void Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__1(Vbiriscv_top_fetch_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_fetch_fifo___stl_sequent__TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo__1\n"); );
    // Body
    vlSelf->__PVT__pop1_w = ((IData)(vlSelf->__PVT__pop0_i) 
                             & (IData)(vlSelf->__PVT__valid0_o));
    vlSelf->__PVT__pop2_w = ((IData)(vlSelf->__PVT__pop1_i) 
                             & (IData)(vlSelf->__PVT__valid1_o));
    vlSelf->__PVT__pop_complete_w = ((((IData)(vlSelf->__PVT__pop1_w) 
                                       & (~ (IData)(vlSelf->__PVT__valid1_o))) 
                                      | ((IData)(vlSelf->__PVT__pop2_w) 
                                         & (~ (IData)(vlSelf->__PVT__valid0_o)))) 
                                     | ((IData)(vlSelf->__PVT__pop1_w) 
                                        & (IData)(vlSelf->__PVT__pop2_w)));
}

VL_ATTR_COLD void Vbiriscv_top_fetch_fifo___ctor_var_reset(Vbiriscv_top_fetch_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_fetch_fifo___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__push_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_in_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pred_in_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__data_in_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__info0_in_i = VL_RAND_RESET_I(10);
    vlSelf->__PVT__info1_in_i = VL_RAND_RESET_I(10);
    vlSelf->__PVT__accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid0_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc0_out_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data0_out_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__info0_out_o = VL_RAND_RESET_I(10);
    vlSelf->__PVT__pop0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid1_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc1_out_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data1_out_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__info1_out_o = VL_RAND_RESET_I(10);
    vlSelf->__PVT__pop1_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__pc_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__valid0_q[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__valid1_q[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__info0_q[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__info1_q[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_q[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pop1_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pop2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pop_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__count_q = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ram_q__v0 = 0;
    vlSelf->__Vdlyvset__ram_q__v1 = 0;
    vlSelf->__Vdlyvset__info0_q__v2 = 0;
    vlSelf->__Vdlyvset__info0_q__v3 = 0;
    vlSelf->__Vdlyvdim0__ram_q__v2 = 0;
    vlSelf->__Vdlyvval__ram_q__v2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__ram_q__v2 = 0;
    vlSelf->__Vdlyvdim0__pc_q__v2 = 0;
    vlSelf->__Vdlyvval__pc_q__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__info0_q__v4 = 0;
    vlSelf->__Vdlyvval__info0_q__v4 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvdim0__info1_q__v4 = 0;
    vlSelf->__Vdlyvval__info1_q__v4 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvdim0__valid0_q__v2 = 0;
    vlSelf->__Vdlyvdim0__valid1_q__v2 = 0;
    vlSelf->__Vdlyvval__valid1_q__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__valid0_q__v3 = 0;
    vlSelf->__Vdlyvset__valid0_q__v3 = 0;
    vlSelf->__Vdlyvdim0__valid1_q__v3 = 0;
    vlSelf->__Vdlyvset__valid1_q__v3 = 0;
}
