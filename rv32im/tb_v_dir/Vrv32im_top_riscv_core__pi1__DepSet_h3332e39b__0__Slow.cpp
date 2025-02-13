// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_core__pi1.h"

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__0(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__0\n"); );
    // Body
    vlSelf->__PVT__branch_d_exec_priv_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_d_priv_o;
    vlSelf->__PVT__mul_opcode_invalid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_invalid_o;
    vlSelf->__PVT__lsu_opcode_invalid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_invalid_o;
    vlSelf->__PVT__opcode_invalid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_invalid_o;
    vlSelf->__PVT__mmu_ifetch_invalidate_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_invalidate_o;
    vlSelf->__PVT__mmu_lsu_req_tag_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_req_tag_o;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__cpu_id_i 
        = vlSelf->__PVT__cpu_id_i;
    vlSelf->__PVT__fetch_dec_pc_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__fetch_pc_o;
    vlSelf->__PVT__mmu_ifetch_pc_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_pc_o;
    vlSelf->__PVT__fetch_in_priv_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_priv_o;
    vlSelf->__PVT__writeback_div_value_w = vlSymsp->TOP__rv32im_top__core__u_div.__PVT__writeback_value_o;
    vlSelf->__PVT__writeback_div_valid_w = vlSymsp->TOP__rv32im_top__core__u_div.__PVT__writeback_valid_o;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__reset_vector_i 
        = vlSelf->__PVT__reset_vector_i;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__rst_i 
        = vlSelf->__PVT__rst_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_accept_i 
        = vlSelf->__PVT__mem_d_accept_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_error_i 
        = vlSelf->__PVT__mem_d_error_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_resp_tag_i 
        = vlSelf->__PVT__mem_d_resp_tag_i;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__clk_i 
        = vlSelf->__PVT__clk_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_accept_i 
        = vlSelf->__PVT__mem_i_accept_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_inst_i 
        = vlSelf->__PVT__mem_i_inst_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_error_i 
        = vlSelf->__PVT__mem_i_error_i;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__intr_i 
        = vlSelf->__PVT__intr_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_valid_i 
        = vlSelf->__PVT__mem_i_valid_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_data_rd_i 
        = vlSelf->__PVT__mem_d_data_rd_i;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_ack_i 
        = vlSelf->__PVT__mem_d_ack_i;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_d_exec_priv_i 
        = vlSelf->__PVT__branch_d_exec_priv_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_invalid_i 
        = vlSelf->__PVT__mul_opcode_invalid_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_invalid_i 
        = vlSelf->__PVT__lsu_opcode_invalid_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_invalid_i 
        = vlSelf->__PVT__opcode_invalid_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_invalid_i 
        = vlSelf->__PVT__opcode_invalid_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_invalidate_i 
        = vlSelf->__PVT__mmu_ifetch_invalidate_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_req_tag_i 
        = vlSelf->__PVT__mmu_lsu_req_tag_w;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_in_pc_i 
        = vlSelf->__PVT__fetch_dec_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_pc_i 
        = vlSelf->__PVT__mmu_ifetch_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_priv_i 
        = vlSelf->__PVT__fetch_in_priv_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__writeback_div_value_i 
        = vlSelf->__PVT__writeback_div_value_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__writeback_div_valid_i 
        = vlSelf->__PVT__writeback_div_valid_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__1(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__1\n"); );
    // Body
    vlSelf->__PVT__writeback_mul_value_w = vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__writeback_value_o;
    vlSelf->__PVT__branch_exec_is_taken_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_is_taken_o;
    vlSelf->__PVT__branch_exec_is_not_taken_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_is_not_taken_o;
    vlSelf->__PVT__branch_exec_source_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_source_o;
    vlSelf->__PVT__branch_exec_pc_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_pc_o;
    vlSelf->__PVT__branch_exec_is_call_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_is_call_o;
    vlSelf->__PVT__branch_exec_is_ret_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_is_ret_o;
    vlSelf->__PVT__branch_exec_is_jmp_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_is_jmp_o;
    vlSelf->__PVT__branch_exec_request_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_request_o;
    vlSelf->__PVT__writeback_exec_value_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__writeback_value_o;
    vlSelf->__PVT__mmu_flush_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__mmu_flush_o;
    vlSelf->__PVT__csr_result_e1_value_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_result_e1_value_o;
    vlSelf->__PVT__csr_result_e1_write_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_result_e1_write_o;
    vlSelf->__PVT__csr_result_e1_wdata_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_result_e1_wdata_o;
    vlSelf->__PVT__csr_result_e1_exception_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_result_e1_exception_o;
    vlSelf->__PVT__branch_csr_pc_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__branch_csr_pc_o;
    vlSelf->__PVT__ifence_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__ifence_o;
    vlSelf->__PVT__take_interrupt_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__take_interrupt_o;
    vlSelf->__PVT__branch_csr_request_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__branch_csr_request_o;
    vlSelf->__PVT__mmu_lsu_cacheable_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_cacheable_o;
    vlSelf->__PVT__mmu_lsu_data_wr_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_data_wr_o;
    vlSelf->__PVT__mmu_lsu_invalidate_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_invalidate_o;
    vlSelf->__PVT__mmu_lsu_writeback_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_writeback_o;
    vlSelf->__PVT__mmu_lsu_flush_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_flush_o;
    vlSelf->__PVT__mmu_lsu_addr_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_addr_o;
    vlSelf->__PVT__fetch_in_fault_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_fault_o;
    vlSelf->__PVT__mmu_store_fault_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_store_fault_o;
    vlSelf->__PVT__mmu_load_fault_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_load_fault_o;
    vlSelf->__PVT__mmu_lsu_resp_tag_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_resp_tag_o;
    vlSelf->__PVT__mmu_ifetch_inst_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_inst_o;
    vlSelf->__PVT__mmu_ifetch_error_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_error_o;
    vlSelf->__PVT__mmu_ifetch_valid_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_valid_o;
    vlSelf->__PVT__mmu_lsu_data_rd_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_data_rd_o;
    vlSelf->__PVT__mem_i_invalidate_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_invalidate_o;
    vlSelf->__PVT__mem_d_cacheable_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_cacheable_o;
    vlSelf->__PVT__mmu_lsu_error_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_error_o;
    vlSelf->__PVT__mmu_lsu_ack_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_ack_o;
    vlSelf->__PVT__mem_d_req_tag_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_req_tag_o;
    vlSelf->__PVT__mem_i_pc_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_pc_o;
    vlSelf->__PVT__fetch_pc_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_pc_o;
    vlSelf->__PVT__fetch_fault_page_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_fault_page_o;
    vlSelf->__PVT__fetch_fault_fetch_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_fault_fetch_o;
    vlSelf->__PVT__fetch_valid_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_valid_o;
    vlSelf->__PVT__fetch_instr_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_o;
    vlSelf->__PVT__csr_writeback_wdata_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_writeback_wdata_o;
    vlSelf->__PVT__csr_writeback_write_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_writeback_write_o;
    vlSelf->__PVT__csr_writeback_waddr_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_writeback_waddr_o;
    vlSelf->__PVT__csr_writeback_exception_pc_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_writeback_exception_pc_o;
    vlSelf->__PVT__csr_writeback_exception_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_writeback_exception_o;
    vlSelf->__PVT__csr_writeback_exception_addr_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_writeback_exception_addr_o;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__writeback_mul_value_i 
        = vlSelf->__PVT__writeback_mul_value_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_is_taken_i 
        = vlSelf->__PVT__branch_exec_is_taken_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_is_not_taken_i 
        = vlSelf->__PVT__branch_exec_is_not_taken_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_source_i 
        = vlSelf->__PVT__branch_exec_source_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_pc_i 
        = vlSelf->__PVT__branch_exec_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_is_call_i 
        = vlSelf->__PVT__branch_exec_is_call_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_is_ret_i 
        = vlSelf->__PVT__branch_exec_is_ret_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_is_jmp_i 
        = vlSelf->__PVT__branch_exec_is_jmp_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_exec_request_i 
        = vlSelf->__PVT__branch_exec_request_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__writeback_exec_value_i 
        = vlSelf->__PVT__writeback_exec_value_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__flush_i 
        = vlSelf->__PVT__mmu_flush_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_result_e1_value_i 
        = vlSelf->__PVT__csr_result_e1_value_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_result_e1_write_i 
        = vlSelf->__PVT__csr_result_e1_write_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_result_e1_wdata_i 
        = vlSelf->__PVT__csr_result_e1_wdata_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_result_e1_exception_i 
        = vlSelf->__PVT__csr_result_e1_exception_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_csr_pc_i 
        = vlSelf->__PVT__branch_csr_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__fetch_invalidate_i 
        = vlSelf->__PVT__ifence_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__take_interrupt_i 
        = vlSelf->__PVT__take_interrupt_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_csr_request_i 
        = vlSelf->__PVT__branch_csr_request_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_cacheable_i 
        = vlSelf->__PVT__mmu_lsu_cacheable_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_data_wr_i 
        = vlSelf->__PVT__mmu_lsu_data_wr_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_invalidate_i 
        = vlSelf->__PVT__mmu_lsu_invalidate_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_writeback_i 
        = vlSelf->__PVT__mmu_lsu_writeback_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_flush_i 
        = vlSelf->__PVT__mmu_lsu_flush_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_addr_i 
        = vlSelf->__PVT__mmu_lsu_addr_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_page_fault_i 
        = vlSelf->__PVT__fetch_in_fault_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_store_fault_i 
        = vlSelf->__PVT__mmu_store_fault_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_load_fault_i 
        = vlSelf->__PVT__mmu_load_fault_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_resp_tag_i 
        = vlSelf->__PVT__mmu_lsu_resp_tag_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_inst_i 
        = vlSelf->__PVT__mmu_ifetch_inst_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_error_i 
        = vlSelf->__PVT__mmu_ifetch_error_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_valid_i 
        = vlSelf->__PVT__mmu_ifetch_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_data_rd_i 
        = vlSelf->__PVT__mmu_lsu_data_rd_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_error_i 
        = vlSelf->__PVT__mmu_lsu_error_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_ack_i 
        = vlSelf->__PVT__mmu_lsu_ack_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_pc_i 
        = vlSelf->__PVT__fetch_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_fault_page_i 
        = vlSelf->__PVT__fetch_fault_page_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_fault_fetch_i 
        = vlSelf->__PVT__fetch_fault_fetch_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_valid_i 
        = vlSelf->__PVT__fetch_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_i 
        = vlSelf->__PVT__fetch_instr_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_writeback_wdata_i 
        = vlSelf->__PVT__csr_writeback_wdata_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_writeback_write_i 
        = vlSelf->__PVT__csr_writeback_write_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_writeback_waddr_i 
        = vlSelf->__PVT__csr_writeback_waddr_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_writeback_exception_pc_i 
        = vlSelf->__PVT__csr_writeback_exception_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_writeback_exception_i 
        = vlSelf->__PVT__csr_writeback_exception_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__csr_writeback_exception_addr_i 
        = vlSelf->__PVT__csr_writeback_exception_addr_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__2(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__2\n"); );
    // Body
    vlSelf->__PVT__mmu_satp_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__mmu_satp_o;
    vlSelf->__PVT__branch_csr_priv_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__branch_csr_priv_o;
    vlSelf->__PVT__mmu_mxr_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__mmu_mxr_o;
    vlSelf->__PVT__mmu_sum_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__mmu_sum_o;
    vlSelf->__PVT__mmu_priv_d_w = vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__mmu_priv_d_o;
    vlSelf->__PVT__opcode_pc_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_pc_o;
    vlSelf->__PVT__opcode_opcode_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_opcode_o;
    vlSelf->__PVT__lsu_opcode_pc_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_pc_o;
    vlSelf->__PVT__mul_opcode_pc_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_pc_o;
    vlSelf->__PVT__csr_opcode_pc_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_pc_o;
    vlSelf->__PVT__opcode_rd_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_rd_idx_o;
    vlSelf->__PVT__mul_opcode_opcode_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_opcode_o;
    vlSelf->__PVT__lsu_opcode_opcode_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_opcode_o;
    vlSelf->__PVT__csr_opcode_opcode_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_opcode_o;
    vlSelf->__PVT__opcode_rb_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_rb_idx_o;
    vlSelf->__PVT__opcode_ra_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_ra_idx_o;
    vlSelf->__PVT__lsu_opcode_rd_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_rd_idx_o;
    vlSelf->__PVT__mul_opcode_rd_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_rd_idx_o;
    vlSelf->__PVT__csr_opcode_rd_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_rd_idx_o;
    vlSelf->__PVT__lsu_opcode_rb_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_rb_idx_o;
    vlSelf->__PVT__mul_opcode_rb_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_rb_idx_o;
    vlSelf->__PVT__csr_opcode_rb_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_rb_idx_o;
    vlSelf->__PVT__lsu_opcode_ra_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_ra_idx_o;
    vlSelf->__PVT__mul_opcode_ra_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_ra_idx_o;
    vlSelf->__PVT__csr_opcode_ra_idx_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_ra_idx_o;
    vlSelf->__PVT__mmu_ifetch_flush_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_flush_o;
    vlSelf->__PVT__fetch_dec_fault_page_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__fetch_fault_page_o;
    vlSelf->__PVT__fetch_dec_instr_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__fetch_instr_o;
    vlSelf->__PVT__fetch_dec_fault_fetch_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__fetch_fault_fetch_o;
    vlSelf->__PVT__fetch_dec_valid_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__fetch_valid_o;
    vlSelf->__PVT__mem_d_data_wr_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_data_wr_o;
    vlSelf->__PVT__mem_d_invalidate_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_invalidate_o;
    vlSelf->__PVT__mem_d_writeback_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_writeback_o;
    vlSelf->__PVT__mem_d_flush_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_flush_o;
    vlSelf->__PVT__writeback_mem_valid_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__writeback_valid_o;
    vlSelf->__PVT__writeback_mem_exception_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__writeback_exception_o;
    vlSelf->__PVT__writeback_mem_value_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__writeback_value_o;
    vlSelf->__PVT__mmu_lsu_wr_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_wr_o;
    vlSelf->__PVT__mmu_lsu_rd_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_rd_o;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__satp_i 
        = vlSelf->__PVT__mmu_satp_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_csr_priv_i 
        = vlSelf->__PVT__branch_csr_priv_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__mxr_i 
        = vlSelf->__PVT__mmu_mxr_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__sum_i 
        = vlSelf->__PVT__mmu_sum_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__priv_d_i 
        = vlSelf->__PVT__mmu_priv_d_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_pc_i 
        = vlSelf->__PVT__opcode_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_pc_i 
        = vlSelf->__PVT__opcode_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_opcode_i 
        = vlSelf->__PVT__opcode_opcode_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_opcode_i 
        = vlSelf->__PVT__opcode_opcode_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_pc_i 
        = vlSelf->__PVT__lsu_opcode_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_pc_i 
        = vlSelf->__PVT__mul_opcode_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_pc_i 
        = vlSelf->__PVT__csr_opcode_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_rd_idx_i 
        = vlSelf->__PVT__opcode_rd_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_rd_idx_i 
        = vlSelf->__PVT__opcode_rd_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_opcode_i 
        = vlSelf->__PVT__mul_opcode_opcode_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_opcode_i 
        = vlSelf->__PVT__lsu_opcode_opcode_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_opcode_i 
        = vlSelf->__PVT__csr_opcode_opcode_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_rb_idx_i 
        = vlSelf->__PVT__opcode_rb_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_rb_idx_i 
        = vlSelf->__PVT__opcode_rb_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_ra_idx_i 
        = vlSelf->__PVT__opcode_ra_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_ra_idx_i 
        = vlSelf->__PVT__opcode_ra_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_rd_idx_i 
        = vlSelf->__PVT__lsu_opcode_rd_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_rd_idx_i 
        = vlSelf->__PVT__mul_opcode_rd_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_rd_idx_i 
        = vlSelf->__PVT__csr_opcode_rd_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_rb_idx_i 
        = vlSelf->__PVT__lsu_opcode_rb_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_rb_idx_i 
        = vlSelf->__PVT__mul_opcode_rb_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_rb_idx_i 
        = vlSelf->__PVT__csr_opcode_rb_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_ra_idx_i 
        = vlSelf->__PVT__lsu_opcode_ra_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_ra_idx_i 
        = vlSelf->__PVT__mul_opcode_ra_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_ra_idx_i 
        = vlSelf->__PVT__csr_opcode_ra_idx_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_flush_i 
        = vlSelf->__PVT__mmu_ifetch_flush_w;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_in_fault_page_i 
        = vlSelf->__PVT__fetch_dec_fault_page_w;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_in_instr_i 
        = vlSelf->__PVT__fetch_dec_instr_w;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_in_fault_fetch_i 
        = vlSelf->__PVT__fetch_dec_fault_fetch_w;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_in_valid_i 
        = vlSelf->__PVT__fetch_dec_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__writeback_mem_valid_i 
        = vlSelf->__PVT__writeback_mem_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__writeback_mem_exception_i 
        = vlSelf->__PVT__writeback_mem_exception_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__writeback_mem_value_i 
        = vlSelf->__PVT__writeback_mem_value_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_wr_i 
        = vlSelf->__PVT__mmu_lsu_wr_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_rd_i 
        = vlSelf->__PVT__mmu_lsu_rd_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__3(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__3\n"); );
    // Body
    vlSelf->__PVT__fetch_instr_exec_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_exec_o;
    vlSelf->__PVT__fetch_instr_lsu_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_lsu_o;
    vlSelf->__PVT__fetch_instr_branch_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_branch_o;
    vlSelf->__PVT__fetch_instr_rd_valid_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_rd_valid_o;
    vlSelf->__PVT__fetch_instr_mul_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_mul_o;
    vlSelf->__PVT__fetch_instr_div_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_div_o;
    vlSelf->__PVT__fetch_instr_invalid_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_invalid_o;
    vlSelf->__PVT__fetch_instr_csr_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_instr_csr_o;
    vlSelf->__PVT__mem_i_flush_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_flush_o;
    vlSelf->__PVT__mem_d_addr_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_addr_o;
    vlSelf->__PVT__mmu_lsu_accept_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_in_accept_o;
    vlSelf->__PVT__mem_d_wr_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_wr_o;
    vlSelf->__PVT__mem_d_rd_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__lsu_out_rd_o;
    vlSelf->__PVT__branch_priv_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_priv_o;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_exec_i 
        = vlSelf->__PVT__fetch_instr_exec_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_lsu_i 
        = vlSelf->__PVT__fetch_instr_lsu_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_branch_i 
        = vlSelf->__PVT__fetch_instr_branch_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_rd_valid_i 
        = vlSelf->__PVT__fetch_instr_rd_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_mul_i 
        = vlSelf->__PVT__fetch_instr_mul_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_div_i 
        = vlSelf->__PVT__fetch_instr_div_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_invalid_i 
        = vlSelf->__PVT__fetch_instr_invalid_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_instr_csr_i 
        = vlSelf->__PVT__fetch_instr_csr_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__mem_accept_i 
        = vlSelf->__PVT__mmu_lsu_accept_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__branch_priv_i 
        = vlSelf->__PVT__branch_priv_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__4(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__4\n"); );
    // Body
    vlSelf->__PVT__interrupt_inhibit_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__interrupt_inhibit_o;
    vlSelf->__PVT__exec_hold_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__exec_hold_o;
    vlSelf->__PVT__mul_hold_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_hold_o;
    vlSelf->__PVT__lsu_stall_w = vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__stall_o;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__interrupt_inhibit_i 
        = vlSelf->__PVT__interrupt_inhibit_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__hold_i 
        = vlSelf->__PVT__exec_hold_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__hold_i 
        = vlSelf->__PVT__mul_hold_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_stall_i 
        = vlSelf->__PVT__lsu_stall_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__5(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__5\n"); );
    // Body
    vlSelf->__PVT__fetch_accept_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__fetch_accept_o;
    vlSelf->__PVT__mul_opcode_valid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_valid_o;
    vlSelf->__PVT__csr_opcode_invalid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_invalid_o;
    vlSelf->__PVT__div_opcode_valid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__div_opcode_valid_o;
    vlSelf->__PVT__lsu_opcode_valid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_valid_o;
    vlSelf->__PVT__exec_opcode_valid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__exec_opcode_valid_o;
    vlSelf->__PVT__csr_opcode_valid_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_valid_o;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_out_accept_i 
        = vlSelf->__PVT__fetch_accept_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_valid_i 
        = vlSelf->__PVT__mul_opcode_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_invalid_i 
        = vlSelf->__PVT__csr_opcode_invalid_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_valid_i 
        = vlSelf->__PVT__div_opcode_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_valid_i 
        = vlSelf->__PVT__lsu_opcode_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_valid_i 
        = vlSelf->__PVT__exec_opcode_valid_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_valid_i 
        = vlSelf->__PVT__csr_opcode_valid_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__6(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__6\n"); );
    // Body
    vlSelf->__PVT__opcode_rb_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_rb_operand_o;
    vlSelf->__PVT__opcode_ra_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__opcode_ra_operand_o;
    vlSelf->__PVT__csr_opcode_rb_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_rb_operand_o;
    vlSelf->__PVT__mul_opcode_rb_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_rb_operand_o;
    vlSelf->__PVT__lsu_opcode_rb_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_rb_operand_o;
    vlSelf->__PVT__mul_opcode_ra_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__mul_opcode_ra_operand_o;
    vlSelf->__PVT__lsu_opcode_ra_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__lsu_opcode_ra_operand_o;
    vlSelf->__PVT__csr_opcode_ra_operand_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__csr_opcode_ra_operand_o;
    vlSelf->__PVT__fetch_dec_accept_w = vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__fetch_in_accept_o;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_rb_operand_i 
        = vlSelf->__PVT__opcode_rb_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_rb_operand_i 
        = vlSelf->__PVT__opcode_rb_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_div.__PVT__opcode_ra_operand_i 
        = vlSelf->__PVT__opcode_ra_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__opcode_ra_operand_i 
        = vlSelf->__PVT__opcode_ra_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_rb_operand_i 
        = vlSelf->__PVT__csr_opcode_rb_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_rb_operand_i 
        = vlSelf->__PVT__mul_opcode_rb_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_rb_operand_i 
        = vlSelf->__PVT__lsu_opcode_rb_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_mul.__PVT__opcode_ra_operand_i 
        = vlSelf->__PVT__mul_opcode_ra_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_lsu.__PVT__opcode_ra_operand_i 
        = vlSelf->__PVT__lsu_opcode_ra_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_csr.__PVT__opcode_ra_operand_i 
        = vlSelf->__PVT__csr_opcode_ra_operand_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__fetch_accept_i 
        = vlSelf->__PVT__fetch_dec_accept_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__7(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__7\n"); );
    // Body
    vlSelf->__PVT__branch_d_exec_pc_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_d_pc_o;
    vlSelf->__PVT__branch_d_exec_request_w = vlSymsp->TOP__rv32im_top__core__u_exec.__PVT__branch_d_request_o;
    vlSelf->__PVT__mmu_ifetch_rd_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_rd_o;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_d_exec_pc_i 
        = vlSelf->__PVT__branch_d_exec_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_d_exec_request_i 
        = vlSelf->__PVT__branch_d_exec_request_w;
    vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_rd_i 
        = vlSelf->__PVT__mmu_ifetch_rd_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__8(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__8\n"); );
    // Body
    vlSelf->__PVT__branch_pc_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_pc_o;
    vlSelf->__PVT__branch_request_w = vlSymsp->TOP__rv32im_top__core__u_issue.__PVT__branch_request_o;
    vlSelf->__PVT__mem_i_rd_o = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_out_rd_o;
    vlSelf->__PVT__mmu_ifetch_accept_w = vlSymsp->TOP__rv32im_top__core__u_mmu.__PVT__fetch_in_accept_o;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__branch_pc_i 
        = vlSelf->__PVT__branch_pc_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__branch_request_i 
        = vlSelf->__PVT__branch_request_w;
    vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__icache_accept_i 
        = vlSelf->__PVT__mmu_ifetch_accept_w;
}

VL_ATTR_COLD void Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__9(Vrv32im_top_riscv_core__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32im_top_riscv_core__pi1___stl_sequent__TOP__rv32im_top__core__9\n"); );
    // Body
    vlSelf->__PVT__squash_decode_w = vlSymsp->TOP__rv32im_top__core__u_fetch.__PVT__squash_decode_o;
    vlSymsp->TOP__rv32im_top__core__u_decode.__PVT__squash_decode_i 
        = vlSelf->__PVT__squash_decode_w;
}
