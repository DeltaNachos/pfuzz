// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_xilinx_2r1w.h"

VL_INLINE_OPT void Vrv32im_top_riscv_xilinx_2r1w___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__128(Vrv32im_top_riscv_xilinx_2r1w* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrv32im_top_riscv_xilinx_2r1w___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__128\n"); );
    // Body
    vlSelf->__PVT__reg_rs2_w = ((1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rb_i), 4U))
                                 ? vlSelf->__PVT__rs2_16_31_w
                                 : vlSelf->__PVT__rs2_0_15_w);
}

VL_INLINE_OPT void Vrv32im_top_riscv_xilinx_2r1w___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__129(Vrv32im_top_riscv_xilinx_2r1w* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrv32im_top_riscv_xilinx_2r1w___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__129\n"); );
    // Body
    vlSelf->__PVT__reg_rs1_w = ((1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ra_i), 4U))
                                 ? vlSelf->__PVT__rs1_16_31_w
                                 : vlSelf->__PVT__rs1_0_15_w);
}

VL_INLINE_OPT void Vrv32im_top_riscv_xilinx_2r1w___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__131(Vrv32im_top_riscv_xilinx_2r1w* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrv32im_top_riscv_xilinx_2r1w___nba_comb__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__131\n"); );
    // Body
    vlSelf->__PVT__ra_value_r = ((0U == (IData)(vlSelf->__PVT__ra_i))
                                  ? 0U : vlSelf->__PVT__reg_rs1_w);
    vlSelf->__PVT__rb_value_r = ((0U == (IData)(vlSelf->__PVT__rb_i))
                                  ? 0U : vlSelf->__PVT__reg_rs2_w);
    vlSelf->__PVT__ra_value_o = vlSelf->__PVT__ra_value_r;
    vlSelf->__PVT__rb_value_o = vlSelf->__PVT__rb_value_r;
}
