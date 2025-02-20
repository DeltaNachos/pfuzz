// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_alu_csr_bc_execute_group.h"

VL_ATTR_COLD void Vfalco_top_alu_csr_bc_execute_group___ctor_var_reset(Vfalco_top_alu_csr_bc_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_csr_bc_execute_group___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instruction_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_B = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_inputA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_inputB = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_update_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_control_instruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_operation = VL_RAND_RESET_I(3);
    vlSelf->__PVT__branch_target_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__compare_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_misprediction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_branch_instruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invalidate_current_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_restore_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__ALU0__shift_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__BCU__operation_sel = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_IsBrROBKill__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__0__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__0__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_network__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__1__rs_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_network__1__prf_register_data = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__1__mem_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__1__alu_csr_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__1__alu1_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__1__muldiv_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__2__rs_addr = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_bypass_network__2__prf_register_data = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bypass_network__2__mem_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__2__alu_csr_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__2__alu1_wb = VL_RAND_RESET_Q(39);
    vlSelf->__Vfunc_bypass_network__2__muldiv_wb = VL_RAND_RESET_Q(39);
}
