// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_alu_muldiv_execute_group.h"

VL_ATTR_COLD void Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__0(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.div_ready = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__ready_o;
    vlSelfRef.__PVT__div_result = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__div_result_o;
    vlSelfRef.__PVT__div_result_valid = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__result_valid_o;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__req_i 
        = vlSelfRef.__PVT__div_req_reg;
    vlSelfRef.__PVT__mul_result_valid = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__result_valid_o;
    vlSelfRef.__Vcellinp__ALU1__operation_sel = (7U 
                                                 & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5aU, 3U));
    vlSelfRef.__Vcellinp__ALU1__shift_sel = (1U & VL_BITSEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x58U));
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__b_i 
        = vlSelfRef.__PVT__div_op_B;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__a_i 
        = vlSelfRef.__PVT__div_op_A;
    vlSelfRef.__Vcellinp__imul__operation_sel_i = (3U 
                                                   & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5aU, 2U));
    vlSelfRef.__Vcellinp__idiv__operation_sel_i = (3U 
                                                   & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__div_operation_sel), 0U, 2U));
    vlSelfRef.__PVT__muldiv_result_valid = ((IData)(vlSelfRef.__PVT__mul_result_valid) 
                                            | (IData)(vlSelfRef.__PVT__div_result_valid));
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1.__PVT__operation_sel 
        = vlSelfRef.__Vcellinp__ALU1__operation_sel;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1.__PVT__shift_sel 
        = vlSelfRef.__Vcellinp__ALU1__shift_sel;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__operation_sel_i 
        = vlSelfRef.__Vcellinp__imul__operation_sel_i;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__operation_sel_i 
        = vlSelfRef.__Vcellinp__idiv__operation_sel_i;
}

VL_ATTR_COLD void Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__1(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag = (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_muldiv), 0U, 6U));
    vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 0U) 
                                                  & ((((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                                       >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag)) 
                                                      ^ 
                                                      ((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 3U, 6U)) 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__rob_tag) 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__4__branch_recovery_flush), 9U, 6U)))));
    vlSelfRef.__Vcellinp__imul__kill_i = vlSelfRef.__Vfunc_IsBrROBKill__4__Vfuncout;
    vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag = (0x3fU 
                                                 & VL_SEL_IIII(7, (IData)(vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__exe_muldiv), 0U, 6U));
    vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 0U) 
                                                  & ((((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                                       >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag)) 
                                                      ^ 
                                                      ((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 3U, 6U)) 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__rob_tag) 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__3__branch_recovery_flush), 9U, 6U)))));
    vlSelfRef.__Vcellinp__idiv__kill_i = vlSelfRef.__Vfunc_IsBrROBKill__3__Vfuncout;
    vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag = (0x3fU 
                                                 & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0U, 6U));
    vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush 
        = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
    vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 0U) 
                                                  & ((((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                                       >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag)) 
                                                      ^ 
                                                      ((0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 3U, 6U)) 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag) 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__0__branch_recovery_flush), 9U, 6U)))));
    vlSelfRef.__PVT__invalidate_cur_instr = vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout;
    vlSelfRef.__PVT__mul_early_wake_up = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__early_wake_up_o;
    vlSelfRef.mul_ready = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__ready_o;
    vlSelfRef.__PVT__mul_result = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__mul_result_o;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__rst_i 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__rst_i 
        = vlSelfRef.__PVT__rst;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__clk_i 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__clk_i 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__kill_i 
        = vlSelfRef.__Vcellinp__imul__kill_i;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__kill_i 
        = vlSelfRef.__Vcellinp__idiv__kill_i;
    vlSelfRef.__PVT__muldiv_BCAST_valid = ((IData)(vlSelfRef.__PVT__mul_early_wake_up) 
                                           | (IData)(vlSelfRef.__PVT__div_result_valid));
    vlSelfRef.muldiv_ready = ((IData)(vlSelfRef.div_ready) 
                              & (IData)(vlSelfRef.mul_ready));
    vlSelfRef.__PVT__muldiv_result = ((IData)(vlSelfRef.__PVT__mul_result_valid)
                                       ? vlSelfRef.__PVT__mul_result
                                       : vlSelfRef.__PVT__div_result);
}

