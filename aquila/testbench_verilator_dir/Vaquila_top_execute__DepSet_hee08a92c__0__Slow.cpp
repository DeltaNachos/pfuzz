// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_execute.h"

VL_ATTR_COLD void Vaquila_top_execute___ctor_var_reset(Vaquila_top_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_execute___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inputA_sel_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inputB_sel_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__operation_sel_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__alu_muldiv_sel_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__shift_sel_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_branch_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_jal_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_jalr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_hit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_decision_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__regfile_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__regfile_input_sel_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__re_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dsize_sel_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__signex_sel_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__is_fencei_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_amo_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__amo_type_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__csr_imm_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_we_addr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__rs1_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_restore_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_target_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__is_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_taken_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_misprediction_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_from_exe_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fencei_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_amo_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__amo_type_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs2_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dsize_sel_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__regfile_input_sel_o = VL_RAND_RESET_I(3);
    vlSelf->__PVT__regfile_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__p_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_we_addr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_we_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__signex_sel_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sys_jump_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sys_jump_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fetch_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__xcpt_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inputA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inputB = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__muldiv_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__compare_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_from_muldiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_operation = VL_RAND_RESET_I(3);
    vlSelf->__PVT__muldiv_operation = VL_RAND_RESET_I(3);
    vlSelf->__PVT__muldiv_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_operation = VL_RAND_RESET_I(3);
    vlSelf->__PVT__csr_inputA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_inputB = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_update_data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__we_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__re_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rs2_data_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__addr_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__dsize_sel_o = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__signex_sel_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__regfile_input_sel_o = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__regfile_we_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__is_fencei_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__is_amo_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__amo_type_o = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__sys_jump_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sys_jump_csr_addr_o = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__xcpt_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__xcpt_cause_o = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__xcpt_tval_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__fetch_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__csr_we_addr_o = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__csr_we_data_o = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__p_data_o = VL_RAND_RESET_I(32);
}
