// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_store_set_id_table.h"

VL_ATTR_COLD void Vfalco_top_store_set_id_table___eval_initial__TOP__falco_top__core__instruction_decode__SSIT(Vfalco_top_store_set_id_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_store_set_id_table___eval_initial__TOP__falco_top__core__instruction_decode__SSIT\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__en_B = 1U;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__en_A = 1U;
}

VL_ATTR_COLD void Vfalco_top_store_set_id_table___stl_sequent__TOP__falco_top__core__instruction_decode__SSIT__0(Vfalco_top_store_set_id_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_store_set_id_table___stl_sequent__TOP__falco_top__core__instruction_decode__SSIT__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_iB = vlSelfRef.allocate_new_id;
    vlSelfRef.instr0_store_set_id = vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__data_oA;
    vlSelfRef.instr1_store_set_id = vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__data_oB;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__data_iB 
        = vlSelfRef.data_iB;
}

VL_ATTR_COLD void Vfalco_top_store_set_id_table___stl_sequent__TOP__falco_top__core__instruction_decode__SSIT__1(Vfalco_top_store_set_id_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_store_set_id_table___stl_sequent__TOP__falco_top__core__instruction_decode__SSIT__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__clkb 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__clka 
        = vlSelfRef.__PVT__clk;
}

VL_ATTR_COLD void Vfalco_top_store_set_id_table___stl_comb__TOP__falco_top__core__instruction_decode__SSIT__0(Vfalco_top_store_set_id_table* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_store_set_id_table___stl_comb__TOP__falco_top__core__instruction_decode__SSIT__0\n"); );
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
    vlSelfRef.__Vcellinp__store_set_id__we_A = ((IData)(vlSelfRef.violation) 
                                                | (IData)(vlSelfRef.device_violation));
    vlSelfRef.my_addr_B = ((IData)(vlSelfRef.violation)
                            ? (IData)(vlSelfRef.__PVT__recovery_change_pc2)
                            : (IData)(vlSelfRef.instr1_pc));
    vlSelfRef.my_addr_A = ((IData)(vlSelfRef.device_violation)
                            ? (IData)(vlSelfRef.device_violation_pc)
                            : ((IData)(vlSelfRef.violation)
                                ? (IData)(vlSelfRef.__PVT__recovery_change_pc)
                                : (IData)(vlSelfRef.instr0_pc)));
    vlSelfRef.__Vcellinp__store_set_id__we_B = (((IData)(vlSelfRef.violation) 
                                                 & (IData)(vlSelfRef.all_zero)) 
                                                & (~ (IData)(vlSelfRef.device_violation)));
    vlSelfRef.data_iA = (0xffU & VL_SEL_IIII(32, ((IData)(vlSelfRef.device_violation)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.all_zero)
                                                    ? 
                                                   VL_EXTEND_II(32,8, (IData)(vlSelfRef.allocate_new_id))
                                                    : 
                                                   VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__recovery_change_id)))), 0U, 8U));
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__we_A 
        = vlSelfRef.__Vcellinp__store_set_id__we_A;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__addr_B 
        = vlSelfRef.my_addr_B;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__addr_A 
        = vlSelfRef.my_addr_A;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__we_B 
        = vlSelfRef.__Vcellinp__store_set_id__we_B;
    vlSymsp->TOP__falco_top__core__instruction_decode__SSIT__store_set_id.__PVT__data_iA 
        = vlSelfRef.data_iA;
}