VL_ATTR_COLD void Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__2(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__2__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__2__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__2__prf_register_data 
        = VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x12U, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__2__rs_addr = 
        (0x3fU & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 6U, 6U));
    vlSelfRef.__Vfunc_bypass_network__2__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__2__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__2__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__2__prf_register_data)))));
    vlSelfRef.__PVT__rs2_data = vlSelfRef.__Vfunc_bypass_network__2__Vfuncout;
    vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__1__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__1__prf_register_data 
        = VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x32U, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__1__rs_addr = 
        (0x3fU & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0xcU, 6U));
    vlSelfRef.__Vfunc_bypass_network__1__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__1__prf_register_data)))));
    vlSelfRef.__PVT__rs1_data = vlSelfRef.__Vfunc_bypass_network__1__Vfuncout;
    if ((0U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5dU, 2U)))) {
        vlSelfRef.__PVT__operand_B = VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x61U, 0x20U);
    } else if ((1U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5dU, 2U)))) {
        vlSelfRef.__PVT__operand_B = vlSelfRef.__PVT__rs2_data;
    } else if ((2U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5dU, 2U)))) {
        vlSelfRef.__PVT__operand_B = ((IData)(1U) + 
                                      (~ vlSelfRef.__PVT__rs2_data));
    } else if ((3U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5dU, 2U)))) {
        vlSelfRef.__PVT__operand_B = 0U;
    }
    if ((0U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5fU, 2U)))) {
        vlSelfRef.__PVT__operand_A = 0U;
    } else if ((1U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5fU, 2U)))) {
        vlSelfRef.__PVT__operand_A = VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x81U, 0x20U);
    } else if ((2U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5fU, 2U)))) {
        vlSelfRef.__PVT__operand_A = vlSelfRef.__PVT__rs1_data;
    } else if ((3U == (3U & VL_SEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5fU, 2U)))) {
        vlSelfRef.__PVT__operand_A = 0U;
    }
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.b_i 
        = vlSelfRef.__PVT__operand_B;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1.__PVT__b 
        = vlSelfRef.__PVT__operand_B;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.a_i 
        = vlSelfRef.__PVT__operand_A;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1.__PVT__a 
        = vlSelfRef.__PVT__operand_A;
}

VL_ATTR_COLD void Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__3(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___stl_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alu_result = vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1.__PVT__alu_result;
}

VL_ATTR_COLD void Vfalco_top_alu_muldiv_execute_group___stl_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__0(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___stl_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__imul__stall_i = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed));
    vlSelfRef.__Vcellinp__idiv__stall_i = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                                           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed));
    vlSelfRef.__PVT__instruction_valid = ((IData)(vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack_valid) 
                                          & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)));
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__stall_i 
        = vlSelfRef.__Vcellinp__imul__stall_i;
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv.__PVT__stall_i 
        = vlSelfRef.__Vcellinp__idiv__stall_i;
    vlSelfRef.__PVT__alu_result_valid = (1U & VL_BITSEL_IIII(32, 
                                                             ((IData)(vlSelfRef.__PVT__invalidate_cur_instr)
                                                               ? 0U
                                                               : 
                                                              VL_EXTEND_II(32,1, 
                                                                           ((~ 
                                                                             VL_BITSEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x59U)) 
                                                                            & (IData)(vlSelfRef.__PVT__instruction_valid)))), 0U));
    vlSelfRef.muldiv_req = (1U & VL_BITSEL_IIII(32, 
                                                ((IData)(vlSelfRef.__PVT__invalidate_cur_instr)
                                                  ? 0U
                                                  : 
                                                 VL_EXTEND_II(32,1, 
                                                              (VL_BITSEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x59U) 
                                                               & (IData)(vlSelfRef.__PVT__instruction_valid)))), 0U));
    vlSelfRef.__PVT__is_div_instr = ((IData)(vlSelfRef.muldiv_req) 
                                     & VL_BITSEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5cU));
    vlSelfRef.__PVT__is_mul_instr = ((IData)(vlSelfRef.muldiv_req) 
                                     & (~ VL_BITSEL_IWII(161, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_muldiv_pack, 0x5cU)));
    vlSelfRef.__Vcellinp__imul__req_i = ((IData)(vlSelfRef.muldiv_req) 
                                         & (IData)(vlSelfRef.__PVT__is_mul_instr));
    vlSymsp->TOP__falco_top__core__alu_muldiv_execute_group_inst__imul.__PVT__req_i 
        = vlSelfRef.__Vcellinp__imul__req_i;
}
