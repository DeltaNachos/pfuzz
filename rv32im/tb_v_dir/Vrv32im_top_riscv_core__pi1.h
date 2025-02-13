// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_CORE__PI1_H_
#define VERILATED_VRV32IM_TOP_RISCV_CORE__PI1_H_  // guard

#include "verilated.h"
class Vrv32im_top_riscv_csr;
class Vrv32im_top_riscv_decode__E1;
class Vrv32im_top_riscv_divider;
class Vrv32im_top_riscv_exec;
class Vrv32im_top_riscv_fetch;
class Vrv32im_top_riscv_issue__SE1;
class Vrv32im_top_riscv_lsu__MBffffffff_M0;
class Vrv32im_top_riscv_mmu__MBffffffff_M0;
class Vrv32im_top_riscv_multiplier;


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_core__pi1 final : public VerilatedModule {
  public:
    // CELLS
    Vrv32im_top_riscv_exec* __PVT__u_exec;
    Vrv32im_top_riscv_decode__E1* __PVT__u_decode;
    Vrv32im_top_riscv_mmu__MBffffffff_M0* __PVT__u_mmu;
    Vrv32im_top_riscv_lsu__MBffffffff_M0* __PVT__u_lsu;
    Vrv32im_top_riscv_csr* u_csr;
    Vrv32im_top_riscv_multiplier* __PVT__u_mul;
    Vrv32im_top_riscv_divider* __PVT__u_div;
    Vrv32im_top_riscv_issue__SE1* u_issue;
    Vrv32im_top_riscv_fetch* __PVT__u_fetch;

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
        CData/*1:0*/ __PVT__fetch_in_priv_w;
        CData/*4:0*/ __PVT__mul_opcode_rd_idx_w;
        CData/*0:0*/ __PVT__mmu_flush_w;
        CData/*0:0*/ __PVT__fetch_accept_w;
        CData/*4:0*/ __PVT__csr_opcode_rd_idx_w;
        CData/*0:0*/ __PVT__csr_opcode_valid_w;
        CData/*0:0*/ __PVT__branch_csr_request_w;
        CData/*4:0*/ __PVT__opcode_rb_idx_w;
        CData/*0:0*/ __PVT__mmu_lsu_error_w;
        CData/*0:0*/ __PVT__mul_opcode_valid_w;
        CData/*0:0*/ __PVT__mmu_mxr_w;
        CData/*1:0*/ __PVT__branch_d_exec_priv_w;
        CData/*0:0*/ __PVT__mmu_ifetch_valid_w;
        CData/*0:0*/ __PVT__csr_opcode_invalid_w;
        CData/*5:0*/ __PVT__csr_writeback_exception_w;
        CData/*0:0*/ __PVT__fetch_instr_mul_w;
        CData/*0:0*/ __PVT__branch_exec_is_ret_w;
        CData/*3:0*/ __PVT__mmu_lsu_wr_w;
        CData/*0:0*/ __PVT__fetch_in_fault_w;
        CData/*0:0*/ __PVT__branch_request_w;
        CData/*0:0*/ __PVT__writeback_mem_valid_w;
        CData/*5:0*/ __PVT__csr_result_e1_exception_w;
        CData/*0:0*/ __PVT__fetch_fault_page_w;
        CData/*0:0*/ __PVT__squash_decode_w;
        CData/*0:0*/ __PVT__fetch_dec_fault_page_w;
        CData/*0:0*/ __PVT__exec_hold_w;
        CData/*0:0*/ __PVT__fetch_instr_invalid_w;
        CData/*4:0*/ __PVT__mul_opcode_ra_idx_w;
        CData/*4:0*/ __PVT__csr_opcode_rb_idx_w;
        CData/*0:0*/ __PVT__lsu_stall_w;
        CData/*0:0*/ __PVT__branch_exec_is_not_taken_w;
        CData/*0:0*/ __PVT__branch_d_exec_request_w;
        CData/*0:0*/ __PVT__branch_exec_is_taken_w;
        CData/*0:0*/ __PVT__fetch_dec_fault_fetch_w;
        CData/*0:0*/ __PVT__fetch_dec_valid_w;
        CData/*0:0*/ __PVT__fetch_fault_fetch_w;
        CData/*0:0*/ __PVT__lsu_opcode_invalid_w;
        CData/*0:0*/ __PVT__mul_hold_w;
        CData/*0:0*/ __PVT__mmu_ifetch_accept_w;
        CData/*0:0*/ __PVT__mmu_lsu_ack_w;
        CData/*0:0*/ __PVT__mmu_ifetch_invalidate_w;
        CData/*1:0*/ __PVT__branch_csr_priv_w;
        CData/*0:0*/ __PVT__branch_exec_request_w;
        CData/*0:0*/ __PVT__div_opcode_valid_w;
        CData/*1:0*/ __PVT__branch_priv_w;
    };
    struct {
        CData/*0:0*/ __PVT__mmu_lsu_rd_w;
        CData/*0:0*/ __PVT__interrupt_inhibit_w;
        CData/*0:0*/ __PVT__mmu_ifetch_error_w;
        CData/*5:0*/ __PVT__writeback_mem_exception_w;
        CData/*0:0*/ __PVT__fetch_instr_lsu_w;
        CData/*1:0*/ __PVT__mmu_priv_d_w;
        CData/*4:0*/ __PVT__opcode_ra_idx_w;
        CData/*0:0*/ __PVT__writeback_div_valid_w;
        CData/*4:0*/ __PVT__mul_opcode_rb_idx_w;
        CData/*0:0*/ __PVT__opcode_invalid_w;
        CData/*0:0*/ __PVT__fetch_instr_branch_w;
        CData/*0:0*/ __PVT__mmu_ifetch_rd_w;
        CData/*0:0*/ __PVT__mmu_ifetch_flush_w;
        CData/*4:0*/ __PVT__lsu_opcode_rd_idx_w;
        CData/*0:0*/ __PVT__mmu_load_fault_w;
        CData/*0:0*/ __PVT__mmu_lsu_invalidate_w;
        CData/*0:0*/ __PVT__fetch_dec_accept_w;
        CData/*4:0*/ __PVT__csr_opcode_ra_idx_w;
        CData/*0:0*/ __PVT__ifence_w;
        CData/*0:0*/ __PVT__fetch_instr_exec_w;
        CData/*4:0*/ __PVT__opcode_rd_idx_w;
        CData/*0:0*/ __PVT__csr_writeback_write_w;
        CData/*0:0*/ __PVT__take_interrupt_w;
        CData/*0:0*/ __PVT__fetch_valid_w;
        CData/*0:0*/ __PVT__branch_exec_is_jmp_w;
        CData/*0:0*/ __PVT__mmu_lsu_cacheable_w;
        CData/*0:0*/ __PVT__fetch_instr_csr_w;
        CData/*0:0*/ __PVT__lsu_opcode_valid_w;
        CData/*0:0*/ __PVT__csr_result_e1_write_w;
        CData/*0:0*/ __PVT__fetch_instr_div_w;
        CData/*0:0*/ __PVT__mul_opcode_invalid_w;
        CData/*0:0*/ __PVT__fetch_instr_rd_valid_w;
        CData/*0:0*/ __PVT__exec_opcode_valid_w;
        CData/*0:0*/ __PVT__mmu_lsu_flush_w;
        CData/*4:0*/ __PVT__lsu_opcode_rb_idx_w;
        CData/*0:0*/ __PVT__mmu_lsu_accept_w;
        CData/*0:0*/ __PVT__mmu_sum_w;
        CData/*4:0*/ __PVT__lsu_opcode_ra_idx_w;
        CData/*0:0*/ __PVT__mmu_store_fault_w;
        CData/*0:0*/ __PVT__branch_exec_is_call_w;
        VL_IN16(__PVT__mem_d_resp_tag_i,10,0);
        VL_OUT16(__PVT__mem_d_req_tag_o,10,0);
        SData/*10:0*/ __PVT__mmu_lsu_resp_tag_w;
        SData/*10:0*/ __PVT__mmu_lsu_req_tag_w;
        SData/*11:0*/ __PVT__csr_writeback_waddr_w;
        VL_IN(__PVT__mem_d_data_rd_i,31,0);
        VL_IN(__PVT__mem_i_inst_i,31,0);
        VL_IN(__PVT__reset_vector_i,31,0);
        VL_IN(__PVT__cpu_id_i,31,0);
        VL_OUT(__PVT__mem_d_addr_o,31,0);
        VL_OUT(__PVT__mem_d_data_wr_o,31,0);
        VL_OUT(__PVT__mem_i_pc_o,31,0);
        IData/*31:0*/ __PVT__lsu_opcode_pc_w;
        IData/*31:0*/ __PVT__branch_exec_source_w;
        IData/*31:0*/ __PVT__csr_opcode_rb_operand_w;
        IData/*31:0*/ __PVT__writeback_div_value_w;
        IData/*31:0*/ __PVT__mmu_ifetch_inst_w;
        IData/*31:0*/ __PVT__opcode_pc_w;
        IData/*31:0*/ __PVT__csr_writeback_exception_addr_w;
        IData/*31:0*/ __PVT__csr_opcode_pc_w;
        IData/*31:0*/ __PVT__branch_csr_pc_w;
        IData/*31:0*/ __PVT__mmu_lsu_data_wr_w;
        IData/*31:0*/ __PVT__opcode_ra_operand_w;
        IData/*31:0*/ __PVT__mul_opcode_opcode_w;
    };
    struct {
        IData/*31:0*/ __PVT__branch_pc_w;
        IData/*31:0*/ __PVT__branch_exec_pc_w;
        IData/*31:0*/ __PVT__opcode_opcode_w;
        IData/*31:0*/ __PVT__mul_opcode_pc_w;
        IData/*31:0*/ __PVT__mul_opcode_ra_operand_w;
        IData/*31:0*/ __PVT__mmu_lsu_addr_w;
        IData/*31:0*/ __PVT__fetch_pc_w;
        IData/*31:0*/ __PVT__mul_opcode_rb_operand_w;
        IData/*31:0*/ __PVT__lsu_opcode_ra_operand_w;
        IData/*31:0*/ __PVT__fetch_dec_pc_w;
        IData/*31:0*/ __PVT__csr_opcode_ra_operand_w;
        IData/*31:0*/ __PVT__writeback_mem_value_w;
        IData/*31:0*/ __PVT__mmu_ifetch_pc_w;
        IData/*31:0*/ __PVT__lsu_opcode_opcode_w;
        IData/*31:0*/ __PVT__mmu_satp_w;
        IData/*31:0*/ __PVT__csr_result_e1_wdata_w;
        IData/*31:0*/ __PVT__opcode_rb_operand_w;
        IData/*31:0*/ __PVT__csr_writeback_wdata_w;
        IData/*31:0*/ __PVT__csr_result_e1_value_w;
        IData/*31:0*/ __PVT__branch_d_exec_pc_w;
        IData/*31:0*/ __PVT__fetch_dec_instr_w;
        IData/*31:0*/ __PVT__csr_opcode_opcode_w;
        IData/*31:0*/ __PVT__fetch_instr_w;
        IData/*31:0*/ __PVT__mmu_lsu_data_rd_w;
        IData/*31:0*/ __PVT__writeback_mul_value_w;
        IData/*31:0*/ __PVT__lsu_opcode_rb_operand_w;
        IData/*31:0*/ __PVT__writeback_exec_value_w;
        IData/*31:0*/ __PVT__csr_writeback_exception_pc_w;
    };

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_core__pi1(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_core__pi1();
    VL_UNCOPYABLE(Vrv32im_top_riscv_core__pi1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
