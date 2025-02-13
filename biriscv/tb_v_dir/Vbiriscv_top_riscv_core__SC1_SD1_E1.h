// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_RISCV_CORE__SC1_SD1_E1_H_
#define VERILATED_VBIRISCV_TOP_RISCV_CORE__SC1_SD1_E1_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_csr;
class Vbiriscv_top_biriscv_divider;
class Vbiriscv_top_biriscv_exec;
class Vbiriscv_top_biriscv_frontend__E1;
class Vbiriscv_top_biriscv_issue;
class Vbiriscv_top_biriscv_lsu__pi2;
class Vbiriscv_top_biriscv_mmu__pi1;
class Vbiriscv_top_biriscv_multiplier;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_riscv_core__SC1_SD1_E1 final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_biriscv_frontend__E1* __PVT__u_frontend;
    Vbiriscv_top_biriscv_mmu__pi1* __PVT__u_mmu;
    Vbiriscv_top_biriscv_lsu__pi2* __PVT__u_lsu;
    Vbiriscv_top_biriscv_csr* u_csr;
    Vbiriscv_top_biriscv_multiplier* __PVT__u_mul;
    Vbiriscv_top_biriscv_divider* __PVT__u_div;
    Vbiriscv_top_biriscv_issue* u_issue;
    Vbiriscv_top_biriscv_exec* __PVT__u_exec0;
    Vbiriscv_top_biriscv_exec* __PVT__u_exec1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__mem_d_accept_i,0,0);
        VL_IN8(__PVT__mem_d_ack_i,0,0);
        VL_IN8(__PVT__mem_d_error_i,0,0);
        VL_IN8(__PVT__mem_i_accept_i,0,0);
        VL_IN8(__PVT__mem_i_valid_i,0,0);
        VL_IN8(__PVT__mem_i_error_i,0,0);
        VL_IN8(__PVT__intr_i,0,0);
        VL_OUT8(__PVT__mem_d_rd_o,0,0);
        VL_OUT8(__PVT__mem_d_wr_o,3,0);
        VL_OUT8(__PVT__mem_d_cacheable_o,0,0);
        VL_OUT8(__PVT__mem_d_invalidate_o,0,0);
        VL_OUT8(__PVT__mem_d_writeback_o,0,0);
        VL_OUT8(__PVT__mem_d_flush_o,0,0);
        VL_OUT8(__PVT__mem_i_rd_o,0,0);
        VL_OUT8(__PVT__mem_i_flush_o,0,0);
        VL_OUT8(__PVT__mem_i_invalidate_o,0,0);
        CData/*0:0*/ __PVT__mmu_lsu_writeback_w;
        CData/*4:0*/ __PVT__csr_opcode_rd_idx_w;
        CData/*4:0*/ __PVT__mul_opcode_rd_idx_w;
        CData/*0:0*/ __PVT__fetch1_instr_csr_w;
        CData/*0:0*/ __PVT__branch_d_exec1_request_w;
        CData/*0:0*/ __PVT__mmu_flush_w;
        CData/*1:0*/ __PVT__fetch_in_priv_w;
        CData/*0:0*/ __PVT__csr_opcode_valid_w;
        CData/*0:0*/ __PVT__branch_csr_request_w;
        CData/*0:0*/ __PVT__mmu_lsu_error_w;
        CData/*0:0*/ __PVT__branch_exec0_is_call_w;
        CData/*0:0*/ __PVT__mul_opcode_valid_w;
        CData/*0:0*/ __PVT__branch_exec0_request_w;
        CData/*0:0*/ __PVT__mmu_mxr_w;
        CData/*0:0*/ __PVT__mmu_ifetch_valid_w;
        CData/*0:0*/ __PVT__csr_opcode_invalid_w;
        CData/*5:0*/ __PVT__csr_writeback_exception_w;
        CData/*0:0*/ __PVT__branch_exec1_is_call_w;
        CData/*0:0*/ __PVT__branch_exec1_is_not_taken_w;
        CData/*1:0*/ __PVT__branch_d_exec0_priv_w;
        CData/*0:0*/ __PVT__branch_exec1_is_taken_w;
        CData/*4:0*/ __PVT__opcode1_rd_idx_w;
        CData/*0:0*/ __PVT__fetch1_instr_invalid_w;
        CData/*3:0*/ __PVT__mmu_lsu_wr_w;
        CData/*0:0*/ __PVT__fetch_in_fault_w;
        CData/*0:0*/ __PVT__fetch0_instr_rd_valid_w;
        CData/*0:0*/ __PVT__branch_request_w;
        CData/*0:0*/ __PVT__mmu_lsu_ack_w;
        CData/*0:0*/ __PVT__writeback_mem_valid_w;
        CData/*5:0*/ __PVT__csr_result_e1_exception_w;
        CData/*0:0*/ __PVT__fetch0_instr_div_w;
        CData/*0:0*/ __PVT__fetch0_fault_fetch_w;
        CData/*0:0*/ __PVT__fetch1_fault_page_w;
        CData/*0:0*/ __PVT__fetch1_instr_div_w;
        CData/*4:0*/ __PVT__mul_opcode_ra_idx_w;
        CData/*4:0*/ __PVT__csr_opcode_rb_idx_w;
        CData/*0:0*/ __PVT__lsu_stall_w;
        CData/*0:0*/ __PVT__branch_info_is_not_taken_w;
        CData/*4:0*/ __PVT__opcode0_ra_idx_w;
        CData/*0:0*/ __PVT__branch_info_is_taken_w;
        CData/*0:0*/ __PVT__branch_info_is_ret_w;
        CData/*0:0*/ __PVT__branch_exec0_is_taken_w;
        CData/*0:0*/ __PVT__fetch1_instr_exec_w;
        CData/*0:0*/ __PVT__fetch0_instr_exec_w;
        CData/*0:0*/ __PVT__exec1_hold_w;
        CData/*0:0*/ __PVT__exec0_opcode_valid_w;
    };
    struct {
        CData/*0:0*/ __PVT__branch_info_is_jmp_w;
        CData/*0:0*/ __PVT__fetch1_instr_lsu_w;
        CData/*0:0*/ __PVT__branch_exec1_request_w;
        CData/*0:0*/ __PVT__lsu_opcode_invalid_w;
        CData/*0:0*/ __PVT__mul_hold_w;
        CData/*0:0*/ __PVT__mmu_ifetch_accept_w;
        CData/*0:0*/ __PVT__branch_exec1_is_jmp_w;
        CData/*0:0*/ __PVT__mmu_ifetch_invalidate_w;
        CData/*1:0*/ __PVT__branch_csr_priv_w;
        CData/*0:0*/ __PVT__mmu_lsu_rd_w;
        CData/*0:0*/ __PVT__fetch0_instr_mul_w;
        CData/*0:0*/ __PVT__fetch0_accept_w;
        CData/*1:0*/ __PVT__branch_priv_w;
        CData/*0:0*/ __PVT__div_opcode_valid_w;
        CData/*0:0*/ __PVT__fetch0_instr_lsu_w;
        CData/*0:0*/ __PVT__interrupt_inhibit_w;
        CData/*0:0*/ __PVT__mmu_ifetch_error_w;
        CData/*0:0*/ __PVT__fetch0_instr_csr_w;
        CData/*5:0*/ __PVT__writeback_mem_exception_w;
        CData/*0:0*/ __PVT__fetch1_instr_branch_w;
        CData/*0:0*/ __PVT__fetch0_valid_w;
        CData/*0:0*/ __PVT__csr_result_e1_write_w;
        CData/*1:0*/ __PVT__branch_d_exec1_priv_w;
        CData/*0:0*/ __PVT__branch_exec0_is_not_taken_w;
        CData/*0:0*/ __PVT__branch_exec1_is_ret_w;
        CData/*0:0*/ __PVT__writeback_div_valid_w;
        CData/*4:0*/ __PVT__mul_opcode_rb_idx_w;
        CData/*0:0*/ __PVT__mmu_ifetch_rd_w;
        CData/*0:0*/ __PVT__fetch0_fault_page_w;
        CData/*0:0*/ __PVT__mmu_ifetch_flush_w;
        CData/*4:0*/ __PVT__lsu_opcode_rd_idx_w;
        CData/*0:0*/ __PVT__mmu_load_fault_w;
        CData/*4:0*/ __PVT__opcode1_ra_idx_w;
        CData/*0:0*/ __PVT__mmu_lsu_invalidate_w;
        CData/*4:0*/ __PVT__csr_opcode_ra_idx_w;
        CData/*0:0*/ __PVT__ifence_w;
        CData/*0:0*/ __PVT__exec1_opcode_valid_w;
        CData/*0:0*/ __PVT__branch_exec0_is_jmp_w;
        CData/*0:0*/ __PVT__fetch1_accept_w;
        CData/*0:0*/ __PVT__csr_writeback_write_w;
        CData/*0:0*/ __PVT__take_interrupt_w;
        CData/*4:0*/ __PVT__opcode1_rb_idx_w;
        CData/*0:0*/ __PVT__fetch0_instr_invalid_w;
        CData/*0:0*/ __PVT__fetch1_fault_fetch_w;
        CData/*0:0*/ __PVT__fetch1_valid_w;
        CData/*0:0*/ __PVT__mmu_lsu_cacheable_w;
        CData/*0:0*/ __PVT__branch_d_exec0_request_w;
        CData/*0:0*/ __PVT__opcode1_invalid_w;
        CData/*0:0*/ __PVT__exec0_hold_w;
        CData/*4:0*/ __PVT__opcode0_rb_idx_w;
        CData/*0:0*/ __PVT__opcode0_invalid_w;
        CData/*0:0*/ __PVT__lsu_opcode_valid_w;
        CData/*0:0*/ __PVT__branch_info_request_w;
        CData/*1:0*/ __PVT__mmu_priv_d_w;
        CData/*0:0*/ __PVT__fetch0_instr_branch_w;
        CData/*0:0*/ __PVT__mul_opcode_invalid_w;
        CData/*0:0*/ __PVT__branch_exec0_is_ret_w;
        CData/*0:0*/ __PVT__mmu_lsu_flush_w;
        CData/*4:0*/ __PVT__lsu_opcode_rb_idx_w;
        CData/*0:0*/ __PVT__mmu_lsu_accept_w;
        CData/*0:0*/ __PVT__fetch1_instr_rd_valid_w;
        CData/*0:0*/ __PVT__mmu_sum_w;
        CData/*0:0*/ __PVT__branch_info_is_call_w;
        CData/*4:0*/ __PVT__opcode0_rd_idx_w;
    };
    struct {
        CData/*4:0*/ __PVT__lsu_opcode_ra_idx_w;
        CData/*0:0*/ __PVT__fetch1_instr_mul_w;
        CData/*0:0*/ __PVT__mmu_store_fault_w;
        VL_IN16(__PVT__mem_d_resp_tag_i,10,0);
        VL_OUT16(__PVT__mem_d_req_tag_o,10,0);
        SData/*10:0*/ __PVT__mmu_lsu_resp_tag_w;
        SData/*10:0*/ __PVT__mmu_lsu_req_tag_w;
        SData/*11:0*/ __PVT__csr_writeback_waddr_w;
        VL_IN(__PVT__mem_d_data_rd_i,31,0);
        VL_IN(__PVT__reset_vector_i,31,0);
        VL_IN(__PVT__cpu_id_i,31,0);
        VL_OUT(__PVT__mem_d_addr_o,31,0);
        VL_OUT(__PVT__mem_d_data_wr_o,31,0);
        VL_OUT(__PVT__mem_i_pc_o,31,0);
        IData/*31:0*/ __PVT__lsu_opcode_pc_w;
        IData/*31:0*/ __PVT__branch_exec0_source_w;
        IData/*31:0*/ __PVT__csr_opcode_rb_operand_w;
        IData/*31:0*/ __PVT__writeback_mem_value_w;
        IData/*31:0*/ __PVT__writeback_div_value_w;
        IData/*31:0*/ __PVT__fetch0_pc_w;
        IData/*31:0*/ __PVT__branch_exec0_pc_w;
        IData/*31:0*/ __PVT__opcode0_pc_w;
        IData/*31:0*/ __PVT__opcode0_ra_operand_w;
        IData/*31:0*/ __PVT__opcode0_rb_operand_w;
        IData/*31:0*/ __PVT__fetch1_instr_w;
        IData/*31:0*/ __PVT__csr_writeback_exception_addr_w;
        IData/*31:0*/ __PVT__csr_opcode_pc_w;
        IData/*31:0*/ __PVT__branch_info_pc_w;
        IData/*31:0*/ __PVT__mmu_lsu_data_wr_w;
        IData/*31:0*/ __PVT__branch_exec1_source_w;
        IData/*31:0*/ __PVT__mul_opcode_opcode_w;
        IData/*31:0*/ __PVT__branch_d_exec0_pc_w;
        IData/*31:0*/ __PVT__branch_pc_w;
        IData/*31:0*/ __PVT__opcode1_pc_w;
        IData/*31:0*/ __PVT__branch_csr_pc_w;
        IData/*31:0*/ __PVT__mul_opcode_pc_w;
        IData/*31:0*/ __PVT__mul_opcode_rb_operand_w;
        IData/*31:0*/ __PVT__mul_opcode_ra_operand_w;
        IData/*31:0*/ __PVT__writeback_exec1_value_w;
        IData/*31:0*/ __PVT__opcode1_rb_operand_w;
        IData/*31:0*/ __PVT__mmu_lsu_addr_w;
        IData/*31:0*/ __PVT__lsu_opcode_ra_operand_w;
        IData/*31:0*/ __PVT__branch_exec1_pc_w;
        IData/*31:0*/ __PVT__csr_opcode_ra_operand_w;
        IData/*31:0*/ __PVT__opcode0_opcode_w;
        IData/*31:0*/ __PVT__opcode1_ra_operand_w;
        IData/*31:0*/ __PVT__mmu_ifetch_pc_w;
        IData/*31:0*/ __PVT__opcode1_opcode_w;
        IData/*31:0*/ __PVT__lsu_opcode_opcode_w;
        IData/*31:0*/ __PVT__mmu_satp_w;
        IData/*31:0*/ __PVT__csr_result_e1_wdata_w;
        IData/*31:0*/ __PVT__writeback_exec0_value_w;
        IData/*31:0*/ __PVT__fetch1_pc_w;
        IData/*31:0*/ __PVT__csr_writeback_wdata_w;
        IData/*31:0*/ __PVT__csr_result_e1_value_w;
        IData/*31:0*/ __PVT__fetch0_instr_w;
        IData/*31:0*/ __PVT__csr_opcode_opcode_w;
        IData/*31:0*/ __PVT__mmu_lsu_data_rd_w;
        IData/*31:0*/ __PVT__writeback_mul_value_w;
        IData/*31:0*/ __PVT__lsu_opcode_rb_operand_w;
        IData/*31:0*/ __PVT__branch_info_source_w;
        IData/*31:0*/ __PVT__branch_d_exec1_pc_w;
        IData/*31:0*/ __PVT__csr_writeback_exception_pc_w;
        VL_IN64(__PVT__mem_i_inst_i,63,0);
    };
    struct {
        QData/*63:0*/ __PVT__mmu_ifetch_inst_w;
    };

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_riscv_core__SC1_SD1_E1(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_riscv_core__SC1_SD1_E1();
    VL_UNCOPYABLE(Vbiriscv_top_riscv_core__SC1_SD1_E1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
