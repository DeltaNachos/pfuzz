// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___nba_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0(Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_lsu_fifo__W24_D2_A1___nba_sequent__TOP__biriscv_top__u_core__u_lsu__u_lsu_request__0\n"); );
    // Body
    vlSelf->__Vdly__wr_ptr_q = vlSelf->__PVT__wr_ptr_q;
    vlSelf->__Vdly__count_q = vlSelf->__PVT__count_q;
    vlSelf->__Vdly__rd_ptr_q = vlSelf->__PVT__rd_ptr_q;
    vlSelf->__Vdlyvset__ram_q__v0 = 0U;
    vlSelf->__Vdlyvset__ram_q__v1 = 0U;
    vlSelf->__Vdlyvset__ram_q__v2 = 0U;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__count_q = 0U;
        vlSelf->__Vdly__rd_ptr_q = 0U;
        vlSelf->__Vdly__wr_ptr_q = 0U;
        vlSelf->__Vdlyvset__ram_q__v0 = 1U;
        vlSelf->__PVT__i = 1U;
        vlSelf->__Vdlyvset__ram_q__v1 = 1U;
        vlSelf->__PVT__i = 2U;
    } else {
        if (((IData)(vlSelf->__PVT__push_i) & (IData)(vlSelf->__PVT__accept_o))) {
            vlSelf->__Vdlyvval__ram_q__v2 = vlSelf->__PVT__data_in_i;
            vlSelf->__Vdlyvset__ram_q__v2 = 1U;
            vlSelf->__Vdlyvdim0__ram_q__v2 = vlSelf->__PVT__wr_ptr_q;
            vlSelf->__Vdly__wr_ptr_q = (1U & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__wr_ptr_q)));
        }
        if (((IData)(vlSelf->__PVT__pop_i) & (IData)(vlSelf->__PVT__valid_o))) {
            vlSelf->__Vdly__rd_ptr_q = (1U & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__rd_ptr_q)));
        }
        if ((((IData)(vlSelf->__PVT__push_i) & (IData)(vlSelf->__PVT__accept_o)) 
             & (~ ((IData)(vlSelf->__PVT__pop_i) & (IData)(vlSelf->__PVT__valid_o))))) {
            vlSelf->__Vdly__count_q = (3U & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__count_q)));
        } else if (((~ ((IData)(vlSelf->__PVT__push_i) 
                        & (IData)(vlSelf->__PVT__accept_o))) 
                    & ((IData)(vlSelf->__PVT__pop_i) 
                       & (IData)(vlSelf->__PVT__valid_o)))) {
            vlSelf->__Vdly__count_q = (3U & ((IData)(vlSelf->__PVT__count_q) 
                                             - (IData)(1U)));
        }
    }
    vlSelf->__PVT__wr_ptr_q = vlSelf->__Vdly__wr_ptr_q;
    vlSelf->__PVT__count_q = vlSelf->__Vdly__count_q;
    vlSelf->__PVT__rd_ptr_q = vlSelf->__Vdly__rd_ptr_q;
    if (vlSelf->__Vdlyvset__ram_q__v0) {
        vlSelf->__PVT__ram_q[0U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__ram_q__v1) {
        vlSelf->__PVT__ram_q[1U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__ram_q__v2) {
        vlSelf->__PVT__ram_q[vlSelf->__Vdlyvdim0__ram_q__v2] 
            = vlSelf->__Vdlyvval__ram_q__v2;
    }
    vlSelf->__PVT__valid_o = (0U != (IData)(vlSelf->__PVT__count_q));
    vlSelf->__PVT__accept_o = (2U != (IData)(vlSelf->__PVT__count_q));
    vlSelf->__PVT__data_out_o = vlSelf->__PVT__ram_q
        [vlSelf->__PVT__rd_ptr_q];
}
