// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_int_issue_queue_io.h"

VL_INLINE_OPT void Vfalco_top_int_issue_queue_io___nba_sequent__TOP__falco_top__core__int_iq_io_inst__0(Vfalco_top_int_issue_queue_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_issue_queue_io___nba_sequent__TOP__falco_top__core__int_iq_io_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__instr0_valid = vlSelfRef.__PVT__instr0_valid;
    vlSelfRef.__Vdly__instr1_valid = vlSelfRef.__PVT__instr1_valid;
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__instr0_pack, vlSelfRef.__PVT__instr0_pack);
    VL_ASSIGN_W(205,vlSelfRef.__Vdly__instr1_pack, vlSelfRef.__PVT__instr1_pack);
}

VL_INLINE_OPT void Vfalco_top_int_issue_queue_io___nba_sequent__TOP__falco_top__core__int_iq_io_inst__1(Vfalco_top_int_issue_queue_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_issue_queue_io___nba_sequent__TOP__falco_top__core__int_iq_io_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(205,vlSelfRef.__PVT__instr1_pack, vlSelfRef.__Vdly__instr1_pack);
    VL_ASSIGN_W(205,vlSelfRef.__PVT__instr0_pack, vlSelfRef.__Vdly__instr0_pack);
    vlSelfRef.__PVT__instr1_valid = vlSelfRef.__Vdly__instr1_valid;
    vlSelfRef.__PVT__instr0_valid = vlSelfRef.__Vdly__instr0_valid;
}

std::string VL_TO_STRING(const Vfalco_top_int_issue_queue_io* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_int_issue_queue_io::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
