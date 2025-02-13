// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_issue__SE1.h"

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___ico_sequent__TOP__rv32im_top__core__u_issue__0(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___ico_sequent__TOP__rv32im_top__core__u_issue__0\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__1(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__1\n"); );
    // Body
    vlSelf->__PVT__pipe_ra_val_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__operand_ra_wb_o;
    vlSelf->__PVT__pipe_rb_val_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__operand_rb_wb_o;
    vlSelf->__PVT__csr_writeback_wdata_o = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_wdata_wb_o;
    vlSelf->__PVT__csr_writeback_write_o = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_write_wb_o;
    vlSelf->__PVT__pipe_pc_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__pc_wb_o;
    vlSelf->__PVT__pipe_exception_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__exception_wb_o;
    vlSelf->__PVT__pipe_result_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__result_wb_o;
    vlSelf->__PVT__csr_writeback_waddr_o = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_waddr_wb_o;
    vlSelf->__PVT__pipe_opc_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__opcode_wb_o;
    vlSelf->__PVT__pipe_load_e2_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__load_e2_o;
    vlSelf->__PVT__pipe_mul_e2_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__mul_e2_o;
    vlSelf->__PVT__pipe_pc_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__pc_e1_o;
    vlSelf->__PVT__pipe_operand_ra_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__operand_ra_e1_o;
    vlSelf->__PVT__pipe_operand_rb_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__operand_rb_e1_o;
    vlSelf->__PVT__pipe_opcode_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__opcode_e1_o;
    vlSelf->__PVT__pipe_branch_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__branch_e1_o;
    vlSelf->__PVT__pipe_load_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__load_e1_o;
    vlSelf->__PVT__pipe_store_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__store_e1_o;
    vlSelf->__PVT__pipe_mul_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__mul_e1_o;
    vlSelf->__PVT__pipe_rd_e1_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__rd_e1_o;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_dec0_verif.__PVT__pc_i 
        = vlSelf->__PVT__pipe_pc_wb_w;
    vlSelf->__PVT__csr_writeback_exception_pc_o = vlSelf->__PVT__pipe_pc_wb_w;
    vlSelf->__PVT__csr_writeback_exception_o = vlSelf->__PVT__pipe_exception_wb_w;
    vlSelf->__PVT__csr_writeback_exception_addr_o = vlSelf->__PVT__pipe_result_wb_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__rd0_value_i 
        = vlSelf->__PVT__pipe_result_wb_w;
    vlSelf->__PVT__v_pipe_rs1_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__pipe_opc_wb_w, 0xfU, 5U));
    vlSelf->__PVT__v_pipe_rs2_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__pipe_opc_wb_w, 0x14U, 5U));
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_dec0_verif.__PVT__opcode_i 
        = vlSelf->__PVT__pipe_opc_wb_w;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__2(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__2\n"); );
    // Body
    vlSelf->__PVT__opcode_pc_o = vlSelf->__PVT__fetch_pc_i;
    vlSelf->__PVT__issue_fault_w = ((IData)(vlSelf->__PVT__fetch_fault_fetch_i)
                                     ? 0x11U : ((IData)(vlSelf->__PVT__fetch_fault_page_i)
                                                 ? 0x1cU
                                                 : 0U));
    vlSelf->__PVT__issue_rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__fetch_instr_i, 7U, 5U));
    vlSelf->__PVT__opcode_opcode_o = vlSelf->__PVT__fetch_instr_i;
    vlSelf->__PVT__issue_rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__fetch_instr_i, 0x14U, 5U));
    vlSelf->__PVT__issue_ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__fetch_instr_i, 0xfU, 5U));
    vlSelf->__PVT__lsu_opcode_pc_o = vlSelf->__PVT__opcode_pc_o;
    vlSelf->__PVT__mul_opcode_pc_o = vlSelf->__PVT__opcode_pc_o;
    vlSelf->__PVT__csr_opcode_pc_o = vlSelf->__PVT__opcode_pc_o;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_pc_i 
        = vlSelf->__PVT__opcode_pc_o;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_exception_i 
        = vlSelf->__PVT__issue_fault_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_rd_i 
        = vlSelf->__PVT__issue_rd_idx_w;
    vlSelf->__PVT__opcode_rd_idx_o = vlSelf->__PVT__issue_rd_idx_w;
    vlSelf->__PVT__mul_opcode_opcode_o = vlSelf->__PVT__opcode_opcode_o;
    vlSelf->__PVT__lsu_opcode_opcode_o = vlSelf->__PVT__opcode_opcode_o;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_opcode_i 
        = vlSelf->__PVT__opcode_opcode_o;
    vlSelf->__PVT__csr_opcode_opcode_o = vlSelf->__PVT__opcode_opcode_o;
    vlSelf->__PVT__opcode_rb_idx_o = vlSelf->__PVT__issue_rb_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__rb0_i 
        = vlSelf->__PVT__issue_rb_idx_w;
    vlSelf->__PVT__opcode_ra_idx_o = vlSelf->__PVT__issue_ra_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__ra0_i 
        = vlSelf->__PVT__issue_ra_idx_w;
    vlSelf->__PVT__lsu_opcode_rd_idx_o = vlSelf->__PVT__opcode_rd_idx_o;
    vlSelf->__PVT__mul_opcode_rd_idx_o = vlSelf->__PVT__opcode_rd_idx_o;
    vlSelf->__PVT__csr_opcode_rd_idx_o = vlSelf->__PVT__opcode_rd_idx_o;
    vlSelf->__PVT__lsu_opcode_rb_idx_o = vlSelf->__PVT__opcode_rb_idx_o;
    vlSelf->__PVT__mul_opcode_rb_idx_o = vlSelf->__PVT__opcode_rb_idx_o;
    vlSelf->__PVT__csr_opcode_rb_idx_o = vlSelf->__PVT__opcode_rb_idx_o;
    vlSelf->__PVT__lsu_opcode_ra_idx_o = vlSelf->__PVT__opcode_ra_idx_o;
    vlSelf->__PVT__mul_opcode_ra_idx_o = vlSelf->__PVT__opcode_ra_idx_o;
    vlSelf->__PVT__csr_opcode_ra_idx_o = vlSelf->__PVT__opcode_ra_idx_o;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__3(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__3\n"); );
    // Body
    vlSelf->__PVT__issue_exec_w = vlSelf->__PVT__fetch_instr_exec_i;
    vlSelf->__PVT__issue_lsu_w = vlSelf->__PVT__fetch_instr_lsu_i;
    vlSelf->__PVT__issue_branch_w = vlSelf->__PVT__fetch_instr_branch_i;
    vlSelf->__PVT__issue_sb_alloc_w = vlSelf->__PVT__fetch_instr_rd_valid_i;
    vlSelf->__PVT__issue_mul_w = vlSelf->__PVT__fetch_instr_mul_i;
    vlSelf->__PVT__issue_div_w = vlSelf->__PVT__fetch_instr_div_i;
    vlSelf->__PVT__issue_invalid_w = vlSelf->__PVT__fetch_instr_invalid_i;
    vlSelf->__PVT__issue_csr_w = vlSelf->__PVT__fetch_instr_csr_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_lsu_i 
        = vlSelf->__PVT__issue_lsu_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_branch_i 
        = vlSelf->__PVT__issue_branch_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_rd_valid_i 
        = vlSelf->__PVT__issue_sb_alloc_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_mul_i 
        = vlSelf->__PVT__issue_mul_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_div_i 
        = vlSelf->__PVT__issue_div_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_csr_i 
        = vlSelf->__PVT__issue_csr_w;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__4(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__4\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_result_write_e1_i 
        = vlSelf->__PVT__csr_result_e1_write_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_result_wdata_e1_i 
        = vlSelf->__PVT__csr_result_e1_wdata_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_result_exception_e1_i 
        = vlSelf->__PVT__csr_result_e1_exception_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_result_value_e1_i 
        = vlSelf->__PVT__csr_result_e1_value_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__take_interrupt_i 
        = vlSelf->__PVT__take_interrupt_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__5(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__5\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__6(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__6\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__div_result_i 
        = vlSelf->__PVT__writeback_div_value_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__div_complete_i 
        = vlSelf->__PVT__writeback_div_valid_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__7(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__7\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__mul_result_e2_i 
        = vlSelf->__PVT__writeback_mul_value_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__8(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_sequent__TOP__rv32im_top__core__u_issue__8\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__alu_result_e1_i 
        = vlSelf->__PVT__writeback_exec_value_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__2(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__2\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__mem_complete_i 
        = vlSelf->__PVT__writeback_mem_valid_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__3(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__3\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__mem_result_e2_i 
        = vlSelf->__PVT__writeback_mem_value_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__4(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__4\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__mem_exception_e2_i 
        = vlSelf->__PVT__writeback_mem_exception_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__5(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__5\n"); );
    // Body
    vlSelf->__PVT__pipe_stall_raw_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__stall_o;
    vlSelf->__PVT__stall_w = vlSelf->__PVT__pipe_stall_raw_w;
    vlSelf->__PVT__exec_hold_o = vlSelf->__PVT__stall_w;
    vlSelf->__PVT__mul_hold_o = vlSelf->__PVT__stall_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_stall_i 
        = vlSelf->__PVT__stall_w;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__6(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__6\n"); );
    // Body
    vlSelf->__PVT__pipe_csr_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__csr_wb_o;
    vlSelf->__PVT__pipe_valid_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__valid_wb_o;
    vlSelf->__PVT__pipe_rd_e2_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__rd_e2_o;
    vlSelf->__PVT__pipe_rd_wb_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__rd_wb_o;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_dec0_verif.__PVT__valid_i 
        = vlSelf->__PVT__pipe_valid_wb_w;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__rd0_i 
        = vlSelf->__PVT__pipe_rd_wb_w;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__7(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__7\n"); );
    // Body
    vlSelf->__PVT__issue_ra_value_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__ra0_value_o;
    vlSelf->__PVT__issue_rb_value_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_regfile.__PVT__rb0_value_o;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__8(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__8\n"); );
    // Body
    vlSelf->__PVT__pipe_squash_e1_e2_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__squash_e1_e2_o;
    vlSelf->__PVT__squash_w = vlSelf->__PVT__pipe_squash_e1_e2_w;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__9(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__9\n"); );
    // Body
    vlSelf->__PVT__pipe_result_e2_w = vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__result_e2_o;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__11(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__11\n"); );
    // Body
    vlSelf->__PVT__issue_ra_value_r = vlSelf->__PVT__issue_ra_value_w;
    vlSelf->__PVT__issue_rb_value_r = vlSelf->__PVT__issue_rb_value_w;
    if (((IData)(vlSelf->__PVT__pipe_rd_wb_w) == (IData)(vlSelf->__PVT__issue_ra_idx_w))) {
        vlSelf->__PVT__issue_ra_value_r = vlSelf->__PVT__pipe_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe_rd_wb_w) == (IData)(vlSelf->__PVT__issue_rb_idx_w))) {
        vlSelf->__PVT__issue_rb_value_r = vlSelf->__PVT__pipe_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe_rd_e2_w) == (IData)(vlSelf->__PVT__issue_ra_idx_w))) {
        vlSelf->__PVT__issue_ra_value_r = vlSelf->__PVT__pipe_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe_rd_e2_w) == (IData)(vlSelf->__PVT__issue_rb_idx_w))) {
        vlSelf->__PVT__issue_rb_value_r = vlSelf->__PVT__pipe_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe_rd_e1_w) == (IData)(vlSelf->__PVT__issue_ra_idx_w))) {
        vlSelf->__PVT__issue_ra_value_r = vlSelf->__PVT__writeback_exec_value_i;
    }
    if (((IData)(vlSelf->__PVT__pipe_rd_e1_w) == (IData)(vlSelf->__PVT__issue_rb_idx_w))) {
        vlSelf->__PVT__issue_rb_value_r = vlSelf->__PVT__writeback_exec_value_i;
    }
    if ((0U == (IData)(vlSelf->__PVT__issue_ra_idx_w))) {
        vlSelf->__PVT__issue_ra_value_r = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__issue_rb_idx_w))) {
        vlSelf->__PVT__issue_rb_value_r = 0U;
    }
    vlSelf->__PVT__opcode_rb_operand_o = vlSelf->__PVT__issue_rb_value_r;
    vlSelf->__PVT__opcode_ra_operand_o = vlSelf->__PVT__issue_ra_value_r;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_operand_rb_i 
        = vlSelf->__PVT__opcode_rb_operand_o;
    vlSelf->__PVT__csr_opcode_rb_operand_o = vlSelf->__PVT__opcode_rb_operand_o;
    vlSelf->__PVT__mul_opcode_rb_operand_o = vlSelf->__PVT__opcode_rb_operand_o;
    vlSelf->__PVT__lsu_opcode_rb_operand_o = vlSelf->__PVT__opcode_rb_operand_o;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_operand_ra_i 
        = vlSelf->__PVT__opcode_ra_operand_o;
    vlSelf->__PVT__mul_opcode_ra_operand_o = vlSelf->__PVT__opcode_ra_operand_o;
    vlSelf->__PVT__lsu_opcode_ra_operand_o = vlSelf->__PVT__opcode_ra_operand_o;
    vlSelf->__PVT__csr_opcode_ra_operand_o = vlSelf->__PVT__opcode_ra_operand_o;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__12(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__12\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_branch_target_i 
        = vlSelf->__PVT__branch_d_exec_pc_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__13(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__13\n"); );
    // Body
    vlSelf->__PVT__opcode_issue_r = 0U;
    vlSelf->__PVT__opcode_accept_r = 0U;
    vlSelf->__PVT__scoreboard_r = 0U;
    if (((IData)(vlSelf->__PVT__pipe_load_e1_w) | (IData)(vlSelf->__PVT__pipe_mul_e1_w))) {
        VL_ASSIGNBIT_IO((IData)(vlSelf->__PVT__pipe_rd_e1_w), vlSelf->__PVT__scoreboard_r);
    }
    if ((((IData)(vlSelf->__PVT__pipe_load_e1_w) | (IData)(vlSelf->__PVT__pipe_store_e1_w)) 
         & (((IData)(vlSelf->__PVT__issue_mul_w) | (IData)(vlSelf->__PVT__issue_div_w)) 
            | (IData)(vlSelf->__PVT__issue_csr_w)))) {
        vlSelf->__PVT__scoreboard_r = 0xffffffffU;
    }
    if ((1U & (~ ((((IData)(vlSelf->__PVT__lsu_stall_i) 
                    | (IData)(vlSelf->__PVT__stall_w)) 
                   | (IData)(vlSelf->__PVT__div_pending_q)) 
                  | (IData)(vlSelf->__PVT__csr_pending_q))))) {
        if (((IData)(vlSelf->__PVT__opcode_valid_w) 
             & (~ ((VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_ra_idx_w)) 
                    | VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_rb_idx_w))) 
                   | VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_rd_idx_w)))))) {
            vlSelf->__PVT__opcode_issue_r = 1U;
            vlSelf->__PVT__opcode_accept_r = 1U;
            if ((((IData)(vlSelf->__PVT__opcode_accept_r) 
                  & (IData)(vlSelf->__PVT__issue_sb_alloc_w)) 
                 & VL_REDOR_I((IData)(vlSelf->__PVT__issue_rd_idx_w)))) {
                VL_ASSIGNBIT_IO((IData)(vlSelf->__PVT__issue_rd_idx_w), vlSelf->__PVT__scoreboard_r);
            }
        }
    }
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_accept_i 
        = vlSelf->__PVT__opcode_accept_r;
    vlSelf->__PVT__fetch_accept_o = (1U & ((~ (IData)(vlSelf->__PVT__opcode_valid_w)) 
                                           | ((IData)(vlSelf->__PVT__opcode_accept_r) 
                                              & (~ (IData)(vlSelf->__PVT__take_interrupt_i)))));
    vlSelf->__PVT__mul_opcode_valid_o = ((IData)(vlSelf->__PVT__enable_muldiv_w) 
                                         & (IData)(vlSelf->__PVT__opcode_issue_r));
    vlSelf->__PVT__csr_opcode_invalid_o = ((IData)(vlSelf->__PVT__opcode_issue_r) 
                                           & (IData)(vlSelf->__PVT__issue_invalid_w));
    vlSelf->__PVT__div_opcode_valid_o = ((IData)(vlSelf->__PVT__enable_muldiv_w) 
                                         & (IData)(vlSelf->__PVT__opcode_issue_r));
    vlSelf->__PVT__lsu_opcode_valid_o = ((IData)(vlSelf->__PVT__opcode_issue_r) 
                                         & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_valid_i 
        = vlSelf->__PVT__opcode_issue_r;
    vlSelf->__PVT__exec_opcode_valid_o = vlSelf->__PVT__opcode_issue_r;
    vlSelf->__PVT__csr_opcode_valid_o = ((IData)(vlSelf->__PVT__opcode_issue_r) 
                                         & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
}

VL_INLINE_OPT void Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__15(Vrv32im_top_riscv_issue__SE1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_issue__SE1___nba_comb__TOP__rv32im_top__core__u_issue__15\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl.__PVT__issue_branch_taken_i 
        = vlSelf->__PVT__branch_d_exec_request_i;
    vlSelf->__PVT__branch_request_o = ((IData)(vlSelf->__PVT__branch_csr_request_i) 
                                       | (IData)(vlSelf->__PVT__branch_d_exec_request_i));
}
