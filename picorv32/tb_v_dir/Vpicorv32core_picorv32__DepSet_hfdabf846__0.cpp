// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core__Syms.h"
#include "Vpicorv32core_picorv32.h"

VL_INLINE_OPT void Vpicorv32core_picorv32___ico_sequent__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___ico_sequent__TOP__picorv32core__picorv32_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

VL_INLINE_OPT void Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___nba_sequent__TOP__picorv32core__picorv32_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__is_beq_bne_blt_bge_bltu_bgeu 
        = vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu;
    vlSelfRef.__Vdly__is_lb_lh_lw_lbu_lhu = vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu;
    vlSelfRef.__Vdly__is_sb_sh_sw = vlSelfRef.__PVT__is_sb_sh_sw;
    vlSelfRef.__Vdly__is_alu_reg_imm = vlSelfRef.__PVT__is_alu_reg_imm;
    vlSelfRef.__Vdly__is_alu_reg_reg = vlSelfRef.__PVT__is_alu_reg_reg;
    vlSelfRef.__Vdly__decoded_imm_j = vlSelfRef.__PVT__decoded_imm_j;
    vlSelfRef.__Vdly__instr_lui = vlSelfRef.__PVT__instr_lui;
    vlSelfRef.__Vdly__instr_auipc = vlSelfRef.__PVT__instr_auipc;
    vlSelfRef.__Vdly__instr_jal = vlSelfRef.__PVT__instr_jal;
    vlSelfRef.__Vdly__instr_jalr = vlSelfRef.__PVT__instr_jalr;
    vlSelfRef.__Vdly__instr_blt = vlSelfRef.__PVT__instr_blt;
    vlSelfRef.__Vdly__instr_bltu = vlSelfRef.__PVT__instr_bltu;
    vlSelfRef.__Vdly__instr_lw = vlSelfRef.__PVT__instr_lw;
    vlSelfRef.__Vdly__instr_lbu = vlSelfRef.__PVT__instr_lbu;
    vlSelfRef.__Vdly__instr_lhu = vlSelfRef.__PVT__instr_lhu;
    vlSelfRef.__Vdly__instr_addi = vlSelfRef.__PVT__instr_addi;
    vlSelfRef.__Vdly__instr_slti = vlSelfRef.__PVT__instr_slti;
    vlSelfRef.__Vdly__instr_sltiu = vlSelfRef.__PVT__instr_sltiu;
    vlSelfRef.__Vdly__instr_add = vlSelfRef.__PVT__instr_add;
    vlSelfRef.__Vdly__instr_slt = vlSelfRef.__PVT__instr_slt;
    vlSelfRef.__Vdly__instr_sltu = vlSelfRef.__PVT__instr_sltu;
    vlSelfRef.__Vdly__instr_sub = vlSelfRef.__PVT__instr_sub;
    vlSelfRef.__Vdly__reg_sh = vlSelfRef.__PVT__reg_sh;
    vlSelfRef.__Vdly__count_cycle = vlSelfRef.__PVT__count_cycle;
    vlSelfRef.__Vdly__decoder_pseudo_trigger = vlSelfRef.__PVT__decoder_pseudo_trigger;
    vlSelfRef.__Vdly__do_waitirq = vlSelfRef.__PVT__do_waitirq;
    vlSelfRef.__Vdly__latched_is_lu = vlSelfRef.__PVT__latched_is_lu;
    vlSelfRef.__Vdly__latched_is_lh = vlSelfRef.__PVT__latched_is_lh;
    vlSelfRef.__Vdly__latched_is_lb = vlSelfRef.__PVT__latched_is_lb;
    vlSelfRef.__Vdly__count_instr = vlSelfRef.__PVT__count_instr;
    vlSelfRef.__Vdly__timer = vlSelfRef.__PVT__timer;
    vlSelfRef.__Vdly__irq_active = vlSelfRef.__PVT__irq_active;
    vlSelfRef.__Vdly__decoder_trigger = vlSelfRef.__PVT__decoder_trigger;
    vlSelfRef.__Vdly__reg_next_pc = vlSelfRef.__PVT__reg_next_pc;
    vlSelfRef.__Vdly__mem_wordsize = vlSelfRef.__PVT__mem_wordsize;
    vlSelfRef.__Vdly__alu_out_q = vlSelfRef.__PVT__alu_out_q;
    vlSelfRef.__Vdly__reg_pc = vlSelfRef.__PVT__reg_pc;
    vlSelfRef.__Vdly__latched_stalu = vlSelfRef.__PVT__latched_stalu;
    vlSelfRef.__Vdly__mem_do_wdata = vlSelfRef.__PVT__mem_do_wdata;
    vlSelfRef.__Vdly__cpu_state = vlSelfRef.__PVT__cpu_state;
    vlSelfRef.__Vdly__mem_do_rdata = vlSelfRef.__PVT__mem_do_rdata;
    vlSelfRef.__Vdly__mem_do_prefetch = vlSelfRef.__PVT__mem_do_prefetch;
    vlSelfRef.__Vdly__reg_out = vlSelfRef.__PVT__reg_out;
    vlSelfRef.__Vdly__latched_store = vlSelfRef.__PVT__latched_store;
    vlSelfRef.__Vdly__latched_branch = vlSelfRef.__PVT__latched_branch;
    vlSelfRef.__Vdly__mem_do_rinst = vlSelfRef.__PVT__mem_do_rinst;
    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__reg_op1;
    vlSelfRef.__Vdly__mem_state = vlSelfRef.__PVT__mem_state;
    vlSelfRef.__Vdly__last_mem_valid = vlSelfRef.__PVT__last_mem_valid;
    vlSelfRef.__Vdly__clear_prefetched_high_word_q 
        = vlSelfRef.__PVT__clear_prefetched_high_word_q;
    vlSelfRef.__Vdly__pcpi_insn = vlSelfRef.__PVT__pcpi_insn;
    vlSelfRef.__Vdly__instr_ecall_ebreak = vlSelfRef.__PVT__instr_ecall_ebreak;
    vlSelfRef.__Vdly__is_lui_auipc_jal_jalr_addi_add_sub 
        = vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub;
    vlSelfRef.__Vdly__is_slti_blt_slt = vlSelfRef.__PVT__is_slti_blt_slt;
    vlSelfRef.__Vdly__is_sltiu_bltu_sltu = vlSelfRef.__PVT__is_sltiu_bltu_sltu;
    vlSelfRef.__Vdly__is_compare = vlSelfRef.__PVT__is_compare;
    vlSelfRef.__Vdly__instr_waitirq = vlSelfRef.__PVT__instr_waitirq;
    vlSelfRef.__Vdly__instr_getq = vlSelfRef.__PVT__instr_getq;
    vlSelfRef.__Vdly__instr_setq = vlSelfRef.__PVT__instr_setq;
    vlSelfRef.__Vdly__instr_maskirq = vlSelfRef.__PVT__instr_maskirq;
    vlSelfRef.__Vdly__instr_timer = vlSelfRef.__PVT__instr_timer;
    vlSelfRef.__Vdly__instr_beq = vlSelfRef.__PVT__instr_beq;
    vlSelfRef.__Vdly__instr_bne = vlSelfRef.__PVT__instr_bne;
    vlSelfRef.__Vdly__instr_bge = vlSelfRef.__PVT__instr_bge;
    vlSelfRef.__Vdly__instr_bgeu = vlSelfRef.__PVT__instr_bgeu;
    vlSelfRef.__Vdly__instr_xori = vlSelfRef.__PVT__instr_xori;
    vlSelfRef.__Vdly__instr_ori = vlSelfRef.__PVT__instr_ori;
    vlSelfRef.__Vdly__instr_andi = vlSelfRef.__PVT__instr_andi;
    vlSelfRef.__Vdly__instr_xor = vlSelfRef.__PVT__instr_xor;
    vlSelfRef.__Vdly__instr_or = vlSelfRef.__PVT__instr_or;
    vlSelfRef.__Vdly__instr_and = vlSelfRef.__PVT__instr_and;
    vlSelfRef.__Vdly__alu_out_0_q = vlSelfRef.__PVT__alu_out_0_q;
    vlSelfRef.__Vdly__alu_wait = vlSelfRef.__PVT__alu_wait;
    vlSelfRef.__Vdly__alu_wait_2 = vlSelfRef.__PVT__alu_wait_2;
    vlSelfRef.__Vdly__dbg_rs1val = vlSelfRef.__PVT__dbg_rs1val;
    vlSelfRef.__Vdly__dbg_rs2val = vlSelfRef.__PVT__dbg_rs2val;
    vlSelfRef.__Vdly__dbg_rs1val_valid = vlSelfRef.__PVT__dbg_rs1val_valid;
    vlSelfRef.__Vdly__dbg_rs2val_valid = vlSelfRef.__PVT__dbg_rs2val_valid;
    vlSelfRef.__Vdly__trace_valid = vlSelfRef.__PVT__trace_valid;
    vlSelfRef.__Vdly__trace_data = vlSelfRef.__PVT__trace_data;
    vlSelfRef.__Vdly__irq_delay = vlSelfRef.__PVT__irq_delay;
    vlSelfRef.__Vdly__latched_trace = vlSelfRef.__PVT__latched_trace;
    vlSelfRef.__Vdly__pcpi_valid = vlSelfRef.__PVT__pcpi_valid;
    vlSelfRef.__Vdly__pcpi_timeout = vlSelfRef.__PVT__pcpi_timeout;
    vlSelfRef.__Vdly__irq_mask = vlSelfRef.__PVT__irq_mask;
    vlSelfRef.__Vdly__eoi = vlSelfRef.__PVT__eoi;
    vlSelfRef.__Vdly__irq_pending = vlSelfRef.__PVT__irq_pending;
    vlSelfRef.__Vdly__irq_state = vlSelfRef.__PVT__irq_state;
    vlSelfRef.__Vdly__latched_rd = vlSelfRef.__PVT__latched_rd;
    vlSelfRef.__Vdly__latched_compr = vlSelfRef.__PVT__latched_compr;
    vlSelfRef.__Vdly__decoder_pseudo_trigger_q = vlSelfRef.__PVT__decoder_pseudo_trigger_q;
    vlSelfRef.__Vdly__reg_op2 = vlSelfRef.__PVT__reg_op2;
    vlSelfRef.__Vdly__mem_la_secondword = vlSelfRef.__PVT__mem_la_secondword;
    vlSelfRef.__Vdly__mem_addr = vlSelfRef.__PVT__mem_addr;
    vlSelfRef.__Vdly__mem_wstrb = vlSelfRef.__PVT__mem_wstrb;
    vlSelfRef.__Vdly__mem_wdata = vlSelfRef.__PVT__mem_wdata;
    vlSelfRef.__Vdly__prefetched_high_word = vlSelfRef.__PVT__prefetched_high_word;
    vlSelfRef.__Vdly__mem_instr = vlSelfRef.__PVT__mem_instr;
    vlSelfRef.__Vdly__mem_la_firstword_reg = vlSelfRef.__PVT__mem_la_firstword_reg;
    vlSelfRef.__Vdly__dbg_valid_insn = vlSelfRef.__PVT__dbg_valid_insn;
    vlSelfRef.__Vdly__dbg_insn_addr = vlSelfRef.__PVT__dbg_insn_addr;
    vlSelfRef.__Vdly__q_ascii_instr = vlSelfRef.__PVT__q_ascii_instr;
    vlSelfRef.__Vdly__q_insn_imm = vlSelfRef.__PVT__q_insn_imm;
    vlSelfRef.__Vdly__q_insn_opcode = vlSelfRef.__PVT__q_insn_opcode;
    vlSelfRef.__Vdly__q_insn_rs1 = vlSelfRef.__PVT__q_insn_rs1;
    vlSelfRef.__Vdly__q_insn_rs2 = vlSelfRef.__PVT__q_insn_rs2;
    vlSelfRef.__Vdly__q_insn_rd = vlSelfRef.__PVT__q_insn_rd;
    vlSelfRef.__Vdly__dbg_next = vlSelfRef.__PVT__dbg_next;
    vlSelfRef.__Vdly__cached_ascii_instr = vlSelfRef.__PVT__cached_ascii_instr;
    vlSelfRef.__Vdly__cached_insn_imm = vlSelfRef.__PVT__cached_insn_imm;
    vlSelfRef.__Vdly__cached_insn_opcode = vlSelfRef.__PVT__cached_insn_opcode;
    vlSelfRef.__Vdly__cached_insn_rs1 = vlSelfRef.__PVT__cached_insn_rs1;
    vlSelfRef.__Vdly__cached_insn_rs2 = vlSelfRef.__PVT__cached_insn_rs2;
    vlSelfRef.__Vdly__cached_insn_rd = vlSelfRef.__PVT__cached_insn_rd;
    vlSelfRef.__Vdly__clear_prefetched_high_word_q 
        = vlSelfRef.__PVT__clear_prefetched_high_word;
    if (vlSelfRef.__PVT__resetn) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__last_mem_valid)))) {
            vlSelfRef.__Vdly__mem_la_firstword_reg 
                = vlSelfRef.__PVT__mem_la_firstword;
        }
        vlSelfRef.__Vdly__last_mem_valid = ((IData)(vlSelfRef.__PVT__mem_valid) 
                                            & (~ (IData)(vlSelfRef.__PVT__mem_ready)));
    } else {
        vlSelfRef.__Vdly__mem_la_firstword_reg = 0U;
        vlSelfRef.__Vdly__last_mem_valid = 0U;
    }
    vlSelfRef.__Vdly__q_ascii_instr = vlSelfRef.__PVT__dbg_ascii_instr;
    vlSelfRef.__Vdly__q_insn_imm = vlSelfRef.__PVT__dbg_insn_imm;
    vlSelfRef.__Vdly__q_insn_opcode = vlSelfRef.__PVT__dbg_insn_opcode;
    vlSelfRef.__Vdly__q_insn_rs1 = vlSelfRef.__PVT__dbg_insn_rs1;
    vlSelfRef.__Vdly__q_insn_rs2 = vlSelfRef.__PVT__dbg_insn_rs2;
    vlSelfRef.__Vdly__q_insn_rd = vlSelfRef.__PVT__dbg_insn_rd;
    vlSelfRef.__Vdly__dbg_next = vlSelfRef.__PVT__launch_next_insn;
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__resetn)) 
               | (IData)(vlSelfRef.__PVT__trap)))) {
        vlSelfRef.__Vdly__dbg_valid_insn = 0U;
    } else if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__Vdly__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.__PVT__decoder_trigger_q) {
        vlSelfRef.__Vdly__cached_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
        vlSelfRef.__Vdly__cached_insn_imm = vlSelfRef.__PVT__decoded_imm;
        vlSelfRef.__Vdly__cached_insn_opcode = (VL_REDAND_II(2, 
                                                             (3U 
                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__next_insn_opcode, 0U, 2U)))
                                                 ? vlSelfRef.__PVT__next_insn_opcode
                                                 : 
                                                VL_EXTEND_II(32,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__next_insn_opcode, 0U, 0x10U))));
        vlSelfRef.__Vdly__cached_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
        vlSelfRef.__Vdly__cached_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
        vlSelfRef.__Vdly__cached_insn_rd = vlSelfRef.__PVT__decoded_rd;
    }
    if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__Vdly__dbg_insn_addr = vlSelfRef.__PVT__next_pc;
    }
    vlSelfRef.__PVT__clear_prefetched_high_word_q = vlSelfRef.__Vdly__clear_prefetched_high_word_q;
    vlSelfRef.__PVT__mem_la_firstword_reg = vlSelfRef.__Vdly__mem_la_firstword_reg;
    vlSelfRef.__PVT__last_mem_valid = vlSelfRef.__Vdly__last_mem_valid;
    vlSelfRef.__Vdly__mem_valid = vlSelfRef.__PVT__mem_valid;
    vlSelfRef.__PVT__dbg_valid_insn = vlSelfRef.__Vdly__dbg_valid_insn;
    vlSelfRef.__PVT__dbg_insn_addr = vlSelfRef.__Vdly__dbg_insn_addr;
    vlSelfRef.__PVT__q_ascii_instr = vlSelfRef.__Vdly__q_ascii_instr;
    vlSelfRef.__PVT__q_insn_imm = vlSelfRef.__Vdly__q_insn_imm;
    vlSelfRef.__PVT__q_insn_opcode = vlSelfRef.__Vdly__q_insn_opcode;
    vlSelfRef.__PVT__q_insn_rs1 = vlSelfRef.__Vdly__q_insn_rs1;
    vlSelfRef.__PVT__q_insn_rs2 = vlSelfRef.__Vdly__q_insn_rs2;
    vlSelfRef.__PVT__q_insn_rd = vlSelfRef.__Vdly__q_insn_rd;
    vlSelfRef.__PVT__dbg_next = vlSelfRef.__Vdly__dbg_next;
    vlSelfRef.__PVT__cached_ascii_instr = vlSelfRef.__Vdly__cached_ascii_instr;
    vlSelfRef.__PVT__cached_insn_imm = vlSelfRef.__Vdly__cached_insn_imm;
    vlSelfRef.__PVT__cached_insn_opcode = vlSelfRef.__Vdly__cached_insn_opcode;
    vlSelfRef.__PVT__cached_insn_rs1 = vlSelfRef.__Vdly__cached_insn_rs1;
    vlSelfRef.__PVT__cached_insn_rs2 = vlSelfRef.__Vdly__cached_insn_rs2;
    vlSelfRef.__PVT__cached_insn_rd = vlSelfRef.__Vdly__cached_insn_rd;
    vlSelfRef.__Vdly__next_insn_opcode = vlSelfRef.__PVT__next_insn_opcode;
    vlSelfRef.__Vdly__decoded_rs1 = vlSelfRef.__PVT__decoded_rs1;
    vlSelfRef.__Vdly__decoder_trigger_q = vlSelfRef.__PVT__decoder_trigger_q;
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__resetn)) 
               | (IData)(vlSelfRef.__PVT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__resetn)))) {
            vlSelfRef.__Vdly__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__resetn)) 
                   | (IData)(vlSelfRef.__PVT__mem_ready)))) {
            vlSelfRef.__Vdly__mem_valid = 0U;
        }
        vlSelfRef.__Vdly__mem_la_secondword = 0U;
        vlSelfRef.__Vdly__prefetched_high_word = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__mem_la_read) 
             | (IData)(vlSelfRef.__PVT__mem_la_write))) {
            vlSelfRef.__Vdly__mem_addr = vlSelfRef.__PVT__mem_la_addr;
            vlSelfRef.__Vdly__mem_wstrb = ((IData)(vlSelfRef.__PVT__mem_la_wstrb) 
                                           & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__mem_la_write), 4U));
        }
        if (vlSelfRef.__PVT__mem_la_write) {
            vlSelfRef.__Vdly__mem_wdata = vlSelfRef.__PVT__mem_la_wdata;
        }
        if ((0U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if ((((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.__PVT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.__PVT__mem_do_rdata))) {
                vlSelfRef.__Vdly__mem_valid = (1U & 
                                               (~ (IData)(vlSelfRef.__PVT__mem_la_use_prefetched_high_word)));
                vlSelfRef.__Vdly__mem_instr = ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                               | (IData)(vlSelfRef.__PVT__mem_do_rinst));
                vlSelfRef.__Vdly__mem_wstrb = 0U;
                vlSelfRef.__Vdly__mem_state = 1U;
            }
            if (vlSelfRef.__PVT__mem_do_wdata) {
                vlSelfRef.__Vdly__mem_valid = 1U;
                vlSelfRef.__Vdly__mem_instr = 0U;
                vlSelfRef.__Vdly__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_xfer) {
                vlSelfRef.__Vdly__mem_valid = 0U;
                vlSelfRef.__Vdly__mem_la_secondword = 0U;
                vlSelfRef.__Vdly__mem_state = (3U & 
                                               VL_SEL_IIII(32, 
                                                           (((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                                             | (IData)(vlSelfRef.__PVT__mem_do_rdata))
                                                             ? 0U
                                                             : 3U), 0U, 2U));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_xfer) {
                vlSelfRef.__Vdly__mem_valid = 0U;
                vlSelfRef.__Vdly__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_do_rinst) {
                vlSelfRef.__Vdly__mem_state = 0U;
            }
        }
    }
    if (vlSelfRef.__PVT__clear_prefetched_high_word) {
        vlSelfRef.__Vdly__prefetched_high_word = 0U;
    }
    vlSelfRef.__PVT__mem_la_secondword = vlSelfRef.__Vdly__mem_la_secondword;
    vlSelfRef.__PVT__mem_addr = vlSelfRef.__Vdly__mem_addr;
    vlSelfRef.__PVT__mem_wstrb = vlSelfRef.__Vdly__mem_wstrb;
    vlSelfRef.__PVT__mem_wdata = vlSelfRef.__Vdly__mem_wdata;
    vlSelfRef.__PVT__prefetched_high_word = vlSelfRef.__Vdly__prefetched_high_word;
    vlSelfRef.__PVT__mem_instr = vlSelfRef.__Vdly__mem_instr;
    vlSelfRef.__PVT__mem_state = vlSelfRef.__Vdly__mem_state;
    vlSelfRef.__PVT__mem_valid = vlSelfRef.__Vdly__mem_valid;
    vlSelfRef.__Vdly__trap = vlSelfRef.__PVT__trap;
    vlSelfRef.__PVT__dbg_mem_addr = vlSelfRef.__PVT__mem_addr;
    vlSelfRef.__PVT__dbg_mem_wstrb = vlSelfRef.__PVT__mem_wstrb;
    vlSelfRef.__PVT__dbg_mem_wdata = vlSelfRef.__PVT__mem_wdata;
    vlSelfRef.__PVT__dbg_mem_instr = vlSelfRef.__PVT__mem_instr;
    vlSelfRef.__PVT__dbg_mem_valid = vlSelfRef.__PVT__mem_valid;
    vlSelfRef.__Vdly__trap = 0U;
    vlSelfRef.__Vdly__reg_sh = 0U;
    vlSelfRef.__Vdly__reg_out = 0U;
    vlSelfRef.__PVT__set_mem_do_rinst = 0U;
    vlSelfRef.__PVT__set_mem_do_rdata = 0U;
    vlSelfRef.__PVT__set_mem_do_wdata = 0U;
    vlSelfRef.__Vdly__alu_out_0_q = vlSelfRef.__PVT__alu_out_0;
    vlSelfRef.__Vdly__alu_out_q = vlSelfRef.__PVT__alu_out;
    vlSelfRef.__Vdly__alu_wait = 0U;
    vlSelfRef.__Vdly__alu_wait_2 = 0U;
    if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__Vdly__dbg_rs1val = 0U;
        vlSelfRef.__Vdly__dbg_rs2val = 0U;
        vlSelfRef.__Vdly__dbg_rs1val_valid = 0U;
        vlSelfRef.__Vdly__dbg_rs2val_valid = 0U;
    }
    vlSelfRef.__Vdly__count_cycle = ((IData)(vlSelfRef.__PVT__resetn)
                                      ? (1ULL + vlSelfRef.__PVT__count_cycle)
                                      : 0ULL);
    vlSelfRef.__PVT__next_irq_pending = 0U;
    vlSelfRef.__Vdly__decoder_trigger = ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                         & (IData)(vlSelfRef.__PVT__mem_done));
    vlSelfRef.__Vdly__decoder_trigger_q = vlSelfRef.__PVT__decoder_trigger;
    vlSelfRef.__Vdly__decoder_pseudo_trigger = 0U;
    vlSelfRef.__Vdly__decoder_pseudo_trigger_q = vlSelfRef.__PVT__decoder_pseudo_trigger;
    vlSelfRef.__Vdly__do_waitirq = 0U;
    vlSelfRef.__Vdly__trace_valid = 0U;
    vlSelfRef.__Vdly__trace_data = 0ULL;
    if (vlSelfRef.__PVT__resetn) {
        if (((((((((0x80U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.__PVT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.__PVT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.__PVT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.__PVT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__mem_do_rinst = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__decoder_trigger)) 
                                                     & (~ (IData)(vlSelfRef.__PVT__do_waitirq))));
                vlSelfRef.__Vdly__mem_wordsize = 0U;
                vlSelfRef.__PVT__current_pc = vlSelfRef.__PVT__reg_next_pc;
                if (vlSelfRef.__PVT__latched_branch) {
                    vlSelfRef.__PVT__current_pc = ((IData)(vlSelfRef.__PVT__latched_store)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & ((IData)(vlSelfRef.__PVT__latched_stalu)
                                                        ? vlSelfRef.__PVT__alu_out_q
                                                        : vlSelfRef.__PVT__reg_out))
                                                    : vlSelfRef.__PVT__reg_next_pc);
                }
                vlSelfRef.__Vdly__reg_pc = vlSelfRef.__PVT__current_pc;
                vlSelfRef.__Vdly__reg_next_pc = vlSelfRef.__PVT__current_pc;
                vlSelfRef.__Vdly__latched_store = 0U;
                vlSelfRef.__Vdly__latched_stalu = 0U;
                vlSelfRef.__Vdly__latched_branch = 0U;
                vlSelfRef.__Vdly__latched_is_lu = 0U;
                vlSelfRef.__Vdly__latched_is_lh = 0U;
                vlSelfRef.__Vdly__latched_is_lb = 0U;
                vlSelfRef.__Vdly__latched_rd = vlSelfRef.__PVT__decoded_rd;
                vlSelfRef.__Vdly__latched_compr = vlSelfRef.__PVT__compressed_instr;
                if (vlSelfRef.__PVT__decoder_trigger) {
                    vlSelfRef.__Vdly__irq_delay = vlSelfRef.__PVT__irq_active;
                    vlSelfRef.__Vdly__reg_next_pc = 
                        (vlSelfRef.__PVT__current_pc 
                         + ((IData)(vlSelfRef.__PVT__compressed_instr)
                             ? 2U : 4U));
                    vlSelfRef.__Vdly__count_instr = 
                        (1ULL + vlSelfRef.__PVT__count_instr);
                    if (vlSelfRef.__PVT__instr_jal) {
                        vlSelfRef.__Vdly__mem_do_rinst = 1U;
                        vlSelfRef.__Vdly__reg_next_pc 
                            = (vlSelfRef.__PVT__current_pc 
                               + vlSelfRef.__PVT__decoded_imm_j);
                        vlSelfRef.__Vdly__latched_branch = 1U;
                    } else {
                        vlSelfRef.__Vdly__mem_do_rinst = 0U;
                        vlSelfRef.__Vdly__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.__PVT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.__PVT__instr_retirq))));
                        vlSelfRef.__Vdly__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__reg_op1 = 0U;
                vlSelfRef.__Vdly__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.__PVT__instr_trap) 
                      | (IData)(vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.__PVT__is_lui_auipc_jal))) {
                    if (vlSelfRef.__PVT__instr_trap) {
                        vlSelfRef.__Vdly__cpu_state = 0x80U;
                    } else if (vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.__PVT__instr_rdcycle) {
                            vlSelfRef.__Vdly__reg_out 
                                = VL_SEL_IQII(64, vlSelfRef.__PVT__count_cycle, 0U, 0x20U);
                        } else if (vlSelfRef.__PVT__instr_rdcycleh) {
                            vlSelfRef.__Vdly__reg_out 
                                = VL_SEL_IQII(64, vlSelfRef.__PVT__count_cycle, 0x20U, 0x20U);
                        } else if (vlSelfRef.__PVT__instr_rdinstr) {
                            vlSelfRef.__Vdly__reg_out 
                                = VL_SEL_IQII(64, vlSelfRef.__PVT__count_instr, 0U, 0x20U);
                        } else if (vlSelfRef.__PVT__instr_rdinstrh) {
                            vlSelfRef.__Vdly__reg_out 
                                = VL_SEL_IQII(64, vlSelfRef.__PVT__count_instr, 0x20U, 0x20U);
                        }
                        vlSelfRef.__Vdly__latched_store = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    } else if (vlSelfRef.__PVT__is_lui_auipc_jal) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            ((IData)(vlSelfRef.__PVT__instr_lui)
                              ? 0U : vlSelfRef.__PVT__reg_pc);
                        vlSelfRef.__Vdly__reg_op2 = vlSelfRef.__PVT__decoded_imm;
                        vlSelfRef.__Vdly__mem_do_rinst 
                            = vlSelfRef.__PVT__mem_do_prefetch;
                        vlSelfRef.__Vdly__cpu_state = 8U;
                    } else {
                        vlSelfRef.__Vdly__latched_store = 1U;
                        vlSelfRef.__Vdly__reg_out = vlSelfRef.__PVT__timer;
                        vlSelfRef.__Vdly__timer = vlSelfRef.__PVT__cpuregs_rs1;
                        vlSelfRef.__Vdly__dbg_rs1val 
                            = vlSelfRef.__PVT__cpuregs_rs1;
                        vlSelfRef.__Vdly__dbg_rs1val_valid = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.__PVT__instr_trap)))) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val_valid = 1U;
                    vlSelfRef.__Vdly__cpu_state = 1U;
                    vlSelfRef.__Vdly__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__is_slli_srli_srai) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val_valid = 1U;
                    vlSelfRef.__Vdly__reg_sh = vlSelfRef.__PVT__decoded_rs2;
                    vlSelfRef.__Vdly__cpu_state = 4U;
                } else if (vlSelfRef.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val_valid = 1U;
                    vlSelfRef.__Vdly__reg_op2 = vlSelfRef.__PVT__decoded_imm;
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 8U;
                } else {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__Vdly__dbg_rs1val_valid = 1U;
                    vlSelfRef.__Vdly__reg_sh = (0x1fU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__cpuregs_rs2, 0U, 5U));
                    vlSelfRef.__Vdly__reg_op2 = vlSelfRef.__PVT__cpuregs_rs2;
                    vlSelfRef.__Vdly__dbg_rs2val = vlSelfRef.__PVT__cpuregs_rs2;
                    vlSelfRef.__Vdly__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.__PVT__is_sb_sh_sw) {
                        vlSelfRef.__Vdly__cpu_state = 2U;
                        vlSelfRef.__Vdly__mem_do_rinst = 1U;
                    } else if (vlSelfRef.__PVT__is_sll_srl_sra) {
                        vlSelfRef.__Vdly__cpu_state = 4U;
                    } else {
                        vlSelfRef.__Vdly__mem_do_rinst 
                            = vlSelfRef.__PVT__mem_do_prefetch;
                        vlSelfRef.__Vdly__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__reg_sh = (0x1fU & 
                                            VL_SEL_IIII(32, vlSelfRef.__PVT__cpuregs_rs2, 0U, 5U));
                vlSelfRef.__Vdly__reg_op2 = vlSelfRef.__PVT__cpuregs_rs2;
                vlSelfRef.__Vdly__dbg_rs2val = vlSelfRef.__PVT__cpuregs_rs2;
                vlSelfRef.__Vdly__dbg_rs2val_valid = 1U;
                if (vlSelfRef.__PVT__is_sb_sh_sw) {
                    vlSelfRef.__Vdly__cpu_state = 2U;
                    vlSelfRef.__Vdly__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__is_sll_srl_sra) {
                    vlSelfRef.__Vdly__cpu_state = 4U;
                } else {
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__reg_out = (vlSelfRef.__PVT__reg_pc 
                                             + vlSelfRef.__PVT__decoded_imm);
                if (vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.__Vdly__latched_rd = 0U;
                    vlSelfRef.__Vdly__latched_store 
                        = vlSelfRef.__PVT__alu_out_0;
                    vlSelfRef.__Vdly__latched_branch 
                        = vlSelfRef.__PVT__alu_out_0;
                    if (vlSelfRef.__PVT__mem_done) {
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.__PVT__alu_out_0) {
                        vlSelfRef.__Vdly__decoder_trigger = 0U;
                        vlSelfRef.__PVT__set_mem_do_rinst = 1U;
                    }
                } else {
                    vlSelfRef.__Vdly__latched_branch 
                        = vlSelfRef.__PVT__instr_jalr;
                    vlSelfRef.__Vdly__latched_store = 1U;
                    vlSelfRef.__Vdly__latched_stalu = 1U;
                    vlSelfRef.__Vdly__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.__PVT__reg_sh))) {
                    vlSelfRef.__Vdly__reg_out = vlSelfRef.__PVT__reg_op1;
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.__PVT__reg_sh))) {
                    if (((IData)(vlSelfRef.__PVT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__instr_sll))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__instr_srl))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__instr_sra))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    }
                    vlSelfRef.__Vdly__reg_sh = (0x1fU 
                                                & ((IData)(vlSelfRef.__PVT__reg_sh) 
                                                   - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.__PVT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__instr_sll))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__instr_srl))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__instr_sra))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    }
                    vlSelfRef.__Vdly__reg_sh = (0x1fU 
                                                & ((IData)(vlSelfRef.__PVT__reg_sh) 
                                                   - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_do_wdata)))) {
                        if (vlSelfRef.__PVT__instr_sb) {
                            vlSelfRef.__Vdly__mem_wordsize = 2U;
                        } else if (vlSelfRef.__PVT__instr_sh) {
                            vlSelfRef.__Vdly__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__instr_sw) {
                            vlSelfRef.__Vdly__mem_wordsize = 0U;
                        }
                        vlSelfRef.__Vdly__reg_op1 = 
                            (vlSelfRef.__PVT__reg_op1 
                             + vlSelfRef.__PVT__decoded_imm);
                        vlSelfRef.__PVT__set_mem_do_wdata = 1U;
                    }
                    if (((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__mem_done))) {
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                        vlSelfRef.__Vdly__decoder_trigger = 1U;
                        vlSelfRef.__Vdly__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.__Vdly__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_do_rdata)))) {
                        if (((IData)(vlSelfRef.__PVT__instr_lb) 
                             | (IData)(vlSelfRef.__PVT__instr_lbu))) {
                            vlSelfRef.__Vdly__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.__PVT__instr_lh) 
                                    | (IData)(vlSelfRef.__PVT__instr_lhu))) {
                            vlSelfRef.__Vdly__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__instr_lw) {
                            vlSelfRef.__Vdly__mem_wordsize = 0U;
                        }
                        vlSelfRef.__Vdly__latched_is_lu 
                            = vlSelfRef.__PVT__is_lbu_lhu_lw;
                        vlSelfRef.__Vdly__latched_is_lh 
                            = vlSelfRef.__PVT__instr_lh;
                        vlSelfRef.__Vdly__latched_is_lb 
                            = vlSelfRef.__PVT__instr_lb;
                        vlSelfRef.__Vdly__reg_op1 = 
                            (vlSelfRef.__PVT__reg_op1 
                             + vlSelfRef.__PVT__decoded_imm);
                        vlSelfRef.__PVT__set_mem_do_rdata = 1U;
                    }
                    if (((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__mem_done))) {
                        if (vlSelfRef.__PVT__latched_is_lu) {
                            vlSelfRef.__Vdly__reg_out 
                                = vlSelfRef.__PVT__mem_rdata_word;
                        } else if (vlSelfRef.__PVT__latched_is_lh) {
                            vlSelfRef.__Vdly__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_word, 0U, 0x10U)));
                        } else if (vlSelfRef.__PVT__latched_is_lb) {
                            vlSelfRef.__Vdly__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_word, 0U, 8U)));
                        }
                        vlSelfRef.__Vdly__decoder_trigger = 1U;
                        vlSelfRef.__Vdly__decoder_pseudo_trigger = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__reg_pc = 0U;
        vlSelfRef.__Vdly__reg_next_pc = 0U;
        vlSelfRef.__Vdly__count_instr = 0ULL;
        vlSelfRef.__Vdly__latched_store = 0U;
        vlSelfRef.__Vdly__latched_stalu = 0U;
        vlSelfRef.__Vdly__latched_branch = 0U;
        vlSelfRef.__Vdly__latched_trace = 0U;
        vlSelfRef.__Vdly__latched_is_lu = 0U;
        vlSelfRef.__Vdly__latched_is_lh = 0U;
        vlSelfRef.__Vdly__latched_is_lb = 0U;
        vlSelfRef.__Vdly__pcpi_valid = 0U;
        vlSelfRef.__Vdly__pcpi_timeout = 0U;
        vlSelfRef.__Vdly__irq_active = 0U;
        vlSelfRef.__Vdly__irq_delay = 0U;
        vlSelfRef.__Vdly__irq_mask = 0xffffffffU;
        vlSelfRef.__PVT__next_irq_pending = 0U;
        vlSelfRef.__Vdly__irq_state = 0U;
        vlSelfRef.__Vdly__eoi = 0U;
        vlSelfRef.__Vdly__timer = 0U;
        vlSelfRef.__Vdly__cpu_state = 0x40U;
    }
    if (((IData)(vlSelfRef.__PVT__resetn) & ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                             | (IData)(vlSelfRef.__PVT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.__PVT__mem_wordsize)) 
             & (0U != (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U))))) {
            vlSelfRef.__Vdly__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__mem_wordsize)) 
             & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U))) {
            vlSelfRef.__Vdly__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelfRef.__PVT__resetn) & (IData)(vlSelfRef.__PVT__mem_do_rinst)) 
         & VL_REDOR_I((3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_pc, 0U, 2U))))) {
        vlSelfRef.__Vdly__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__resetn)) 
               | (IData)(vlSelfRef.__PVT__mem_done)))) {
        vlSelfRef.__Vdly__mem_do_prefetch = 0U;
        vlSelfRef.__Vdly__mem_do_rinst = 0U;
        vlSelfRef.__Vdly__mem_do_rdata = 0U;
        vlSelfRef.__Vdly__mem_do_wdata = 0U;
    }
    if (vlSelfRef.__PVT__set_mem_do_rinst) {
        vlSelfRef.__Vdly__mem_do_rinst = 1U;
    }
    if (vlSelfRef.__PVT__set_mem_do_rdata) {
        vlSelfRef.__Vdly__mem_do_rdata = 1U;
    }
    if (vlSelfRef.__PVT__set_mem_do_wdata) {
        vlSelfRef.__Vdly__mem_do_wdata = 1U;
    }
    vlSelfRef.__Vdly__irq_pending = vlSelfRef.__PVT__next_irq_pending;
    vlSelfRef.__PVT__current_pc = 0U;
    vlSelfRef.__PVT__trap = vlSelfRef.__Vdly__trap;
    vlSelfRef.__PVT__reg_sh = vlSelfRef.__Vdly__reg_sh;
    vlSelfRef.__PVT__alu_out_0_q = vlSelfRef.__Vdly__alu_out_0_q;
    vlSelfRef.__PVT__alu_wait = vlSelfRef.__Vdly__alu_wait;
    vlSelfRef.__PVT__alu_wait_2 = vlSelfRef.__Vdly__alu_wait_2;
    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__Vdly__dbg_rs1val;
    vlSelfRef.__PVT__dbg_rs2val = vlSelfRef.__Vdly__dbg_rs2val;
    vlSelfRef.__PVT__dbg_rs1val_valid = vlSelfRef.__Vdly__dbg_rs1val_valid;
    vlSelfRef.__PVT__dbg_rs2val_valid = vlSelfRef.__Vdly__dbg_rs2val_valid;
    vlSelfRef.__PVT__count_cycle = vlSelfRef.__Vdly__count_cycle;
    vlSelfRef.__PVT__decoder_trigger_q = vlSelfRef.__Vdly__decoder_trigger_q;
    vlSelfRef.__PVT__do_waitirq = vlSelfRef.__Vdly__do_waitirq;
    vlSelfRef.__PVT__trace_valid = vlSelfRef.__Vdly__trace_valid;
    vlSelfRef.__PVT__trace_data = vlSelfRef.__Vdly__trace_data;
    vlSelfRef.__PVT__latched_is_lu = vlSelfRef.__Vdly__latched_is_lu;
    vlSelfRef.__PVT__latched_is_lh = vlSelfRef.__Vdly__latched_is_lh;
    vlSelfRef.__PVT__latched_is_lb = vlSelfRef.__Vdly__latched_is_lb;
    vlSelfRef.__PVT__irq_delay = vlSelfRef.__Vdly__irq_delay;
    vlSelfRef.__PVT__count_instr = vlSelfRef.__Vdly__count_instr;
    vlSelfRef.__PVT__timer = vlSelfRef.__Vdly__timer;
    vlSelfRef.__PVT__latched_trace = vlSelfRef.__Vdly__latched_trace;
    vlSelfRef.__PVT__pcpi_valid = vlSelfRef.__Vdly__pcpi_valid;
    vlSelfRef.__PVT__pcpi_timeout = vlSelfRef.__Vdly__pcpi_timeout;
    vlSelfRef.__PVT__irq_active = vlSelfRef.__Vdly__irq_active;
    vlSelfRef.__PVT__irq_mask = vlSelfRef.__Vdly__irq_mask;
    vlSelfRef.__PVT__eoi = vlSelfRef.__Vdly__eoi;
    vlSelfRef.__PVT__irq_pending = vlSelfRef.__Vdly__irq_pending;
    vlSelfRef.__PVT__irq_state = vlSelfRef.__Vdly__irq_state;
    vlSelfRef.__PVT__latched_rd = vlSelfRef.__Vdly__latched_rd;
    vlSelfRef.__PVT__reg_next_pc = vlSelfRef.__Vdly__reg_next_pc;
    vlSelfRef.__PVT__mem_wordsize = vlSelfRef.__Vdly__mem_wordsize;
    vlSelfRef.__PVT__alu_out_q = vlSelfRef.__Vdly__alu_out_q;
    vlSelfRef.__PVT__reg_pc = vlSelfRef.__Vdly__reg_pc;
    vlSelfRef.__PVT__latched_stalu = vlSelfRef.__Vdly__latched_stalu;
    vlSelfRef.__PVT__latched_compr = vlSelfRef.__Vdly__latched_compr;
    vlSelfRef.__PVT__mem_do_wdata = vlSelfRef.__Vdly__mem_do_wdata;
    vlSelfRef.__PVT__cpu_state = vlSelfRef.__Vdly__cpu_state;
    vlSelfRef.__PVT__mem_do_rdata = vlSelfRef.__Vdly__mem_do_rdata;
    vlSelfRef.__PVT__decoder_pseudo_trigger_q = vlSelfRef.__Vdly__decoder_pseudo_trigger_q;
    vlSelfRef.__PVT__mem_do_prefetch = vlSelfRef.__Vdly__mem_do_prefetch;
    vlSelfRef.__PVT__reg_out = vlSelfRef.__Vdly__reg_out;
    vlSelfRef.__PVT__latched_store = vlSelfRef.__Vdly__latched_store;
    vlSelfRef.__PVT__latched_branch = vlSelfRef.__Vdly__latched_branch;
    vlSelfRef.__PVT__reg_op2 = vlSelfRef.__Vdly__reg_op2;
    vlSelfRef.__PVT__reg_op1 = vlSelfRef.__Vdly__reg_op1;
    vlSelfRef.__Vdly__compressed_instr = vlSelfRef.__PVT__compressed_instr;
    vlSelfRef.__Vdly__is_lui_auipc_jal = vlSelfRef.__PVT__is_lui_auipc_jal;
    vlSelfRef.__Vdly__is_slli_srli_srai = vlSelfRef.__PVT__is_slli_srli_srai;
    vlSelfRef.__Vdly__is_jalr_addi_slti_sltiu_xori_ori_andi 
        = vlSelfRef.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi;
    vlSelfRef.__Vdly__is_sll_srl_sra = vlSelfRef.__PVT__is_sll_srl_sra;
    vlSelfRef.__Vdly__is_lbu_lhu_lw = vlSelfRef.__PVT__is_lbu_lhu_lw;
    vlSelfRef.__Vdly__decoded_rd = vlSelfRef.__PVT__decoded_rd;
    vlSelfRef.__Vdly__decoded_imm = vlSelfRef.__PVT__decoded_imm;
    vlSelfRef.__Vdly__decoded_rs2 = vlSelfRef.__PVT__decoded_rs2;
    vlSelfRef.__Vdly__instr_retirq = vlSelfRef.__PVT__instr_retirq;
    vlSelfRef.__Vdly__instr_slli = vlSelfRef.__PVT__instr_slli;
    vlSelfRef.__Vdly__instr_sll = vlSelfRef.__PVT__instr_sll;
    vlSelfRef.__Vdly__instr_srli = vlSelfRef.__PVT__instr_srli;
    vlSelfRef.__Vdly__instr_srl = vlSelfRef.__PVT__instr_srl;
    vlSelfRef.__Vdly__instr_sb = vlSelfRef.__PVT__instr_sb;
    vlSelfRef.__Vdly__instr_sh = vlSelfRef.__PVT__instr_sh;
    vlSelfRef.__Vdly__instr_sw = vlSelfRef.__PVT__instr_sw;
    vlSelfRef.__Vdly__instr_lb = vlSelfRef.__PVT__instr_lb;
    vlSelfRef.__Vdly__instr_lh = vlSelfRef.__PVT__instr_lh;
    vlSelfRef.__Vdly__instr_rdcycle = vlSelfRef.__PVT__instr_rdcycle;
    vlSelfRef.__Vdly__instr_rdcycleh = vlSelfRef.__PVT__instr_rdcycleh;
    vlSelfRef.__Vdly__instr_rdinstr = vlSelfRef.__PVT__instr_rdinstr;
    vlSelfRef.__Vdly__instr_rdinstrh = vlSelfRef.__PVT__instr_rdinstrh;
    vlSelfRef.__Vdly__instr_srai = vlSelfRef.__PVT__instr_srai;
    vlSelfRef.__Vdly__instr_sra = vlSelfRef.__PVT__instr_sra;
    vlSelfRef.__PVT__cpuregs_waddr = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__latched_rd));
    VL_CONST_W_1X(128,vlSelfRef.__PVT__dbg_ascii_state,0x00000000);
    if ((0x80U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_1X(128,vlSelfRef.__PVT__dbg_ascii_state,0x74726170);
    }
    if ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_2X(128,vlSelfRef.__PVT__dbg_ascii_state,0x00000066,0x65746368);
    }
    if ((0x20U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_2X(128,vlSelfRef.__PVT__dbg_ascii_state,0x00006c64,0x5f727331);
    }
    if ((0x10U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_2X(128,vlSelfRef.__PVT__dbg_ascii_state,0x00006c64,0x5f727332);
    }
    if ((8U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_1X(128,vlSelfRef.__PVT__dbg_ascii_state,0x65786563);
    }
    if ((4U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_2X(128,vlSelfRef.__PVT__dbg_ascii_state,0x00000073,0x68696674);
    }
    if ((2U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_2X(128,vlSelfRef.__PVT__dbg_ascii_state,0x00000073,0x746d656d);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        VL_CONST_W_2X(128,vlSelfRef.__PVT__dbg_ascii_state,0x0000006c,0x646d656d);
    }
    vlSelfRef.__PVT__next_pc = (((IData)(vlSelfRef.__PVT__latched_store) 
                                 & (IData)(vlSelfRef.__PVT__latched_branch))
                                 ? (0xfffffffeU & vlSelfRef.__PVT__reg_out)
                                 : vlSelfRef.__PVT__reg_next_pc);
    vlSelfRef.__PVT__cpuregs_write = 0U;
    vlSelfRef.__PVT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        if (vlSelfRef.__PVT__latched_branch) {
            vlSelfRef.__PVT__cpuregs_wrdata = (vlSelfRef.__PVT__reg_pc 
                                               + ((IData)(vlSelfRef.__PVT__latched_compr)
                                                   ? 2U
                                                   : 4U));
            vlSelfRef.__PVT__cpuregs_write = 1U;
        } else if (((IData)(vlSelfRef.__PVT__latched_store) 
                    & (~ (IData)(vlSelfRef.__PVT__latched_branch)))) {
            vlSelfRef.__PVT__cpuregs_wrdata = ((IData)(vlSelfRef.__PVT__latched_stalu)
                                                ? vlSelfRef.__PVT__alu_out_q
                                                : vlSelfRef.__PVT__reg_out);
            vlSelfRef.__PVT__cpuregs_write = 1U;
        }
    }
    vlSelfRef.__PVT__pcpi_rs2 = vlSelfRef.__PVT__reg_op2;
    vlSelfRef.__PVT__pcpi_rs1 = vlSelfRef.__PVT__reg_op1;
    vlSelfRef.__Vdly__is_lui_auipc_jal = ((IData)(vlSelfRef.__PVT__instr_lui) 
                                          | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                             | (IData)(vlSelfRef.__PVT__instr_jal)));
    vlSelfRef.__Vdly__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.__PVT__instr_lui) | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                                  | ((IData)(vlSelfRef.__PVT__instr_jal) 
                                                     | ((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                        | ((IData)(vlSelfRef.__PVT__instr_addi) 
                                                           | ((IData)(vlSelfRef.__PVT__instr_add) 
                                                              | (IData)(vlSelfRef.__PVT__instr_sub)))))));
    vlSelfRef.__Vdly__is_slti_blt_slt = ((IData)(vlSelfRef.__PVT__instr_slti) 
                                         | ((IData)(vlSelfRef.__PVT__instr_blt) 
                                            | (IData)(vlSelfRef.__PVT__instr_slt)));
    vlSelfRef.__Vdly__is_sltiu_bltu_sltu = ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                            | ((IData)(vlSelfRef.__PVT__instr_bltu) 
                                               | (IData)(vlSelfRef.__PVT__instr_sltu)));
    vlSelfRef.__Vdly__is_lbu_lhu_lw = ((IData)(vlSelfRef.__PVT__instr_lbu) 
                                       | ((IData)(vlSelfRef.__PVT__instr_lhu) 
                                          | (IData)(vlSelfRef.__PVT__instr_lw)));
    vlSelfRef.__Vdly__is_compare = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                    | ((IData)(vlSelfRef.__PVT__instr_slti) 
                                       | ((IData)(vlSelfRef.__PVT__instr_slt) 
                                          | ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                             | (IData)(vlSelfRef.__PVT__instr_sltu)))));
    if (((IData)(vlSelfRef.__PVT__mem_do_rinst) & (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__Vdly__instr_lui = (0x37U == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        vlSelfRef.__Vdly__instr_auipc = (0x17U == (0x7fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        vlSelfRef.__Vdly__instr_jal = (0x6fU == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        vlSelfRef.__Vdly__instr_jalr = ((0x67U == (0x7fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U))) 
                                        & (0U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_retirq = 0U;
        vlSelfRef.__Vdly__instr_waitirq = 0U;
        vlSelfRef.__Vdly__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        vlSelfRef.__Vdly__is_lb_lh_lw_lbu_lhu = (3U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        vlSelfRef.__Vdly__is_sb_sh_sw = (0x23U == (0x7fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        vlSelfRef.__Vdly__is_alu_reg_imm = (0x13U == 
                                            (0x7fU 
                                             & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        vlSelfRef.__Vdly__is_alu_reg_reg = (0x33U == 
                                            (0x7fU 
                                             & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 7U)));
        VL_ASSIGNSEL_II(32,12,0x14U, vlSelfRef.__Vdly__decoded_imm_j, 
                        (0xfffU & VL_SEL_IIII(32, VL_EXTENDS_II(32,21, 
                                                                VL_CONCAT_III(21,20,1, 
                                                                              (0xfffffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0xcU, 0x14U)), 0U)), 0x14U, 0xcU)));
        VL_ASSIGNSEL_II(32,10,1U, vlSelfRef.__Vdly__decoded_imm_j, 
                        (0x3ffU & VL_SEL_IIII(32, VL_EXTENDS_II(32,21, 
                                                                VL_CONCAT_III(21,20,1, 
                                                                              (0xfffffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0xcU, 0x14U)), 0U)), 0xaU, 0xaU)));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__Vdly__decoded_imm_j, 
                        (1U & VL_BITSEL_IIII(32, VL_EXTENDS_II(32,21, 
                                                               VL_CONCAT_III(21,20,1, 
                                                                             (0xfffffU 
                                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0xcU, 0x14U)), 0U)), 9U)));
        VL_ASSIGNSEL_II(32,8,0xcU, vlSelfRef.__Vdly__decoded_imm_j, 
                        (0xffU & VL_SEL_IIII(32, VL_EXTENDS_II(32,21, 
                                                               VL_CONCAT_III(21,20,1, 
                                                                             (0xfffffU 
                                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0xcU, 0x14U)), 0U)), 1U, 8U)));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__Vdly__decoded_imm_j, 
                        (1U & VL_BITSEL_IIII(32, VL_EXTENDS_II(32,21, 
                                                               VL_CONCAT_III(21,20,1, 
                                                                             (0xfffffU 
                                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0xcU, 0x14U)), 0U)), 0U)));
        vlSelfRef.__Vdly__decoded_rd = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 7U, 5U));
        vlSelfRef.__Vdly__decoded_rs1 = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0xfU, 5U));
        vlSelfRef.__Vdly__decoded_rs2 = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0x14U, 5U));
        vlSelfRef.__Vdly__compressed_instr = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__decoder_pseudo_trigger)))) {
        vlSelfRef.__Vdly__pcpi_insn = 0U;
        vlSelfRef.__Vdly__instr_beq = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (0U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_bne = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (1U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_blt = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (4U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_bge = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (5U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_bltu = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                        & (6U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_bgeu = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                        & (7U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_lb = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                      & (0U == (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_lh = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                      & (1U == (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_lw = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                      & (2U == (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_lbu = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                       & (4U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_lhu = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                       & (5U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_sb = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                      & (0U == (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_sh = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                      & (1U == (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_sw = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                      & (2U == (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_addi = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                        & (0U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_slti = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                        & (2U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_sltiu = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                         & (3U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_xori = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                        & (4U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_ori = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (6U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_andi = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                        & (7U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))));
        vlSelfRef.__Vdly__instr_slli = (((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                         & (1U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                        & (0U == (0x7fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_srli = (((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                         & (5U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                        & (0U == (0x7fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_srai = (((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                         & (5U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                        & (0x20U == 
                                           (0x7fU & 
                                            VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_add = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (0U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0U == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_sub = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (0U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0x20U == 
                                          (0x7fU & 
                                           VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_sll = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (1U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0U == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_slt = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (2U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0U == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_sltu = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                         & (3U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                        & (0U == (0x7fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_xor = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (4U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0U == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_srl = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (5U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0U == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_sra = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (5U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0x20U == 
                                          (0x7fU & 
                                           VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_or = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                       & (6U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                      & (0U == (0x7fU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_and = (((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                        & (7U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U)))) 
                                       & (0U == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U))));
        vlSelfRef.__Vdly__instr_rdcycle = (((0x73U 
                                             == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0U, 7U))) 
                                            & (0xc0002U 
                                               == (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 0x14U)))) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0U, 7U))) 
                                              & (0xc0102U 
                                                 == 
                                                 (0xfffffU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 0x14U)))));
        vlSelfRef.__Vdly__instr_rdcycleh = (((0x73U 
                                              == (0x7fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0U, 7U))) 
                                             & (0xc8002U 
                                                == 
                                                (0xfffffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 0x14U)))) 
                                            | ((0x73U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0U, 7U))) 
                                               & (0xc8102U 
                                                  == 
                                                  (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 0x14U)))));
        vlSelfRef.__Vdly__instr_rdinstr = ((0x73U == 
                                            (0x7fU 
                                             & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0U, 7U))) 
                                           & (0xc0202U 
                                              == (0xfffffU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 0x14U))));
        vlSelfRef.__Vdly__instr_rdinstrh = ((0x73U 
                                             == (0x7fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0U, 7U))) 
                                            & (0xc8202U 
                                               == (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 0x14U))));
        vlSelfRef.__Vdly__instr_ecall_ebreak = (((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0U, 7U))) 
                                                 & (~ 
                                                    VL_REDOR_I(
                                                               (0x7ffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x15U, 0xbU))))) 
                                                & (~ 
                                                   VL_REDOR_I(
                                                              (0x1fffU 
                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 7U, 0xdU)))));
        vlSelfRef.__Vdly__instr_getq = 0U;
        vlSelfRef.__Vdly__instr_setq = 0U;
        vlSelfRef.__Vdly__instr_maskirq = 0U;
        vlSelfRef.__Vdly__instr_timer = 0U;
        vlSelfRef.__Vdly__is_slli_srli_srai = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                               & (((1U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                                                   & (0U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U)))) 
                                                  | (((5U 
                                                       == 
                                                       (7U 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                                                      & (0U 
                                                         == 
                                                         (0x7fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U)))) 
                                                     | ((5U 
                                                         == 
                                                         (7U 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                                                        & (0x20U 
                                                           == 
                                                           (0x7fU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U)))))));
        vlSelfRef.__Vdly__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.__PVT__instr_jalr) 
               | ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                  & ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                     | ((2U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                        | ((3U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                           | ((4U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                              | ((6U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                                 | (7U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))))))))));
        vlSelfRef.__Vdly__is_sll_srl_sra = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                            & (((1U 
                                                 == 
                                                 (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                                                & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U)))) 
                                               | (((5U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                                                   & (0U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U)))) 
                                                  | ((5U 
                                                      == 
                                                      (7U 
                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 3U))) 
                                                     & (0x20U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U)))))));
        vlSelfRef.__Vdly__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.__Vdly__is_compare = 0U;
        vlSelfRef.__Vdly__decoded_imm = ((IData)(vlSelfRef.__PVT__instr_jal)
                                          ? vlSelfRef.__PVT__decoded_imm_j
                                          : (((IData)(vlSelfRef.__PVT__instr_lui) 
                                              | (IData)(vlSelfRef.__PVT__instr_auipc))
                                              ? VL_SHIFTL_III(32,32,32, 
                                                              VL_EXTEND_II(32,20, 
                                                                           (0xfffffU 
                                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0xcU, 0x14U))), 0xcU)
                                              : (((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                  | ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                                     | (IData)(vlSelfRef.__PVT__is_alu_reg_imm)))
                                                  ? 
                                                 VL_EXTENDS_II(32,12, 
                                                               (0xfffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x14U, 0xcU)))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu)
                                                   ? 
                                                  VL_EXTENDS_II(32,13, 
                                                                VL_CONCAT_III(13,2,11, 
                                                                              VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 7U))), 
                                                                              VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 8U, 4U)), 0U))))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_sb_sh_sw)
                                                    ? 
                                                   VL_EXTENDS_II(32,12, 
                                                                 VL_CONCAT_III(12,7,5, 
                                                                               (0x7fU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 0x19U, 7U)), 
                                                                               (0x1fU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_q, 7U, 5U))))
                                                    : 0U)))));
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__resetn)))) {
        vlSelfRef.__Vdly__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.__Vdly__is_compare = 0U;
        vlSelfRef.__Vdly__instr_beq = 0U;
        vlSelfRef.__Vdly__instr_bne = 0U;
        vlSelfRef.__Vdly__instr_blt = 0U;
        vlSelfRef.__Vdly__instr_bge = 0U;
        vlSelfRef.__Vdly__instr_bltu = 0U;
        vlSelfRef.__Vdly__instr_bgeu = 0U;
        vlSelfRef.__Vdly__instr_addi = 0U;
        vlSelfRef.__Vdly__instr_slti = 0U;
        vlSelfRef.__Vdly__instr_sltiu = 0U;
        vlSelfRef.__Vdly__instr_xori = 0U;
        vlSelfRef.__Vdly__instr_ori = 0U;
        vlSelfRef.__Vdly__instr_andi = 0U;
        vlSelfRef.__Vdly__instr_add = 0U;
        vlSelfRef.__Vdly__instr_sub = 0U;
        vlSelfRef.__Vdly__instr_sll = 0U;
        vlSelfRef.__Vdly__instr_slt = 0U;
        vlSelfRef.__Vdly__instr_sltu = 0U;
        vlSelfRef.__Vdly__instr_xor = 0U;
        vlSelfRef.__Vdly__instr_srl = 0U;
        vlSelfRef.__Vdly__instr_sra = 0U;
        vlSelfRef.__Vdly__instr_or = 0U;
        vlSelfRef.__Vdly__instr_and = 0U;
    }
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__waddr 
        = vlSelfRef.__PVT__cpuregs_waddr;
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__wdata 
        = vlSelfRef.__PVT__cpuregs_wrdata;
    vlSelfRef.__PVT__is_lui_auipc_jal = vlSelfRef.__Vdly__is_lui_auipc_jal;
    vlSelfRef.__PVT__is_lbu_lhu_lw = vlSelfRef.__Vdly__is_lbu_lhu_lw;
    vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu = vlSelfRef.__Vdly__is_beq_bne_blt_bge_bltu_bgeu;
    vlSelfRef.__PVT__is_alu_reg_imm = vlSelfRef.__Vdly__is_alu_reg_imm;
    vlSelfRef.__PVT__is_alu_reg_reg = vlSelfRef.__Vdly__is_alu_reg_reg;
    vlSelfRef.__PVT__compressed_instr = vlSelfRef.__Vdly__compressed_instr;
    vlSelfRef.__PVT__decoder_pseudo_trigger = vlSelfRef.__Vdly__decoder_pseudo_trigger;
    vlSelfRef.__PVT__pcpi_insn = vlSelfRef.__Vdly__pcpi_insn;
    vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu = vlSelfRef.__Vdly__is_lb_lh_lw_lbu_lhu;
    vlSelfRef.__PVT__is_sb_sh_sw = vlSelfRef.__Vdly__is_sb_sh_sw;
    vlSelfRef.__PVT__instr_ecall_ebreak = vlSelfRef.__Vdly__instr_ecall_ebreak;
    vlSelfRef.__PVT__is_slli_srli_srai = vlSelfRef.__Vdly__is_slli_srli_srai;
    vlSelfRef.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi 
        = vlSelfRef.__Vdly__is_jalr_addi_slti_sltiu_xori_ori_andi;
    vlSelfRef.__PVT__is_sll_srl_sra = vlSelfRef.__Vdly__is_sll_srl_sra;
    vlSelfRef.__PVT__decoded_imm_j = vlSelfRef.__Vdly__decoded_imm_j;
    vlSelfRef.__PVT__decoder_trigger = vlSelfRef.__Vdly__decoder_trigger;
    vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub 
        = vlSelfRef.__Vdly__is_lui_auipc_jal_jalr_addi_add_sub;
    vlSelfRef.__PVT__is_slti_blt_slt = vlSelfRef.__Vdly__is_slti_blt_slt;
    vlSelfRef.__PVT__is_sltiu_bltu_sltu = vlSelfRef.__Vdly__is_sltiu_bltu_sltu;
    vlSelfRef.__PVT__is_compare = vlSelfRef.__Vdly__is_compare;
    vlSelfRef.__PVT__decoded_rd = vlSelfRef.__Vdly__decoded_rd;
    vlSelfRef.__PVT__decoded_imm = vlSelfRef.__Vdly__decoded_imm;
    vlSelfRef.__PVT__decoded_rs1 = vlSelfRef.__Vdly__decoded_rs1;
    vlSelfRef.__PVT__decoded_rs2 = vlSelfRef.__Vdly__decoded_rs2;
    vlSelfRef.__PVT__mem_do_rinst = vlSelfRef.__Vdly__mem_do_rinst;
    vlSelfRef.__PVT__instr_lui = vlSelfRef.__Vdly__instr_lui;
    vlSelfRef.__PVT__instr_auipc = vlSelfRef.__Vdly__instr_auipc;
    vlSelfRef.__PVT__instr_jal = vlSelfRef.__Vdly__instr_jal;
    vlSelfRef.__PVT__instr_jalr = vlSelfRef.__Vdly__instr_jalr;
    vlSelfRef.__PVT__instr_retirq = vlSelfRef.__Vdly__instr_retirq;
    vlSelfRef.__PVT__instr_waitirq = vlSelfRef.__Vdly__instr_waitirq;
    vlSelfRef.__PVT__instr_blt = vlSelfRef.__Vdly__instr_blt;
    vlSelfRef.__PVT__instr_bltu = vlSelfRef.__Vdly__instr_bltu;
    vlSelfRef.__PVT__instr_lb = vlSelfRef.__Vdly__instr_lb;
    vlSelfRef.__PVT__instr_lh = vlSelfRef.__Vdly__instr_lh;
    vlSelfRef.__PVT__instr_lw = vlSelfRef.__Vdly__instr_lw;
    vlSelfRef.__PVT__instr_lbu = vlSelfRef.__Vdly__instr_lbu;
    vlSelfRef.__PVT__instr_lhu = vlSelfRef.__Vdly__instr_lhu;
    vlSelfRef.__PVT__instr_sb = vlSelfRef.__Vdly__instr_sb;
    vlSelfRef.__PVT__instr_sh = vlSelfRef.__Vdly__instr_sh;
    vlSelfRef.__PVT__instr_sw = vlSelfRef.__Vdly__instr_sw;
    vlSelfRef.__PVT__instr_addi = vlSelfRef.__Vdly__instr_addi;
    vlSelfRef.__PVT__instr_slti = vlSelfRef.__Vdly__instr_slti;
    vlSelfRef.__PVT__instr_sltiu = vlSelfRef.__Vdly__instr_sltiu;
    vlSelfRef.__PVT__instr_slli = vlSelfRef.__Vdly__instr_slli;
    vlSelfRef.__PVT__instr_srli = vlSelfRef.__Vdly__instr_srli;
    vlSelfRef.__PVT__instr_add = vlSelfRef.__Vdly__instr_add;
    vlSelfRef.__PVT__instr_sll = vlSelfRef.__Vdly__instr_sll;
    vlSelfRef.__PVT__instr_slt = vlSelfRef.__Vdly__instr_slt;
    vlSelfRef.__PVT__instr_sltu = vlSelfRef.__Vdly__instr_sltu;
    vlSelfRef.__PVT__instr_srl = vlSelfRef.__Vdly__instr_srl;
    vlSelfRef.__PVT__instr_getq = vlSelfRef.__Vdly__instr_getq;
    vlSelfRef.__PVT__instr_setq = vlSelfRef.__Vdly__instr_setq;
    vlSelfRef.__PVT__instr_maskirq = vlSelfRef.__Vdly__instr_maskirq;
    vlSelfRef.__PVT__instr_timer = vlSelfRef.__Vdly__instr_timer;
    vlSelfRef.__PVT__instr_rdcycle = vlSelfRef.__Vdly__instr_rdcycle;
    vlSelfRef.__PVT__instr_rdcycleh = vlSelfRef.__Vdly__instr_rdcycleh;
    vlSelfRef.__PVT__instr_rdinstr = vlSelfRef.__Vdly__instr_rdinstr;
    vlSelfRef.__PVT__instr_rdinstrh = vlSelfRef.__Vdly__instr_rdinstrh;
    vlSelfRef.__PVT__instr_beq = vlSelfRef.__Vdly__instr_beq;
    vlSelfRef.__PVT__instr_bne = vlSelfRef.__Vdly__instr_bne;
    vlSelfRef.__PVT__instr_bge = vlSelfRef.__Vdly__instr_bge;
    vlSelfRef.__PVT__instr_bgeu = vlSelfRef.__Vdly__instr_bgeu;
    vlSelfRef.__PVT__instr_xori = vlSelfRef.__Vdly__instr_xori;
    vlSelfRef.__PVT__instr_ori = vlSelfRef.__Vdly__instr_ori;
    vlSelfRef.__PVT__instr_andi = vlSelfRef.__Vdly__instr_andi;
    vlSelfRef.__PVT__instr_xor = vlSelfRef.__Vdly__instr_xor;
    vlSelfRef.__PVT__instr_or = vlSelfRef.__Vdly__instr_or;
    vlSelfRef.__PVT__instr_and = vlSelfRef.__Vdly__instr_and;
    vlSelfRef.__Vdly__mem_rdata_q = vlSelfRef.__PVT__mem_rdata_q;
    vlSelfRef.__PVT__instr_srai = vlSelfRef.__Vdly__instr_srai;
    vlSelfRef.__PVT__instr_sub = vlSelfRef.__Vdly__instr_sub;
    vlSelfRef.__PVT__instr_sra = vlSelfRef.__Vdly__instr_sra;
    vlSelfRef.__PVT__launch_next_insn = ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                                         & (IData)(vlSelfRef.__PVT__decoder_trigger));
    vlSelfRef.__PVT__cpuregs_raddr1 = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__decoded_rs1));
    vlSelfRef.__PVT__cpuregs_raddr2 = (0x3fU & VL_SEL_IIII(32, 
                                                           VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__decoded_rs2)), 0U, 6U));
    vlSelfRef.__PVT__mem_busy = ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                 | ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                    | ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                       | (IData)(vlSelfRef.__PVT__mem_do_wdata))));
    vlSelfRef.__PVT__mem_la_addr = (((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                     | (IData)(vlSelfRef.__PVT__mem_do_rinst))
                                     ? VL_CONCAT_III(32,30,2, 
                                                     (0x3fffffffU 
                                                      & (VL_SEL_IIII(32, vlSelfRef.__PVT__next_pc, 2U, 0x1eU) 
                                                         + 
                                                         VL_EXTEND_II(30,1, (IData)(vlSelfRef.__PVT__mem_la_firstword_xfer)))), 0U)
                                     : VL_CONCAT_III(32,30,2, 
                                                     (0x3fffffffU 
                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 2U, 0x1eU)), 0U));
    vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__instr_rdinstrh))));
    if (vlSelfRef.__PVT__mem_xfer) {
        vlSelfRef.__Vdly__mem_rdata_q = vlSelfRef.__PVT__mem_rdata;
        vlSelfRef.__Vdly__next_insn_opcode = vlSelfRef.__PVT__mem_rdata;
    }
    vlSelfRef.__PVT__instr_trap = (1U & (~ (((IData)(vlSelfRef.__PVT__instr_lui) 
                                             | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                                | ((IData)(vlSelfRef.__PVT__instr_jal) 
                                                   | ((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                      | ((IData)(vlSelfRef.__PVT__instr_beq) 
                                                         | ((IData)(vlSelfRef.__PVT__instr_bne) 
                                                            | ((IData)(vlSelfRef.__PVT__instr_blt) 
                                                               | ((IData)(vlSelfRef.__PVT__instr_bge) 
                                                                  | ((IData)(vlSelfRef.__PVT__instr_bltu) 
                                                                     | ((IData)(vlSelfRef.__PVT__instr_bgeu) 
                                                                        | ((IData)(vlSelfRef.__PVT__instr_lb) 
                                                                           | ((IData)(vlSelfRef.__PVT__instr_lh) 
                                                                              | ((IData)(vlSelfRef.__PVT__instr_lw) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_lbu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_lhu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sb) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sh) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sw) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_addi) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slti) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_add) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slt) 
                                                                                | (IData)(vlSelfRef.__PVT__instr_sltu)))))))))))))))))))))))))))))))) 
                                            | ((IData)(vlSelfRef.__PVT__instr_xor) 
                                               | ((IData)(vlSelfRef.__PVT__instr_srl) 
                                                  | ((IData)(vlSelfRef.__PVT__instr_sra) 
                                                     | ((IData)(vlSelfRef.__PVT__instr_or) 
                                                        | ((IData)(vlSelfRef.__PVT__instr_and) 
                                                           | ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
                                                              | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
                                                                 | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                                                                    | ((IData)(vlSelfRef.__PVT__instr_rdinstrh) 
                                                                       | ((IData)(vlSelfRef.__PVT__instr_getq) 
                                                                          | ((IData)(vlSelfRef.__PVT__instr_setq) 
                                                                             | ((IData)(vlSelfRef.__PVT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.__PVT__instr_timer))))))))))))))))));
    vlSelfRef.__PVT__new_ascii_instr = 0ULL;
    if (vlSelfRef.__PVT__instr_lui) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelfRef.__PVT__instr_auipc) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelfRef.__PVT__instr_jal) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelfRef.__PVT__instr_jalr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelfRef.__PVT__instr_beq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelfRef.__PVT__instr_bne) {
        vlSelfRef.__PVT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelfRef.__PVT__instr_blt) {
        vlSelfRef.__PVT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelfRef.__PVT__instr_bge) {
        vlSelfRef.__PVT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelfRef.__PVT__instr_bltu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelfRef.__PVT__instr_bgeu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelfRef.__PVT__instr_lb) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelfRef.__PVT__instr_lh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelfRef.__PVT__instr_lw) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelfRef.__PVT__instr_lbu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelfRef.__PVT__instr_lhu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelfRef.__PVT__instr_sb) {
        vlSelfRef.__PVT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelfRef.__PVT__instr_sh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelfRef.__PVT__instr_sw) {
        vlSelfRef.__PVT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelfRef.__PVT__instr_addi) {
        vlSelfRef.__PVT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelfRef.__PVT__instr_slti) {
        vlSelfRef.__PVT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelfRef.__PVT__instr_sltiu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelfRef.__PVT__instr_xori) {
        vlSelfRef.__PVT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelfRef.__PVT__instr_ori) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelfRef.__PVT__instr_andi) {
        vlSelfRef.__PVT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelfRef.__PVT__instr_slli) {
        vlSelfRef.__PVT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelfRef.__PVT__instr_srli) {
        vlSelfRef.__PVT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelfRef.__PVT__instr_srai) {
        vlSelfRef.__PVT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelfRef.__PVT__instr_add) {
        vlSelfRef.__PVT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelfRef.__PVT__instr_sub) {
        vlSelfRef.__PVT__new_ascii_instr = 0x737562ULL;
    }
    if (vlSelfRef.__PVT__instr_sll) {
        vlSelfRef.__PVT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelfRef.__PVT__instr_slt) {
        vlSelfRef.__PVT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelfRef.__PVT__instr_sltu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelfRef.__PVT__instr_xor) {
        vlSelfRef.__PVT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelfRef.__PVT__instr_srl) {
        vlSelfRef.__PVT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelfRef.__PVT__instr_sra) {
        vlSelfRef.__PVT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelfRef.__PVT__instr_or) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelfRef.__PVT__instr_and) {
        vlSelfRef.__PVT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelfRef.__PVT__instr_rdcycle) {
        vlSelfRef.__PVT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelfRef.__PVT__instr_rdcycleh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.__PVT__instr_rdinstr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelfRef.__PVT__instr_rdinstrh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.__PVT__instr_getq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelfRef.__PVT__instr_setq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelfRef.__PVT__instr_retirq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelfRef.__PVT__instr_maskirq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelfRef.__PVT__instr_waitirq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelfRef.__PVT__instr_timer) {
        vlSelfRef.__PVT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelfRef.__PVT__alu_add_sub = ((IData)(vlSelfRef.__PVT__instr_sub)
                                     ? (vlSelfRef.__PVT__reg_op1 
                                        - vlSelfRef.__PVT__reg_op2)
                                     : (vlSelfRef.__PVT__reg_op1 
                                        + vlSelfRef.__PVT__reg_op2));
    vlSelfRef.__PVT__alu_eq = (vlSelfRef.__PVT__reg_op1 
                               == vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_lts = VL_LTS_III(32, vlSelfRef.__PVT__reg_op1, vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_ltu = (vlSelfRef.__PVT__reg_op1 
                                < vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_shl = (vlSelfRef.__PVT__reg_op1 
                                << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op2, 0U, 5U)));
    vlSelfRef.__PVT__alu_shr = VL_SEL_IQII(33, (0x1ffffffffULL 
                                                & VL_SHIFTRS_QQI(33,33,5, 
                                                                 VL_CONCAT_QII(33,1,32, 
                                                                               (((IData)(vlSelfRef.__PVT__instr_sra) 
                                                                                | (IData)(vlSelfRef.__PVT__instr_srai)) 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0x1fU)), vlSelfRef.__PVT__reg_op1), 
                                                                 (0x1fU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op2, 0U, 5U)))), 0U, 0x20U);
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__raddr1 
        = vlSelfRef.__PVT__cpuregs_raddr1;
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__raddr2 
        = vlSelfRef.__PVT__cpuregs_raddr2;
    vlSelfRef.__PVT__mem_rdata_q = vlSelfRef.__Vdly__mem_rdata_q;
    vlSelfRef.__PVT__next_insn_opcode = vlSelfRef.__Vdly__next_insn_opcode;
    vlSelfRef.__PVT__alu_out_0 = 0U;
    if (vlSelfRef.__PVT__instr_beq) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_eq;
    } else if (vlSelfRef.__PVT__instr_bne) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_eq)));
    } else if (vlSelfRef.__PVT__instr_bge) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_lts)));
    } else if (vlSelfRef.__PVT__instr_bgeu) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_ltu)));
    } else if (vlSelfRef.__PVT__is_slti_blt_slt) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_lts;
    } else if (vlSelfRef.__PVT__is_sltiu_bltu_sltu) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_ltu;
    }
    vlSelfRef.__PVT__alu_out = 0U;
    if (vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.__PVT__alu_out = vlSelfRef.__PVT__alu_add_sub;
    } else if (vlSelfRef.__PVT__is_compare) {
        vlSelfRef.__PVT__alu_out = VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__alu_out_0));
    } else if (((IData)(vlSelfRef.__PVT__instr_xori) 
                | (IData)(vlSelfRef.__PVT__instr_xor))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    ^ vlSelfRef.__PVT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__instr_ori) 
                | (IData)(vlSelfRef.__PVT__instr_or))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    | vlSelfRef.__PVT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__instr_andi) 
                | (IData)(vlSelfRef.__PVT__instr_and))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    & vlSelfRef.__PVT__reg_op2);
    }
    vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__q_ascii_instr;
    vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__q_insn_imm;
    vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__q_insn_opcode;
    vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__q_insn_rs1;
    vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__q_insn_rs2;
    vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__q_insn_rd;
    if (vlSelfRef.__PVT__dbg_next) {
        if (vlSelfRef.__PVT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__cached_ascii_instr;
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__cached_insn_imm;
            vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__cached_insn_opcode;
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__cached_insn_rs1;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__cached_insn_rs2;
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__cached_insn_rd;
        } else {
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
            vlSelfRef.__PVT__dbg_insn_opcode = (VL_REDAND_II(2, 
                                                             (3U 
                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__next_insn_opcode, 0U, 2U)))
                                                 ? vlSelfRef.__PVT__next_insn_opcode
                                                 : 
                                                VL_EXTEND_II(32,16, 
                                                             (0xffffU 
                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__next_insn_opcode, 0U, 0x10U))));
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__decoded_imm;
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__decoded_rd;
        }
    }
}

