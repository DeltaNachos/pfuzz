// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_regfile__S1.h"

VL_INLINE_OPT void Vrv32im_top_riscv_regfile__S1___ico_sequent__TOP__rv32im_top__core__u_issue__u_regfile__0(Vrv32im_top_riscv_regfile__S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_regfile__S1___ico_sequent__TOP__rv32im_top__core__u_issue__u_regfile__0\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_regfile__S1___nba_sequent__TOP__rv32im_top__core__u_issue__u_regfile__0(Vrv32im_top_riscv_regfile__S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_regfile__S1___nba_sequent__TOP__rv32im_top__core__u_issue__u_regfile__0\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__rd0_value_i 
        = vlSelf->__PVT__rd0_value_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_regfile__S1___nba_sequent__TOP__rv32im_top__core__u_issue__u_regfile__1(Vrv32im_top_riscv_regfile__S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_regfile__S1___nba_sequent__TOP__rv32im_top__core__u_issue__u_regfile__1\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__rb_i 
        = vlSelf->__PVT__rb0_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__ra_i 
        = vlSelf->__PVT__ra0_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_regfile__S1___nba_sequent__TOP__rv32im_top__core__u_issue__u_regfile__2(Vrv32im_top_riscv_regfile__S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_regfile__S1___nba_sequent__TOP__rv32im_top__core__u_issue__u_regfile__2\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_regfile__S1___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__0(Vrv32im_top_riscv_regfile__S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_regfile__S1___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__0\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__rd0_i 
        = vlSelf->__PVT__rd0_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_regfile__S1___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__1(Vrv32im_top_riscv_regfile__S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_regfile__S1___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__1\n"); );
    // Body
    vlSelf->__PVT__ra0_value_o = vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__ra_value_o;
    vlSelf->__PVT__rb0_value_o = vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg.__PVT__rb_value_o;
}
