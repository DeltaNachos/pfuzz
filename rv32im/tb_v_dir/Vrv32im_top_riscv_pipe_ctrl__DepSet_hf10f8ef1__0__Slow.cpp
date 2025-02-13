// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_pipe_ctrl.h"

VL_ATTR_COLD void Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__2(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__2\n"); );
    // Body
    vlSelf->__PVT__stall_o = (1U & ((VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 4U) 
                                     & (~ (IData)(vlSelf->__PVT__div_complete_i))) 
                                    | ((VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                        | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)) 
                                       & (~ (IData)(vlSelf->__PVT__mem_complete_i)))));
    vlSelf->__PVT__exception_e2_r = ((((IData)(vlSelf->__PVT__valid_e2_q) 
                                       & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                          | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U))) 
                                      & (IData)(vlSelf->__PVT__mem_complete_i))
                                      ? (IData)(vlSelf->__PVT__mem_exception_e2_i)
                                      : (IData)(vlSelf->__PVT__exception_e2_q));
    vlSelf->__PVT__squash_e1_e2_w = VL_REDOR_I((IData)(vlSelf->__PVT__exception_e2_r));
    vlSelf->__PVT__squash_e1_e2_o = ((IData)(vlSelf->__PVT__squash_e1_e2_w) 
                                     | (IData)(vlSelf->__PVT__squash_e1_e2_q));
}

VL_ATTR_COLD void Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__5(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__5\n"); );
    // Body
    vlSelf->__PVT__branch_misaligned_w = ((IData)(vlSelf->__PVT__issue_branch_taken_i) 
                                          & (0U != 
                                             (3U & 
                                              VL_SEL_IIII(32, vlSelf->__PVT__issue_branch_target_i, 0U, 2U))));
}

VL_ATTR_COLD void Vrv32im_top_riscv_pipe_ctrl___ctor_var_reset(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_lsu_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_csr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_div_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_mul_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_branch_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_rd_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_rd_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__issue_exception_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__take_interrupt_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_branch_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_branch_target_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__issue_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__issue_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__issue_operand_ra_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__issue_operand_rb_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_result_e1_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_value_e1_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_write_e1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_result_wdata_e1_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_result_exception_e1_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__load_e1_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_e1_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_e1_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_e1_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_e1_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__pc_e1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_e1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_ra_e1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_rb_e1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_complete_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_result_e2_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_exception_e2_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__mul_result_e2_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_e2_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_e2_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_e2_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__result_e2_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_complete_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_result_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__valid_wb_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_wb_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_wb_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__result_wb_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_wb_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_wb_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_ra_wb_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_rb_wb_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_wb_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__csr_write_wb_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_waddr_wb_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_wdata_wb_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stall_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__squash_e1_e2_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__squash_e1_e2_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__squash_wb_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__squash_e1_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_misaligned_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl_e1_q = VL_RAND_RESET_I(10);
    vlSelf->__PVT__pc_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__npc_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_ra_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_rb_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_e1_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__alu_e1_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_e1_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_e1_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl_e2_q = VL_RAND_RESET_I(10);
    vlSelf->__PVT__csr_wr_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_wdata_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__npc_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_ra_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_rb_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_e2_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__result_e2_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__valid_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_e2_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exception_e2_r = VL_RAND_RESET_I(6);
    vlSelf->__PVT__squash_e1_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_wb_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl_wb_q = VL_RAND_RESET_I(10);
    vlSelf->__PVT__csr_wr_wb_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_wdata_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__npc_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_ra_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operand_rb_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exception_wb_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__complete_wb_w = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__valid_e1_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ctrl_e1_q = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__pc_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__npc_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__opcode_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__operand_ra_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__operand_rb_e1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exception_e1_q = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__valid_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ctrl_e2_q = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__csr_wr_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__csr_wdata_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__npc_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__opcode_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__operand_ra_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__operand_rb_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__result_e2_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exception_e2_q = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__squash_e1_e2_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__valid_wb_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ctrl_wb_q = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__csr_wr_wb_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__csr_wdata_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__npc_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__opcode_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__operand_ra_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__operand_rb_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__result_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exception_wb_q = VL_RAND_RESET_I(6);
}
