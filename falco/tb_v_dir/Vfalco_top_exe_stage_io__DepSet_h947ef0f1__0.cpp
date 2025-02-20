// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_exe_stage_io.h"

VL_INLINE_OPT void Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__0(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__alu1_wb = vlSelfRef.__PVT__alu1_wb;
    vlSelfRef.__Vdly__exe_muldiv = vlSelfRef.__PVT__exe_muldiv;
    vlSelfRef.__Vdly__BCAST_muldiv = vlSelfRef.__PVT__BCAST_muldiv;
    vlSelfRef.__Vdly__muldiv_wb = vlSelfRef.__PVT__muldiv_wb;
    vlSelfRef.__Vdly__BCAST_ALU_1 = vlSelfRef.__PVT__BCAST_ALU_1;
}

VL_INLINE_OPT void Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__1(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__BCAST_ALU_1 = vlSelfRef.__Vdly__BCAST_ALU_1;
}

VL_INLINE_OPT void Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__2(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__alu_csr_bc_wb = vlSelfRef.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vdly__BCAST_alu_csr_bc = vlSelfRef.__PVT__BCAST_alu_csr_bc;
    vlSelfRef.__Vdly__exe_alu_csr_bc = vlSelfRef.__PVT__exe_alu_csr_bc;
    VL_ASSIGN_W(77,vlSelfRef.__Vdly__branch_result, vlSelfRef.__PVT__branch_result);
}

VL_INLINE_OPT void Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__3(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__BCAST_alu_csr_bc = vlSelfRef.__Vdly__BCAST_alu_csr_bc;
    vlSelfRef.__PVT__exe_alu_csr_bc = vlSelfRef.__Vdly__exe_alu_csr_bc;
    VL_ASSIGN_W(77,vlSelfRef.__PVT__branch_result, vlSelfRef.__Vdly__branch_result);
}

VL_INLINE_OPT void Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__4(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__exe_muldiv = vlSelfRef.__Vdly__exe_muldiv;
    vlSelfRef.__Vdly__exe_ALU_1 = vlSelfRef.__PVT__exe_ALU_1;
    vlSelfRef.__PVT__BCAST_muldiv = vlSelfRef.__Vdly__BCAST_muldiv;
    vlSelfRef.__PVT__alu1_wb = vlSelfRef.__Vdly__alu1_wb;
    vlSelfRef.__PVT__muldiv_wb = vlSelfRef.__Vdly__muldiv_wb;
}

VL_INLINE_OPT void Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__5(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__exe_ALU_1 = vlSelfRef.__Vdly__exe_ALU_1;
}

VL_INLINE_OPT void Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__6(Vfalco_top_exe_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io___nba_sequent__TOP__falco_top__core__exe_stage_io_inst__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alu_csr_bc_wb = vlSelfRef.__Vdly__alu_csr_bc_wb;
}

std::string VL_TO_STRING(const Vfalco_top_exe_stage_io* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_exe_stage_io::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
