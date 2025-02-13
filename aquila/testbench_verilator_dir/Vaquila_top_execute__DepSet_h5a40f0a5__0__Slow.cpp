// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top_execute.h"

VL_ATTR_COLD void Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__0(Vaquila_top_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__0\n"); );
    // Body
    vlSelf->__PVT__muldiv_result = vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__muldiv_result_o;
    vlSelf->__PVT__muldiv_ready = vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__ready_o;
    vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__aquila_top__core__Execute__ALU.__PVT__shift_sel_i 
        = vlSelf->__PVT__shift_sel_i;
    vlSelf->__PVT__is_branch_o = ((IData)(vlSelf->__PVT__is_branch_i) 
                                  | (IData)(vlSelf->__PVT__is_jal_i));
    vlSelf->__PVT__muldiv_operation = vlSelf->__PVT__operation_sel_i;
    vlSelf->__PVT__alu_operation = ((((IData)(vlSelf->__PVT__is_branch_i) 
                                      | (IData)(vlSelf->__PVT__is_jal_i)) 
                                     | (IData)(vlSelf->__PVT__is_jalr_i))
                                     ? 0U : (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__branch_operation = vlSelf->__PVT__operation_sel_i;
    vlSelf->__PVT__branch_restore_pc_o = ((IData)(4U) 
                                          + vlSelf->__PVT__pc_i);
    vlSelf->__PVT__muldiv_req = ((IData)(vlSelf->__PVT__alu_muldiv_sel_i) 
                                 & (~ (IData)(vlSelf->__PVT__muldiv_ready)));
    vlSelf->__PVT__stall_from_exe_o = ((IData)(vlSelf->__PVT__alu_muldiv_sel_i) 
                                       & (~ (IData)(vlSelf->__PVT__muldiv_ready)));
    vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__operation_sel_i 
        = vlSelf->__PVT__muldiv_operation;
    vlSymsp->TOP__aquila_top__core__Execute__ALU.__PVT__operation_sel_i 
        = vlSelf->__PVT__alu_operation;
    vlSymsp->TOP__aquila_top__core__Execute__BCU.__PVT__operation_sel_i 
        = vlSelf->__PVT__branch_operation;
    vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__req_i 
        = vlSelf->__PVT__muldiv_req;
}

VL_ATTR_COLD void Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__1(Vaquila_top_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__1\n"); );
    // Body
    vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__stall_i 
        = vlSelf->__PVT__stall_i;
}

VL_ATTR_COLD void Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__2(Vaquila_top_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__2\n"); );
    // Body
    vlSelf->__PVT__csr_inputA = vlSelf->__PVT__csr_data_i;
    vlSelf->__PVT__inputB = ((0U == (IData)(vlSelf->__PVT__inputB_sel_i))
                              ? vlSelf->__PVT__imm_i
                              : ((1U == (IData)(vlSelf->__PVT__inputB_sel_i))
                                  ? vlSelf->__PVT__rs2_data_i
                                  : ((2U == (IData)(vlSelf->__PVT__inputB_sel_i))
                                      ? ((IData)(1U) 
                                         + (~ vlSelf->__PVT__rs2_data_i))
                                      : 0U)));
    vlSymsp->TOP__aquila_top__core__Execute__BCU.__PVT__b_i 
        = vlSelf->__PVT__rs2_data_i;
    vlSelf->__PVT__mem_addr = (vlSelf->__PVT__rs1_data_i 
                               + vlSelf->__PVT__imm_i);
    vlSelf->__PVT__csr_inputB = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__operation_sel_i), 2U))
                                  ? VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__csr_imm_i))
                                  : vlSelf->__PVT__rs1_data_i);
    vlSelf->__PVT__inputA = ((0U == (IData)(vlSelf->__PVT__inputA_sel_i))
                              ? 0U : ((1U == (IData)(vlSelf->__PVT__inputA_sel_i))
                                       ? vlSelf->__PVT__pc_i
                                       : ((2U == (IData)(vlSelf->__PVT__inputA_sel_i))
                                           ? vlSelf->__PVT__rs1_data_i
                                           : 0U)));
    vlSymsp->TOP__aquila_top__core__Execute__BCU.__PVT__a_i 
        = vlSelf->__PVT__rs1_data_i;
    vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__b_i 
        = vlSelf->__PVT__inputB;
    vlSymsp->TOP__aquila_top__core__Execute__ALU.__PVT__b_i 
        = vlSelf->__PVT__inputB;
    vlSelf->__PVT__csr_update_data = ((1U == (3U & 
                                              VL_SEL_IIII(3, (IData)(vlSelf->__PVT__operation_sel_i), 0U, 2U)))
                                       ? vlSelf->__PVT__csr_inputB
                                       : ((2U == (3U 
                                                  & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__operation_sel_i), 0U, 2U)))
                                           ? (vlSelf->__PVT__csr_inputA 
                                              | vlSelf->__PVT__csr_inputB)
                                           : ((3U == 
                                               (3U 
                                                & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__operation_sel_i), 0U, 2U)))
                                               ? (vlSelf->__PVT__csr_inputA 
                                                  & (~ vlSelf->__PVT__csr_inputB))
                                               : vlSelf->__PVT__csr_inputA)));
    vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__a_i 
        = vlSelf->__PVT__inputA;
    vlSymsp->TOP__aquila_top__core__Execute__ALU.__PVT__a_i 
        = vlSelf->__PVT__inputA;
}

VL_ATTR_COLD void Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__3(Vaquila_top_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_execute___stl_sequent__TOP__aquila_top__core__Execute__3\n"); );
    // Body
    vlSelf->__PVT__compare_result = vlSymsp->TOP__aquila_top__core__Execute__BCU.__PVT__compare_result_o;
    vlSelf->__PVT__alu_result = vlSymsp->TOP__aquila_top__core__Execute__ALU.__PVT__alu_result_o;
    vlSelf->__PVT__branch_taken_o = ((((IData)(vlSelf->__PVT__is_branch_i) 
                                       & (IData)(vlSelf->__PVT__compare_result)) 
                                      | (IData)(vlSelf->__PVT__is_jal_i)) 
                                     | (IData)(vlSelf->__PVT__is_jalr_i));
    vlSelf->__PVT__result = ((IData)(vlSelf->__PVT__alu_muldiv_sel_i)
                              ? vlSelf->__PVT__muldiv_result
                              : vlSelf->__PVT__alu_result);
    vlSelf->__PVT__branch_target_addr_o = vlSelf->__PVT__alu_result;
    vlSelf->__PVT__branch_misprediction_o = ((IData)(vlSelf->__PVT__branch_hit_i) 
                                             & ((IData)(vlSelf->__PVT__branch_decision_i) 
                                                ^ (IData)(vlSelf->__PVT__branch_taken_o)));
}
