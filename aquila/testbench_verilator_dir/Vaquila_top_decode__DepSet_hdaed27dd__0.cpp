// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_decode.h"

VL_INLINE_OPT void Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__0(Vaquila_top_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__0\n"); );
    // Body
    vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_o;
    vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_o;
    vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_o;
    vlSelf->__Vdly__sys_jump_csr_addr_o = vlSelf->__PVT__sys_jump_csr_addr_o;
    vlSelf->__Vdly__sys_jump_o = vlSelf->__PVT__sys_jump_o;
    vlSelf->__Vdly__is_amo_o = vlSelf->__PVT__is_amo_o;
    vlSelf->__Vdly__amo_type_o = vlSelf->__PVT__amo_type_o;
    vlSelf->__Vdly__is_fencei_o = vlSelf->__PVT__is_fencei_o;
    vlSelf->__Vdly__csr_we_o = vlSelf->__PVT__csr_we_o;
    vlSelf->__Vdly__we_o = vlSelf->__PVT__we_o;
    vlSelf->__Vdly__regfile_input_sel_o = vlSelf->__PVT__regfile_input_sel_o;
    vlSelf->__Vdly__regfile_we_o = vlSelf->__PVT__regfile_we_o;
    vlSelf->__Vdly__dsize_sel_o = vlSelf->__PVT__dsize_sel_o;
    vlSelf->__Vdly__signex_sel_o = vlSelf->__PVT__signex_sel_o;
    vlSelf->__Vdly__csr_imm_o = vlSelf->__PVT__csr_imm_o;
    vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_o;
    vlSelf->__Vdly__csr_data2fwd_o = vlSelf->__PVT__csr_data2fwd_o;
    vlSelf->__Vdly__shift_sel_o = vlSelf->__PVT__shift_sel_o;
    vlSelf->__Vdly__re_o = vlSelf->__PVT__re_o;
    vlSelf->__Vdly__branch_decision_o = vlSelf->__PVT__branch_decision_o;
    vlSelf->__Vdly__csr_addr2fwd_o = vlSelf->__PVT__csr_addr2fwd_o;
    vlSelf->__Vdly__branch_hit_o = vlSelf->__PVT__branch_hit_o;
    vlSelf->__Vdly__rd_addr_o = vlSelf->__PVT__rd_addr_o;
    vlSelf->__Vdly__alu_muldiv_sel_o = vlSelf->__PVT__alu_muldiv_sel_o;
    vlSelf->__Vdly__inputB_sel_o = vlSelf->__PVT__inputB_sel_o;
    vlSelf->__Vdly__imm_o = vlSelf->__PVT__imm_o;
    vlSelf->__Vdly__inputA_sel_o = vlSelf->__PVT__inputA_sel_o;
    vlSelf->__Vdly__is_jalr_o = vlSelf->__PVT__is_jalr_o;
    vlSelf->__Vdly__is_jal_o = vlSelf->__PVT__is_jal_o;
    vlSelf->__Vdly__is_branch_o = vlSelf->__PVT__is_branch_o;
    vlSelf->__Vdly__rs2_data2fwd_o = vlSelf->__PVT__rs2_data2fwd_o;
    vlSelf->__Vdly__rs1_data2fwd_o = vlSelf->__PVT__rs1_data2fwd_o;
    vlSelf->__Vdly__operation_sel_o = vlSelf->__PVT__operation_sel_o;
    vlSelf->__Vdly__rs2_addr2fwd_o = vlSelf->__PVT__rs2_addr2fwd_o;
    vlSelf->__Vdly__rs1_addr2fwd_o = vlSelf->__PVT__rs1_addr2fwd_o;
    vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_o;
    if (((IData)(vlSelf->__PVT__rst_i) | ((IData)(vlSelf->__PVT__flush_i) 
                                          & (~ (IData)(vlSelf->__PVT__stall_i))))) {
        vlSelf->__Vdly__pc_o = ((IData)(vlSelf->__PVT__flush_i)
                                 ? vlSelf->__PVT__pc_i
                                 : 0U);
        vlSelf->__Vdly__fetch_valid_o = 0U;
        vlSelf->__Vdly__rs1_data2fwd_o = 0U;
        vlSelf->__Vdly__rs2_data2fwd_o = 0U;
        vlSelf->__Vdly__imm_o = 0U;
        vlSelf->__Vdly__inputA_sel_o = 2U;
        vlSelf->__Vdly__inputB_sel_o = 0U;
        vlSelf->__Vdly__operation_sel_o = 0U;
        vlSelf->__Vdly__signex_sel_o = 0U;
        vlSelf->__Vdly__dsize_sel_o = 0U;
        vlSelf->__Vdly__alu_muldiv_sel_o = 0U;
        vlSelf->__Vdly__shift_sel_o = 0U;
        vlSelf->__Vdly__is_branch_o = 0U;
        vlSelf->__Vdly__is_jal_o = 0U;
        vlSelf->__Vdly__is_jalr_o = 0U;
        vlSelf->__Vdly__regfile_we_o = 1U;
        vlSelf->__Vdly__regfile_input_sel_o = 4U;
        vlSelf->__Vdly__we_o = 0U;
        vlSelf->__Vdly__re_o = 0U;
        vlSelf->__Vdly__dsize_sel_o = 0U;
        vlSelf->__Vdly__rd_addr_o = 0U;
        vlSelf->__Vdly__rs1_addr2fwd_o = 0U;
        vlSelf->__Vdly__rs2_addr2fwd_o = 0U;
        vlSelf->__Vdly__csr_we_o = 0U;
        vlSelf->__Vdly__csr_imm_o = 0U;
        vlSelf->__Vdly__branch_hit_o = 0U;
        vlSelf->__Vdly__branch_decision_o = 0U;
        vlSelf->__Vdly__is_fencei_o = 0U;
        vlSelf->__Vdly__amo_type_o = 0U;
        vlSelf->__Vdly__is_amo_o = 0U;
        vlSelf->__Vdly__sys_jump_o = 0U;
        vlSelf->__Vdly__sys_jump_csr_addr_o = 0U;
        vlSelf->__Vdly__xcpt_valid_o = 0U;
        vlSelf->__Vdly__xcpt_cause_o = 0U;
        vlSelf->__Vdly__xcpt_tval_o = 0U;
        vlSelf->__Vdly__csr_data2fwd_o = 0U;
        vlSelf->__Vdly__csr_addr2fwd_o = 0U;
    } else if (vlSelf->__PVT__stall_i) {
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_o;
        vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_o;
        vlSelf->__Vdly__rs1_data2fwd_o = vlSelf->__PVT__rs1_data2fwd_o;
        vlSelf->__Vdly__rs2_data2fwd_o = vlSelf->__PVT__rs2_data2fwd_o;
        vlSelf->__Vdly__imm_o = vlSelf->__PVT__imm_o;
        vlSelf->__Vdly__inputA_sel_o = vlSelf->__PVT__inputA_sel_o;
        vlSelf->__Vdly__inputB_sel_o = vlSelf->__PVT__inputB_sel_o;
        vlSelf->__Vdly__operation_sel_o = vlSelf->__PVT__operation_sel_o;
        vlSelf->__Vdly__signex_sel_o = vlSelf->__PVT__signex_sel_o;
        vlSelf->__Vdly__alu_muldiv_sel_o = vlSelf->__PVT__alu_muldiv_sel_o;
        vlSelf->__Vdly__shift_sel_o = vlSelf->__PVT__shift_sel_o;
        vlSelf->__Vdly__is_branch_o = vlSelf->__PVT__is_branch_o;
        vlSelf->__Vdly__is_jal_o = vlSelf->__PVT__is_jal_o;
        vlSelf->__Vdly__is_jalr_o = vlSelf->__PVT__is_jalr_o;
        vlSelf->__Vdly__regfile_we_o = vlSelf->__PVT__regfile_we_o;
        vlSelf->__Vdly__regfile_input_sel_o = vlSelf->__PVT__regfile_input_sel_o;
        vlSelf->__Vdly__we_o = vlSelf->__PVT__we_o;
        vlSelf->__Vdly__re_o = vlSelf->__PVT__re_o;
        vlSelf->__Vdly__dsize_sel_o = vlSelf->__PVT__dsize_sel_o;
        vlSelf->__Vdly__rd_addr_o = vlSelf->__PVT__rd_addr_o;
        vlSelf->__Vdly__rs1_addr2fwd_o = vlSelf->__PVT__rs1_addr2fwd_o;
        vlSelf->__Vdly__rs2_addr2fwd_o = vlSelf->__PVT__rs2_addr2fwd_o;
        vlSelf->__Vdly__csr_we_o = vlSelf->__PVT__csr_we_o;
        vlSelf->__Vdly__csr_imm_o = vlSelf->__PVT__csr_imm_o;
        vlSelf->__Vdly__branch_hit_o = vlSelf->__PVT__branch_hit_o;
        vlSelf->__Vdly__branch_decision_o = vlSelf->__PVT__branch_decision_o;
        vlSelf->__Vdly__is_fencei_o = vlSelf->__PVT__is_fencei_o;
        vlSelf->__Vdly__amo_type_o = vlSelf->__PVT__amo_type_o;
        vlSelf->__Vdly__is_amo_o = vlSelf->__PVT__is_amo_o;
        vlSelf->__Vdly__sys_jump_o = vlSelf->__PVT__sys_jump_o;
        vlSelf->__Vdly__sys_jump_csr_addr_o = vlSelf->__PVT__sys_jump_csr_addr_o;
        vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_o;
        vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_o;
        vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_o;
        vlSelf->__Vdly__csr_data2fwd_o = vlSelf->__PVT__csr_data2fwd_o;
        vlSelf->__Vdly__csr_addr2fwd_o = vlSelf->__PVT__csr_addr2fwd_o;
    } else if (vlSelf->__PVT__xcpt_valid) {
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_i;
        vlSelf->__Vdly__fetch_valid_o = 1U;
        vlSelf->__Vdly__rs1_data2fwd_o = 0U;
        vlSelf->__Vdly__rs2_data2fwd_o = 0U;
        vlSelf->__Vdly__imm_o = 0U;
        vlSelf->__Vdly__inputA_sel_o = 2U;
        vlSelf->__Vdly__inputB_sel_o = 0U;
        vlSelf->__Vdly__operation_sel_o = 0U;
        vlSelf->__Vdly__signex_sel_o = 0U;
        vlSelf->__Vdly__dsize_sel_o = 0U;
        vlSelf->__Vdly__alu_muldiv_sel_o = 0U;
        vlSelf->__Vdly__shift_sel_o = 0U;
        vlSelf->__Vdly__is_branch_o = 0U;
        vlSelf->__Vdly__is_jal_o = 0U;
        vlSelf->__Vdly__is_jalr_o = 0U;
        vlSelf->__Vdly__regfile_we_o = 1U;
        vlSelf->__Vdly__regfile_input_sel_o = 4U;
        vlSelf->__Vdly__we_o = 0U;
        vlSelf->__Vdly__re_o = 0U;
        vlSelf->__Vdly__dsize_sel_o = 0U;
        vlSelf->__Vdly__rd_addr_o = 0U;
        vlSelf->__Vdly__rs1_addr2fwd_o = 0U;
        vlSelf->__Vdly__rs2_addr2fwd_o = 0U;
        vlSelf->__Vdly__csr_we_o = 0U;
        vlSelf->__Vdly__csr_imm_o = 0U;
        vlSelf->__Vdly__branch_hit_o = 0U;
        vlSelf->__Vdly__branch_decision_o = 0U;
        vlSelf->__Vdly__is_fencei_o = 0U;
        vlSelf->__Vdly__amo_type_o = 0U;
        vlSelf->__Vdly__is_amo_o = 0U;
        vlSelf->__Vdly__sys_jump_o = 0U;
        vlSelf->__Vdly__sys_jump_csr_addr_o = 0U;
        vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid;
        vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause;
        vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval;
        vlSelf->__Vdly__csr_data2fwd_o = 0U;
        vlSelf->__Vdly__csr_addr2fwd_o = 0U;
    } else {
        vlSelf->__Vdly__pc_o = vlSelf->__PVT__pc_i;
        vlSelf->__Vdly__fetch_valid_o = vlSelf->__PVT__fetch_valid_i;
        vlSelf->__Vdly__rs1_data2fwd_o = vlSelf->__PVT__rs1_data_i;
        vlSelf->__Vdly__rs2_data2fwd_o = vlSelf->__PVT__rs2_data_i;
        vlSelf->__Vdly__imm_o = vlSelf->__PVT__imm;
        vlSelf->__Vdly__inputA_sel_o = vlSelf->__PVT__inputA_sel;
        vlSelf->__Vdly__inputB_sel_o = vlSelf->__PVT__inputB_sel;
        vlSelf->__Vdly__operation_sel_o = vlSelf->__PVT__operation_sel;
        vlSelf->__Vdly__signex_sel_o = vlSelf->__PVT__signex_sel;
        vlSelf->__Vdly__alu_muldiv_sel_o = vlSelf->__PVT__alu_muldiv_sel;
        vlSelf->__Vdly__shift_sel_o = vlSelf->__PVT__shift_sel;
        vlSelf->__Vdly__is_branch_o = vlSelf->__PVT__rv32_branch;
        vlSelf->__Vdly__is_jal_o = vlSelf->__PVT__rv32_jal;
        vlSelf->__Vdly__is_jalr_o = vlSelf->__PVT__rv32_jalr;
        vlSelf->__Vdly__regfile_we_o = vlSelf->__PVT__regfile_we;
        vlSelf->__Vdly__regfile_input_sel_o = vlSelf->__PVT__regfile_input_sel;
        vlSelf->__Vdly__we_o = vlSelf->__PVT__we;
        vlSelf->__Vdly__re_o = vlSelf->__PVT__re;
        vlSelf->__Vdly__dsize_sel_o = vlSelf->__PVT__dsize_sel;
        vlSelf->__Vdly__rd_addr_o = vlSelf->__PVT__rd_addr;
        vlSelf->__Vdly__rs1_addr2fwd_o = vlSelf->__PVT__rs1_addr_o;
        vlSelf->__Vdly__rs2_addr2fwd_o = vlSelf->__PVT__rs2_addr_o;
        vlSelf->__Vdly__csr_we_o = ((IData)(vlSelf->__PVT__rv32_csr) 
                                    & (~ (((IData)(vlSelf->__PVT__rv32_csrrs) 
                                           | (IData)(vlSelf->__PVT__rv32_csrrc)) 
                                          & (0U == 
                                             (0x1fU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0xfU, 5U))))));
        vlSelf->__Vdly__csr_imm_o = vlSelf->__PVT__csr_imm;
        vlSelf->__Vdly__branch_hit_o = vlSelf->__PVT__branch_hit_i;
        vlSelf->__Vdly__branch_decision_o = vlSelf->__PVT__branch_decision_i;
        vlSelf->__Vdly__is_fencei_o = vlSelf->__PVT__rv32_fencei;
        vlSelf->__Vdly__amo_type_o = vlSelf->__PVT__amo_type;
        vlSelf->__Vdly__is_amo_o = vlSelf->__PVT__rv32_amo;
        vlSelf->__Vdly__sys_jump_o = ((IData)(vlSelf->__PVT__rv32_mret) 
                                      | (IData)(vlSelf->__PVT__rv32_sret));
        vlSelf->__Vdly__sys_jump_csr_addr_o = (3U & 
                                               (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__rv32_mret), 2U) 
                                                | (1U 
                                                   & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__rv32_sret), 2U))));
        vlSelf->__Vdly__xcpt_valid_o = vlSelf->__PVT__xcpt_valid_i;
        vlSelf->__Vdly__xcpt_cause_o = vlSelf->__PVT__xcpt_cause_i;
        vlSelf->__Vdly__xcpt_tval_o = vlSelf->__PVT__xcpt_tval_i;
        vlSelf->__Vdly__csr_data2fwd_o = vlSelf->__PVT__csr_data_i;
        vlSelf->__Vdly__csr_addr2fwd_o = vlSelf->__PVT__csr_addr_o;
    }
    vlSelf->__PVT__signex_sel_o = vlSelf->__Vdly__signex_sel_o;
    vlSelf->__PVT__dsize_sel_o = vlSelf->__Vdly__dsize_sel_o;
    vlSelf->__PVT__regfile_we_o = vlSelf->__Vdly__regfile_we_o;
    vlSelf->__PVT__regfile_input_sel_o = vlSelf->__Vdly__regfile_input_sel_o;
    vlSelf->__PVT__we_o = vlSelf->__Vdly__we_o;
    vlSelf->__PVT__csr_we_o = vlSelf->__Vdly__csr_we_o;
    vlSelf->__PVT__is_fencei_o = vlSelf->__Vdly__is_fencei_o;
    vlSelf->__PVT__amo_type_o = vlSelf->__Vdly__amo_type_o;
    vlSelf->__PVT__is_amo_o = vlSelf->__Vdly__is_amo_o;
    vlSelf->__PVT__sys_jump_o = vlSelf->__Vdly__sys_jump_o;
    vlSelf->__PVT__sys_jump_csr_addr_o = vlSelf->__Vdly__sys_jump_csr_addr_o;
    vlSelf->__PVT__xcpt_valid_o = vlSelf->__Vdly__xcpt_valid_o;
    vlSelf->__PVT__xcpt_cause_o = vlSelf->__Vdly__xcpt_cause_o;
    vlSelf->__PVT__xcpt_tval_o = vlSelf->__Vdly__xcpt_tval_o;
    vlSelf->__PVT__csr_imm_o = vlSelf->__Vdly__csr_imm_o;
    vlSelf->__PVT__fetch_valid_o = vlSelf->__Vdly__fetch_valid_o;
    vlSelf->__PVT__csr_data2fwd_o = vlSelf->__Vdly__csr_data2fwd_o;
    vlSelf->__PVT__shift_sel_o = vlSelf->__Vdly__shift_sel_o;
    vlSelf->__PVT__re_o = vlSelf->__Vdly__re_o;
    vlSelf->__PVT__branch_decision_o = vlSelf->__Vdly__branch_decision_o;
    vlSelf->__PVT__csr_addr2fwd_o = vlSelf->__Vdly__csr_addr2fwd_o;
    vlSelf->__PVT__branch_hit_o = vlSelf->__Vdly__branch_hit_o;
    vlSelf->__PVT__rd_addr_o = vlSelf->__Vdly__rd_addr_o;
    vlSelf->__PVT__alu_muldiv_sel_o = vlSelf->__Vdly__alu_muldiv_sel_o;
    vlSelf->__PVT__inputB_sel_o = vlSelf->__Vdly__inputB_sel_o;
    vlSelf->__PVT__imm_o = vlSelf->__Vdly__imm_o;
    vlSelf->__PVT__inputA_sel_o = vlSelf->__Vdly__inputA_sel_o;
    vlSelf->__PVT__is_jalr_o = vlSelf->__Vdly__is_jalr_o;
    vlSelf->__PVT__is_branch_o = vlSelf->__Vdly__is_branch_o;
    vlSelf->__PVT__is_jal_o = vlSelf->__Vdly__is_jal_o;
    vlSelf->__PVT__rs2_data2fwd_o = vlSelf->__Vdly__rs2_data2fwd_o;
    vlSelf->__PVT__rs1_data2fwd_o = vlSelf->__Vdly__rs1_data2fwd_o;
    vlSelf->__PVT__operation_sel_o = vlSelf->__Vdly__operation_sel_o;
    vlSelf->__PVT__rs2_addr2fwd_o = vlSelf->__Vdly__rs2_addr2fwd_o;
    vlSelf->__PVT__rs1_addr2fwd_o = vlSelf->__Vdly__rs1_addr2fwd_o;
    vlSelf->__PVT__pc_o = vlSelf->__Vdly__pc_o;
}

