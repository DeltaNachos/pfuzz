// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_RAM16X1D.h"

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__0__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__1__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__2__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__3__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__4__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__5__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__6__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__7__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__8__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__9__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__10__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__11__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__12__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__13__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__14__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__15__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__16__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__17__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__18__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__19__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__20__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__21__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__22__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__23__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__24__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__25__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__26__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__27__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__28__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__29__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__30__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit1a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit1a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit1a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit1a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit1a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit1a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit2a(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit2a\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit2a__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit2a__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit2a__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop1__BRA__31__KET____DOT__reg_bit2a__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__0__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__1__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__2__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__3__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__4__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__5__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__6__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__7__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__8__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__9__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__10__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__11__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__12__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__13__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__14__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__15__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__16__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__17__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__18__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__19__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__20__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__21__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__22__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__23__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__24__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__25__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__26__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__27__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__28__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__29__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__30__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit1b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit1b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit1b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit1b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit1b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit1b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit2b(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___eval_initial__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit2b\n"); );
    // Body
    vlSelf->__PVT__mem = 0U;
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit2b__0(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit2b__0\n"); );
    // Body
    vlSelf->__PVT__DPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), 
                                              VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__DPRA3), 
                                                            VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__DPRA2), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__DPRA1), (IData)(vlSelf->__PVT__DPRA0))))));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit2b__1(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___stl_sequent__TOP__rv32im_top__core__u_issue__u_regfile__REGFILE_XILINX_SINGLE__DOT__u_reg__reg_loop2__BRA__31__KET____DOT__reg_bit2b__1\n"); );
    // Body
    vlSelf->__PVT__adr = VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__A3), 
                                       VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__A2), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__A1), (IData)(vlSelf->__PVT__A0))));
    vlSelf->__PVT__SPO = (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__mem), (IData)(vlSelf->__PVT__adr)));
}

VL_ATTR_COLD void Vrv32im_top_RAM16X1D___ctor_var_reset(Vrv32im_top_RAM16X1D* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrv32im_top_RAM16X1D___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__DPO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SPO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DPRA0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DPRA1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DPRA2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DPRA3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__WCLK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__WE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem = VL_RAND_RESET_I(16);
    vlSelf->__PVT__adr = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__mem = VL_RAND_RESET_I(16);
}