VL_INLINE_OPT void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cpuregs_rdata1 = vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__rdata1;
    vlSelfRef.__PVT__cpuregs_rdata2 = vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__rdata2;
    vlSelfRef.__PVT__decoded_rs = 0U;
    vlSelfRef.__PVT__cpuregs_rs1 = (VL_REDOR_I((IData)(vlSelfRef.__PVT__decoded_rs1))
                                     ? vlSelfRef.__PVT__cpuregs_rdata1
                                     : 0U);
    vlSelfRef.__PVT__cpuregs_rs2 = (VL_REDOR_I((IData)(vlSelfRef.__PVT__decoded_rs2))
                                     ? vlSelfRef.__PVT__cpuregs_rdata2
                                     : 0U);
}

VL_INLINE_OPT void Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__1(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___nba_comb__TOP__picorv32core__picorv32_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_prefetched_high_word = vlSelfRef.__PVT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__prefetched_high_word)))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__latched_branch) 
                | VL_REDOR_I((IData)(vlSelfRef.__PVT__irq_state))) 
               | (~ (IData)(vlSelfRef.__PVT__resetn))))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.__Vcellinp__cpuregs__wen = (((IData)(vlSelfRef.__PVT__resetn) 
                                           & (IData)(vlSelfRef.__PVT__cpuregs_write)) 
                                          & VL_REDOR_I((IData)(vlSelfRef.__PVT__latched_rd)));
    vlSelfRef.__PVT__mem_la_write = (((IData)(vlSelfRef.__PVT__resetn) 
                                      & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__mem_state)))) 
                                     & (IData)(vlSelfRef.__PVT__mem_do_wdata));
    vlSelfRef.__PVT__mem_la_read = ((IData)(vlSelfRef.__PVT__resetn) 
                                    & (((~ (IData)(vlSelfRef.__PVT__mem_la_use_prefetched_high_word)) 
                                        & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__mem_state)))) 
                                       & (((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                           | (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                                          | (IData)(vlSelfRef.__PVT__mem_do_rdata))));
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__wen 
        = vlSelfRef.__Vcellinp__cpuregs__wen;
}
