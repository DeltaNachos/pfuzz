// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_rename_dispatch_io.h"

VL_INLINE_OPT void Vfalco_top_rename_dispatch_io___nba_sequent__TOP__falco_top__core__rnds_stage_io_inst__0(Vfalco_top_rename_dispatch_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_rename_dispatch_io___nba_sequent__TOP__falco_top__core__rnds_stage_io_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__int_pack0, vlSelfRef.__PVT__int_pack0);
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__int_pack1, vlSelfRef.__PVT__int_pack1);
    vlSelfRef.__Vdly__int_instr0_rs1_ready = vlSelfRef.__PVT__int_instr0_rs1_ready;
    vlSelfRef.__Vdly__int_instr0_rs2_ready = vlSelfRef.__PVT__int_instr0_rs2_ready;
    vlSelfRef.__Vdly__int_instr1_rs1_ready = vlSelfRef.__PVT__int_instr1_rs1_ready;
    vlSelfRef.__Vdly__int_instr1_rs2_ready = vlSelfRef.__PVT__int_instr1_rs2_ready;
    vlSelfRef.__Vdly__mem_instr0_rs1_ready = vlSelfRef.__PVT__mem_instr0_rs1_ready;
    vlSelfRef.__Vdly__mem_instr0_rs2_ready = vlSelfRef.__PVT__mem_instr0_rs2_ready;
    vlSelfRef.__Vdly__mem_instr1_rs1_ready = vlSelfRef.__PVT__mem_instr1_rs1_ready;
    vlSelfRef.__Vdly__mem_instr1_rs2_ready = vlSelfRef.__PVT__mem_instr1_rs2_ready;
    VL_ASSIGN_W(129,vlSelfRef.__Vdly__mem_pack0, vlSelfRef.__PVT__mem_pack0);
    VL_ASSIGN_W(129,vlSelfRef.__Vdly__mem_pack1, vlSelfRef.__PVT__mem_pack1);
    vlSelfRef.__Vdly__mem_pack1_valid = vlSelfRef.__PVT__mem_pack1_valid;
    vlSelfRef.__Vdly__int_pack0_valid = vlSelfRef.__PVT__int_pack0_valid;
    vlSelfRef.__Vdly__int_pack1_valid = vlSelfRef.__PVT__int_pack1_valid;
    vlSelfRef.__Vdly__mem_pack0_valid = vlSelfRef.__PVT__mem_pack0_valid;
}

VL_INLINE_OPT void Vfalco_top_rename_dispatch_io___nba_sequent__TOP__falco_top__core__rnds_stage_io_inst__1(Vfalco_top_rename_dispatch_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_rename_dispatch_io___nba_sequent__TOP__falco_top__core__rnds_stage_io_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__int_instr0_rs1_ready = vlSelfRef.__Vdly__int_instr0_rs1_ready;
    vlSelfRef.__PVT__int_instr0_rs2_ready = vlSelfRef.__Vdly__int_instr0_rs2_ready;
    vlSelfRef.__PVT__int_instr1_rs1_ready = vlSelfRef.__Vdly__int_instr1_rs1_ready;
    vlSelfRef.__PVT__int_instr1_rs2_ready = vlSelfRef.__Vdly__int_instr1_rs2_ready;
    VL_ASSIGN_W(205,vlSelfRef.__PVT__int_pack0, vlSelfRef.__Vdly__int_pack0);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__int_pack1, vlSelfRef.__Vdly__int_pack1);
    vlSelfRef.__PVT__int_pack0_valid = vlSelfRef.__Vdly__int_pack0_valid;
    vlSelfRef.__PVT__int_pack1_valid = vlSelfRef.__Vdly__int_pack1_valid;
    vlSelfRef.__PVT__mem_pack1_valid = vlSelfRef.__Vdly__mem_pack1_valid;
    vlSelfRef.__PVT__mem_pack0_valid = vlSelfRef.__Vdly__mem_pack0_valid;
}

VL_INLINE_OPT void Vfalco_top_rename_dispatch_io___nba_sequent__TOP__falco_top__core__rnds_stage_io_inst__2(Vfalco_top_rename_dispatch_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_rename_dispatch_io___nba_sequent__TOP__falco_top__core__rnds_stage_io_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_instr0_rs1_ready = vlSelfRef.__Vdly__mem_instr0_rs1_ready;
    vlSelfRef.__PVT__mem_instr1_rs1_ready = vlSelfRef.__Vdly__mem_instr1_rs1_ready;
    vlSelfRef.__PVT__mem_instr0_rs2_ready = vlSelfRef.__Vdly__mem_instr0_rs2_ready;
    vlSelfRef.__PVT__mem_instr1_rs2_ready = vlSelfRef.__Vdly__mem_instr1_rs2_ready;
    VL_ASSIGN_W(129,vlSelfRef.__PVT__mem_pack0, vlSelfRef.__Vdly__mem_pack0);
    VL_ASSIGN_W(129,vlSelfRef.__PVT__mem_pack1, vlSelfRef.__Vdly__mem_pack1);
}

std::string VL_TO_STRING(const Vfalco_top_rename_dispatch_io* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_rename_dispatch_io::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
