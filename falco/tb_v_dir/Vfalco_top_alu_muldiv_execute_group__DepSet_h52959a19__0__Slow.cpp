// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_alu_muldiv_execute_group.h"

VL_ATTR_COLD void Vfalco_top_alu_muldiv_execute_group___ctor_var_reset(Vfalco_top_alu_muldiv_execute_group* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_alu_muldiv_execute_group___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->muldiv_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instruction_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_B = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->muldiv_ready = VL_RAND_RESET_I(1);
    vlSelf->muldiv_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_result = VL_RAND_RESET_I(32);
    vlSelf->mul_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_mul_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_operation_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mul_early_wake_up = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_req = VL_RAND_RESET_I(1);
    vlSelf->div_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_div_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_op_A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_op_B = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_operation_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__div_req_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_running = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__muldiv_result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_BCAST_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invalidate_cur_instr = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__ALU1__shift_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__ALU1__operation_sel = VL_RAND_RESET_I(3);
    vlSelf->__Vcellinp__idiv__operation_sel_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__idiv__kill_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__idiv__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__imul__operation_sel_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__imul__kill_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__imul__req_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__imul__stall_i = VL_RAND_RESET_I(1);
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
    vlSelf->__Vfunc_IsBrROBKill__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__3__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__3__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__4__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__4__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__4__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_IsBrROBKill__5__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_IsBrROBKill__5__branch_recovery_flush = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_IsBrROBKill__5__rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__div_op_A = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__div_op_B = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__div_operation_sel = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__div_req_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__muldiv_running = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__muldiv_busy = VL_RAND_RESET_I(1);
}
