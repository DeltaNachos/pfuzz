// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_issue.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___ico_sequent__TOP__biriscv_top__u_core__u_issue__0(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___ico_sequent__TOP__biriscv_top__u_core__u_issue__0\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__2(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__2\n"); );
    // Body
    vlSelf->__PVT__pipe1_ra_val_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__operand_ra_wb_o;
    vlSelf->__PVT__pipe1_rb_val_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__operand_rb_wb_o;
    vlSelf->__PVT__pipe1_pc_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__pc_wb_o;
    vlSelf->__PVT__pipe1_exception_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__exception_wb_o;
    vlSelf->__PVT__pipe1_result_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__result_wb_o;
    vlSelf->__PVT__pipe1_opc_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__opcode_wb_o;
    vlSelf->__PVT__pipe1_load_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__load_e2_o;
    vlSelf->__PVT__pipe1_mul_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__mul_e2_o;
    vlSelf->__PVT__pipe1_pc_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__pc_e1_o;
    vlSelf->__PVT__pipe1_operand_ra_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__operand_ra_e1_o;
    vlSelf->__PVT__pipe1_operand_rb_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__operand_rb_e1_o;
    vlSelf->__PVT__pipe1_opcode_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__opcode_e1_o;
    vlSelf->__PVT__pipe1_branch_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__branch_e1_o;
    vlSelf->__PVT__pipe1_load_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__load_e1_o;
    vlSelf->__PVT__pipe1_store_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__store_e1_o;
    vlSelf->__PVT__pipe1_mul_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__mul_e1_o;
    vlSelf->__PVT__pipe1_rd_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__rd_e1_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif.__PVT__pc_i 
        = vlSelf->__PVT__pipe1_pc_wb_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rd1_value_i 
        = vlSelf->__PVT__pipe1_result_wb_w;
    vlSelf->__PVT__v_pipe1_rs1_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__pipe1_opc_wb_w, 0xfU, 5U));
    vlSelf->__PVT__v_pipe1_rs2_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__pipe1_opc_wb_w, 0x14U, 5U));
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif.__PVT__opcode_i 
        = vlSelf->__PVT__pipe1_opc_wb_w;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__3(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__3\n"); );
    // Body
    vlSelf->__PVT__pipe0_ra_val_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__operand_ra_wb_o;
    vlSelf->__PVT__pipe0_rb_val_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__operand_rb_wb_o;
    vlSelf->__PVT__csr_writeback_wdata_o = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_wdata_wb_o;
    vlSelf->__PVT__csr_writeback_write_o = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_write_wb_o;
    vlSelf->__PVT__pipe0_pc_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__pc_wb_o;
    vlSelf->__PVT__pipe0_exception_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__exception_wb_o;
    vlSelf->__PVT__pipe0_result_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__result_wb_o;
    vlSelf->__PVT__csr_writeback_waddr_o = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_waddr_wb_o;
    vlSelf->__PVT__pipe0_opc_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__opcode_wb_o;
    vlSelf->__PVT__pipe0_load_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__load_e2_o;
    vlSelf->__PVT__pipe0_mul_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__mul_e2_o;
    vlSelf->__PVT__pipe0_pc_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__pc_e1_o;
    vlSelf->__PVT__pipe0_operand_ra_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__operand_ra_e1_o;
    vlSelf->__PVT__pipe0_operand_rb_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__operand_rb_e1_o;
    vlSelf->__PVT__pipe0_opcode_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__opcode_e1_o;
    vlSelf->__PVT__pipe0_branch_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__branch_e1_o;
    vlSelf->__PVT__pipe0_load_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__load_e1_o;
    vlSelf->__PVT__pipe0_store_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__store_e1_o;
    vlSelf->__PVT__pipe0_mul_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__mul_e1_o;
    vlSelf->__PVT__pipe0_rd_e1_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__rd_e1_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif.__PVT__pc_i 
        = vlSelf->__PVT__pipe0_pc_wb_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rd0_value_i 
        = vlSelf->__PVT__pipe0_result_wb_w;
    vlSelf->__PVT__v_pipe0_rs1_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__pipe0_opc_wb_w, 0xfU, 5U));
    vlSelf->__PVT__v_pipe0_rs2_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__pipe0_opc_wb_w, 0x14U, 5U));
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif.__PVT__opcode_i 
        = vlSelf->__PVT__pipe0_opc_wb_w;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__4(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__4\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__csr_result_write_e1_i 
        = vlSelf->__PVT__csr_result_e1_write_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__csr_result_wdata_e1_i 
        = vlSelf->__PVT__csr_result_e1_wdata_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__csr_result_exception_e1_i 
        = vlSelf->__PVT__csr_result_e1_exception_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__csr_result_value_e1_i 
        = vlSelf->__PVT__csr_result_e1_value_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__take_interrupt_i 
        = vlSelf->__PVT__take_interrupt_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_result_write_e1_i 
        = vlSelf->__PVT__csr_result_e1_write_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_result_wdata_e1_i 
        = vlSelf->__PVT__csr_result_e1_wdata_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_result_exception_e1_i 
        = vlSelf->__PVT__csr_result_e1_exception_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_result_value_e1_i 
        = vlSelf->__PVT__csr_result_e1_value_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__take_interrupt_i 
        = vlSelf->__PVT__take_interrupt_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__5(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__5\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__div_result_i 
        = vlSelf->__PVT__writeback_div_value_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__div_result_i 
        = vlSelf->__PVT__writeback_div_value_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__div_complete_i 
        = vlSelf->__PVT__writeback_div_valid_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__div_complete_i 
        = vlSelf->__PVT__writeback_div_valid_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__6(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__6\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__7(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__7\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_lsu_i 
        = vlSelf->__PVT__issue_b_lsu_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_mul_i 
        = vlSelf->__PVT__issue_b_mul_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_rd_valid_i 
        = vlSelf->__PVT__issue_b_sb_alloc_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_branch_i 
        = vlSelf->__PVT__issue_b_branch_w;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__8(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__8\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__mul_result_e2_i 
        = vlSelf->__PVT__writeback_mul_value_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__mul_result_e2_i 
        = vlSelf->__PVT__writeback_mul_value_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__9(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__9\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__alu_result_e1_i 
        = vlSelf->__PVT__writeback_exec1_value_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__10(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_sequent__TOP__biriscv_top__u_core__u_issue__10\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__alu_result_e1_i 
        = vlSelf->__PVT__writeback_exec0_value_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__5(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__5\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__mem_complete_i 
        = vlSelf->__PVT__writeback_mem_valid_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__mem_complete_i 
        = vlSelf->__PVT__writeback_mem_valid_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__6(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__6\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__mem_result_e2_i 
        = vlSelf->__PVT__writeback_mem_value_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__mem_result_e2_i 
        = vlSelf->__PVT__writeback_mem_value_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__7(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__7\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__mem_exception_e2_i 
        = vlSelf->__PVT__writeback_mem_exception_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__mem_exception_e2_i 
        = vlSelf->__PVT__writeback_mem_exception_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__8(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__8\n"); );
    // Body
    vlSelf->__PVT__pipe1_stall_raw_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__stall_o;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__9(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__9\n"); );
    // Body
    vlSelf->__PVT__pipe0_stall_raw_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__stall_o;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__10(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__10\n"); );
    // Body
    vlSelf->__PVT__pipe1_squash_e1_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__squash_e1_e2_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__squash_e1_e2_i 
        = vlSelf->__PVT__pipe1_squash_e1_e2_w;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__11(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__11\n"); );
    // Body
    vlSelf->__PVT__pipe0_squash_e1_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__squash_e1_e2_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__squash_wb_i 
        = vlSelf->__PVT__pipe0_squash_e1_e2_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__squash_e1_e2_i 
        = vlSelf->__PVT__pipe0_squash_e1_e2_w;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__12(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__12\n"); );
    // Body
    vlSelf->__PVT__stall_w = ((IData)(vlSelf->__PVT__pipe0_stall_raw_w) 
                              | (IData)(vlSelf->__PVT__pipe1_stall_raw_w));
    vlSelf->__PVT__exec0_hold_o = vlSelf->__PVT__stall_w;
    vlSelf->__PVT__mul_hold_o = vlSelf->__PVT__stall_w;
    vlSelf->__PVT__exec1_hold_o = vlSelf->__PVT__stall_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_stall_i 
        = vlSelf->__PVT__stall_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_stall_i 
        = vlSelf->__PVT__stall_w;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__13(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__13\n"); );
    // Body
    vlSelf->__PVT__pipe1_valid_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__valid_wb_o;
    vlSelf->__PVT__pipe1_rd_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__rd_wb_o;
    vlSelf->__PVT__pipe1_rd_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__rd_e2_o;
    vlSelf->__PVT__pipe0_csr_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__csr_wb_o;
    vlSelf->__PVT__pipe0_valid_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__valid_wb_o;
    vlSelf->__PVT__pipe0_rd_wb_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__rd_wb_o;
    vlSelf->__PVT__pipe0_rd_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__rd_e2_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec1_verif.__PVT__valid_i 
        = vlSelf->__PVT__pipe1_valid_wb_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rd1_i 
        = vlSelf->__PVT__pipe1_rd_wb_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif.__PVT__valid_i 
        = vlSelf->__PVT__pipe0_valid_wb_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rd0_i 
        = vlSelf->__PVT__pipe0_rd_wb_w;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__15(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__15\n"); );
    // Body
    vlSelf->__PVT__pipe1_result_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__result_e2_o;
    vlSelf->__PVT__pipe0_result_e2_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__result_e2_o;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__16(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__16\n"); );
    // Body
    vlSelf->__PVT__mispredicted_r = 0U;
    vlSelf->__PVT__slot0_valid_r = 0U;
    vlSelf->__PVT__slot1_valid_r = 0U;
    if (((IData)(vlSelf->__PVT__branch_csr_request_i) 
         | (IData)(vlSelf->__PVT__squash_w))) {
        vlSelf->__PVT__slot0_valid_r = 0U;
        vlSelf->__PVT__slot1_valid_r = 0U;
    } else if (((IData)(vlSelf->__PVT__fetch0_valid_i) 
                & (VL_CONCAT_III(32,30,2, (0x3fffffffU 
                                           & VL_SEL_IIII(32, vlSelf->__PVT__fetch0_pc_i, 2U, 0x1eU)), 0U) 
                   == VL_CONCAT_III(32,30,2, (0x3fffffffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__pc_x_q, 2U, 0x1eU)), 0U)))) {
        vlSelf->__PVT__slot0_valid_r = 1U;
    } else if (((IData)(vlSelf->__PVT__fetch1_valid_i) 
                & (VL_CONCAT_III(32,30,2, (0x3fffffffU 
                                           & VL_SEL_IIII(32, vlSelf->__PVT__fetch1_pc_i, 2U, 0x1eU)), 0U) 
                   == VL_CONCAT_III(32,30,2, (0x3fffffffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__pc_x_q, 2U, 0x1eU)), 0U)))) {
        vlSelf->__PVT__slot1_valid_r = 1U;
    } else if (((IData)(vlSelf->__PVT__fetch0_valid_i) 
                | (IData)(vlSelf->__PVT__fetch1_valid_i))) {
        vlSelf->__PVT__mispredicted_r = 1U;
    }
    vlSelf->__PVT__branch_request_o = ((IData)(vlSelf->__PVT__branch_csr_request_i) 
                                       | (IData)(vlSelf->__PVT__mispredicted_r));
    vlSelf->__PVT__branch_info_request_o = vlSelf->__PVT__mispredicted_r;
    vlSelf->__PVT__issue_a_branch_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                        ? (IData)(vlSelf->__PVT__fetch0_instr_branch_i)
                                        : (IData)(vlSelf->__PVT__fetch1_instr_branch_i));
    vlSelf->__PVT__issue_a_invalid_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                         ? (IData)(vlSelf->__PVT__fetch0_instr_invalid_i)
                                         : (IData)(vlSelf->__PVT__fetch1_instr_invalid_i));
    vlSelf->__PVT__issue_a_sb_alloc_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                          ? (IData)(vlSelf->__PVT__fetch0_instr_rd_valid_i)
                                          : (IData)(vlSelf->__PVT__fetch1_instr_rd_valid_i));
    vlSelf->__PVT__issue_a_div_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                     ? (IData)(vlSelf->__PVT__fetch0_instr_div_i)
                                     : (IData)(vlSelf->__PVT__fetch1_instr_div_i));
    vlSelf->__PVT__issue_a_exec_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                      ? (IData)(vlSelf->__PVT__fetch0_instr_exec_i)
                                      : (IData)(vlSelf->__PVT__fetch1_instr_exec_i));
    vlSelf->__PVT__issue_a_csr_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                     ? (IData)(vlSelf->__PVT__fetch0_instr_csr_i)
                                     : (IData)(vlSelf->__PVT__fetch1_instr_csr_i));
    vlSelf->__PVT__issue_a_lsu_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                     ? (IData)(vlSelf->__PVT__fetch0_instr_lsu_i)
                                     : (IData)(vlSelf->__PVT__fetch1_instr_lsu_i));
    vlSelf->__PVT__issue_a_mul_w = ((IData)(vlSelf->__PVT__slot0_valid_r)
                                     ? (IData)(vlSelf->__PVT__fetch0_instr_mul_i)
                                     : (IData)(vlSelf->__PVT__fetch1_instr_mul_i));
    vlSelf->__PVT__opcode_a_r = 0U;
    vlSelf->__PVT__opcode_b_r = 0U;
    vlSelf->__PVT__opcode_a_valid_r = 0U;
    vlSelf->__PVT__opcode_b_valid_r = 0U;
    vlSelf->__PVT__opcode_a_fault_r = 0U;
    vlSelf->__PVT__opcode_b_fault_r = 0U;
    vlSelf->__PVT__opcode_a_pc_r = 0U;
    vlSelf->__PVT__opcode_b_pc_r = 0U;
    if (vlSelf->__PVT__slot0_valid_r) {
        vlSelf->__PVT__opcode_a_valid_r = 1U;
        vlSelf->__PVT__opcode_b_valid_r = vlSelf->__PVT__fetch1_valid_i;
        vlSelf->__PVT__opcode_a_r = vlSelf->__PVT__fetch0_instr_i;
        vlSelf->__PVT__opcode_a_pc_r = vlSelf->__PVT__fetch0_pc_i;
        vlSelf->__PVT__opcode_a_fault_r = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__fetch0_fault_page_i), (IData)(vlSelf->__PVT__fetch0_fault_fetch_i));
        vlSelf->__PVT__opcode_b_r = vlSelf->__PVT__fetch1_instr_i;
        vlSelf->__PVT__opcode_b_pc_r = vlSelf->__PVT__fetch1_pc_i;
        vlSelf->__PVT__opcode_b_fault_r = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__fetch1_fault_page_i), (IData)(vlSelf->__PVT__fetch1_fault_fetch_i));
    } else if (vlSelf->__PVT__slot1_valid_r) {
        vlSelf->__PVT__opcode_a_valid_r = 1U;
        vlSelf->__PVT__opcode_b_valid_r = 0U;
        vlSelf->__PVT__opcode_a_r = vlSelf->__PVT__fetch1_instr_i;
        vlSelf->__PVT__opcode_a_pc_r = vlSelf->__PVT__fetch1_pc_i;
        vlSelf->__PVT__opcode_a_fault_r = VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__fetch1_fault_page_i), (IData)(vlSelf->__PVT__fetch1_fault_fetch_i));
        vlSelf->__PVT__opcode_b_r = 0U;
        vlSelf->__PVT__opcode_b_pc_r = 0U;
        vlSelf->__PVT__opcode_b_fault_r = 0U;
    }
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_branch_i 
        = vlSelf->__PVT__issue_a_branch_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_rd_valid_i 
        = vlSelf->__PVT__issue_a_sb_alloc_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_div_i 
        = vlSelf->__PVT__issue_a_div_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_csr_i 
        = vlSelf->__PVT__issue_a_csr_w;
    vlSelf->__PVT__interrupt_inhibit_o = ((IData)(vlSelf->__PVT__csr_pending_q) 
                                          | (IData)(vlSelf->__PVT__issue_a_csr_w));
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_lsu_i 
        = vlSelf->__PVT__issue_a_lsu_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_mul_i 
        = vlSelf->__PVT__issue_a_mul_w;
    vlSelf->__PVT__dual_issue_ok_w = ((((IData)(vlSelf->__PVT__enable_dual_issue_w) 
                                        & (IData)(vlSelf->__PVT__pipe1_ok_w)) 
                                       & (((((((IData)(vlSelf->__PVT__issue_a_exec_w) 
                                               | (IData)(vlSelf->__PVT__issue_a_lsu_w)) 
                                              | (IData)(vlSelf->__PVT__issue_a_mul_w)) 
                                             & (IData)(vlSelf->__PVT__issue_b_exec_w)) 
                                            | ((((IData)(vlSelf->__PVT__issue_a_exec_w) 
                                                 | (IData)(vlSelf->__PVT__issue_a_lsu_w)) 
                                                | (IData)(vlSelf->__PVT__issue_a_mul_w)) 
                                               & (IData)(vlSelf->__PVT__issue_b_branch_w))) 
                                           | (((IData)(vlSelf->__PVT__issue_a_exec_w) 
                                               | (IData)(vlSelf->__PVT__issue_a_mul_w)) 
                                              & (IData)(vlSelf->__PVT__issue_b_lsu_w))) 
                                          | (((IData)(vlSelf->__PVT__issue_a_exec_w) 
                                              | (IData)(vlSelf->__PVT__issue_a_lsu_w)) 
                                             & (IData)(vlSelf->__PVT__issue_b_mul_w)))) 
                                      & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
    vlSelf->__PVT__issue_a_fault_w = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__opcode_a_fault_r), 0U))
                                       ? 0x11U : ((1U 
                                                   & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__opcode_a_fault_r), 1U))
                                                   ? 0x1cU
                                                   : 0U));
    vlSelf->__PVT__issue_b_fault_w = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__opcode_b_fault_r), 0U))
                                       ? 0x11U : ((1U 
                                                   & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__opcode_b_fault_r), 1U))
                                                   ? 0x1cU
                                                   : 0U));
    vlSelf->__PVT__opcode1_pc_o = vlSelf->__PVT__opcode_b_pc_r;
    vlSelf->__PVT__opcode0_pc_o = vlSelf->__PVT__opcode_a_pc_r;
    vlSelf->__PVT__issue_b_rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_b_r, 7U, 5U));
    vlSelf->__PVT__opcode1_opcode_o = vlSelf->__PVT__opcode_b_r;
    vlSelf->__PVT__issue_b_rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_b_r, 0x14U, 5U));
    vlSelf->__PVT__issue_b_ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_b_r, 0xfU, 5U));
    vlSelf->__PVT__issue_a_rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_a_r, 7U, 5U));
    vlSelf->__PVT__opcode0_opcode_o = vlSelf->__PVT__opcode_a_r;
    vlSelf->__PVT__issue_a_rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_a_r, 0x14U, 5U));
    vlSelf->__PVT__issue_a_ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_a_r, 0xfU, 5U));
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_exception_i 
        = vlSelf->__PVT__issue_a_fault_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_exception_i 
        = vlSelf->__PVT__issue_b_fault_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_pc_i 
        = vlSelf->__PVT__opcode1_pc_o;
    vlSelf->__PVT__csr_opcode_pc_o = vlSelf->__PVT__opcode0_pc_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_pc_i 
        = vlSelf->__PVT__opcode0_pc_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_rd_i 
        = vlSelf->__PVT__issue_b_rd_idx_w;
    vlSelf->__PVT__opcode1_rd_idx_o = vlSelf->__PVT__issue_b_rd_idx_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_opcode_i 
        = vlSelf->__PVT__opcode1_opcode_o;
    vlSelf->__PVT__opcode1_rb_idx_o = vlSelf->__PVT__issue_b_rb_idx_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rb1_i 
        = vlSelf->__PVT__issue_b_rb_idx_w;
    vlSelf->__PVT__opcode1_ra_idx_o = vlSelf->__PVT__issue_b_ra_idx_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__ra1_i 
        = vlSelf->__PVT__issue_b_ra_idx_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_rd_i 
        = vlSelf->__PVT__issue_a_rd_idx_w;
    vlSelf->__PVT__opcode0_rd_idx_o = vlSelf->__PVT__issue_a_rd_idx_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_opcode_i 
        = vlSelf->__PVT__opcode0_opcode_o;
    vlSelf->__PVT__csr_opcode_opcode_o = vlSelf->__PVT__opcode0_opcode_o;
    vlSelf->__PVT__opcode0_rb_idx_o = vlSelf->__PVT__issue_a_rb_idx_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rb0_i 
        = vlSelf->__PVT__issue_a_rb_idx_w;
    vlSelf->__PVT__opcode0_ra_idx_o = vlSelf->__PVT__issue_a_ra_idx_w;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__ra0_i 
        = vlSelf->__PVT__issue_a_ra_idx_w;
    vlSelf->__PVT__csr_opcode_rd_idx_o = vlSelf->__PVT__opcode0_rd_idx_o;
    vlSelf->__PVT__csr_opcode_rb_idx_o = vlSelf->__PVT__opcode0_rb_idx_o;
    vlSelf->__PVT__csr_opcode_ra_idx_o = vlSelf->__PVT__opcode0_ra_idx_o;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__17(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__17\n"); );
    // Body
    vlSelf->__PVT__opcode_a_issue_r = 0U;
    vlSelf->__PVT__opcode_b_issue_r = 0U;
    vlSelf->__PVT__opcode_a_accept_r = 0U;
    vlSelf->__PVT__opcode_b_accept_r = 0U;
    vlSelf->__PVT__scoreboard_r = 0U;
    vlSelf->__PVT__pipe1_mux_lsu_r = 0U;
    vlSelf->__PVT__pipe1_mux_mul_r = 0U;
    if (((IData)(vlSelf->__PVT__pipe0_load_e1_w) | (IData)(vlSelf->__PVT__pipe0_mul_e1_w))) {
        VL_ASSIGNBIT_IO((IData)(vlSelf->__PVT__pipe0_rd_e1_w), vlSelf->__PVT__scoreboard_r);
    }
    if (((IData)(vlSelf->__PVT__pipe1_load_e1_w) | (IData)(vlSelf->__PVT__pipe1_mul_e1_w))) {
        VL_ASSIGNBIT_IO((IData)(vlSelf->__PVT__pipe1_rd_e1_w), vlSelf->__PVT__scoreboard_r);
    }
    if ((((((IData)(vlSelf->__PVT__pipe0_load_e1_w) 
            | (IData)(vlSelf->__PVT__pipe0_store_e1_w)) 
           | (IData)(vlSelf->__PVT__pipe1_load_e1_w)) 
          | (IData)(vlSelf->__PVT__pipe1_store_e1_w)) 
         & (((IData)(vlSelf->__PVT__issue_a_mul_w) 
             | (IData)(vlSelf->__PVT__issue_a_div_w)) 
            | (IData)(vlSelf->__PVT__issue_a_csr_w)))) {
        vlSelf->__PVT__scoreboard_r = 0xffffffffU;
    }
    if ((1U & (~ ((((IData)(vlSelf->__PVT__lsu_stall_i) 
                    | (IData)(vlSelf->__PVT__stall_w)) 
                   | (IData)(vlSelf->__PVT__div_pending_q)) 
                  | (IData)(vlSelf->__PVT__csr_pending_q))))) {
        if (((IData)(vlSelf->__PVT__opcode_a_valid_r) 
             & (~ ((VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_a_ra_idx_w)) 
                    | VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) 
                   | VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_a_rd_idx_w)))))) {
            vlSelf->__PVT__opcode_a_issue_r = 1U;
            vlSelf->__PVT__opcode_a_accept_r = 1U;
            if ((((IData)(vlSelf->__PVT__opcode_a_accept_r) 
                  & (IData)(vlSelf->__PVT__issue_a_sb_alloc_w)) 
                 & VL_REDOR_I((IData)(vlSelf->__PVT__issue_a_rd_idx_w)))) {
                VL_ASSIGNBIT_IO((IData)(vlSelf->__PVT__issue_a_rd_idx_w), vlSelf->__PVT__scoreboard_r);
            }
        }
    }
    if ((1U & (~ ((((IData)(vlSelf->__PVT__lsu_stall_i) 
                    | (IData)(vlSelf->__PVT__stall_w)) 
                   | (IData)(vlSelf->__PVT__div_pending_q)) 
                  | (IData)(vlSelf->__PVT__csr_pending_q))))) {
        if (((((IData)(vlSelf->__PVT__dual_issue_ok_w) 
               & (IData)(vlSelf->__PVT__opcode_b_valid_r)) 
              & (IData)(vlSelf->__PVT__opcode_a_accept_r)) 
             & (~ ((VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_b_ra_idx_w)) 
                    | VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) 
                   | VL_BITSEL_IIII(32, vlSelf->__PVT__scoreboard_r, (IData)(vlSelf->__PVT__issue_b_rd_idx_w)))))) {
            vlSelf->__PVT__opcode_b_issue_r = 1U;
            vlSelf->__PVT__opcode_b_accept_r = 1U;
            vlSelf->__PVT__pipe1_mux_lsu_r = vlSelf->__PVT__issue_b_lsu_w;
            vlSelf->__PVT__pipe1_mux_mul_r = vlSelf->__PVT__issue_b_mul_w;
            if ((((IData)(vlSelf->__PVT__opcode_b_accept_r) 
                  & (IData)(vlSelf->__PVT__issue_b_sb_alloc_w)) 
                 & VL_REDOR_I((IData)(vlSelf->__PVT__issue_b_rd_idx_w)))) {
                VL_ASSIGNBIT_IO((IData)(vlSelf->__PVT__issue_b_rd_idx_w), vlSelf->__PVT__scoreboard_r);
            }
        }
    }
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_accept_i 
        = vlSelf->__PVT__opcode_b_accept_r;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_accept_i 
        = vlSelf->__PVT__opcode_a_accept_r;
    vlSelf->__PVT__fetch0_accept_o = ((((IData)(vlSelf->__PVT__slot0_valid_r) 
                                        & (IData)(vlSelf->__PVT__opcode_a_accept_r)) 
                                       | (IData)(vlSelf->__PVT__slot1_valid_r)) 
                                      & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
    vlSelf->__PVT__fetch1_accept_o = ((((IData)(vlSelf->__PVT__slot1_valid_r) 
                                        & (IData)(vlSelf->__PVT__opcode_a_accept_r)) 
                                       | (IData)(vlSelf->__PVT__opcode_b_accept_r)) 
                                      & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
    vlSelf->__PVT__mul_opcode_pc_o = ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                       ? vlSelf->__PVT__opcode1_pc_o
                                       : vlSelf->__PVT__opcode0_pc_o);
    vlSelf->__PVT__mul_opcode_rd_idx_o = ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                           ? (IData)(vlSelf->__PVT__opcode1_rd_idx_o)
                                           : (IData)(vlSelf->__PVT__opcode0_rd_idx_o));
    vlSelf->__PVT__mul_opcode_ra_idx_o = ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                           ? (IData)(vlSelf->__PVT__opcode1_ra_idx_o)
                                           : (IData)(vlSelf->__PVT__opcode0_ra_idx_o));
    vlSelf->__PVT__mul_opcode_rb_idx_o = ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                           ? (IData)(vlSelf->__PVT__opcode1_rb_idx_o)
                                           : (IData)(vlSelf->__PVT__opcode0_rb_idx_o));
    vlSelf->__PVT__mul_opcode_opcode_o = ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                           ? vlSelf->__PVT__opcode1_opcode_o
                                           : vlSelf->__PVT__opcode0_opcode_o);
    vlSelf->__PVT__dual_issue_w = (((IData)(vlSelf->__PVT__opcode_b_issue_r) 
                                    & (IData)(vlSelf->__PVT__opcode_b_accept_r)) 
                                   & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
    vlSelf->__PVT__exec1_opcode_valid_o = vlSelf->__PVT__opcode_b_issue_r;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_valid_i 
        = vlSelf->__PVT__opcode_b_issue_r;
    vlSelf->__PVT__lsu_opcode_pc_o = ((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                       ? vlSelf->__PVT__opcode1_pc_o
                                       : vlSelf->__PVT__opcode0_pc_o);
    vlSelf->__PVT__lsu_opcode_rd_idx_o = ((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                           ? (IData)(vlSelf->__PVT__opcode1_rd_idx_o)
                                           : (IData)(vlSelf->__PVT__opcode0_rd_idx_o));
    vlSelf->__PVT__lsu_opcode_ra_idx_o = ((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                           ? (IData)(vlSelf->__PVT__opcode1_ra_idx_o)
                                           : (IData)(vlSelf->__PVT__opcode0_ra_idx_o));
    vlSelf->__PVT__lsu_opcode_rb_idx_o = ((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                           ? (IData)(vlSelf->__PVT__opcode1_rb_idx_o)
                                           : (IData)(vlSelf->__PVT__opcode0_rb_idx_o));
    vlSelf->__PVT__lsu_opcode_opcode_o = ((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                           ? vlSelf->__PVT__opcode1_opcode_o
                                           : vlSelf->__PVT__opcode0_opcode_o);
    vlSelf->__PVT__csr_opcode_invalid_o = ((IData)(vlSelf->__PVT__opcode_a_issue_r) 
                                           & (IData)(vlSelf->__PVT__issue_a_invalid_w));
    vlSelf->__PVT__mul_opcode_valid_o = ((IData)(vlSelf->__PVT__enable_muldiv_w) 
                                         & ((IData)(vlSelf->__PVT__pipe1_mux_mul_r)
                                             ? (IData)(vlSelf->__PVT__opcode_b_issue_r)
                                             : (IData)(vlSelf->__PVT__opcode_a_issue_r)));
    vlSelf->__PVT__div_opcode_valid_o = ((IData)(vlSelf->__PVT__enable_muldiv_w) 
                                         & (IData)(vlSelf->__PVT__opcode_a_issue_r));
    vlSelf->__PVT__exec0_opcode_valid_o = vlSelf->__PVT__opcode_a_issue_r;
    vlSelf->__PVT__lsu_opcode_valid_o = (((IData)(vlSelf->__PVT__pipe1_mux_lsu_r)
                                           ? (IData)(vlSelf->__PVT__opcode_b_issue_r)
                                           : (IData)(vlSelf->__PVT__opcode_a_issue_r)) 
                                         & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_valid_i 
        = vlSelf->__PVT__opcode_a_issue_r;
    vlSelf->__PVT__csr_opcode_valid_o = ((IData)(vlSelf->__PVT__opcode_a_issue_r) 
                                         & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
    vlSelf->__PVT__single_issue_w = ((((IData)(vlSelf->__PVT__opcode_a_issue_r) 
                                       & (IData)(vlSelf->__PVT__opcode_a_accept_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dual_issue_w))) 
                                     & (~ (IData)(vlSelf->__PVT__take_interrupt_i)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__18(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__18\n"); );
    // Body
    vlSelf->__PVT__issue_b_ra_value_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__ra1_value_o;
    vlSelf->__PVT__issue_b_rb_value_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rb1_value_o;
    vlSelf->__PVT__issue_a_ra_value_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__ra0_value_o;
    vlSelf->__PVT__issue_a_rb_value_w = vlSymsp->TOP__biriscv_top__u_core__u_issue__u_regfile.__PVT__rb0_value_o;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__19(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__19\n"); );
    // Body
    vlSelf->__PVT__issue_b_ra_value_r = vlSelf->__PVT__issue_b_ra_value_w;
    vlSelf->__PVT__issue_b_rb_value_r = vlSelf->__PVT__issue_b_rb_value_w;
    if (((IData)(vlSelf->__PVT__pipe0_rd_wb_w) == (IData)(vlSelf->__PVT__issue_b_ra_idx_w))) {
        vlSelf->__PVT__issue_b_ra_value_r = vlSelf->__PVT__pipe0_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_wb_w) == (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) {
        vlSelf->__PVT__issue_b_rb_value_r = vlSelf->__PVT__pipe0_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_wb_w) == (IData)(vlSelf->__PVT__issue_b_ra_idx_w))) {
        vlSelf->__PVT__issue_b_ra_value_r = vlSelf->__PVT__pipe1_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_wb_w) == (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) {
        vlSelf->__PVT__issue_b_rb_value_r = vlSelf->__PVT__pipe1_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e2_w) == (IData)(vlSelf->__PVT__issue_b_ra_idx_w))) {
        vlSelf->__PVT__issue_b_ra_value_r = vlSelf->__PVT__pipe0_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e2_w) == (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) {
        vlSelf->__PVT__issue_b_rb_value_r = vlSelf->__PVT__pipe0_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e2_w) == (IData)(vlSelf->__PVT__issue_b_ra_idx_w))) {
        vlSelf->__PVT__issue_b_ra_value_r = vlSelf->__PVT__pipe1_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e2_w) == (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) {
        vlSelf->__PVT__issue_b_rb_value_r = vlSelf->__PVT__pipe1_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e1_w) == (IData)(vlSelf->__PVT__issue_b_ra_idx_w))) {
        vlSelf->__PVT__issue_b_ra_value_r = vlSelf->__PVT__writeback_exec0_value_i;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e1_w) == (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) {
        vlSelf->__PVT__issue_b_rb_value_r = vlSelf->__PVT__writeback_exec0_value_i;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e1_w) == (IData)(vlSelf->__PVT__issue_b_ra_idx_w))) {
        vlSelf->__PVT__issue_b_ra_value_r = vlSelf->__PVT__writeback_exec1_value_i;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e1_w) == (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) {
        vlSelf->__PVT__issue_b_rb_value_r = vlSelf->__PVT__writeback_exec1_value_i;
    }
    if ((0U == (IData)(vlSelf->__PVT__issue_b_ra_idx_w))) {
        vlSelf->__PVT__issue_b_ra_value_r = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__issue_b_rb_idx_w))) {
        vlSelf->__PVT__issue_b_rb_value_r = 0U;
    }
    vlSelf->__PVT__issue_a_ra_value_r = vlSelf->__PVT__issue_a_ra_value_w;
    vlSelf->__PVT__issue_a_rb_value_r = vlSelf->__PVT__issue_a_rb_value_w;
    if (((IData)(vlSelf->__PVT__pipe0_rd_wb_w) == (IData)(vlSelf->__PVT__issue_a_ra_idx_w))) {
        vlSelf->__PVT__issue_a_ra_value_r = vlSelf->__PVT__pipe0_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_wb_w) == (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) {
        vlSelf->__PVT__issue_a_rb_value_r = vlSelf->__PVT__pipe0_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_wb_w) == (IData)(vlSelf->__PVT__issue_a_ra_idx_w))) {
        vlSelf->__PVT__issue_a_ra_value_r = vlSelf->__PVT__pipe1_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_wb_w) == (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) {
        vlSelf->__PVT__issue_a_rb_value_r = vlSelf->__PVT__pipe1_result_wb_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e2_w) == (IData)(vlSelf->__PVT__issue_a_ra_idx_w))) {
        vlSelf->__PVT__issue_a_ra_value_r = vlSelf->__PVT__pipe0_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e2_w) == (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) {
        vlSelf->__PVT__issue_a_rb_value_r = vlSelf->__PVT__pipe0_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e2_w) == (IData)(vlSelf->__PVT__issue_a_ra_idx_w))) {
        vlSelf->__PVT__issue_a_ra_value_r = vlSelf->__PVT__pipe1_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e2_w) == (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) {
        vlSelf->__PVT__issue_a_rb_value_r = vlSelf->__PVT__pipe1_result_e2_w;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e1_w) == (IData)(vlSelf->__PVT__issue_a_ra_idx_w))) {
        vlSelf->__PVT__issue_a_ra_value_r = vlSelf->__PVT__writeback_exec0_value_i;
    }
    if (((IData)(vlSelf->__PVT__pipe0_rd_e1_w) == (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) {
        vlSelf->__PVT__issue_a_rb_value_r = vlSelf->__PVT__writeback_exec0_value_i;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e1_w) == (IData)(vlSelf->__PVT__issue_a_ra_idx_w))) {
        vlSelf->__PVT__issue_a_ra_value_r = vlSelf->__PVT__writeback_exec1_value_i;
    }
    if (((IData)(vlSelf->__PVT__pipe1_rd_e1_w) == (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) {
        vlSelf->__PVT__issue_a_rb_value_r = vlSelf->__PVT__writeback_exec1_value_i;
    }
    if ((0U == (IData)(vlSelf->__PVT__issue_a_ra_idx_w))) {
        vlSelf->__PVT__issue_a_ra_value_r = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__issue_a_rb_idx_w))) {
        vlSelf->__PVT__issue_a_rb_value_r = 0U;
    }
    vlSelf->__PVT__opcode1_ra_operand_o = vlSelf->__PVT__issue_b_ra_value_r;
    vlSelf->__PVT__opcode1_rb_operand_o = vlSelf->__PVT__issue_b_rb_value_r;
    vlSelf->__PVT__opcode0_rb_operand_o = vlSelf->__PVT__issue_a_rb_value_r;
    vlSelf->__PVT__opcode0_ra_operand_o = vlSelf->__PVT__issue_a_ra_value_r;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_operand_ra_i 
        = vlSelf->__PVT__opcode1_ra_operand_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_operand_rb_i 
        = vlSelf->__PVT__opcode1_rb_operand_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_operand_rb_i 
        = vlSelf->__PVT__opcode0_rb_operand_o;
    vlSelf->__PVT__csr_opcode_rb_operand_o = vlSelf->__PVT__opcode0_rb_operand_o;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_operand_ra_i 
        = vlSelf->__PVT__opcode0_ra_operand_o;
    vlSelf->__PVT__csr_opcode_ra_operand_o = vlSelf->__PVT__opcode0_ra_operand_o;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__20(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__20\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_branch_target_i 
        = vlSelf->__PVT__branch_d_exec1_pc_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_branch_target_i 
        = vlSelf->__PVT__branch_d_exec0_pc_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__22(Vbiriscv_top_biriscv_issue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_issue___nba_comb__TOP__biriscv_top__u_core__u_issue__22\n"); );
    // Body
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl.__PVT__issue_branch_taken_i 
        = vlSelf->__PVT__branch_d_exec1_request_i;
    vlSymsp->TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl.__PVT__issue_branch_taken_i 
        = vlSelf->__PVT__branch_d_exec0_request_i;
}
