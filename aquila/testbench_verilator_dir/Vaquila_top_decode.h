// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_DECODE_H_
#define VERILATED_VAQUILA_TOP_DECODE_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_decode final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__stall_i,0,0);
        VL_IN8(__PVT__flush_i,0,0);
        VL_IN8(__PVT__branch_hit_i,0,0);
        VL_IN8(__PVT__branch_decision_i,0,0);
        VL_IN8(__PVT__privilege_lvl_i,1,0);
        VL_OUT8(__PVT__is_load_hazard_o,0,0);
        VL_OUT8(__PVT__rs1_addr_o,4,0);
        VL_OUT8(__PVT__rs2_addr_o,4,0);
        VL_OUT8(__PVT__unsupported_instr_o,0,0);
        VL_OUT8(__PVT__csr_we_o,0,0);
        VL_OUT8(__PVT__inputA_sel_o,1,0);
        VL_OUT8(__PVT__inputB_sel_o,1,0);
        VL_OUT8(__PVT__operation_sel_o,2,0);
        VL_OUT8(__PVT__alu_muldiv_sel_o,0,0);
        VL_OUT8(__PVT__shift_sel_o,0,0);
        VL_OUT8(__PVT__branch_hit_o,0,0);
        VL_OUT8(__PVT__branch_decision_o,0,0);
        VL_OUT8(__PVT__is_jalr_o,0,0);
        VL_OUT8(__PVT__is_fencei_o,0,0);
        VL_OUT8(__PVT__is_branch_o,0,0);
        VL_OUT8(__PVT__is_jal_o,0,0);
        VL_OUT8(__PVT__csr_imm_o,4,0);
        VL_OUT8(__PVT__rd_addr_o,4,0);
        VL_OUT8(__PVT__regfile_we_o,0,0);
        VL_OUT8(__PVT__regfile_input_sel_o,2,0);
        VL_OUT8(__PVT__we_o,0,0);
        VL_OUT8(__PVT__re_o,0,0);
        VL_OUT8(__PVT__dsize_sel_o,1,0);
        VL_OUT8(__PVT__signex_sel_o,0,0);
        VL_OUT8(__PVT__is_amo_o,0,0);
        VL_OUT8(__PVT__amo_type_o,4,0);
        VL_OUT8(__PVT__rs1_addr2fwd_o,4,0);
        VL_OUT8(__PVT__rs2_addr2fwd_o,4,0);
        VL_OUT8(__PVT__sys_jump_o,0,0);
        VL_OUT8(__PVT__sys_jump_csr_addr_o,1,0);
        VL_IN8(__PVT__fetch_valid_i,0,0);
        VL_OUT8(__PVT__fetch_valid_o,0,0);
        VL_IN8(__PVT__xcpt_valid_i,0,0);
        VL_IN8(__PVT__xcpt_cause_i,3,0);
        VL_OUT8(__PVT__xcpt_valid_o,0,0);
        VL_OUT8(__PVT__xcpt_cause_o,3,0);
        CData/*4:0*/ __PVT__rd_addr;
        CData/*0:0*/ __PVT__we;
        CData/*0:0*/ __PVT__re;
        CData/*0:0*/ __PVT__regfile_we;
        CData/*1:0*/ __PVT__inputA_sel;
        CData/*1:0*/ __PVT__inputB_sel;
        CData/*2:0*/ __PVT__regfile_input_sel;
        CData/*2:0*/ __PVT__operation_sel;
        CData/*1:0*/ __PVT__dsize_sel;
        CData/*0:0*/ __PVT__signex_sel;
        CData/*0:0*/ __PVT__alu_muldiv_sel;
        CData/*0:0*/ __PVT__shift_sel;
        CData/*4:0*/ __PVT__csr_imm;
        CData/*6:0*/ __PVT__opcode;
        CData/*4:0*/ __PVT__rv32_shamt;
        CData/*2:0*/ __PVT__rv32_funct3;
        CData/*6:0*/ __PVT__rv32_funct7;
        CData/*4:0*/ __PVT__amo_type;
        CData/*0:0*/ __PVT__opcode_1_0_11;
        CData/*0:0*/ __PVT__opcode_4_2_000;
        CData/*0:0*/ __PVT__opcode_4_2_001;
    };
    struct {
        CData/*0:0*/ __PVT__opcode_4_2_010;
        CData/*0:0*/ __PVT__opcode_4_2_011;
        CData/*0:0*/ __PVT__opcode_4_2_100;
        CData/*0:0*/ __PVT__opcode_4_2_101;
        CData/*0:0*/ __PVT__opcode_4_2_110;
        CData/*0:0*/ __PVT__opcode_4_2_111;
        CData/*0:0*/ __PVT__opcode_6_5_00;
        CData/*0:0*/ __PVT__opcode_6_5_01;
        CData/*0:0*/ __PVT__opcode_6_5_10;
        CData/*0:0*/ __PVT__opcode_6_5_11;
        CData/*0:0*/ __PVT__rv32_funct3_000;
        CData/*0:0*/ __PVT__rv32_funct3_001;
        CData/*0:0*/ __PVT__rv32_funct3_010;
        CData/*0:0*/ __PVT__rv32_funct3_011;
        CData/*0:0*/ __PVT__rv32_funct3_100;
        CData/*0:0*/ __PVT__rv32_funct3_101;
        CData/*0:0*/ __PVT__rv32_funct3_110;
        CData/*0:0*/ __PVT__rv32_funct3_111;
        CData/*0:0*/ __PVT__rv32_funct7_0000000;
        CData/*0:0*/ __PVT__rv32_funct7_0100000;
        CData/*0:0*/ __PVT__rv32_funct7_0000001;
        CData/*0:0*/ __PVT__rv32_funct7_0000101;
        CData/*0:0*/ __PVT__rv32_funct7_0001001;
        CData/*0:0*/ __PVT__rv32_funct7_0001101;
        CData/*0:0*/ __PVT__rv32_funct7_0010101;
        CData/*0:0*/ __PVT__rv32_funct7_0100001;
        CData/*0:0*/ __PVT__rv32_funct7_0010001;
        CData/*0:0*/ __PVT__rv32_funct7_0101101;
        CData/*0:0*/ __PVT__rv32_funct7_1111111;
        CData/*0:0*/ __PVT__rv32_funct7_0000100;
        CData/*0:0*/ __PVT__rv32_funct7_0001000;
        CData/*0:0*/ __PVT__rv32_funct7_0001100;
        CData/*0:0*/ __PVT__rv32_funct7_0101100;
        CData/*0:0*/ __PVT__rv32_funct7_0010000;
        CData/*0:0*/ __PVT__rv32_funct7_0010100;
        CData/*0:0*/ __PVT__rv32_funct7_1100000;
        CData/*0:0*/ __PVT__rv32_funct7_1110000;
        CData/*0:0*/ __PVT__rv32_funct7_1010000;
        CData/*0:0*/ __PVT__rv32_funct7_1101000;
        CData/*0:0*/ __PVT__rv32_funct7_1111000;
        CData/*0:0*/ __PVT__rv32_funct7_1010001;
        CData/*0:0*/ __PVT__rv32_funct7_1110001;
        CData/*0:0*/ __PVT__rv32_funct7_1100001;
        CData/*0:0*/ __PVT__rv32_funct7_1101001;
        CData/*0:0*/ __PVT__rv32_op;
        CData/*0:0*/ __PVT__rv32_op_imm;
        CData/*0:0*/ __PVT__rv32_jal;
        CData/*0:0*/ __PVT__rv32_jalr;
        CData/*0:0*/ __PVT__rv32_load;
        CData/*0:0*/ __PVT__rv32_store;
        CData/*0:0*/ __PVT__rv32_branch;
        CData/*0:0*/ __PVT__rv32_lui;
        CData/*0:0*/ __PVT__rv32_auipc;
        CData/*0:0*/ __PVT__rv32_miscmem;
        CData/*0:0*/ __PVT__rv32_system;
        CData/*0:0*/ __PVT__rv32_amo;
        CData/*0:0*/ __PVT__rv32m;
        CData/*0:0*/ __PVT__rv32_imm_seli;
        CData/*0:0*/ __PVT__rv32_imm_sels;
        CData/*0:0*/ __PVT__rv32_imm_selb;
        CData/*0:0*/ __PVT__rv32_imm_selu;
        CData/*0:0*/ __PVT__rv32_imm_selj;
        CData/*0:0*/ __PVT__rv32_sub;
        CData/*0:0*/ __PVT__rv32_beq;
    };
    struct {
        CData/*0:0*/ __PVT__rv32_bne;
        CData/*0:0*/ __PVT__rv32_blt;
        CData/*0:0*/ __PVT__rv32_bgt;
        CData/*0:0*/ __PVT__rv32_bltu;
        CData/*0:0*/ __PVT__rv32_bgtu;
        CData/*0:0*/ __PVT__rv32_fence;
        CData/*0:0*/ __PVT__rv32_fencei;
        CData/*0:0*/ __PVT__rv32_csrrw;
        CData/*0:0*/ __PVT__rv32_csrrs;
        CData/*0:0*/ __PVT__rv32_csrrc;
        CData/*0:0*/ __PVT__rv32_csrrwi;
        CData/*0:0*/ __PVT__rv32_csrrsi;
        CData/*0:0*/ __PVT__rv32_csrrci;
        CData/*0:0*/ __PVT__rv32_csr;
        CData/*0:0*/ __PVT__rv32_sys_op;
        CData/*0:0*/ __PVT__rv32_ecall;
        CData/*0:0*/ __PVT__rv32_ebreak;
        CData/*0:0*/ __PVT__rv32_mret;
        CData/*0:0*/ __PVT__rv32_sret;
        CData/*0:0*/ __PVT__rv32_lb;
        CData/*0:0*/ __PVT__rv32_lh;
        CData/*0:0*/ __PVT__rv32_lw;
        CData/*0:0*/ __PVT__rv32_lbu;
        CData/*0:0*/ __PVT__rv32_lhu;
        CData/*0:0*/ __PVT__rv32_sb;
        CData/*0:0*/ __PVT__rv32_sh;
        CData/*0:0*/ __PVT__rv32_sw;
        CData/*0:0*/ __PVT__xcpt_valid;
        CData/*3:0*/ __PVT__xcpt_cause;
        CData/*0:0*/ __PVT__is_r_type;
        CData/*0:0*/ __PVT__is_i_type;
        CData/*0:0*/ __PVT__is_s_type;
        CData/*0:0*/ __PVT__is_b_type;
        CData/*0:0*/ __PVT__is_fence;
        CData/*0:0*/ __PVT__is_csr_type;
        CData/*0:0*/ __PVT__is_amo_type;
        CData/*0:0*/ __PVT__is_rs1_rd_same;
        CData/*0:0*/ __PVT__is_rs2_rd_same;
        CData/*0:0*/ __Vdly__fetch_valid_o;
        CData/*1:0*/ __Vdly__inputA_sel_o;
        CData/*1:0*/ __Vdly__inputB_sel_o;
        CData/*2:0*/ __Vdly__operation_sel_o;
        CData/*0:0*/ __Vdly__signex_sel_o;
        CData/*1:0*/ __Vdly__dsize_sel_o;
        CData/*0:0*/ __Vdly__alu_muldiv_sel_o;
        CData/*0:0*/ __Vdly__shift_sel_o;
        CData/*0:0*/ __Vdly__is_branch_o;
        CData/*0:0*/ __Vdly__is_jal_o;
        CData/*0:0*/ __Vdly__is_jalr_o;
        CData/*0:0*/ __Vdly__regfile_we_o;
        CData/*2:0*/ __Vdly__regfile_input_sel_o;
        CData/*0:0*/ __Vdly__we_o;
        CData/*0:0*/ __Vdly__re_o;
        CData/*4:0*/ __Vdly__rd_addr_o;
        CData/*4:0*/ __Vdly__rs1_addr2fwd_o;
        CData/*4:0*/ __Vdly__rs2_addr2fwd_o;
        CData/*0:0*/ __Vdly__csr_we_o;
        CData/*4:0*/ __Vdly__csr_imm_o;
        CData/*0:0*/ __Vdly__branch_hit_o;
        CData/*0:0*/ __Vdly__branch_decision_o;
        CData/*0:0*/ __Vdly__is_fencei_o;
        CData/*4:0*/ __Vdly__amo_type_o;
        CData/*0:0*/ __Vdly__is_amo_o;
        CData/*0:0*/ __Vdly__sys_jump_o;
    };
    struct {
        CData/*1:0*/ __Vdly__sys_jump_csr_addr_o;
        CData/*0:0*/ __Vdly__xcpt_valid_o;
        CData/*3:0*/ __Vdly__xcpt_cause_o;
        VL_OUT16(__PVT__csr_addr_o,11,0);
        VL_OUT16(__PVT__csr_addr2fwd_o,11,0);
        SData/*11:0*/ __Vdly__csr_addr2fwd_o;
        VL_IN(__PVT__pc_i,31,0);
        VL_IN(__PVT__instruction_i,31,0);
        VL_IN(__PVT__csr_data_i,31,0);
        VL_IN(__PVT__rs1_data_i,31,0);
        VL_IN(__PVT__rs2_data_i,31,0);
        VL_OUT(__PVT__imm_o,31,0);
        VL_OUT(__PVT__pc_o,31,0);
        VL_OUT(__PVT__rs1_data2fwd_o,31,0);
        VL_OUT(__PVT__rs2_data2fwd_o,31,0);
        VL_OUT(__PVT__csr_data2fwd_o,31,0);
        VL_IN(__PVT__xcpt_tval_i,31,0);
        VL_OUT(__PVT__xcpt_tval_o,31,0);
        IData/*31:0*/ __PVT__imm;
        IData/*31:0*/ __PVT__rv32_instr;
        IData/*31:0*/ __PVT__immI;
        IData/*31:0*/ __PVT__immS;
        IData/*31:0*/ __PVT__immB;
        IData/*31:0*/ __PVT__immU;
        IData/*31:0*/ __PVT__immJ;
        IData/*31:0*/ __PVT__xcpt_tval;
        IData/*31:0*/ __Vdly__pc_o;
        IData/*31:0*/ __Vdly__rs1_data2fwd_o;
        IData/*31:0*/ __Vdly__rs2_data2fwd_o;
        IData/*31:0*/ __Vdly__imm_o;
        IData/*31:0*/ __Vdly__xcpt_tval_o;
        IData/*31:0*/ __Vdly__csr_data2fwd_o;
    };

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_decode(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_decode();
    VL_UNCOPYABLE(Vaquila_top_decode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
