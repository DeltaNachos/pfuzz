// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_ISSUE__SE1_H_
#define VERILATED_VRV32IM_TOP_RISCV_ISSUE__SE1_H_  // guard

#include "verilated.h"
class Vrv32im_top_riscv_pipe_ctrl;
class Vrv32im_top_riscv_regfile__S1;
class Vrv32im_top_riscv_trace_sim;


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_issue__SE1 final : public VerilatedModule {
  public:
    // CELLS
    Vrv32im_top_riscv_pipe_ctrl* __PVT__u_pipe_ctrl;
    Vrv32im_top_riscv_regfile__S1* u_regfile;
    Vrv32im_top_riscv_trace_sim* __PVT__u_pipe_dec0_verif;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__fetch_valid_i,0,0);
        VL_IN8(__PVT__fetch_fault_fetch_i,0,0);
        VL_IN8(__PVT__fetch_fault_page_i,0,0);
        VL_IN8(__PVT__fetch_instr_exec_i,0,0);
        VL_IN8(__PVT__fetch_instr_lsu_i,0,0);
        VL_IN8(__PVT__fetch_instr_branch_i,0,0);
        VL_IN8(__PVT__fetch_instr_mul_i,0,0);
        VL_IN8(__PVT__fetch_instr_div_i,0,0);
        VL_IN8(__PVT__fetch_instr_csr_i,0,0);
        VL_IN8(__PVT__fetch_instr_rd_valid_i,0,0);
        VL_IN8(__PVT__fetch_instr_invalid_i,0,0);
        VL_IN8(__PVT__branch_exec_request_i,0,0);
        VL_IN8(__PVT__branch_exec_is_taken_i,0,0);
        VL_IN8(__PVT__branch_exec_is_not_taken_i,0,0);
        VL_IN8(__PVT__branch_exec_is_call_i,0,0);
        VL_IN8(__PVT__branch_exec_is_ret_i,0,0);
        VL_IN8(__PVT__branch_exec_is_jmp_i,0,0);
        VL_IN8(__PVT__branch_d_exec_request_i,0,0);
        VL_IN8(__PVT__branch_d_exec_priv_i,1,0);
        VL_IN8(__PVT__branch_csr_request_i,0,0);
        VL_IN8(__PVT__branch_csr_priv_i,1,0);
        VL_IN8(__PVT__writeback_mem_valid_i,0,0);
        VL_IN8(__PVT__writeback_mem_exception_i,5,0);
        VL_IN8(__PVT__writeback_div_valid_i,0,0);
        VL_IN8(__PVT__csr_result_e1_write_i,0,0);
        VL_IN8(__PVT__csr_result_e1_exception_i,5,0);
        VL_IN8(__PVT__lsu_stall_i,0,0);
        VL_IN8(__PVT__take_interrupt_i,0,0);
        VL_OUT8(__PVT__fetch_accept_o,0,0);
        VL_OUT8(__PVT__branch_request_o,0,0);
        VL_OUT8(__PVT__branch_priv_o,1,0);
        VL_OUT8(__PVT__exec_opcode_valid_o,0,0);
        VL_OUT8(__PVT__lsu_opcode_valid_o,0,0);
        VL_OUT8(__PVT__csr_opcode_valid_o,0,0);
        VL_OUT8(__PVT__mul_opcode_valid_o,0,0);
        VL_OUT8(__PVT__div_opcode_valid_o,0,0);
        VL_OUT8(__PVT__opcode_invalid_o,0,0);
        VL_OUT8(__PVT__opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__lsu_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__mul_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__csr_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__csr_writeback_write_o,0,0);
        VL_OUT8(__PVT__csr_writeback_exception_o,5,0);
        VL_OUT8(__PVT__exec_hold_o,0,0);
        VL_OUT8(__PVT__mul_hold_o,0,0);
        VL_OUT8(__PVT__interrupt_inhibit_o,0,0);
        CData/*0:0*/ __PVT__enable_muldiv_w;
        CData/*0:0*/ __PVT__enable_mul_bypass_w;
        CData/*0:0*/ __PVT__stall_w;
        CData/*0:0*/ __PVT__squash_w;
        CData/*1:0*/ __PVT__priv_x_q;
    };
    struct {
        CData/*0:0*/ __PVT__opcode_valid_w;
        CData/*4:0*/ __PVT__issue_ra_idx_w;
        CData/*4:0*/ __PVT__issue_rb_idx_w;
        CData/*4:0*/ __PVT__issue_rd_idx_w;
        CData/*0:0*/ __PVT__issue_sb_alloc_w;
        CData/*0:0*/ __PVT__issue_exec_w;
        CData/*0:0*/ __PVT__issue_lsu_w;
        CData/*0:0*/ __PVT__issue_branch_w;
        CData/*0:0*/ __PVT__issue_mul_w;
        CData/*0:0*/ __PVT__issue_div_w;
        CData/*0:0*/ __PVT__issue_csr_w;
        CData/*0:0*/ __PVT__issue_invalid_w;
        CData/*0:0*/ __PVT__pipe_squash_e1_e2_w;
        CData/*0:0*/ __PVT__opcode_issue_r;
        CData/*0:0*/ __PVT__opcode_accept_r;
        CData/*0:0*/ __PVT__pipe_stall_raw_w;
        CData/*0:0*/ __PVT__pipe_load_e1_w;
        CData/*0:0*/ __PVT__pipe_store_e1_w;
        CData/*0:0*/ __PVT__pipe_mul_e1_w;
        CData/*0:0*/ __PVT__pipe_branch_e1_w;
        CData/*4:0*/ __PVT__pipe_rd_e1_w;
        CData/*0:0*/ __PVT__pipe_load_e2_w;
        CData/*0:0*/ __PVT__pipe_mul_e2_w;
        CData/*4:0*/ __PVT__pipe_rd_e2_w;
        CData/*0:0*/ __PVT__pipe_valid_wb_w;
        CData/*0:0*/ __PVT__pipe_csr_wb_w;
        CData/*4:0*/ __PVT__pipe_rd_wb_w;
        CData/*5:0*/ __PVT__pipe_exception_wb_w;
        CData/*5:0*/ __PVT__issue_fault_w;
        CData/*0:0*/ __PVT__div_pending_q;
        CData/*0:0*/ __PVT__csr_pending_q;
        CData/*4:0*/ __PVT__v_pipe_rs1_w;
        CData/*4:0*/ __PVT__v_pipe_rs2_w;
        CData/*1:0*/ __Vdly__priv_x_q;
        CData/*0:0*/ __Vdly__div_pending_q;
        CData/*0:0*/ __Vdly__csr_pending_q;
        VL_OUT16(__PVT__csr_writeback_waddr_o,11,0);
        VL_IN(__PVT__fetch_instr_i,31,0);
        VL_IN(__PVT__fetch_pc_i,31,0);
        VL_IN(__PVT__branch_exec_source_i,31,0);
        VL_IN(__PVT__branch_exec_pc_i,31,0);
        VL_IN(__PVT__branch_d_exec_pc_i,31,0);
        VL_IN(__PVT__branch_csr_pc_i,31,0);
        VL_IN(__PVT__writeback_exec_value_i,31,0);
        VL_IN(__PVT__writeback_mem_value_i,31,0);
        VL_IN(__PVT__writeback_mul_value_i,31,0);
        VL_IN(__PVT__writeback_div_value_i,31,0);
        VL_IN(__PVT__csr_result_e1_value_i,31,0);
        VL_IN(__PVT__csr_result_e1_wdata_i,31,0);
        VL_OUT(__PVT__branch_pc_o,31,0);
        VL_OUT(__PVT__opcode_opcode_o,31,0);
        VL_OUT(__PVT__opcode_pc_o,31,0);
        VL_OUT(__PVT__opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__lsu_opcode_opcode_o,31,0);
        VL_OUT(__PVT__lsu_opcode_pc_o,31,0);
        VL_OUT(__PVT__lsu_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__lsu_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__mul_opcode_opcode_o,31,0);
        VL_OUT(__PVT__mul_opcode_pc_o,31,0);
        VL_OUT(__PVT__mul_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__mul_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__csr_opcode_opcode_o,31,0);
        VL_OUT(__PVT__csr_opcode_pc_o,31,0);
    };
    struct {
        VL_OUT(__PVT__csr_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__csr_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__csr_writeback_wdata_o,31,0);
        VL_OUT(__PVT__csr_writeback_exception_pc_o,31,0);
        VL_OUT(__PVT__csr_writeback_exception_addr_o,31,0);
        IData/*31:0*/ __PVT__pipe_pc_e1_w;
        IData/*31:0*/ __PVT__pipe_opcode_e1_w;
        IData/*31:0*/ __PVT__pipe_operand_ra_e1_w;
        IData/*31:0*/ __PVT__pipe_operand_rb_e1_w;
        IData/*31:0*/ __PVT__pipe_result_e2_w;
        IData/*31:0*/ __PVT__pipe_result_wb_w;
        IData/*31:0*/ __PVT__pipe_pc_wb_w;
        IData/*31:0*/ __PVT__pipe_opc_wb_w;
        IData/*31:0*/ __PVT__pipe_ra_val_wb_w;
        IData/*31:0*/ __PVT__pipe_rb_val_wb_w;
        IData/*31:0*/ __PVT__scoreboard_r;
        IData/*31:0*/ __PVT__issue_ra_value_w;
        IData/*31:0*/ __PVT__issue_rb_value_w;
        IData/*31:0*/ __PVT__issue_b_ra_value_w;
        IData/*31:0*/ __PVT__issue_b_rb_value_w;
        IData/*31:0*/ __PVT__issue_ra_value_r;
        IData/*31:0*/ __PVT__issue_rb_value_r;
    };

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_issue__SE1(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_issue__SE1();
    VL_UNCOPYABLE(Vrv32im_top_riscv_issue__SE1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t complete_exception();
    uint32_t complete_opcode0();
    uint32_t complete_pc0();
    uint32_t complete_ra0();
    uint32_t complete_ra_val0();
    uint32_t complete_rb0();
    uint32_t complete_rb_val0();
    uint32_t complete_rd0();
    uint32_t complete_rd_val0();
    bool complete_valid0();
};


#endif  // guard
