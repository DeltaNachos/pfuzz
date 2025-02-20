// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_register_read_io.h"

VL_INLINE_OPT void Vfalco_top_register_read_io___nba_sequent__TOP__falco_top__core__register_read_io_inst__0(Vfalco_top_register_read_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_read_io___nba_sequent__TOP__falco_top__core__register_read_io_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(186,vlSelfRef.__Vdly__mem_issue_pack, vlSelfRef.__PVT__mem_issue_pack);
    VL_ASSIGN_W(161,vlSelfRef.__Vdly__alu_muldiv_pack, vlSelfRef.__PVT__alu_muldiv_pack);
    VL_ASSIGN_W(268,vlSelfRef.__Vdly__alu_bc_csr_pack, vlSelfRef.__PVT__alu_bc_csr_pack);
    vlSelfRef.__Vdly__mem_issue_pack_valid = vlSelfRef.__PVT__mem_issue_pack_valid;
    vlSelfRef.__Vdly__alu_muldiv_pack_valid = vlSelfRef.__PVT__alu_muldiv_pack_valid;
    vlSelfRef.__Vdly__alu_bc_csr_pack_valid = vlSelfRef.__PVT__alu_bc_csr_pack_valid;
}

VL_INLINE_OPT void Vfalco_top_register_read_io___nba_sequent__TOP__falco_top__core__register_read_io_inst__1(Vfalco_top_register_read_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_read_io___nba_sequent__TOP__falco_top__core__register_read_io_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alu_muldiv_pack_valid = vlSelfRef.__Vdly__alu_muldiv_pack_valid;
    vlSelfRef.__PVT__alu_bc_csr_pack_valid = vlSelfRef.__Vdly__alu_bc_csr_pack_valid;
    VL_ASSIGN_W(268,vlSelfRef.__PVT__alu_bc_csr_pack, vlSelfRef.__Vdly__alu_bc_csr_pack);
}

VL_INLINE_OPT void Vfalco_top_register_read_io___nba_sequent__TOP__falco_top__core__register_read_io_inst__2(Vfalco_top_register_read_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_read_io___nba_sequent__TOP__falco_top__core__register_read_io_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_issue_pack_valid = vlSelfRef.__Vdly__mem_issue_pack_valid;
    VL_ASSIGN_W(186,vlSelfRef.__PVT__mem_issue_pack, vlSelfRef.__Vdly__mem_issue_pack);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__alu_muldiv_pack, vlSelfRef.__Vdly__alu_muldiv_pack);
}

std::string VL_TO_STRING(const Vfalco_top_register_read_io* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_register_read_io::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
