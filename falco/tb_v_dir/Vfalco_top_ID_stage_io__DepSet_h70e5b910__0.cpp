// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_ID_stage_io.h"

VL_INLINE_OPT void Vfalco_top_ID_stage_io___nba_sequent__TOP__falco_top__core__id_stage_io_inst__0(Vfalco_top_ID_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ID_stage_io___nba_sequent__TOP__falco_top__core__id_stage_io_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__instr0_BHSR = vlSelfRef.__PVT__instr0_BHSR;
    VL_ASSIGN_W(192,vlSelfRef.__Vdly__decoded_instr0, vlSelfRef.__PVT__decoded_instr0);
    vlSelfRef.__Vdly__instr1_BHSR = vlSelfRef.__PVT__instr1_BHSR;
    vlSelfRef.__Vdly__instr1_valid = vlSelfRef.__PVT__instr1_valid;
    VL_ASSIGN_W(192,vlSelfRef.__Vdly__decoded_instr1, vlSelfRef.__PVT__decoded_instr1);
    vlSelfRef.__Vdly__instr0_valid = vlSelfRef.__PVT__instr0_valid;
}

VL_INLINE_OPT void Vfalco_top_ID_stage_io___nba_sequent__TOP__falco_top__core__id_stage_io_inst__1(Vfalco_top_ID_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ID_stage_io___nba_sequent__TOP__falco_top__core__id_stage_io_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instr0_BHSR = vlSelfRef.__Vdly__instr0_BHSR;
    VL_ASSIGN_W(192,vlSelfRef.__PVT__decoded_instr0, vlSelfRef.__Vdly__decoded_instr0);
    vlSelfRef.__PVT__instr1_valid = vlSelfRef.__Vdly__instr1_valid;
    vlSelfRef.__PVT__instr1_BHSR = vlSelfRef.__Vdly__instr1_BHSR;
    VL_ASSIGN_W(192,vlSelfRef.__PVT__decoded_instr1, vlSelfRef.__Vdly__decoded_instr1);
    vlSelfRef.__PVT__instr0_valid = vlSelfRef.__Vdly__instr0_valid;
}

std::string VL_TO_STRING(const Vfalco_top_ID_stage_io* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ID_stage_io::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
