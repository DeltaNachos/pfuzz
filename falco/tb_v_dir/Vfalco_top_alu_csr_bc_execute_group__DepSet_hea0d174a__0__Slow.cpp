// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_alu_csr_bc_execute_group.h"

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__0(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_inputB = ((1U & VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa7U))
                                    ? VL_EXTEND_II(32,5, 
                                                   (0x1fU 
                                                    & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x8fU, 5U)))
                                    : VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x3cU, 0x20U));
    vlSelfRef.__PVT__branch_restore_pc = ((IData)(4U) 
                                          + VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xecU, 0x20U));
    vlSelfRef.__Vcellinp__BCU__operation_sel = (7U 
                                                & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa5U, 3U));
    vlSelfRef.__Vcellinp__ALU0__shift_sel = (1U & VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa4U));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i 
        = (0xfffU & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x94U, 0xcU));
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU.__PVT__operation_sel 
        = vlSelfRef.__Vcellinp__BCU__operation_sel;
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0.__PVT__shift_sel 
        = vlSelfRef.__Vcellinp__ALU0__shift_sel;
}

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__1(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_IsBrROBKill__0__rob_tag = (0x3fU 
                                                 & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaU, 6U));
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
    vlSelfRef.__PVT__invalidate_current_instr = vlSelfRef.__Vfunc_IsBrROBKill__0__Vfuncout;
    vlSelfRef.__PVT__csr_inputA = vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_data_o;
    vlSelfRef.__PVT__csr_update_data = ((1U == (3U 
                                                & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa5U, 2U)))
                                         ? vlSelfRef.__PVT__csr_inputB
                                         : ((2U == 
                                             (3U & 
                                              VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa5U, 2U)))
                                             ? (vlSelfRef.__PVT__csr_inputA 
                                                | vlSelfRef.__PVT__csr_inputB)
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa5U, 2U)))
                                                 ? 
                                                (vlSelfRef.__PVT__csr_inputA 
                                                 & (~ vlSelfRef.__PVT__csr_inputB))
                                                 : vlSelfRef.__PVT__csr_inputA)));
}

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__2(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__1__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__1__prf_register_data 
        = VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x3cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__1__rs_addr = 
        (0x3fU & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x16U, 6U));
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
    vlSelfRef.__Vfunc_bypass_network__2__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__2__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__2__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__2__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__2__prf_register_data 
        = VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x1cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__2__rs_addr = 
        (0x3fU & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0x10U, 6U));
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
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU.__PVT__a 
        = vlSelfRef.__PVT__rs1_data;
    if ((0U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaaU, 2U)))) {
        vlSelfRef.__PVT__operand_A = 0U;
    } else if ((1U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaaU, 2U)))) {
        vlSelfRef.__PVT__operand_A = VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xecU, 0x20U);
    } else if ((2U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaaU, 2U)))) {
        vlSelfRef.__PVT__operand_A = vlSelfRef.__PVT__rs1_data;
    } else if ((3U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xaaU, 2U)))) {
        vlSelfRef.__PVT__operand_A = 0U;
    }
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU.__PVT__b 
        = vlSelfRef.__PVT__rs2_data;
    if ((0U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa8U, 2U)))) {
        vlSelfRef.__PVT__operand_B = VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xacU, 0x20U);
    } else if ((1U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa8U, 2U)))) {
        vlSelfRef.__PVT__operand_B = vlSelfRef.__PVT__rs2_data;
    } else if ((2U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa8U, 2U)))) {
        vlSelfRef.__PVT__operand_B = ((IData)(1U) + 
                                      (~ vlSelfRef.__PVT__rs2_data));
    } else if ((3U == (3U & VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa8U, 2U)))) {
        vlSelfRef.__PVT__operand_B = 0U;
    }
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0.__PVT__a 
        = vlSelfRef.__PVT__operand_A;
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0.__PVT__b 
        = vlSelfRef.__PVT__operand_B;
}

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__3(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compare_result = vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU.__PVT__compare_result;
    vlSelfRef.__PVT__branch_taken = (1U & (((VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa3U) 
                                             & (IData)(vlSelfRef.__PVT__compare_result)) 
                                            | VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa2U)) 
                                           | VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa1U)));
}

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___stl_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__0(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___stl_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__exe_stall 
        = ((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_start) 
           | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_procedure));
}

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___stl_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__1(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___stl_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__instruction_valid = ((IData)(vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack_valid) 
                                          & (~ (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed)));
    vlSelfRef.__PVT__is_branch_instruction = (1U & 
                                              VL_BITSEL_IIII(32, 
                                                             ((IData)(vlSelfRef.__PVT__invalidate_current_instr)
                                                               ? 0U
                                                               : 
                                                              VL_EXTEND_II(32,1, 
                                                                           (((VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa3U) 
                                                                              | VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa2U)) 
                                                                             | VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa1U)) 
                                                                            & (IData)(vlSelfRef.__PVT__instruction_valid)))), 0U));
    vlSelfRef.__PVT__is_control_instruction = (1U & 
                                               VL_BITSEL_IIII(32, 
                                                              ((IData)(vlSelfRef.__PVT__invalidate_current_instr)
                                                                ? 0U
                                                                : 
                                                               VL_EXTEND_II(32,1, 
                                                                            ((VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa3U) 
                                                                              | VL_BITSEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa0U)) 
                                                                             & (IData)(vlSelfRef.__PVT__instruction_valid)))), 0U));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__exe_is_branch 
        = vlSelfRef.__PVT__is_branch_instruction;
    vlSelfRef.__PVT__alu_result_valid = (1U & VL_BITSEL_IIII(32, 
                                                             ((IData)(vlSelfRef.__PVT__invalidate_current_instr)
                                                               ? 0U
                                                               : 
                                                              VL_EXTEND_II(32,1, 
                                                                           ((~ (IData)(vlSelfRef.__PVT__is_control_instruction)) 
                                                                            & (IData)(vlSelfRef.__PVT__instruction_valid)))), 0U));
    vlSelfRef.__PVT__alu_operation = (7U & ((IData)(vlSelfRef.__PVT__is_control_instruction)
                                             ? 0U : 
                                            VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xa5U, 3U)));
    vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0.__PVT__operation_sel 
        = vlSelfRef.__PVT__alu_operation;
}

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___stl_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__2(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___stl_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alu_result = vlSymsp->TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0.__PVT__alu_result;
    vlSelfRef.__PVT__branch_target_addr = ((IData)(vlSelfRef.__PVT__branch_taken)
                                            ? vlSelfRef.__PVT__alu_result
                                            : vlSelfRef.__PVT__branch_restore_pc);
    vlSelfRef.__PVT__branch_misprediction = (vlSelfRef.__PVT__branch_target_addr 
                                             != VL_SEL_IWII(268, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__alu_bc_csr_pack, 0xccU, 0x20U));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__exe_misspredict 
        = vlSelfRef.__PVT__branch_misprediction;
}
