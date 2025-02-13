// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_decode__E1.h"

VL_INLINE_OPT void Vrv32im_top_riscv_decode__E1___nba_comb__TOP__rv32im_top__core__u_decode__0(Vrv32im_top_riscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_decode__E1___nba_comb__TOP__rv32im_top__core__u_decode__0\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__fetch_in_instr_w = 
        (((IData)(vlSelf->__PVT__fetch_in_fault_page_i) 
          | (IData)(vlSelf->__PVT__fetch_in_fault_fetch_i))
          ? 0U : vlSelf->__PVT__fetch_in_instr_i);
}

VL_INLINE_OPT void Vrv32im_top_riscv_decode__E1___nba_comb__TOP__rv32im_top__core__u_decode__1(Vrv32im_top_riscv_decode__E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_decode__E1___nba_comb__TOP__rv32im_top__core__u_decode__1\n"); );
    // Body
    vlSelf->__PVT__fetch_in_accept_o = vlSelf->__PVT__fetch_out_accept_i;
}
