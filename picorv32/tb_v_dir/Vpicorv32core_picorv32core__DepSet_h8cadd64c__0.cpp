// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core__Syms.h"
#include "Vpicorv32core_picorv32core.h"

VL_INLINE_OPT void Vpicorv32core_picorv32core___ico_sequent__TOP__picorv32core__0(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___ico_sequent__TOP__picorv32core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__picorv32core__picorv32_core.__PVT__clk 
        = vlSelfRef.clk;
}

VL_INLINE_OPT void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__0(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_addr = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_addr;
    vlSelfRef.__PVT__mem_wstrb = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_wstrb;
    vlSelfRef.__PVT__mem_wdata = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_wdata;
    vlSelfRef.__PVT__mem_instr = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_instr;
    vlSelfRef.__PVT__mem_valid = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_valid;
    vlSelfRef.__PVT__mem_la_addr = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_addr;
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_instr 
        = vlSelfRef.__PVT__mem_instr;
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_valid 
        = vlSelfRef.__PVT__mem_valid;
}

VL_INLINE_OPT void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__1(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__resetn = vlSelfRef.__PVT__resetn;
    vlSelfRef.__Vdly__resetn = vlSelfRef.rst;
    vlSelfRef.__PVT__resetn = vlSelfRef.__Vdly__resetn;
    vlSymsp->TOP__picorv32core__picorv32_core.__PVT__resetn 
        = vlSelfRef.__PVT__resetn;
}

VL_INLINE_OPT void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__2(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_rdata = vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_rdata;
    vlSelfRef.__PVT__mem_ready = vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_ready;
    vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_rdata 
        = vlSelfRef.__PVT__mem_rdata;
    vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_ready 
        = vlSelfRef.__PVT__mem_ready;
}

VL_INLINE_OPT void Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__0(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_la_write = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_write;
    vlSelfRef.__PVT__mem_la_read = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_read;
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_write 
        = vlSelfRef.__PVT__mem_la_write;
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_read 
        = vlSelfRef.__PVT__mem_la_read;
}

VL_INLINE_OPT void Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__3(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___nba_sequent__TOP__picorv32core__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_addr 
        = vlSelfRef.__PVT__mem_la_addr;
}

VL_INLINE_OPT void Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__1(Vpicorv32core_picorv32core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32core_picorv32core___nba_comb__TOP__picorv32core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_la_wdata = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_wdata;
    vlSelfRef.__PVT__mem_la_wstrb = vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_wstrb;
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_wdata 
        = vlSelfRef.__PVT__mem_la_wdata;
    vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_wstrb 
        = vlSelfRef.__PVT__mem_la_wstrb;
}
