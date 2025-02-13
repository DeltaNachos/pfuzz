// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_PIPE_CTRL_H_
#define VERILATED_VRV32IM_TOP_RISCV_PIPE_CTRL_H_  // guard

#include "verilated.h"
class Vrv32im_top_riscv_trace_sim;


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_pipe_ctrl final : public VerilatedModule {
  public:
    // CELLS
    Vrv32im_top_riscv_trace_sim* __PVT__u_trace_d;
    Vrv32im_top_riscv_trace_sim* __PVT__u_trace_wb;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__issue_valid_i,0,0);
        VL_IN8(__PVT__issue_accept_i,0,0);
        VL_IN8(__PVT__issue_stall_i,0,0);
        VL_IN8(__PVT__issue_lsu_i,0,0);
        VL_IN8(__PVT__issue_csr_i,0,0);
        VL_IN8(__PVT__issue_div_i,0,0);
        VL_IN8(__PVT__issue_mul_i,0,0);
        VL_IN8(__PVT__issue_branch_i,0,0);
        VL_IN8(__PVT__issue_rd_valid_i,0,0);
        VL_IN8(__PVT__issue_rd_i,4,0);
        VL_IN8(__PVT__issue_exception_i,5,0);
        VL_IN8(__PVT__take_interrupt_i,0,0);
        VL_IN8(__PVT__issue_branch_taken_i,0,0);
        VL_IN8(__PVT__csr_result_write_e1_i,0,0);
        VL_IN8(__PVT__csr_result_exception_e1_i,5,0);
        VL_OUT8(__PVT__load_e1_o,0,0);
        VL_OUT8(__PVT__store_e1_o,0,0);
        VL_OUT8(__PVT__mul_e1_o,0,0);
        VL_OUT8(__PVT__branch_e1_o,0,0);
        VL_OUT8(__PVT__rd_e1_o,4,0);
        VL_IN8(__PVT__mem_complete_i,0,0);
        VL_IN8(__PVT__mem_exception_e2_i,5,0);
        VL_OUT8(__PVT__load_e2_o,0,0);
        VL_OUT8(__PVT__mul_e2_o,0,0);
        VL_OUT8(__PVT__rd_e2_o,4,0);
        VL_IN8(__PVT__div_complete_i,0,0);
        VL_OUT8(__PVT__valid_wb_o,0,0);
        VL_OUT8(__PVT__csr_wb_o,0,0);
        VL_OUT8(__PVT__rd_wb_o,4,0);
        VL_OUT8(__PVT__exception_wb_o,5,0);
        VL_OUT8(__PVT__csr_write_wb_o,0,0);
        VL_OUT8(__PVT__stall_o,0,0);
        VL_OUT8(__PVT__squash_e1_e2_o,0,0);
        VL_IN8(__PVT__squash_e1_e2_i,0,0);
        VL_IN8(__PVT__squash_wb_i,0,0);
        CData/*0:0*/ __PVT__squash_e1_e2_w;
        CData/*0:0*/ __PVT__branch_misaligned_w;
        CData/*0:0*/ __PVT__valid_e1_q;
        CData/*5:0*/ __PVT__exception_e1_q;
        CData/*0:0*/ __PVT__alu_e1_w;
        CData/*0:0*/ __PVT__csr_e1_w;
        CData/*0:0*/ __PVT__div_e1_w;
        CData/*0:0*/ __PVT__valid_e2_q;
        CData/*0:0*/ __PVT__csr_wr_e2_q;
        CData/*5:0*/ __PVT__exception_e2_q;
        CData/*0:0*/ __PVT__valid_e2_w;
        CData/*0:0*/ __PVT__load_store_e2_w;
        CData/*5:0*/ __PVT__exception_e2_r;
        CData/*0:0*/ __PVT__squash_e1_e2_q;
        CData/*0:0*/ __PVT__valid_wb_q;
        CData/*0:0*/ __PVT__csr_wr_wb_q;
        CData/*5:0*/ __PVT__exception_wb_q;
        CData/*0:0*/ __PVT__complete_wb_w;
        CData/*0:0*/ __Vdly__valid_e1_q;
        CData/*5:0*/ __Vdly__exception_e1_q;
        CData/*0:0*/ __Vdly__valid_e2_q;
        CData/*0:0*/ __Vdly__csr_wr_e2_q;
        CData/*5:0*/ __Vdly__exception_e2_q;
        CData/*0:0*/ __Vdly__squash_e1_e2_q;
        CData/*0:0*/ __Vdly__valid_wb_q;
        CData/*0:0*/ __Vdly__csr_wr_wb_q;
        CData/*5:0*/ __Vdly__exception_wb_q;
    };
    struct {
        VL_OUT16(__PVT__csr_waddr_wb_o,11,0);
        SData/*9:0*/ __PVT__ctrl_e1_q;
        SData/*9:0*/ __PVT__ctrl_e2_q;
        SData/*9:0*/ __PVT__ctrl_wb_q;
        SData/*9:0*/ __Vdly__ctrl_e1_q;
        SData/*9:0*/ __Vdly__ctrl_e2_q;
        SData/*9:0*/ __Vdly__ctrl_wb_q;
        VL_IN(__PVT__issue_branch_target_i,31,0);
        VL_IN(__PVT__issue_pc_i,31,0);
        VL_IN(__PVT__issue_opcode_i,31,0);
        VL_IN(__PVT__issue_operand_ra_i,31,0);
        VL_IN(__PVT__issue_operand_rb_i,31,0);
        VL_IN(__PVT__alu_result_e1_i,31,0);
        VL_IN(__PVT__csr_result_value_e1_i,31,0);
        VL_IN(__PVT__csr_result_wdata_e1_i,31,0);
        VL_OUT(__PVT__pc_e1_o,31,0);
        VL_OUT(__PVT__opcode_e1_o,31,0);
        VL_OUT(__PVT__operand_ra_e1_o,31,0);
        VL_OUT(__PVT__operand_rb_e1_o,31,0);
        VL_IN(__PVT__mem_result_e2_i,31,0);
        VL_IN(__PVT__mul_result_e2_i,31,0);
        VL_OUT(__PVT__result_e2_o,31,0);
        VL_IN(__PVT__div_result_i,31,0);
        VL_OUT(__PVT__result_wb_o,31,0);
        VL_OUT(__PVT__pc_wb_o,31,0);
        VL_OUT(__PVT__opcode_wb_o,31,0);
        VL_OUT(__PVT__operand_ra_wb_o,31,0);
        VL_OUT(__PVT__operand_rb_wb_o,31,0);
        VL_OUT(__PVT__csr_wdata_wb_o,31,0);
        IData/*31:0*/ __PVT__pc_e1_q;
        IData/*31:0*/ __PVT__npc_e1_q;
        IData/*31:0*/ __PVT__opcode_e1_q;
        IData/*31:0*/ __PVT__operand_ra_e1_q;
        IData/*31:0*/ __PVT__operand_rb_e1_q;
        IData/*31:0*/ __PVT__csr_wdata_e2_q;
        IData/*31:0*/ __PVT__result_e2_q;
        IData/*31:0*/ __PVT__pc_e2_q;
        IData/*31:0*/ __PVT__npc_e2_q;
        IData/*31:0*/ __PVT__opcode_e2_q;
        IData/*31:0*/ __PVT__operand_ra_e2_q;
        IData/*31:0*/ __PVT__operand_rb_e2_q;
        IData/*31:0*/ __PVT__result_e2_r;
        IData/*31:0*/ __PVT__csr_wdata_wb_q;
        IData/*31:0*/ __PVT__result_wb_q;
        IData/*31:0*/ __PVT__pc_wb_q;
        IData/*31:0*/ __PVT__npc_wb_q;
        IData/*31:0*/ __PVT__opcode_wb_q;
        IData/*31:0*/ __PVT__operand_ra_wb_q;
        IData/*31:0*/ __PVT__operand_rb_wb_q;
        IData/*31:0*/ __Vdly__pc_e1_q;
        IData/*31:0*/ __Vdly__npc_e1_q;
        IData/*31:0*/ __Vdly__opcode_e1_q;
        IData/*31:0*/ __Vdly__operand_ra_e1_q;
        IData/*31:0*/ __Vdly__operand_rb_e1_q;
        IData/*31:0*/ __Vdly__csr_wdata_e2_q;
        IData/*31:0*/ __Vdly__pc_e2_q;
        IData/*31:0*/ __Vdly__npc_e2_q;
        IData/*31:0*/ __Vdly__opcode_e2_q;
        IData/*31:0*/ __Vdly__operand_ra_e2_q;
        IData/*31:0*/ __Vdly__operand_rb_e2_q;
        IData/*31:0*/ __Vdly__result_e2_q;
        IData/*31:0*/ __Vdly__csr_wdata_wb_q;
        IData/*31:0*/ __Vdly__pc_wb_q;
        IData/*31:0*/ __Vdly__npc_wb_q;
    };
    struct {
        IData/*31:0*/ __Vdly__opcode_wb_q;
        IData/*31:0*/ __Vdly__operand_ra_wb_q;
        IData/*31:0*/ __Vdly__operand_rb_wb_q;
        IData/*31:0*/ __Vdly__result_wb_q;
    };

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_pipe_ctrl(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_pipe_ctrl();
    VL_UNCOPYABLE(Vrv32im_top_riscv_pipe_ctrl);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