VL_INLINE_OPT void Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__1(Vaquila_top_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__1\n"); );
    // Body
    vlSelf->__PVT__xcpt_cause = (0xfU & VL_SEL_IIII(32, 
                                                    ((3U 
                                                      == (IData)(vlSelf->__PVT__privilege_lvl_i))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->__PVT__privilege_lvl_i))
                                                       ? 9U
                                                       : 8U)), 0U, 4U));
}

VL_INLINE_OPT void Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__0(Vaquila_top_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__0\n"); );
    // Body
    vlSelf->__PVT__rv32_instr = vlSelf->__PVT__instruction_i;
    vlSelf->__PVT__rv32_shamt = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U, 5U));
    vlSelf->__PVT__amo_type = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x1bU, 5U));
    vlSelf->__PVT__rd_addr = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 7U, 5U));
    vlSelf->__PVT__csr_imm = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0xfU, 5U));
    vlSelf->__PVT__immI = VL_CONCAT_III(32,21,11, (0x1fffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                        VL_CONCAT_III(11,6,5, 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x19U, 6U)), 
                                                      VL_CONCAT_III(5,4,1, 
                                                                    (0xfU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x15U, 4U)), 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U)))));
    vlSelf->__PVT__immS = VL_CONCAT_III(32,21,11, (0x1fffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                        VL_CONCAT_III(11,6,5, 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x19U, 6U)), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 7U, 5U))));
    vlSelf->__PVT__immB = VL_CONCAT_III(32,20,12, (0xfffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x1fU)), 0x14U)), 
                                        VL_CONCAT_III(12,1,11, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__rv32_instr, 7U)), 
                                                      VL_CONCAT_III(11,6,5, 
                                                                    (0x3fU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x19U, 6U)), 
                                                                    VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 8U, 4U)), 0U))));
    vlSelf->__PVT__immU = VL_CONCAT_III(32,20,12, (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0xcU, 0x14U)), 0U);
    vlSelf->__PVT__immJ = VL_CONCAT_III(32,12,20, (0xfffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x1fU)), 0xcU)), 
                                        VL_CONCAT_III(20,8,12, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0xcU, 8U)), 
                                                      VL_CONCAT_III(12,1,11, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U)), 
                                                                    VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x15U, 4U)), 0U)))));
    vlSelf->__PVT__csr_addr_o = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U, 0xcU));
    vlSelf->__PVT__rs2_addr_o = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U, 5U));
    vlSelf->__PVT__rs1_addr_o = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0xfU, 5U));
    vlSelf->__PVT__rv32_funct7 = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x19U, 7U));
    vlSelf->__PVT__rv32_funct3 = (7U & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0xcU, 3U));
    vlSelf->__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0U, 7U));
    vlSelf->__PVT__rv32_funct7_0000000 = (0U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0000101 = (5U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0001001 = (9U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0001101 = (0xdU == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0010101 = (0x15U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0100001 = (0x21U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0010001 = (0x11U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0101101 = (0x2dU == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1111111 = (0x7fU == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0000100 = (4U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0001000 = (8U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0001100 = (0xcU == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0101100 = (0x2cU == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0010000 = (0x10U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0010100 = (0x14U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1100000 = (0x60U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1110000 = (0x70U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1010000 = (0x50U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1101000 = (0x68U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1111000 = (0x78U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1010001 = (0x51U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1110001 = (0x71U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1100001 = (0x61U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_1101001 = (0x69U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0000001 = (1U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__rv32_funct7_0100000 = (0x20U == (IData)(vlSelf->__PVT__rv32_funct7));
    vlSelf->__PVT__dsize_sel = (3U & VL_SEL_IIII(3, (IData)(vlSelf->__PVT__rv32_funct3), 0U, 2U));
    vlSelf->__PVT__signex_sel = (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__rv32_funct3), 2U));
    vlSelf->__PVT__rv32_funct3_110 = (6U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_funct3_111 = (7U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_funct3_100 = (4U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_funct3_101 = (5U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_funct3_011 = (3U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_funct3_010 = (2U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_funct3_001 = (1U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_funct3_000 = (0U == (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__opcode_4_2_010 = (2U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_4_2_110 = (6U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_4_2_111 = (7U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_6_5_10 = (2U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U, 2U)));
    vlSelf->__PVT__opcode_4_2_101 = (5U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_4_2_001 = (1U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_4_2_011 = (3U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_6_5_00 = (0U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U, 2U)));
    vlSelf->__PVT__opcode_6_5_01 = (1U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U, 2U)));
    vlSelf->__PVT__opcode_4_2_000 = (0U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_1_0_11 = (3U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 0U, 2U)));
    vlSelf->__PVT__opcode_4_2_100 = (4U == (7U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 2U, 3U)));
    vlSelf->__PVT__opcode_6_5_11 = (3U == (3U & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__opcode), 5U, 2U)));
    vlSelf->__PVT__shift_sel = vlSelf->__PVT__rv32_funct7_0100000;
    vlSelf->__PVT__rv32_auipc = ((IData)(vlSelf->__PVT__opcode_6_5_00) 
                                 & (IData)(vlSelf->__PVT__opcode_4_2_101));
    vlSelf->__PVT__rv32_miscmem = ((IData)(vlSelf->__PVT__opcode_6_5_00) 
                                   & (IData)(vlSelf->__PVT__opcode_4_2_011));
    vlSelf->__PVT__rv32_lui = ((IData)(vlSelf->__PVT__opcode_6_5_01) 
                               & (IData)(vlSelf->__PVT__opcode_4_2_101));
    vlSelf->__PVT__rv32_amo = ((IData)(vlSelf->__PVT__opcode_6_5_01) 
                               & (IData)(vlSelf->__PVT__opcode_4_2_011));
    vlSelf->__PVT__rv32_store = ((IData)(vlSelf->__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelf->__PVT__opcode_4_2_000));
    vlSelf->__PVT__rv32_load = ((IData)(vlSelf->__PVT__opcode_6_5_00) 
                                & (IData)(vlSelf->__PVT__opcode_4_2_000));
    vlSelf->__PVT__rv32_op_imm = ((IData)(vlSelf->__PVT__opcode_6_5_00) 
                                  & (IData)(vlSelf->__PVT__opcode_4_2_100));
    vlSelf->__PVT__rv32_op = ((IData)(vlSelf->__PVT__opcode_6_5_01) 
                              & (IData)(vlSelf->__PVT__opcode_4_2_100));
    vlSelf->__PVT__rv32_jal = ((IData)(vlSelf->__PVT__opcode_6_5_11) 
                               & (IData)(vlSelf->__PVT__opcode_4_2_011));
    vlSelf->__PVT__rv32_jalr = ((IData)(vlSelf->__PVT__opcode_6_5_11) 
                                & (IData)(vlSelf->__PVT__opcode_4_2_001));
    vlSelf->__PVT__rv32_branch = ((IData)(vlSelf->__PVT__opcode_6_5_11) 
                                  & (IData)(vlSelf->__PVT__opcode_4_2_000));
    vlSelf->__PVT__rv32_system = ((IData)(vlSelf->__PVT__opcode_6_5_11) 
                                  & (IData)(vlSelf->__PVT__opcode_4_2_100));
    vlSelf->__PVT__rv32_fencei = ((IData)(vlSelf->__PVT__rv32_miscmem) 
                                  & (IData)(vlSelf->__PVT__rv32_funct3_001));
    vlSelf->__PVT__rv32_fence = ((IData)(vlSelf->__PVT__rv32_miscmem) 
                                 & (IData)(vlSelf->__PVT__rv32_funct3_000));
    vlSelf->__PVT__operation_sel = (((IData)(vlSelf->__PVT__rv32_lui) 
                                     | (IData)(vlSelf->__PVT__rv32_auipc))
                                     ? 0U : (IData)(vlSelf->__PVT__rv32_funct3));
    vlSelf->__PVT__rv32_imm_selu = ((IData)(vlSelf->__PVT__rv32_lui) 
                                    | (IData)(vlSelf->__PVT__rv32_auipc));
    vlSelf->__PVT__is_amo_type = ((IData)(vlSelf->__PVT__rv32_amo) 
                                  & (IData)(vlSelf->__PVT__opcode_1_0_11));
    vlSelf->__PVT__rv32_sb = ((IData)(vlSelf->__PVT__rv32_store) 
                              & (IData)(vlSelf->__PVT__rv32_funct3_000));
    vlSelf->__PVT__rv32_sh = ((IData)(vlSelf->__PVT__rv32_store) 
                              & (IData)(vlSelf->__PVT__rv32_funct3_001));
    vlSelf->__PVT__rv32_sw = ((IData)(vlSelf->__PVT__rv32_store) 
                              & (IData)(vlSelf->__PVT__rv32_funct3_010));
    vlSelf->__PVT__rv32_imm_sels = vlSelf->__PVT__rv32_store;
    vlSelf->__PVT__is_s_type = ((IData)(vlSelf->__PVT__rv32_store) 
                                & (IData)(vlSelf->__PVT__opcode_1_0_11));
    vlSelf->__PVT__re = ((IData)(vlSelf->__PVT__rv32_load) 
                         | (IData)(vlSelf->__PVT__rv32_amo));
    vlSelf->__PVT__rv32_lb = ((IData)(vlSelf->__PVT__rv32_load) 
                              & (IData)(vlSelf->__PVT__rv32_funct3_000));
    vlSelf->__PVT__rv32_lh = ((IData)(vlSelf->__PVT__rv32_load) 
                              & (IData)(vlSelf->__PVT__rv32_funct3_001));
    vlSelf->__PVT__rv32_lw = ((IData)(vlSelf->__PVT__rv32_load) 
                              & (IData)(vlSelf->__PVT__rv32_funct3_010));
    vlSelf->__PVT__rv32_lbu = ((IData)(vlSelf->__PVT__rv32_load) 
                               & (IData)(vlSelf->__PVT__rv32_funct3_100));
    vlSelf->__PVT__rv32_lhu = ((IData)(vlSelf->__PVT__rv32_load) 
                               & (IData)(vlSelf->__PVT__rv32_funct3_101));
    vlSelf->__PVT__rv32m = ((IData)(vlSelf->__PVT__rv32_op) 
                            & (IData)(vlSelf->__PVT__rv32_funct7_0000001));
    vlSelf->__PVT__rv32_sub = (((IData)(vlSelf->__PVT__rv32_op) 
                                & (IData)(vlSelf->__PVT__rv32_funct3_000)) 
                               & (IData)(vlSelf->__PVT__rv32_funct7_0100000));
    vlSelf->__PVT__rv32_imm_selj = vlSelf->__PVT__rv32_jal;
    vlSelf->__PVT__rv32_imm_seli = (((IData)(vlSelf->__PVT__rv32_op_imm) 
                                     | (IData)(vlSelf->__PVT__rv32_jalr)) 
                                    | (IData)(vlSelf->__PVT__rv32_load));
    vlSelf->__PVT__is_i_type = ((((IData)(vlSelf->__PVT__rv32_load) 
                                  | (IData)(vlSelf->__PVT__rv32_op_imm)) 
                                 | (IData)(vlSelf->__PVT__rv32_jalr)) 
                                & (IData)(vlSelf->__PVT__opcode_1_0_11));
    vlSelf->__PVT__rv32_beq = ((IData)(vlSelf->__PVT__rv32_branch) 
                               & (IData)(vlSelf->__PVT__rv32_funct3_000));
    vlSelf->__PVT__rv32_bne = ((IData)(vlSelf->__PVT__rv32_branch) 
                               & (IData)(vlSelf->__PVT__rv32_funct3_001));
    vlSelf->__PVT__rv32_blt = ((IData)(vlSelf->__PVT__rv32_branch) 
                               & (IData)(vlSelf->__PVT__rv32_funct3_100));
    vlSelf->__PVT__rv32_bgt = ((IData)(vlSelf->__PVT__rv32_branch) 
                               & (IData)(vlSelf->__PVT__rv32_funct3_101));
    vlSelf->__PVT__rv32_bltu = ((IData)(vlSelf->__PVT__rv32_branch) 
                                & (IData)(vlSelf->__PVT__rv32_funct3_110));
    vlSelf->__PVT__rv32_bgtu = ((IData)(vlSelf->__PVT__rv32_branch) 
                                & (IData)(vlSelf->__PVT__rv32_funct3_111));
    vlSelf->__PVT__inputA_sel = ((((IData)(vlSelf->__PVT__rv32_auipc) 
                                   | (IData)(vlSelf->__PVT__rv32_jal)) 
                                  | (IData)(vlSelf->__PVT__rv32_branch))
                                  ? 1U : (((IData)(vlSelf->__PVT__rv32_lui) 
                                           | (IData)(vlSelf->__PVT__rv32_store))
                                           ? 0U : 2U));
    vlSelf->__PVT__rv32_imm_selb = vlSelf->__PVT__rv32_branch;
    vlSelf->__PVT__is_b_type = ((IData)(vlSelf->__PVT__rv32_branch) 
                                & (IData)(vlSelf->__PVT__opcode_1_0_11));
    vlSelf->__PVT__rv32_csrrwi = ((IData)(vlSelf->__PVT__rv32_system) 
                                  & (IData)(vlSelf->__PVT__rv32_funct3_101));
    vlSelf->__PVT__rv32_csrrsi = ((IData)(vlSelf->__PVT__rv32_system) 
                                  & (IData)(vlSelf->__PVT__rv32_funct3_110));
    vlSelf->__PVT__rv32_csrrci = ((IData)(vlSelf->__PVT__rv32_system) 
                                  & (IData)(vlSelf->__PVT__rv32_funct3_111));
    vlSelf->__PVT__rv32_csr = ((IData)(vlSelf->__PVT__rv32_system) 
                               & (~ (IData)(vlSelf->__PVT__rv32_funct3_000)));
    vlSelf->__PVT__rv32_sys_op = ((IData)(vlSelf->__PVT__rv32_system) 
                                  & (IData)(vlSelf->__PVT__rv32_funct3_000));
    vlSelf->__PVT__rv32_csrrw = ((IData)(vlSelf->__PVT__rv32_system) 
                                 & (IData)(vlSelf->__PVT__rv32_funct3_001));
    vlSelf->__PVT__rv32_csrrs = ((IData)(vlSelf->__PVT__rv32_system) 
                                 & (IData)(vlSelf->__PVT__rv32_funct3_010));
    vlSelf->__PVT__rv32_csrrc = ((IData)(vlSelf->__PVT__rv32_system) 
                                 & (IData)(vlSelf->__PVT__rv32_funct3_011));
    vlSelf->__PVT__is_r_type = (((IData)(vlSelf->__PVT__rv32_op) 
                                 | (IData)(vlSelf->__PVT__rv32_system)) 
                                & (IData)(vlSelf->__PVT__opcode_1_0_11));
    vlSelf->__PVT__we = ((IData)(vlSelf->__PVT__rv32_store) 
                         | (IData)(vlSelf->__PVT__rv32_fencei));
    vlSelf->__PVT__is_fence = ((IData)(vlSelf->__PVT__rv32_fence) 
                               & (IData)(vlSelf->__PVT__opcode_1_0_11));
    vlSelf->__PVT__alu_muldiv_sel = vlSelf->__PVT__rv32m;
    vlSelf->__PVT__inputB_sel = ((IData)(vlSelf->__PVT__rv32_sub)
                                  ? 2U : ((((IData)(vlSelf->__PVT__rv32_store) 
                                            | (IData)(vlSelf->__PVT__rv32_op)) 
                                           | (IData)(vlSelf->__PVT__rv32_amo))
                                           ? 1U : 0U));
    vlSelf->__PVT__imm = (((((VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__rv32_imm_seli), 0x20U) 
                              & vlSelf->__PVT__immI) 
                             | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__rv32_imm_sels), 0x20U) 
                                & vlSelf->__PVT__immS)) 
                            | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__rv32_imm_selb), 0x20U) 
                               & vlSelf->__PVT__immB)) 
                           | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__rv32_imm_selu), 0x20U) 
                              & vlSelf->__PVT__immU)) 
                          | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__rv32_imm_selj), 0x20U) 
                             & vlSelf->__PVT__immJ));
    vlSelf->__PVT__regfile_we = (((((((((IData)(vlSelf->__PVT__rv32_lui) 
                                        | (IData)(vlSelf->__PVT__rv32_auipc)) 
                                       | (IData)(vlSelf->__PVT__rv32_load)) 
                                      | (IData)(vlSelf->__PVT__rv32_op_imm)) 
                                     | (IData)(vlSelf->__PVT__rv32_op)) 
                                    | (IData)(vlSelf->__PVT__rv32_csr)) 
                                   | (IData)(vlSelf->__PVT__rv32_amo)) 
                                  | (IData)(vlSelf->__PVT__rv32_jal)) 
                                 | (IData)(vlSelf->__PVT__rv32_jalr));
    vlSelf->__PVT__regfile_input_sel = (((IData)(vlSelf->__PVT__rv32_lb) 
                                         | (IData)(vlSelf->__PVT__rv32_lbu))
                                         ? 0U : (((IData)(vlSelf->__PVT__rv32_lh) 
                                                  | (IData)(vlSelf->__PVT__rv32_lhu))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->__PVT__rv32_lw) 
                                                   | (IData)(vlSelf->__PVT__rv32_amo))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->__PVT__rv32_jal) 
                                                    | (IData)(vlSelf->__PVT__rv32_jalr))
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__rv32_csr)
                                                     ? 5U
                                                     : 4U)))));
    vlSelf->__PVT__rv32_mret = ((IData)(vlSelf->__PVT__rv32_sys_op) 
                                & (0x302U == (0xfffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelf->__PVT__rv32_sret = ((IData)(vlSelf->__PVT__rv32_sys_op) 
                                & (0x102U == (0xfffU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelf->__PVT__rv32_ecall = ((IData)(vlSelf->__PVT__rv32_sys_op) 
                                 & (0U == (0xfffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelf->__PVT__rv32_ebreak = ((IData)(vlSelf->__PVT__rv32_sys_op) 
                                  & (1U == (0xfffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelf->__PVT__is_csr_type = ((((IData)(vlSelf->__PVT__rv32_csrrw) 
                                    | (IData)(vlSelf->__PVT__rv32_csrrs)) 
                                   | (IData)(vlSelf->__PVT__rv32_csrrc)) 
                                  & (IData)(vlSelf->__PVT__opcode_1_0_11));
    vlSelf->__PVT__xcpt_valid = vlSelf->__PVT__rv32_ecall;
    vlSelf->__PVT__unsupported_instr_o = ((IData)(vlSelf->__PVT__rv32_fence) 
                                          | (IData)(vlSelf->__PVT__rv32_ebreak));
}

VL_INLINE_OPT void Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__1(Vaquila_top_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__1\n"); );
    // Body
    vlSelf->__PVT__is_rs2_rd_same = (((IData)(vlSelf->__PVT__rs2_addr_o) 
                                      == (IData)(vlSelf->__PVT__rd_addr_o)) 
                                     & (((IData)(vlSelf->__PVT__is_r_type) 
                                         | (IData)(vlSelf->__PVT__is_s_type)) 
                                        | (IData)(vlSelf->__PVT__is_b_type)));
    vlSelf->__PVT__is_rs1_rd_same = (((IData)(vlSelf->__PVT__rs1_addr_o) 
                                      == (IData)(vlSelf->__PVT__rd_addr_o)) 
                                     & (((((((IData)(vlSelf->__PVT__is_r_type) 
                                             | (IData)(vlSelf->__PVT__is_s_type)) 
                                            | (IData)(vlSelf->__PVT__is_b_type)) 
                                           | (IData)(vlSelf->__PVT__is_i_type)) 
                                          | (IData)(vlSelf->__PVT__is_fence)) 
                                         | (IData)(vlSelf->__PVT__is_csr_type)) 
                                        | (IData)(vlSelf->__PVT__is_amo_type)));
    vlSelf->__PVT__is_load_hazard_o = (((IData)(vlSelf->__PVT__is_rs1_rd_same) 
                                        | (IData)(vlSelf->__PVT__is_rs2_rd_same)) 
                                       & (IData)(vlSelf->__PVT__re_o));
}
