// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_CORE_TOP_H_
#define VERILATED_VAQUILA_TOP_CORE_TOP_H_  // guard

#include "verilated.h"
class Vaquila_top_bpu;
class Vaquila_top_csr_file;
class Vaquila_top_decode;
class Vaquila_top_execute;
class Vaquila_top_fetch;
class Vaquila_top_forwarding_unit;
class Vaquila_top_memory;
class Vaquila_top_pipeline_control;
class Vaquila_top_program_counter;
class Vaquila_top_reg_file;
class Vaquila_top_writeback;


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_core_top final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_top_pipeline_control* __PVT__Pipeline_Control;
    Vaquila_top_forwarding_unit* __PVT__Forwarding_Unit;
    Vaquila_top_bpu* __PVT__Branch_Prediction_Unit;
    Vaquila_top_reg_file* __PVT__Register_File;
    Vaquila_top_program_counter* __PVT__Program_Counter;
    Vaquila_top_fetch* __PVT__Fetch;
    Vaquila_top_decode* __PVT__Decode;
    Vaquila_top_execute* __PVT__Execute;
    Vaquila_top_memory* __PVT__Memory;
    Vaquila_top_writeback* __PVT__Writeback;
    Vaquila_top_csr_file* __PVT__CSR;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__stall_i,0,0);
        VL_IN8(__PVT__code_ready_i,0,0);
        VL_OUT8(__PVT__code_req_o,0,0);
        VL_IN8(__PVT__data_ready_i,0,0);
        VL_OUT8(__PVT__data_rw_o,0,0);
        VL_OUT8(__PVT__data_byte_enable_o,3,0);
        VL_OUT8(__PVT__data_req_o,0,0);
        VL_OUT8(__PVT__data_is_amo_o,0,0);
        VL_OUT8(__PVT__data_amo_type_o,4,0);
        VL_IN8(__PVT__data_addr_ext_i,0,0);
        VL_OUT8(__PVT__cache_flush_o,0,0);
        VL_IN8(__PVT__ext_irq_i,0,0);
        VL_IN8(__PVT__tmr_irq_i,0,0);
        VL_IN8(__PVT__sft_irq_i,0,0);
        CData/*0:0*/ __PVT__fet_branch_hit;
        CData/*0:0*/ __PVT__fet_branch_decision;
        CData/*0:0*/ __PVT__fet_valid2dec;
        CData/*0:0*/ __PVT__fet_xcpt_valid2dec;
        CData/*3:0*/ __PVT__fet_xcpt_cause2dec;
        CData/*0:0*/ __PVT__dec_is_branch;
        CData/*0:0*/ __PVT__dec_is_jal;
        CData/*0:0*/ __PVT__dec_is_jalr;
        CData/*0:0*/ __PVT__dec_branch_hit;
        CData/*0:0*/ __PVT__dec_branch_decision;
        CData/*0:0*/ __PVT__dec_load_hazard2plc;
        CData/*0:0*/ __PVT__dec_unsupported_instr;
        CData/*4:0*/ __PVT__dec_rs1_addr2rfu;
        CData/*4:0*/ __PVT__dec_rs2_addr2rfu;
        CData/*4:0*/ __PVT__dec_rs1_addr2fwd;
        CData/*4:0*/ __PVT__dec_rs2_addr2fwd;
        CData/*4:0*/ __PVT__dec_rd_addr2exe;
        CData/*0:0*/ __PVT__dec_we2exe;
        CData/*0:0*/ __PVT__dec_re2exe;
        CData/*0:0*/ __PVT__dec_csr_we2exe;
        CData/*4:0*/ __PVT__dec_csr_imm2exe;
        CData/*1:0*/ __PVT__dec_inA_sel2exe;
        CData/*1:0*/ __PVT__dec_inB_sel2exe;
        CData/*1:0*/ __PVT__dec_dsize_sel2exe;
        CData/*2:0*/ __PVT__dec_regfile_sel2exe;
        CData/*2:0*/ __PVT__dec_operation_sel2exe;
        CData/*0:0*/ __PVT__dec_regfile_we2exe;
        CData/*0:0*/ __PVT__dec_signex_sel2exe;
        CData/*0:0*/ __PVT__dec_alu_muldiv_sel2exe;
        CData/*0:0*/ __PVT__dec_shift_sel2exe;
        CData/*0:0*/ __PVT__dec_is_fencei2exe;
        CData/*0:0*/ __PVT__dec_is_amo2exe;
        CData/*4:0*/ __PVT__dec_amo_type2exe;
        CData/*0:0*/ __PVT__dec_fetch_valid2exe;
        CData/*0:0*/ __PVT__dec_sys_jump2exe;
        CData/*1:0*/ __PVT__dec_sys_jump_csr_addr2exe;
        CData/*0:0*/ __PVT__dec_xcpt_valid2exe;
        CData/*3:0*/ __PVT__dec_xcpt_cause2exe;
        CData/*0:0*/ __PVT__exe_branch_taken;
        CData/*0:0*/ __PVT__exe_is_branch2bpu;
        CData/*0:0*/ __PVT__exe_we;
        CData/*0:0*/ __PVT__exe_re;
        CData/*0:0*/ __PVT__exe_regfile_we2wbk;
        CData/*1:0*/ __PVT__exe_dsize_sel2mem;
        CData/*0:0*/ __PVT__exe_signex_sel2wbk;
        CData/*4:0*/ __PVT__exe_rd_addr2wbk;
        CData/*2:0*/ __PVT__exe_regfile_input_sel2wbk;
        CData/*0:0*/ __PVT__exe_branch_misprediction;
    };
    struct {
        CData/*0:0*/ __PVT__exe_is_fencei;
        CData/*0:0*/ __PVT__exe_is_amo2mem;
        CData/*4:0*/ __PVT__exe_amo_type2mem;
        CData/*0:0*/ __PVT__exe_csr_we;
        CData/*0:0*/ __PVT__exe_fetch_valid2mem;
        CData/*0:0*/ __PVT__exe_sys_jump2mem;
        CData/*1:0*/ __PVT__exe_sys_jump_csr_addr2mem;
        CData/*0:0*/ __PVT__exe_xcpt_valid2mem;
        CData/*3:0*/ __PVT__exe_xcpt_cause2mem;
        CData/*3:0*/ __PVT__mem_byte_sel;
        CData/*0:0*/ __PVT__mem_align_exception;
        CData/*0:0*/ __PVT__mem_fetch_valid2wbk;
        CData/*0:0*/ __PVT__mem_sys_jump2wbk;
        CData/*1:0*/ __PVT__mem_sys_jump_csr_addr2wbk;
        CData/*0:0*/ __PVT__mem_xcpt_valid2wbk;
        CData/*3:0*/ __PVT__mem_xcpt_cause2wbk;
        CData/*0:0*/ __PVT__wbk_rd_we;
        CData/*4:0*/ __PVT__wbk_rd_addr;
        CData/*0:0*/ __PVT__wbk_csr_we;
        CData/*0:0*/ __PVT__wbk_fetch_valid2csr;
        CData/*0:0*/ __PVT__wbk_sys_jump2csr;
        CData/*1:0*/ __PVT__wbk_sys_jump_csr_addr2csr;
        CData/*0:0*/ __PVT__wbk_xcpt_valid2csr;
        CData/*3:0*/ __PVT__wbk_xcpt_cause2csr;
        CData/*0:0*/ __PVT__plc_flush2fet;
        CData/*0:0*/ __PVT__plc_flush2dec;
        CData/*0:0*/ __PVT__plc_flush2exe;
        CData/*0:0*/ __PVT__plc_flush2wbk;
        CData/*0:0*/ __PVT__csr_irq_taken;
        CData/*0:0*/ __PVT__csr_irq_taken_r;
        CData/*0:0*/ __PVT__csr_sys_jump;
        CData/*0:0*/ __PVT__bpu_branch_hit;
        CData/*0:0*/ __PVT__bpu_branch_decision;
        CData/*0:0*/ __PVT__irq_enable;
        CData/*0:0*/ __PVT__irq_taken;
        CData/*1:0*/ __PVT__privilege_level;
        CData/*0:0*/ __PVT__iS;
        CData/*0:0*/ __PVT__iS_nxt;
        CData/*1:0*/ __PVT__dS;
        CData/*1:0*/ __PVT__dS_nxt;
        CData/*0:0*/ __PVT__stall_data_hazard;
        CData/*0:0*/ __PVT__stall_from_exe;
        CData/*0:0*/ __PVT__stall_instr_fetch;
        CData/*0:0*/ __PVT__stall_data_fetch;
        CData/*0:0*/ __PVT__stall_pipeline;
        CData/*0:0*/ __Vcellinp__Program_Counter__stall_i;
        CData/*0:0*/ __Vcellinp__Fetch__flush_i;
        CData/*0:0*/ __Vcellinp__Fetch__stall_i;
        CData/*0:0*/ __Vcellinp__Decode__flush_i;
        CData/*0:0*/ __Vcellinp__Execute__flush_i;
        CData/*0:0*/ __Vcellinp__Execute__stall_i;
        CData/*1:0*/ __Vcellinp__Writeback__addr_alignment_i;
        CData/*0:0*/ __Vcellinp__Writeback__flush_i;
        CData/*0:0*/ __Vcellinp__CSR__sft_irq_i;
        CData/*0:0*/ __Vcellinp__CSR__tmr_irq_i;
        CData/*0:0*/ __Vcellinp__CSR__ext_irq_i;
        CData/*0:0*/ __PVT__dec_we;
        CData/*0:0*/ __PVT__dec_re;
        CData/*0:0*/ __Vdly__csr_irq_taken_r;
        CData/*0:0*/ __Vdly__iS;
        CData/*1:0*/ __Vdly__dS;
        SData/*11:0*/ __PVT__dec_csr_addr2fwd;
        SData/*11:0*/ __PVT__dec_csr_addr2csr;
        SData/*11:0*/ __PVT__exe_csr_addr;
    };
    struct {
        SData/*11:0*/ __PVT__wbk_csr_addr;
        VL_IN(__PVT__init_pc_addr_i,31,0);
        VL_IN(__PVT__code_i,31,0);
        VL_OUT(__PVT__code_addr_o,31,0);
        VL_IN(__PVT__data_i,31,0);
        VL_OUT(__PVT__data_o,31,0);
        VL_OUT(__PVT__data_addr_o,31,0);
        IData/*31:0*/ __PVT__fet_instr2dec;
        IData/*31:0*/ __PVT__fet_pc2dec;
        IData/*31:0*/ __PVT__fet_xcpt_tval2dec;
        IData/*31:0*/ __PVT__dec_pc;
        IData/*31:0*/ __PVT__dec_rs1_data2fwd;
        IData/*31:0*/ __PVT__dec_rs2_data2fwd;
        IData/*31:0*/ __PVT__dec_csr_data2fwd;
        IData/*31:0*/ __PVT__dec_imm2exe;
        IData/*31:0*/ __PVT__dec_xcpt_tval2exe;
        IData/*31:0*/ __PVT__exe_branch_restore_pc;
        IData/*31:0*/ __PVT__exe_branch_target_addr;
        IData/*31:0*/ __PVT__exe_rs2_data2mem;
        IData/*31:0*/ __PVT__exe_addr2mem;
        IData/*31:0*/ __PVT__exe_p_data;
        IData/*31:0*/ __PVT__exe_csr_data;
        IData/*31:0*/ __PVT__exe_xcpt_tval2mem;
        IData/*31:0*/ __PVT__exe_pc2mem;
        IData/*31:0*/ __PVT__mem_dataout;
        IData/*31:0*/ __PVT__mem_xcpt_tval2wbk;
        IData/*31:0*/ __PVT__mem_pc2wbk;
        IData/*31:0*/ __PVT__wbk_rd_data;
        IData/*31:0*/ __PVT__wbk_csr_data;
        IData/*31:0*/ __PVT__wbk_xcpt_tval2csr;
        IData/*31:0*/ __PVT__wbk_pc2csr;
        IData/*31:0*/ __PVT__pcu_pc;
        IData/*31:0*/ __PVT__fwd_rs1;
        IData/*31:0*/ __PVT__fwd_rs2;
        IData/*31:0*/ __PVT__fwd_csr_data2exe;
        IData/*31:0*/ __PVT__rfu_rs1_data2dec;
        IData/*31:0*/ __PVT__rfu_rs2_data2dec;
        IData/*31:0*/ __PVT__csr_pc_handler;
        IData/*31:0*/ __PVT__csr_data2dec;
        IData/*31:0*/ __PVT__csr_sys_jump_data;
        IData/*31:0*/ __PVT__bpu_branch_target_addr;
        IData/*31:0*/ __PVT__nxt_unwb_PC;
        IData/*31:0*/ __PVT__data_read_reg;
        IData/*31:0*/ __PVT__data_read2wbk;
        IData/*31:0*/ __Vdly__data_read_reg;
    };

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_core_top(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_core_top();
    VL_UNCOPYABLE(Vaquila_top_core_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
