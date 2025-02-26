// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core__Syms.h"
#include "Vpicorv32core_picorv32.h"

VL_ATTR_COLD void Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__0(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_mem_valid = vlSelfRef.__PVT__mem_valid;
    vlSelfRef.__PVT__dbg_mem_instr = vlSelfRef.__PVT__mem_instr;
    vlSelfRef.__PVT__dbg_mem_addr = vlSelfRef.__PVT__mem_addr;
    vlSelfRef.__PVT__dbg_mem_wdata = vlSelfRef.__PVT__mem_wdata;
    vlSelfRef.__PVT__dbg_mem_wstrb = vlSelfRef.__PVT__mem_wstrb;
    vlSelfRef.__PVT__pcpi_rs1 = vlSelfRef.__PVT__reg_op1;
    vlSelfRef.__PVT__pcpi_rs2 = vlSelfRef.__PVT__reg_op2;
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
    vlSelfRef.__PVT__launch_next_insn = ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                                         & (IData)(vlSelfRef.__PVT__decoder_trigger));
    vlSelfRef.__PVT__mem_busy = ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                 | ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                    | ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                       | (IData)(vlSelfRef.__PVT__mem_do_wdata))));
    vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__instr_rdinstrh))));
    vlSelfRef.__PVT__cpuregs_waddr = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__latched_rd));
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
    vlSelfRef.__PVT__cpuregs_raddr1 = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__decoded_rs1));
    vlSelfRef.__PVT__cpuregs_raddr2 = (0x3fU & VL_SEL_IIII(32, 
                                                           VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__decoded_rs2)), 0U, 6U));
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
    vlSelfRef.__PVT__clear_prefetched_high_word = vlSelfRef.__PVT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__prefetched_high_word)))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__latched_branch) 
                | VL_REDOR_I((IData)(vlSelfRef.__PVT__irq_state))) 
               | (~ (IData)(vlSelfRef.__PVT__resetn))))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.__PVT__mem_la_write = (((IData)(vlSelfRef.__PVT__resetn) 
                                      & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__mem_state)))) 
                                     & (IData)(vlSelfRef.__PVT__mem_do_wdata));
    vlSelfRef.__PVT__mem_la_read = ((IData)(vlSelfRef.__PVT__resetn) 
                                    & (((~ (IData)(vlSelfRef.__PVT__mem_la_use_prefetched_high_word)) 
                                        & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__mem_state)))) 
                                       & (((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                           | (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                                          | (IData)(vlSelfRef.__PVT__mem_do_rdata))));
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__PVT__dbg_mem_ready = vlSelfRef.__PVT__mem_ready;
    vlSelfRef.__PVT__mem_xfer = (((IData)(vlSelfRef.__PVT__mem_valid) 
                                  & (IData)(vlSelfRef.__PVT__mem_ready)) 
                                 | ((IData)(vlSelfRef.__PVT__mem_la_use_prefetched_high_word) 
                                    & (IData)(vlSelfRef.__PVT__mem_do_rinst)));
    vlSelfRef.__PVT__dbg_mem_rdata = vlSelfRef.__PVT__mem_rdata;
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = vlSelfRef.__PVT__reg_op2;
        vlSelfRef.__PVT__mem_la_wstrb = 0xfU;
        vlSelfRef.__PVT__mem_rdata_word = vlSelfRef.__PVT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = VL_REPLICATE_III(16, 
                                                         (0xffffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op2, 0U, 0x10U)), 2U);
        vlSelfRef.__PVT__mem_la_wstrb = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 1U))
                                          ? 0xcU : 3U);
        if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 1U))) {
            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_op1, 1U))) {
                vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0x10U, 0x10U)));
            }
        } else {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,16, 
                                                           (0xffffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0U, 0x10U)));
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = VL_REPLICATE_III(8, 
                                                         (0xffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op2, 0U, 8U)), 4U);
        vlSelfRef.__PVT__mem_la_wstrb = (0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U))));
        if ((0U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0U, 8U)));
        } else if ((1U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 8U, 8U)));
        } else if ((2U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0x10U, 8U)));
        } else if ((3U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__reg_op1, 0U, 2U)))) {
            vlSelfRef.__PVT__mem_rdata_word = VL_EXTEND_II(32,8, 
                                                           (0xffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata, 0x18U, 8U)));
        }
    }
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__waddr 
        = vlSelfRef.__PVT__cpuregs_waddr;
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
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__wdata 
        = vlSelfRef.__PVT__cpuregs_wrdata;
    vlSelfRef.__Vcellinp__cpuregs__wen = (((IData)(vlSelfRef.__PVT__resetn) 
                                           & (IData)(vlSelfRef.__PVT__cpuregs_write)) 
                                          & VL_REDOR_I((IData)(vlSelfRef.__PVT__latched_rd)));
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__raddr1 
        = vlSelfRef.__PVT__cpuregs_raddr1;
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__raddr2 
        = vlSelfRef.__PVT__cpuregs_raddr2;
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
    vlSelfRef.__PVT__mem_rdata_latched_noshuffle = 
        ((IData)(vlSelfRef.__PVT__mem_xfer) ? vlSelfRef.__PVT__mem_rdata
          : vlSelfRef.__PVT__mem_rdata_q);
    vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__wen 
        = vlSelfRef.__Vcellinp__cpuregs__wen;
    vlSelfRef.__PVT__mem_rdata_latched = vlSelfRef.__PVT__mem_rdata_latched_noshuffle;
    vlSelfRef.__PVT__mem_done = (((IData)(vlSelfRef.__PVT__resetn) 
                                  & ((((IData)(vlSelfRef.__PVT__mem_xfer) 
                                       & VL_REDOR_I((IData)(vlSelfRef.__PVT__mem_state))) 
                                      & (((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                          | (IData)(vlSelfRef.__PVT__mem_do_rdata)) 
                                         | (IData)(vlSelfRef.__PVT__mem_do_wdata))) 
                                     | (VL_REDAND_II(2, (IData)(vlSelfRef.__PVT__mem_state)) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_rinst)))) 
                                 & ((~ (IData)(vlSelfRef.__PVT__mem_la_firstword)) 
                                    | ((~ VL_REDAND_II(2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_latched, 0U, 2U)))) 
                                       & (IData)(vlSelfRef.__PVT__mem_xfer))));
}

VL_ATTR_COLD void Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__1(Vpicorv32core_picorv32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpicorv32core_picorv32___stl_sequent__TOP__picorv32core__picorv32_core__1\n"); );
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
