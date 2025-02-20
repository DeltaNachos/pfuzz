// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_store_set_id_table.h"

VL_INLINE_OPT void Vfalco_top_store_set_id_table___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__0(Vfalco_top_store_set_id_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_store_set_id_table___nba_sequent__TOP__falco_top__core__instruction_decode__SSIT__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__allocate_new_id = vlSelfRef.allocate_new_id;
    vlSelfRef.__Vdly__allocate_new_id = (0xffU & ((IData)(vlSelfRef.__PVT__rst)
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelfRef.violation) 
                                                     & (IData)(vlSelfRef.all_zero)) 
                                                    & (~ (IData)(vlSelfRef.device_violation)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.allocate_new_id))
                                                    : (IData)(vlSelfRef.allocate_new_id))));
    vlSelfRef.allocate_new_id = vlSelfRef.__Vdly__allocate_new_id;
    vlSelfRef.data_iB = vlSelfRef.allocate_new_id;
}

VL_INLINE_OPT void Vfalco_top_store_set_id_table___nba_comb__TOP__falco_top__core__instruction_decode__SSIT__1(Vfalco_top_store_set_id_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_store_set_id_table___nba_comb__TOP__falco_top__core__instruction_decode__SSIT__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__recovery_change_id = (((IData)(vlSelfRef.recovery_insrt0_id) 
                                            > (IData)(vlSelfRef.recovery_insrt1_id))
                                            ? (IData)(vlSelfRef.recovery_insrt0_id)
                                            : (IData)(vlSelfRef.recovery_insrt1_id));
    vlSelfRef.__PVT__recovery_change_pc2 = (((IData)(vlSelfRef.recovery_insrt0_id) 
                                             > (IData)(vlSelfRef.recovery_insrt1_id))
                                             ? (IData)(vlSelfRef.recovery_insrt0_pc)
                                             : (IData)(vlSelfRef.recovery_insrt1_pc));
    vlSelfRef.__PVT__recovery_change_pc = (((IData)(vlSelfRef.recovery_insrt0_id) 
                                            > (IData)(vlSelfRef.recovery_insrt1_id))
                                            ? (IData)(vlSelfRef.recovery_insrt1_pc)
                                            : (IData)(vlSelfRef.recovery_insrt0_pc));
    vlSelfRef.all_zero = ((0U == (IData)(vlSelfRef.recovery_insrt0_id)) 
                          & (0U == (IData)(vlSelfRef.recovery_insrt1_id)));
}
