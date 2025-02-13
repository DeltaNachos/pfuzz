// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_distri_ram__E40.h"

VL_INLINE_OPT void Vaquila_top_distri_ram__E40___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0(Vaquila_top_distri_ram__E40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_distri_ram__E40___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0\n"); );
    // Body
    vlSelf->__Vdlyvset__RAM__v0 = 0U;
    if (vlSelf->__PVT__we_i) {
        vlSelf->__Vdlyvval__RAM__v0 = vlSelf->__PVT__data_i;
        vlSelf->__Vdlyvset__RAM__v0 = 1U;
        vlSelf->__Vdlyvdim0__RAM__v0 = vlSelf->__PVT__write_addr_i;
    }
    if (vlSelf->__Vdlyvset__RAM__v0) {
        vlSelf->__PVT__RAM[vlSelf->__Vdlyvdim0__RAM__v0] 
            = vlSelf->__Vdlyvval__RAM__v0;
    }
}

VL_INLINE_OPT void Vaquila_top_distri_ram__E40___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0(Vaquila_top_distri_ram__E40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_distri_ram__E40___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0\n"); );
    // Body
    vlSelf->__PVT__data_o = vlSelf->__PVT__RAM[vlSelf->__PVT__read_addr_i];
}
