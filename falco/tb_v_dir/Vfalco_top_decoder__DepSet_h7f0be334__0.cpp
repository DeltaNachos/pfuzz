// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_decoder.h"

VL_INLINE_OPT void Vfalco_top_decoder___act_sequent__TOP__falco_top__core__instruction_decode__instr0_decoder__0(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___act_sequent__TOP__falco_top__core__instruction_decode__instr0_decoder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rv32_instr = vlSelfRef.__PVT__instruction;
    vlSelfRef.__PVT__rv32_shamt = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U));
    VL_ASSIGNSEL_WI(192,15,0U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(15,5,10, (0x1fU & 
                                            VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)), 
                                  VL_CONCAT_III(10,5,5, 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U)), 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U)))));
    VL_ASSIGNSEL_WI(192,17,0x40U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(17,12,5, (0xfffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU)), 
                                  (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U))));
    vlSelfRef.__PVT__immI = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        VL_CONCAT_III(5,4,1, 
                                                                      (0xfU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U)))));
    vlSelfRef.__PVT__immS = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        (0x1fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U))));
    vlSelfRef.__PVT__immB = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 8U, 4U)), 0U))));
    vlSelfRef.__PVT__immU = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 0x14U)), 0U);
    vlSelfRef.__PVT__immJ = VL_CONCAT_III(32,12,20, 
                                          (0xfffU & VL_REPLICATE_IOI(1,
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0xcU)), 
                                          VL_CONCAT_III(20,9,11, 
                                                        VL_CONCAT_III(9,8,1, 
                                                                      (0xffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 8U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U))), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 0U))));
    vlSelfRef.__PVT__rv32_funct7 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 7U));
    vlSelfRef.__PVT__rv32_funct3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 3U));
    vlSelfRef.__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0U, 7U));
    vlSelfRef.__PVT__rv32_funct7_0000000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001001 = (9U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001101 = (0xdU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010101 = (0x15U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100001 = (0x21U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010001 = (0x11U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101101 = (0x2dU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111111 = (0x7fU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001000 = (8U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001100 = (0xcU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101100 = (0x2cU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010000 = (0x10U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010100 = (0x14U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100000 = (0x60U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110000 = (0x70U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010000 = (0x50U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101000 = (0x68U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111000 = (0x78U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010001 = (0x51U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110001 = (0x71U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100001 = (0x61U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101001 = (0x69U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100000 = (0x20U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct3_011 = (3U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_110 = (6U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_111 = (7U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_010 = (2U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    VL_ASSIGNSEL_WI(192,2,0x1cU, vlSelfRef.__PVT__decoded_instr, 
                    (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 0U, 2U)));
    VL_ASSIGNBIT_WI(0x58U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 2U)));
    vlSelfRef.__PVT__rv32_funct3_001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__opcode_4_2_010 = (2U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_110 = (6U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_111 = (7U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_10 = (2U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_001 = (1U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_101 = (5U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_011 = (3U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_00 = (0U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_100 = (4U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_000 = (0U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_01 = (1U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_6_5_11 = (3U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    VL_ASSIGNBIT_WI(0x56U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_funct7_0100000);
    vlSelfRef.__PVT__rv32_miscmem = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                     & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_auipc = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_op_imm = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_load = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_amo = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_op = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_lui = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_store = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_jalr = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_001));
    vlSelfRef.__PVT__rv32_jal = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_branch = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_system = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_fence = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_fence_i = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                     & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lb = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_lh = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lw = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_lbu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_lhu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    VL_ASSIGNBIT_WI(0x1eU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_load) 
                     | (IData)(vlSelfRef.__PVT__rv32_amo)));
    vlSelfRef.__PVT__rv32m = ((IData)(vlSelfRef.__PVT__rv32_op) 
                              & (IData)(vlSelfRef.__PVT__rv32_funct7_0000001));
    vlSelfRef.__PVT__rv32_sub = (((IData)(vlSelfRef.__PVT__rv32_op) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_000)) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct7_0100000));
    vlSelfRef.__PVT__rv32_imm_selu = ((IData)(vlSelfRef.__PVT__rv32_lui) 
                                      | (IData)(vlSelfRef.__PVT__rv32_auipc));
    vlSelfRef.__PVT__rv32_sb = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_sh = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_sw = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    VL_ASSIGNBIT_WI(0x1fU, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_store);
    vlSelfRef.__PVT__rv32_imm_sels = vlSelfRef.__PVT__rv32_store;
    VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jalr);
    vlSelfRef.__PVT__rv32_imm_seli = (((IData)(vlSelfRef.__PVT__rv32_op_imm) 
                                       | (IData)(vlSelfRef.__PVT__rv32_jalr)) 
                                      | (IData)(vlSelfRef.__PVT__rv32_load));
    VL_ASSIGNBIT_WI(0x54U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jal);
    VL_ASSIGNSEL_WI(192,3,0x59U, vlSelfRef.__PVT__decoded_instr, 
                    (((((IData)(vlSelfRef.__PVT__rv32_lui) 
                        | (IData)(vlSelfRef.__PVT__rv32_auipc)) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_jalr))
                      ? 0U : (IData)(vlSelfRef.__PVT__rv32_funct3)));
    vlSelfRef.__PVT__rv32_imm_selj = vlSelfRef.__PVT__rv32_jal;
    vlSelfRef.__PVT__rv32_beq = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_bne = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_blt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_bgt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_bltu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_bgtu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    VL_ASSIGNBIT_WI(0x55U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_branch);
    VL_ASSIGNBIT_WI(0x52U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & (~ (((IData)(vlSelfRef.__PVT__rv32_store) 
                               | (IData)(vlSelfRef.__PVT__rv32_branch)) 
                              | (0U == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)))))));
    VL_ASSIGNSEL_WI(192,2,0x5eU, vlSelfRef.__PVT__decoded_instr, 
                    ((((IData)(vlSelfRef.__PVT__rv32_auipc) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_branch))
                      ? 1U : ((IData)(vlSelfRef.__PVT__rv32_lui)
                               ? 0U : 2U)));
    vlSelfRef.__PVT__rv32_imm_selb = vlSelfRef.__PVT__rv32_branch;
    vlSelfRef.__PVT__rv32_csrrw = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_csrrs = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_csrrc = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_011));
    vlSelfRef.__PVT__rv32_csrrwi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_csrrsi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_csrrci = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    vlSelfRef.__PVT__rv32_csr = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                 & (~ (IData)(vlSelfRef.__PVT__rv32_funct3_000)));
    vlSelfRef.__PVT__rv32_sys_op = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    VL_ASSIGNBIT_WI(0x57U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32m);
    VL_ASSIGNSEL_WI(192,2,0x5cU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_sub)
                      ? 2U : ((((IData)(vlSelfRef.__PVT__rv32_store) 
                                | (IData)(vlSelfRef.__PVT__rv32_op)) 
                               | (IData)(vlSelfRef.__PVT__rv32_amo))
                               ? 1U : 0U)));
    VL_ASSIGNSEL_WI(192,32,0x60U, vlSelfRef.__PVT__decoded_instr, 
                    (((((VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_seli), 0x20U) 
                         & vlSelfRef.__PVT__immI) | 
                        (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_sels), 0x20U) 
                         & vlSelfRef.__PVT__immS)) 
                       | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selb), 0x20U) 
                          & vlSelfRef.__PVT__immB)) 
                      | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selu), 0x20U) 
                         & vlSelfRef.__PVT__immU)) 
                     | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selj), 0x20U) 
                        & vlSelfRef.__PVT__immJ)));
    VL_ASSIGNBIT_WI(0x51U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_csr);
    vlSelfRef.__PVT__rv32_ebreak = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                    & (1U == (0xfffU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_ecall = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                   & (0U == (0xfffU 
                                             & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_mret = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                  & (0x302U == (0xfffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__illegal_instr_o = (((IData)(vlSelfRef.__PVT__rv32_fence) 
                                         | (IData)(vlSelfRef.__PVT__rv32_fence_i)) 
                                        | (IData)(vlSelfRef.__PVT__rv32_ebreak));
    VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_mret) 
                     | (IData)(vlSelfRef.__PVT__rv32_ecall)));
    VL_ASSIGNSEL_WI(192,12,0xfU, vlSelfRef.__PVT__decoded_instr, 
                    ((0x341U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_mret), 0xcU)) 
                     | (0x305U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_ecall), 0xcU))));
}

VL_INLINE_OPT void Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr0_decoder__0(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr0_decoder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WI(192,32,0xa0U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__predict_pc);
}

VL_INLINE_OPT void Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr0_decoder__1(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr0_decoder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WI(192,32,0x80U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__pc);
}

VL_INLINE_OPT void Vfalco_top_decoder___nba_comb__TOP__falco_top__core__instruction_decode__instr0_decoder__0(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___nba_comb__TOP__falco_top__core__instruction_decode__instr0_decoder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rv32_instr = vlSelfRef.__PVT__instruction;
    vlSelfRef.__PVT__rv32_shamt = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U));
    VL_ASSIGNSEL_WI(192,15,0U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(15,5,10, (0x1fU & 
                                            VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)), 
                                  VL_CONCAT_III(10,5,5, 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U)), 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U)))));
    VL_ASSIGNSEL_WI(192,17,0x40U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(17,12,5, (0xfffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU)), 
                                  (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U))));
    vlSelfRef.__PVT__immI = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        VL_CONCAT_III(5,4,1, 
                                                                      (0xfU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U)))));
    vlSelfRef.__PVT__immS = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        (0x1fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U))));
    vlSelfRef.__PVT__immB = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 8U, 4U)), 0U))));
    vlSelfRef.__PVT__immU = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 0x14U)), 0U);
    vlSelfRef.__PVT__immJ = VL_CONCAT_III(32,12,20, 
                                          (0xfffU & VL_REPLICATE_IOI(1,
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0xcU)), 
                                          VL_CONCAT_III(20,9,11, 
                                                        VL_CONCAT_III(9,8,1, 
                                                                      (0xffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 8U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U))), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 0U))));
    vlSelfRef.__PVT__rv32_funct7 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 7U));
    vlSelfRef.__PVT__rv32_funct3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 3U));
    vlSelfRef.__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0U, 7U));
    vlSelfRef.__PVT__rv32_funct7_0000000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001001 = (9U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001101 = (0xdU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010101 = (0x15U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100001 = (0x21U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010001 = (0x11U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101101 = (0x2dU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111111 = (0x7fU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001000 = (8U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001100 = (0xcU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101100 = (0x2cU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010000 = (0x10U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010100 = (0x14U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100000 = (0x60U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110000 = (0x70U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010000 = (0x50U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101000 = (0x68U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111000 = (0x78U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010001 = (0x51U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110001 = (0x71U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100001 = (0x61U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101001 = (0x69U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100000 = (0x20U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct3_011 = (3U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_110 = (6U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_111 = (7U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_010 = (2U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    VL_ASSIGNSEL_WI(192,2,0x1cU, vlSelfRef.__PVT__decoded_instr, 
                    (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 0U, 2U)));
    VL_ASSIGNBIT_WI(0x58U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 2U)));
    vlSelfRef.__PVT__rv32_funct3_001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__opcode_4_2_010 = (2U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_110 = (6U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_111 = (7U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_10 = (2U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_001 = (1U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_101 = (5U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_011 = (3U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_00 = (0U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_100 = (4U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_000 = (0U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_01 = (1U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_6_5_11 = (3U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    VL_ASSIGNBIT_WI(0x56U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_funct7_0100000);
    vlSelfRef.__PVT__rv32_miscmem = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                     & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_auipc = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_op_imm = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_load = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_amo = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_op = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_lui = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_store = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_jalr = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_001));
    vlSelfRef.__PVT__rv32_jal = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_branch = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_system = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_fence = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_fence_i = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                     & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lb = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_lh = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lw = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_lbu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_lhu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    VL_ASSIGNBIT_WI(0x1eU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_load) 
                     | (IData)(vlSelfRef.__PVT__rv32_amo)));
    vlSelfRef.__PVT__rv32m = ((IData)(vlSelfRef.__PVT__rv32_op) 
                              & (IData)(vlSelfRef.__PVT__rv32_funct7_0000001));
    vlSelfRef.__PVT__rv32_sub = (((IData)(vlSelfRef.__PVT__rv32_op) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_000)) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct7_0100000));
    vlSelfRef.__PVT__rv32_imm_selu = ((IData)(vlSelfRef.__PVT__rv32_lui) 
                                      | (IData)(vlSelfRef.__PVT__rv32_auipc));
    vlSelfRef.__PVT__rv32_sb = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_sh = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_sw = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    VL_ASSIGNBIT_WI(0x1fU, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_store);
    vlSelfRef.__PVT__rv32_imm_sels = vlSelfRef.__PVT__rv32_store;
    VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jalr);
    vlSelfRef.__PVT__rv32_imm_seli = (((IData)(vlSelfRef.__PVT__rv32_op_imm) 
                                       | (IData)(vlSelfRef.__PVT__rv32_jalr)) 
                                      | (IData)(vlSelfRef.__PVT__rv32_load));
    VL_ASSIGNBIT_WI(0x54U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jal);
    VL_ASSIGNSEL_WI(192,3,0x59U, vlSelfRef.__PVT__decoded_instr, 
                    (((((IData)(vlSelfRef.__PVT__rv32_lui) 
                        | (IData)(vlSelfRef.__PVT__rv32_auipc)) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_jalr))
                      ? 0U : (IData)(vlSelfRef.__PVT__rv32_funct3)));
    vlSelfRef.__PVT__rv32_imm_selj = vlSelfRef.__PVT__rv32_jal;
    vlSelfRef.__PVT__rv32_beq = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_bne = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_blt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_bgt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_bltu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_bgtu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    VL_ASSIGNBIT_WI(0x55U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_branch);
    VL_ASSIGNBIT_WI(0x52U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & (~ (((IData)(vlSelfRef.__PVT__rv32_store) 
                               | (IData)(vlSelfRef.__PVT__rv32_branch)) 
                              | (0U == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)))))));
    VL_ASSIGNSEL_WI(192,2,0x5eU, vlSelfRef.__PVT__decoded_instr, 
                    ((((IData)(vlSelfRef.__PVT__rv32_auipc) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_branch))
                      ? 1U : ((IData)(vlSelfRef.__PVT__rv32_lui)
                               ? 0U : 2U)));
    vlSelfRef.__PVT__rv32_imm_selb = vlSelfRef.__PVT__rv32_branch;
    vlSelfRef.__PVT__rv32_csrrw = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_csrrs = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_csrrc = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_011));
    vlSelfRef.__PVT__rv32_csrrwi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_csrrsi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_csrrci = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    vlSelfRef.__PVT__rv32_csr = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                 & (~ (IData)(vlSelfRef.__PVT__rv32_funct3_000)));
    vlSelfRef.__PVT__rv32_sys_op = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    VL_ASSIGNBIT_WI(0x57U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32m);
    VL_ASSIGNSEL_WI(192,2,0x5cU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_sub)
                      ? 2U : ((((IData)(vlSelfRef.__PVT__rv32_store) 
                                | (IData)(vlSelfRef.__PVT__rv32_op)) 
                               | (IData)(vlSelfRef.__PVT__rv32_amo))
                               ? 1U : 0U)));
    VL_ASSIGNSEL_WI(192,32,0x60U, vlSelfRef.__PVT__decoded_instr, 
                    (((((VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_seli), 0x20U) 
                         & vlSelfRef.__PVT__immI) | 
                        (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_sels), 0x20U) 
                         & vlSelfRef.__PVT__immS)) 
                       | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selb), 0x20U) 
                          & vlSelfRef.__PVT__immB)) 
                      | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selu), 0x20U) 
                         & vlSelfRef.__PVT__immU)) 
                     | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selj), 0x20U) 
                        & vlSelfRef.__PVT__immJ)));
    VL_ASSIGNBIT_WI(0x51U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_csr);
    vlSelfRef.__PVT__rv32_ebreak = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                    & (1U == (0xfffU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_ecall = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                   & (0U == (0xfffU 
                                             & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_mret = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                  & (0x302U == (0xfffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__illegal_instr_o = (((IData)(vlSelfRef.__PVT__rv32_fence) 
                                         | (IData)(vlSelfRef.__PVT__rv32_fence_i)) 
                                        | (IData)(vlSelfRef.__PVT__rv32_ebreak));
    VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_mret) 
                     | (IData)(vlSelfRef.__PVT__rv32_ecall)));
    VL_ASSIGNSEL_WI(192,12,0xfU, vlSelfRef.__PVT__decoded_instr, 
                    ((0x341U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_mret), 0xcU)) 
                     | (0x305U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_ecall), 0xcU))));
}

VL_INLINE_OPT void Vfalco_top_decoder___ico_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__0(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___ico_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WI(192,32,0xa0U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__predict_pc);
}

VL_INLINE_OPT void Vfalco_top_decoder___act_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__0(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___act_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rv32_instr = vlSelfRef.__PVT__instruction;
    vlSelfRef.__PVT__rv32_shamt = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U));
    VL_ASSIGNSEL_WI(192,15,0U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(15,5,10, (0x1fU & 
                                            VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)), 
                                  VL_CONCAT_III(10,5,5, 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U)), 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U)))));
    VL_ASSIGNSEL_WI(192,17,0x40U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(17,12,5, (0xfffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU)), 
                                  (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U))));
    vlSelfRef.__PVT__immI = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        VL_CONCAT_III(5,4,1, 
                                                                      (0xfU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U)))));
    vlSelfRef.__PVT__immS = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        (0x1fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U))));
    vlSelfRef.__PVT__immB = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 8U, 4U)), 0U))));
    vlSelfRef.__PVT__immU = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 0x14U)), 0U);
    vlSelfRef.__PVT__immJ = VL_CONCAT_III(32,12,20, 
                                          (0xfffU & VL_REPLICATE_IOI(1,
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0xcU)), 
                                          VL_CONCAT_III(20,9,11, 
                                                        VL_CONCAT_III(9,8,1, 
                                                                      (0xffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 8U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U))), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 0U))));
    vlSelfRef.__PVT__rv32_funct7 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 7U));
    vlSelfRef.__PVT__rv32_funct3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 3U));
    vlSelfRef.__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0U, 7U));
    vlSelfRef.__PVT__rv32_funct7_0000000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001001 = (9U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001101 = (0xdU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010101 = (0x15U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100001 = (0x21U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010001 = (0x11U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101101 = (0x2dU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111111 = (0x7fU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001000 = (8U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001100 = (0xcU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101100 = (0x2cU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010000 = (0x10U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010100 = (0x14U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100000 = (0x60U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110000 = (0x70U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010000 = (0x50U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101000 = (0x68U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111000 = (0x78U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010001 = (0x51U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110001 = (0x71U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100001 = (0x61U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101001 = (0x69U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100000 = (0x20U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct3_011 = (3U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_110 = (6U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_111 = (7U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_010 = (2U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    VL_ASSIGNSEL_WI(192,2,0x1cU, vlSelfRef.__PVT__decoded_instr, 
                    (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 0U, 2U)));
    VL_ASSIGNBIT_WI(0x58U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 2U)));
    vlSelfRef.__PVT__rv32_funct3_001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__opcode_4_2_010 = (2U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_110 = (6U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_111 = (7U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_10 = (2U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_001 = (1U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_101 = (5U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_011 = (3U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_00 = (0U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_100 = (4U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_000 = (0U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_01 = (1U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_6_5_11 = (3U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    VL_ASSIGNBIT_WI(0x56U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_funct7_0100000);
    vlSelfRef.__PVT__rv32_miscmem = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                     & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_auipc = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_op_imm = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_load = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_amo = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_op = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_lui = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_store = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_jalr = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_001));
    vlSelfRef.__PVT__rv32_jal = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_branch = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_system = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_fence = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_fence_i = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                     & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lb = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_lh = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lw = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_lbu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_lhu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    VL_ASSIGNBIT_WI(0x1eU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_load) 
                     | (IData)(vlSelfRef.__PVT__rv32_amo)));
    vlSelfRef.__PVT__rv32m = ((IData)(vlSelfRef.__PVT__rv32_op) 
                              & (IData)(vlSelfRef.__PVT__rv32_funct7_0000001));
    vlSelfRef.__PVT__rv32_sub = (((IData)(vlSelfRef.__PVT__rv32_op) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_000)) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct7_0100000));
    vlSelfRef.__PVT__rv32_imm_selu = ((IData)(vlSelfRef.__PVT__rv32_lui) 
                                      | (IData)(vlSelfRef.__PVT__rv32_auipc));
    vlSelfRef.__PVT__rv32_sb = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_sh = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_sw = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    VL_ASSIGNBIT_WI(0x1fU, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_store);
    vlSelfRef.__PVT__rv32_imm_sels = vlSelfRef.__PVT__rv32_store;
    VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jalr);
    vlSelfRef.__PVT__rv32_imm_seli = (((IData)(vlSelfRef.__PVT__rv32_op_imm) 
                                       | (IData)(vlSelfRef.__PVT__rv32_jalr)) 
                                      | (IData)(vlSelfRef.__PVT__rv32_load));
    VL_ASSIGNBIT_WI(0x54U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jal);
    VL_ASSIGNSEL_WI(192,3,0x59U, vlSelfRef.__PVT__decoded_instr, 
                    (((((IData)(vlSelfRef.__PVT__rv32_lui) 
                        | (IData)(vlSelfRef.__PVT__rv32_auipc)) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_jalr))
                      ? 0U : (IData)(vlSelfRef.__PVT__rv32_funct3)));
    vlSelfRef.__PVT__rv32_imm_selj = vlSelfRef.__PVT__rv32_jal;
    vlSelfRef.__PVT__rv32_beq = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_bne = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_blt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_bgt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_bltu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_bgtu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    VL_ASSIGNBIT_WI(0x55U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_branch);
    VL_ASSIGNBIT_WI(0x52U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & (~ (((IData)(vlSelfRef.__PVT__rv32_store) 
                               | (IData)(vlSelfRef.__PVT__rv32_branch)) 
                              | (0U == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)))))));
    VL_ASSIGNSEL_WI(192,2,0x5eU, vlSelfRef.__PVT__decoded_instr, 
                    ((((IData)(vlSelfRef.__PVT__rv32_auipc) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_branch))
                      ? 1U : ((IData)(vlSelfRef.__PVT__rv32_lui)
                               ? 0U : 2U)));
    vlSelfRef.__PVT__rv32_imm_selb = vlSelfRef.__PVT__rv32_branch;
    vlSelfRef.__PVT__rv32_csrrw = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_csrrs = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_csrrc = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_011));
    vlSelfRef.__PVT__rv32_csrrwi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_csrrsi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_csrrci = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    vlSelfRef.__PVT__rv32_csr = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                 & (~ (IData)(vlSelfRef.__PVT__rv32_funct3_000)));
    vlSelfRef.__PVT__rv32_sys_op = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    VL_ASSIGNBIT_WI(0x57U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32m);
    VL_ASSIGNSEL_WI(192,2,0x5cU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_sub)
                      ? 2U : ((((IData)(vlSelfRef.__PVT__rv32_store) 
                                | (IData)(vlSelfRef.__PVT__rv32_op)) 
                               | (IData)(vlSelfRef.__PVT__rv32_amo))
                               ? 1U : 0U)));
    VL_ASSIGNSEL_WI(192,32,0x60U, vlSelfRef.__PVT__decoded_instr, 
                    (((((VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_seli), 0x20U) 
                         & vlSelfRef.__PVT__immI) | 
                        (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_sels), 0x20U) 
                         & vlSelfRef.__PVT__immS)) 
                       | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selb), 0x20U) 
                          & vlSelfRef.__PVT__immB)) 
                      | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selu), 0x20U) 
                         & vlSelfRef.__PVT__immU)) 
                     | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selj), 0x20U) 
                        & vlSelfRef.__PVT__immJ)));
    VL_ASSIGNBIT_WI(0x51U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_csr);
    vlSelfRef.__PVT__rv32_ebreak = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                    & (1U == (0xfffU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_ecall = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                   & (0U == (0xfffU 
                                             & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_mret = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                  & (0x302U == (0xfffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__illegal_instr_o = (((IData)(vlSelfRef.__PVT__rv32_fence) 
                                         | (IData)(vlSelfRef.__PVT__rv32_fence_i)) 
                                        | (IData)(vlSelfRef.__PVT__rv32_ebreak));
    VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_mret) 
                     | (IData)(vlSelfRef.__PVT__rv32_ecall)));
    VL_ASSIGNSEL_WI(192,12,0xfU, vlSelfRef.__PVT__decoded_instr, 
                    ((0x341U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_mret), 0xcU)) 
                     | (0x305U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_ecall), 0xcU))));
}

VL_INLINE_OPT void Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__0(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WI(192,32,0xa0U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__predict_pc);
}

VL_INLINE_OPT void Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__1(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___nba_sequent__TOP__falco_top__core__instruction_decode__instr1_decoder__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WI(192,32,0x80U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__pc);
}

VL_INLINE_OPT void Vfalco_top_decoder___nba_comb__TOP__falco_top__core__instruction_decode__instr1_decoder__0(Vfalco_top_decoder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_decoder___nba_comb__TOP__falco_top__core__instruction_decode__instr1_decoder__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rv32_instr = vlSelfRef.__PVT__instruction;
    vlSelfRef.__PVT__rv32_shamt = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U));
    VL_ASSIGNSEL_WI(192,15,0U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(15,5,10, (0x1fU & 
                                            VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)), 
                                  VL_CONCAT_III(10,5,5, 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U)), 
                                                (0x1fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 5U)))));
    VL_ASSIGNSEL_WI(192,17,0x40U, vlSelfRef.__PVT__decoded_instr, 
                    VL_CONCAT_III(17,12,5, (0xfffU 
                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU)), 
                                  (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xfU, 5U))));
    vlSelfRef.__PVT__immI = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        VL_CONCAT_III(5,4,1, 
                                                                      (0xfU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U)))));
    vlSelfRef.__PVT__immS = VL_CONCAT_III(32,21,11, 
                                          (0x1fffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x15U)), 
                                          VL_CONCAT_III(11,6,5, 
                                                        (0x3fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                        (0x1fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U))));
    vlSelfRef.__PVT__immB = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 8U, 4U)), 0U))));
    vlSelfRef.__PVT__immU = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 0x14U)), 0U);
    vlSelfRef.__PVT__immJ = VL_CONCAT_III(32,12,20, 
                                          (0xfffU & VL_REPLICATE_IOI(1,
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x1fU)), 0xcU)), 
                                          VL_CONCAT_III(20,9,11, 
                                                        VL_CONCAT_III(9,8,1, 
                                                                      (0xffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 8U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U))), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x15U, 4U)), 0U))));
    vlSelfRef.__PVT__rv32_funct7 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x19U, 7U));
    vlSelfRef.__PVT__rv32_funct3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0xcU, 3U));
    vlSelfRef.__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0U, 7U));
    vlSelfRef.__PVT__rv32_funct7_0000000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001001 = (9U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001101 = (0xdU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010101 = (0x15U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100001 = (0x21U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010001 = (0x11U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101101 = (0x2dU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111111 = (0x7fU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001000 = (8U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0001100 = (0xcU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0101100 = (0x2cU == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010000 = (0x10U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0010100 = (0x14U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100000 = (0x60U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110000 = (0x70U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010000 = (0x50U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101000 = (0x68U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1111000 = (0x78U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1010001 = (0x51U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1110001 = (0x71U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1100001 = (0x61U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_1101001 = (0x69U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0000001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct7_0100000 = (0x20U == (IData)(vlSelfRef.__PVT__rv32_funct7));
    vlSelfRef.__PVT__rv32_funct3_011 = (3U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_100 = (4U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_110 = (6U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_111 = (7U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_010 = (2U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_101 = (5U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    VL_ASSIGNSEL_WI(192,2,0x1cU, vlSelfRef.__PVT__decoded_instr, 
                    (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 0U, 2U)));
    VL_ASSIGNBIT_WI(0x58U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__rv32_funct3), 2U)));
    vlSelfRef.__PVT__rv32_funct3_001 = (1U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__rv32_funct3_000 = (0U == (IData)(vlSelfRef.__PVT__rv32_funct3));
    vlSelfRef.__PVT__opcode_4_2_010 = (2U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_110 = (6U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_111 = (7U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_10 = (2U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_001 = (1U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_101 = (5U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_011 = (3U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_00 = (0U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_4_2_100 = (4U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_4_2_000 = (0U == (7U & 
                                              VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 2U, 3U)));
    vlSelfRef.__PVT__opcode_6_5_01 = (1U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    vlSelfRef.__PVT__opcode_6_5_11 = (3U == (3U & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__opcode), 5U, 2U)));
    VL_ASSIGNBIT_WI(0x56U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_funct7_0100000);
    vlSelfRef.__PVT__rv32_miscmem = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                     & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_auipc = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_op_imm = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_load = ((IData)(vlSelfRef.__PVT__opcode_6_5_00) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_amo = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_op = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_lui = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_101));
    vlSelfRef.__PVT__rv32_store = ((IData)(vlSelfRef.__PVT__opcode_6_5_01) 
                                   & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_jalr = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                  & (IData)(vlSelfRef.__PVT__opcode_4_2_001));
    vlSelfRef.__PVT__rv32_jal = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                 & (IData)(vlSelfRef.__PVT__opcode_4_2_011));
    vlSelfRef.__PVT__rv32_branch = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_000));
    vlSelfRef.__PVT__rv32_system = ((IData)(vlSelfRef.__PVT__opcode_6_5_11) 
                                    & (IData)(vlSelfRef.__PVT__opcode_4_2_100));
    vlSelfRef.__PVT__rv32_fence = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_fence_i = ((IData)(vlSelfRef.__PVT__rv32_miscmem) 
                                     & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lb = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_lh = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_lw = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_lbu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_lhu = ((IData)(vlSelfRef.__PVT__rv32_load) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    VL_ASSIGNBIT_WI(0x1eU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_load) 
                     | (IData)(vlSelfRef.__PVT__rv32_amo)));
    vlSelfRef.__PVT__rv32m = ((IData)(vlSelfRef.__PVT__rv32_op) 
                              & (IData)(vlSelfRef.__PVT__rv32_funct7_0000001));
    vlSelfRef.__PVT__rv32_sub = (((IData)(vlSelfRef.__PVT__rv32_op) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_000)) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct7_0100000));
    vlSelfRef.__PVT__rv32_imm_selu = ((IData)(vlSelfRef.__PVT__rv32_lui) 
                                      | (IData)(vlSelfRef.__PVT__rv32_auipc));
    vlSelfRef.__PVT__rv32_sb = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_sh = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_sw = ((IData)(vlSelfRef.__PVT__rv32_store) 
                                & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    VL_ASSIGNBIT_WI(0x1fU, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_store);
    vlSelfRef.__PVT__rv32_imm_sels = vlSelfRef.__PVT__rv32_store;
    VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jalr);
    vlSelfRef.__PVT__rv32_imm_seli = (((IData)(vlSelfRef.__PVT__rv32_op_imm) 
                                       | (IData)(vlSelfRef.__PVT__rv32_jalr)) 
                                      | (IData)(vlSelfRef.__PVT__rv32_load));
    VL_ASSIGNBIT_WI(0x54U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_jal);
    VL_ASSIGNSEL_WI(192,3,0x59U, vlSelfRef.__PVT__decoded_instr, 
                    (((((IData)(vlSelfRef.__PVT__rv32_lui) 
                        | (IData)(vlSelfRef.__PVT__rv32_auipc)) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_jalr))
                      ? 0U : (IData)(vlSelfRef.__PVT__rv32_funct3)));
    vlSelfRef.__PVT__rv32_imm_selj = vlSelfRef.__PVT__rv32_jal;
    vlSelfRef.__PVT__rv32_beq = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    vlSelfRef.__PVT__rv32_bne = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_blt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_100));
    vlSelfRef.__PVT__rv32_bgt = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                 & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_bltu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_bgtu = ((IData)(vlSelfRef.__PVT__rv32_branch) 
                                  & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    VL_ASSIGNBIT_WI(0x55U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_branch);
    VL_ASSIGNBIT_WI(0x52U, vlSelfRef.__PVT__decoded_instr, 
                    (1U & (~ (((IData)(vlSelfRef.__PVT__rv32_store) 
                               | (IData)(vlSelfRef.__PVT__rv32_branch)) 
                              | (0U == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 7U, 5U)))))));
    VL_ASSIGNSEL_WI(192,2,0x5eU, vlSelfRef.__PVT__decoded_instr, 
                    ((((IData)(vlSelfRef.__PVT__rv32_auipc) 
                       | (IData)(vlSelfRef.__PVT__rv32_jal)) 
                      | (IData)(vlSelfRef.__PVT__rv32_branch))
                      ? 1U : ((IData)(vlSelfRef.__PVT__rv32_lui)
                               ? 0U : 2U)));
    vlSelfRef.__PVT__rv32_imm_selb = vlSelfRef.__PVT__rv32_branch;
    vlSelfRef.__PVT__rv32_csrrw = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_001));
    vlSelfRef.__PVT__rv32_csrrs = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_010));
    vlSelfRef.__PVT__rv32_csrrc = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                   & (IData)(vlSelfRef.__PVT__rv32_funct3_011));
    vlSelfRef.__PVT__rv32_csrrwi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_101));
    vlSelfRef.__PVT__rv32_csrrsi = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_110));
    vlSelfRef.__PVT__rv32_csrrci = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_111));
    vlSelfRef.__PVT__rv32_csr = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                 & (~ (IData)(vlSelfRef.__PVT__rv32_funct3_000)));
    vlSelfRef.__PVT__rv32_sys_op = ((IData)(vlSelfRef.__PVT__rv32_system) 
                                    & (IData)(vlSelfRef.__PVT__rv32_funct3_000));
    VL_ASSIGNBIT_WI(0x57U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32m);
    VL_ASSIGNSEL_WI(192,2,0x5cU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_sub)
                      ? 2U : ((((IData)(vlSelfRef.__PVT__rv32_store) 
                                | (IData)(vlSelfRef.__PVT__rv32_op)) 
                               | (IData)(vlSelfRef.__PVT__rv32_amo))
                               ? 1U : 0U)));
    VL_ASSIGNSEL_WI(192,32,0x60U, vlSelfRef.__PVT__decoded_instr, 
                    (((((VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_seli), 0x20U) 
                         & vlSelfRef.__PVT__immI) | 
                        (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_sels), 0x20U) 
                         & vlSelfRef.__PVT__immS)) 
                       | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selb), 0x20U) 
                          & vlSelfRef.__PVT__immB)) 
                      | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selu), 0x20U) 
                         & vlSelfRef.__PVT__immU)) 
                     | (VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_imm_selj), 0x20U) 
                        & vlSelfRef.__PVT__immJ)));
    VL_ASSIGNBIT_WI(0x51U, vlSelfRef.__PVT__decoded_instr, vlSelfRef.__PVT__rv32_csr);
    vlSelfRef.__PVT__rv32_ebreak = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                    & (1U == (0xfffU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_ecall = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                   & (0U == (0xfffU 
                                             & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__rv32_mret = ((IData)(vlSelfRef.__PVT__rv32_sys_op) 
                                  & (0x302U == (0xfffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__rv32_instr, 0x14U, 0xcU))));
    vlSelfRef.__PVT__illegal_instr_o = (((IData)(vlSelfRef.__PVT__rv32_fence) 
                                         | (IData)(vlSelfRef.__PVT__rv32_fence_i)) 
                                        | (IData)(vlSelfRef.__PVT__rv32_ebreak));
    VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__decoded_instr, 
                    ((IData)(vlSelfRef.__PVT__rv32_mret) 
                     | (IData)(vlSelfRef.__PVT__rv32_ecall)));
    VL_ASSIGNSEL_WI(192,12,0xfU, vlSelfRef.__PVT__decoded_instr, 
                    ((0x341U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_mret), 0xcU)) 
                     | (0x305U & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__rv32_ecall), 0xcU))));
}
