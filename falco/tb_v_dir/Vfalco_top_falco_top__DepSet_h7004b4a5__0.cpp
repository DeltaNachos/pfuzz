// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_falco_top.h"

VL_INLINE_OPT void Vfalco_top_falco_top___ico_sequent__TOP__falco_top__0(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___ico_sequent__TOP__falco_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__falco_top__core.__PVT__clk = vlSelfRef.clk;
    VL_ASSIGN_W(69,vlSelfRef.__PVT__store_req, vlSymsp->TOP__falco_top__core.__PVT__store_req);
    VL_ASSIGN_W(69,vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__store_req, vlSelfRef.__PVT__store_req);
}

VL_INLINE_OPT void Vfalco_top_falco_top___ico_sequent__TOP__falco_top__1(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___ico_sequent__TOP__falco_top__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(65,vlSelfRef.__PVT__instruction_req, vlSymsp->TOP__falco_top__core.__PVT__instruction_req);
    VL_ASSIGN_W(65,vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__instruction_req, vlSelfRef.__PVT__instruction_req);
}

VL_INLINE_OPT void Vfalco_top_falco_top___ico_sequent__TOP__falco_top__2(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___ico_sequent__TOP__falco_top__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_ck_hit_req = vlSymsp->TOP__falco_top__core.__PVT__load_ck_hit_req;
    vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__load_ck_hit_req 
        = vlSelfRef.__PVT__load_ck_hit_req;
}

VL_INLINE_OPT void Vfalco_top_falco_top___ico_comb__TOP__falco_top__0(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___ico_comb__TOP__falco_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_dmem_stall = vlSymsp->TOP__falco_top__core.__PVT__load_dmem_stall;
}

VL_INLINE_OPT void Vfalco_top_falco_top___act_sequent__TOP__falco_top__0(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___act_sequent__TOP__falco_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__store_resp = vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__store_resp;
    vlSelfRef.__PVT__load_data_resp = vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__load_data_resp;
    VL_ASSIGN_W(67,vlSelfRef.__PVT__instruction_resp, vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__instruction_resp);
    vlSelfRef.__PVT__load_hit_resp = vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__load_hit_resp;
    vlSymsp->TOP__falco_top__core.__PVT__store_resp 
        = vlSelfRef.__PVT__store_resp;
    vlSymsp->TOP__falco_top__core.__PVT__load_data_resp 
        = vlSelfRef.__PVT__load_data_resp;
    VL_ASSIGN_W(67,vlSymsp->TOP__falco_top__core.__PVT__instruction_resp, vlSelfRef.__PVT__instruction_resp);
    vlSymsp->TOP__falco_top__core.__PVT__load_hit_resp 
        = vlSelfRef.__PVT__load_hit_resp;
}

VL_INLINE_OPT void Vfalco_top_falco_top___act_comb__TOP__falco_top__0(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___act_comb__TOP__falco_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_dmem_stall = vlSymsp->TOP__falco_top__core.__PVT__load_dmem_stall;
}

VL_INLINE_OPT void Vfalco_top_falco_top___nba_sequent__TOP__falco_top__0(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___nba_sequent__TOP__falco_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__PVT__store_req, vlSymsp->TOP__falco_top__core.__PVT__store_req);
    VL_ASSIGN_W(69,vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__store_req, vlSelfRef.__PVT__store_req);
}

VL_INLINE_OPT void Vfalco_top_falco_top___nba_sequent__TOP__falco_top__1(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___nba_sequent__TOP__falco_top__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__reset = vlSelfRef.__PVT__reset;
    vlSelfRef.__Vdly__reset = vlSelfRef.rst;
    vlSelfRef.__PVT__reset = vlSelfRef.__Vdly__reset;
    vlSymsp->TOP__falco_top__core.__PVT__rst = vlSelfRef.__PVT__reset;
}

VL_INLINE_OPT void Vfalco_top_falco_top___nba_comb__TOP__falco_top__0(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___nba_comb__TOP__falco_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(65,vlSelfRef.__PVT__instruction_req, vlSymsp->TOP__falco_top__core.__PVT__instruction_req);
    VL_ASSIGN_W(65,vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__instruction_req, vlSelfRef.__PVT__instruction_req);
}

VL_INLINE_OPT void Vfalco_top_falco_top___nba_comb__TOP__falco_top__1(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___nba_comb__TOP__falco_top__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_ck_hit_req = vlSymsp->TOP__falco_top__core.__PVT__load_ck_hit_req;
    vlSymsp->TOP__falco_top__memory_modelling_inst.__PVT__load_ck_hit_req 
        = vlSelfRef.__PVT__load_ck_hit_req;
}

VL_INLINE_OPT void Vfalco_top_falco_top___nba_comb__TOP__falco_top__2(Vfalco_top_falco_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfalco_top_falco_top___nba_comb__TOP__falco_top__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_dmem_stall = vlSymsp->TOP__falco_top__core.__PVT__load_dmem_stall;
}
