// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_DECODER_H_
#define VERILATED_VFALCO_TOP_DECODER_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_decoder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__illegal_instr_o,0,0);
        CData/*6:0*/ __PVT__opcode;
        CData/*4:0*/ __PVT__rv32_shamt;
        CData/*2:0*/ __PVT__rv32_funct3;
        CData/*6:0*/ __PVT__rv32_funct7;
        CData/*0:0*/ __PVT__opcode_4_2_000;
        CData/*0:0*/ __PVT__opcode_4_2_001;
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
    };
    struct {
        CData/*0:0*/ __PVT__rv32_imm_seli;
        CData/*0:0*/ __PVT__rv32_imm_sels;
        CData/*0:0*/ __PVT__rv32_imm_selb;
        CData/*0:0*/ __PVT__rv32_imm_selu;
        CData/*0:0*/ __PVT__rv32_imm_selj;
        CData/*0:0*/ __PVT__rv32_sub;
        CData/*0:0*/ __PVT__rv32_beq;
        CData/*0:0*/ __PVT__rv32_bne;
        CData/*0:0*/ __PVT__rv32_blt;
        CData/*0:0*/ __PVT__rv32_bgt;
        CData/*0:0*/ __PVT__rv32_bltu;
        CData/*0:0*/ __PVT__rv32_bgtu;
        CData/*0:0*/ __PVT__rv32_fence;
        CData/*0:0*/ __PVT__rv32_fence_i;
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
        CData/*0:0*/ __PVT__rv32_lb;
        CData/*0:0*/ __PVT__rv32_lh;
        CData/*0:0*/ __PVT__rv32_lw;
        CData/*0:0*/ __PVT__rv32_lbu;
        CData/*0:0*/ __PVT__rv32_lhu;
        CData/*0:0*/ __PVT__rv32_sb;
        CData/*0:0*/ __PVT__rv32_sh;
        CData/*0:0*/ __PVT__rv32_sw;
        VL_IN(__PVT__pc,31,0);
        VL_IN(__PVT__instruction,31,0);
        VL_IN(__PVT__predict_pc,31,0);
        IData/*31:0*/ __PVT__rv32_instr;
        IData/*31:0*/ __PVT__immI;
        IData/*31:0*/ __PVT__immS;
        IData/*31:0*/ __PVT__immB;
        IData/*31:0*/ __PVT__immU;
        IData/*31:0*/ __PVT__immJ;
        VL_OUTW(__PVT__decoded_instr,191,0,6);
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_decoder(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_decoder();
    VL_UNCOPYABLE(Vfalco_top_decoder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
