// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_emptry_entry_finder4.h"
#include "Vfalco_top_empty_entry_finder8.h"

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__2(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[0U] 
        = vlSelfRef.__PVT__l2_out_id_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[1U] 
        = vlSelfRef.__PVT__l2_out_id_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[0U] 
        = vlSelfRef.__PVT__l2_out_id_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[1U] 
        = vlSelfRef.__PVT__l2_out_id_1[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[0U] 
        = vlSelfRef.__PVT__l2_out_valid_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[1U] 
        = vlSelfRef.__PVT__l2_out_valid_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[0U] 
        = vlSelfRef.__PVT__l2_out_valid_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[1U] 
        = vlSelfRef.__PVT__l2_out_valid_1[1U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__3(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_id_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_0;
    vlSelfRef.__PVT__out_id_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_1;
    vlSelfRef.__PVT__out_alloc_valid_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__out_alloc_valid_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__2(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[0U] 
        = vlSelfRef.__PVT__l2_out_id_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[1U] 
        = vlSelfRef.__PVT__l2_out_id_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[0U] 
        = vlSelfRef.__PVT__l2_out_id_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[1U] 
        = vlSelfRef.__PVT__l2_out_id_1[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[0U] 
        = vlSelfRef.__PVT__l2_out_valid_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[1U] 
        = vlSelfRef.__PVT__l2_out_valid_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[0U] 
        = vlSelfRef.__PVT__l2_out_valid_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[1U] 
        = vlSelfRef.__PVT__l2_out_valid_1[1U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__3(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_id_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_0;
    vlSelfRef.__PVT__out_id_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_1;
    vlSelfRef.__PVT__out_alloc_valid_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__out_alloc_valid_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__2(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[0U] 
        = vlSelfRef.__PVT__l2_out_id_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[1U] 
        = vlSelfRef.__PVT__l2_out_id_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[0U] 
        = vlSelfRef.__PVT__l2_out_id_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[1U] 
        = vlSelfRef.__PVT__l2_out_id_1[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[0U] 
        = vlSelfRef.__PVT__l2_out_valid_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[1U] 
        = vlSelfRef.__PVT__l2_out_valid_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[0U] 
        = vlSelfRef.__PVT__l2_out_valid_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[1U] 
        = vlSelfRef.__PVT__l2_out_valid_1[1U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__3(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__empty_entry_finder8_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_id_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_0;
    vlSelfRef.__PVT__out_id_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_1;
    vlSelfRef.__PVT__out_alloc_valid_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__out_alloc_valid_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__2(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[0U] 
        = vlSelfRef.__PVT__l2_out_id_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[1U] 
        = vlSelfRef.__PVT__l2_out_id_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[0U] 
        = vlSelfRef.__PVT__l2_out_id_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[1U] 
        = vlSelfRef.__PVT__l2_out_id_1[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[0U] 
        = vlSelfRef.__PVT__l2_out_valid_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[1U] 
        = vlSelfRef.__PVT__l2_out_valid_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[0U] 
        = vlSelfRef.__PVT__l2_out_valid_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[1U] 
        = vlSelfRef.__PVT__l2_out_valid_1[1U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__3(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_id_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_0;
    vlSelfRef.__PVT__out_id_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_1;
    vlSelfRef.__PVT__out_alloc_valid_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__out_alloc_valid_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__2(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[0U] 
        = vlSelfRef.__PVT__l2_out_id_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[1U] 
        = vlSelfRef.__PVT__l2_out_id_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[0U] 
        = vlSelfRef.__PVT__l2_out_id_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[1U] 
        = vlSelfRef.__PVT__l2_out_id_1[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[0U] 
        = vlSelfRef.__PVT__l2_out_valid_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[1U] 
        = vlSelfRef.__PVT__l2_out_valid_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[0U] 
        = vlSelfRef.__PVT__l2_out_valid_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[1U] 
        = vlSelfRef.__PVT__l2_out_valid_1[1U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__3(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_id_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_0;
    vlSelfRef.__PVT__out_id_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_1;
    vlSelfRef.__PVT__out_alloc_valid_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__out_alloc_valid_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__2(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_id_1;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1 
        = vlSelf->__PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4->__PVT__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[0U] = vlSelfRef.__Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelfRef.__PVT__l2_out_id_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    vlSelfRef.__PVT__l2_out_id_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    vlSelfRef.__PVT__l2_out_valid_0[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    vlSelfRef.__PVT__l2_out_valid_1[1U] = vlSelfRef.__Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[0U] 
        = vlSelfRef.__PVT__l2_out_id_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_0[1U] 
        = vlSelfRef.__PVT__l2_out_id_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[0U] 
        = vlSelfRef.__PVT__l2_out_id_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_id_1[1U] 
        = vlSelfRef.__PVT__l2_out_id_1[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[0U] 
        = vlSelfRef.__PVT__l2_out_valid_0[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_0[1U] 
        = vlSelfRef.__PVT__l2_out_valid_0[1U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[0U] 
        = vlSelfRef.__PVT__l2_out_valid_1[0U];
    vlSelf->__PVT__l3_finder_4->__PVT__in_alloc_valid_1[1U] 
        = vlSelfRef.__PVT__l2_out_valid_1[1U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__3(Vfalco_top_empty_entry_finder8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfalco_top_empty_entry_finder8___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__empty_entry_finder8_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_id_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_0;
    vlSelfRef.__PVT__out_id_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_id_1;
    vlSelfRef.__PVT__out_alloc_valid_0 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__out_alloc_valid_1 = vlSelf->__PVT__l3_finder_4->__PVT__out_alloc_valid_1;
}
