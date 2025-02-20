// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_empty_entry_finder8.h"
#include "Vfalco_top_empty_entry_finder8_wrapper.h"

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__0(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_valid[0U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [0U]) 
                                                  & (~ 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[1U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [1U]) 
                                                  & (~ 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[2U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [2U]) 
                                                  & (~ 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[3U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [3U]) 
                                                  & (~ 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[4U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [4U]) 
                                                  & (~ 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[5U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [5U]) 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[6U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [6U]) 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[7U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [7U]) 
                                                  & (~ 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[0U] 
        = vlSelfRef.__PVT__allocate_valid[0U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[1U] 
        = vlSelfRef.__PVT__allocate_valid[1U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[2U] 
        = vlSelfRef.__PVT__allocate_valid[2U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[3U] 
        = vlSelfRef.__PVT__allocate_valid[3U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[4U] 
        = vlSelfRef.__PVT__allocate_valid[4U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[5U] 
        = vlSelfRef.__PVT__allocate_valid[5U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[6U] 
        = vlSelfRef.__PVT__allocate_valid[6U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[7U] 
        = vlSelfRef.__PVT__allocate_valid[7U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__1(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__0(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_valid[0U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [0U]) 
                                                  & (~ 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[1U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [1U]) 
                                                  & (~ 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[2U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [2U]) 
                                                  & (~ 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[3U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [3U]) 
                                                  & (~ 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[4U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [4U]) 
                                                  & (~ 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[5U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [5U]) 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[6U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [6U]) 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[7U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [7U]) 
                                                  & (~ 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[0U] 
        = vlSelfRef.__PVT__allocate_valid[0U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[1U] 
        = vlSelfRef.__PVT__allocate_valid[1U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[2U] 
        = vlSelfRef.__PVT__allocate_valid[2U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[3U] 
        = vlSelfRef.__PVT__allocate_valid[3U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[4U] 
        = vlSelfRef.__PVT__allocate_valid[4U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[5U] 
        = vlSelfRef.__PVT__allocate_valid[5U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[6U] 
        = vlSelfRef.__PVT__allocate_valid[6U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[7U] 
        = vlSelfRef.__PVT__allocate_valid[7U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__1(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__0(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_valid[0U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [0U]) 
                                                  & (~ 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[1U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [1U]) 
                                                  & (~ 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[2U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [2U]) 
                                                  & (~ 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[3U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [3U]) 
                                                  & (~ 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[4U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [4U]) 
                                                  & (~ 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[5U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [5U]) 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[6U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [6U]) 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[7U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [7U]) 
                                                  & (~ 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[0U] 
        = vlSelfRef.__PVT__allocate_valid[0U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[1U] 
        = vlSelfRef.__PVT__allocate_valid[1U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[2U] 
        = vlSelfRef.__PVT__allocate_valid[2U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[3U] 
        = vlSelfRef.__PVT__allocate_valid[3U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[4U] 
        = vlSelfRef.__PVT__allocate_valid[4U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[5U] 
        = vlSelfRef.__PVT__allocate_valid[5U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[6U] 
        = vlSelfRef.__PVT__allocate_valid[6U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[7U] 
        = vlSelfRef.__PVT__allocate_valid[7U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__1(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__INT_IQ__empty_entry_finder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__0(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_valid[0U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [0U]) 
                                                  & (~ 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[1U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [1U]) 
                                                  & (~ 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[2U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [2U]) 
                                                  & (~ 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[3U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [3U]) 
                                                  & (~ 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[4U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [4U]) 
                                                  & (~ 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[5U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [5U]) 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[6U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [6U]) 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[7U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [7U]) 
                                                  & (~ 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[0U] 
        = vlSelfRef.__PVT__allocate_valid[0U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[1U] 
        = vlSelfRef.__PVT__allocate_valid[1U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[2U] 
        = vlSelfRef.__PVT__allocate_valid[2U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[3U] 
        = vlSelfRef.__PVT__allocate_valid[3U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[4U] 
        = vlSelfRef.__PVT__allocate_valid[4U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[5U] 
        = vlSelfRef.__PVT__allocate_valid[5U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[6U] 
        = vlSelfRef.__PVT__allocate_valid[6U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[7U] 
        = vlSelfRef.__PVT__allocate_valid[7U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__1(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___ico_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__0(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_valid[0U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [0U]) 
                                                  & (~ 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[1U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [1U]) 
                                                  & (~ 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[2U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [2U]) 
                                                  & (~ 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[3U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [3U]) 
                                                  & (~ 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[4U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [4U]) 
                                                  & (~ 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[5U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [5U]) 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[6U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [6U]) 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[7U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [7U]) 
                                                  & (~ 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[0U] 
        = vlSelfRef.__PVT__allocate_valid[0U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[1U] 
        = vlSelfRef.__PVT__allocate_valid[1U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[2U] 
        = vlSelfRef.__PVT__allocate_valid[2U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[3U] 
        = vlSelfRef.__PVT__allocate_valid[3U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[4U] 
        = vlSelfRef.__PVT__allocate_valid[4U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[5U] 
        = vlSelfRef.__PVT__allocate_valid[5U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[6U] 
        = vlSelfRef.__PVT__allocate_valid[6U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[7U] 
        = vlSelfRef.__PVT__allocate_valid[7U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__1(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___act_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_1;
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__0(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocate_valid[0U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [0U]) 
                                                  & (~ 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[1U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [1U]) 
                                                  & (~ 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[2U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [2U]) 
                                                  & (~ 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[3U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [3U]) 
                                                  & (~ 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[4U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [4U]) 
                                                  & (~ 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[5U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [5U]) 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[6U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [6U]) 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelfRef.__PVT__allocate_valid[7U] = (1U & (((~ 
                                                   vlSelfRef.__PVT__slot_valid
                                                   [7U]) 
                                                  & (~ 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__dispatch_slot_idx0)) 
                                                      & (IData)(vlSelfRef.__PVT__dispatch_slot_idx0_valid)))) 
                                                 & (~ 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.__PVT__dispatch_slot_idx1)) 
                                                     & (IData)(vlSelfRef.__PVT__dispatch_slot_idx1_valid)))));
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[0U] 
        = vlSelfRef.__PVT__allocate_valid[0U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[1U] 
        = vlSelfRef.__PVT__allocate_valid[1U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[2U] 
        = vlSelfRef.__PVT__allocate_valid[2U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[3U] 
        = vlSelfRef.__PVT__allocate_valid[3U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[4U] 
        = vlSelfRef.__PVT__allocate_valid[4U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[5U] 
        = vlSelfRef.__PVT__allocate_valid[5U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[6U] 
        = vlSelfRef.__PVT__allocate_valid[6U];
    vlSelf->__PVT__empty_entry_finder8_inst->__PVT__in_alloc_valid[7U] 
        = vlSelfRef.__PVT__allocate_valid[7U];
}

VL_INLINE_OPT void Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__1(Vfalco_top_empty_entry_finder8_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_empty_entry_finder8_wrapper___nba_comb__TOP__falco_top__core__MEM_IQ__empty_entry_finder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocatable_slot_idx0 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_0;
    vlSelfRef.__PVT__allocatable_slot_idx1 = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_id_1;
    vlSelfRef.__PVT__allocatable_slot_idx0_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_0;
    vlSelfRef.__PVT__allocatable_slot_idx1_valid = vlSelf->__PVT__empty_entry_finder8_inst->__PVT__out_alloc_valid_1;
}
