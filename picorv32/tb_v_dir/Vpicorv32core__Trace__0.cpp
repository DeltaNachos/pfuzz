// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32core__Syms.h"


void Vpicorv32core___024root__trace_chg_0_sub_0(Vpicorv32core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpicorv32core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root__trace_chg_0\n"); );
    // Init
    Vpicorv32core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32core___024root*>(voidSelf);
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpicorv32core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpicorv32core___024root__trace_chg_0_sub_0(Vpicorv32core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_mul_wr));
        bufp->chgIData(oldp+1,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_mul_rd),32);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_mul_wait));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_mul_ready));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_div_wr));
        bufp->chgIData(oldp+5,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_div_rd),32);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_div_wait));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_div_ready));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_int_wr));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_int_rd),32);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_int_wait));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_int_ready));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_firstword));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_firstword_xfer));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_use_prefetched_high_word));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+15,(vlSymsp->TOP__picorv32core.clk));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__picorv32core.rst));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__clk));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__clk));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__clk));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+20,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[0]),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[1]),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[2]),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[3]),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[4]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[5]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[6]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[7]),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[8]),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[9]),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[10]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[11]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[12]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[13]),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[14]),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[15]),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[16]),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[17]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[18]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[19]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[20]),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[21]),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[22]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[23]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[24]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[25]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[26]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[27]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[28]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[29]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__regs[30]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+51,(vlSymsp->TOP__picorv32core.__PVT__mem_valid));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__picorv32core.__PVT__mem_instr));
        bufp->chgIData(oldp+53,(vlSymsp->TOP__picorv32core.__PVT__mem_addr),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__picorv32core.__PVT__mem_wdata),32);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__picorv32core.__PVT__mem_wstrb),4);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__picorv32core.__PVT__mem_la_addr),32);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_instr));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_valid));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__trap));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_valid));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_instr));
        bufp->chgIData(oldp+62,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_addr),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_wdata),32);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_wstrb),4);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_addr),32);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_valid));
        bufp->chgIData(oldp+67,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_insn),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_rs1),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_rs2),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__eoi),32);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__trace_valid));
        bufp->chgQData(oldp+72,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__trace_data),36);
        bufp->chgQData(oldp+74,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__count_cycle),64);
        bufp->chgQData(oldp+76,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__count_instr),64);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__reg_pc),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__reg_next_pc),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__reg_op1),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__reg_op2),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__reg_out),32);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__reg_sh),5);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__next_insn_opcode),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_insn_addr),32);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_mem_valid));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_mem_instr));
        bufp->chgIData(oldp+89,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_mem_addr),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_mem_wdata),32);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_mem_wstrb),4);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__next_pc),32);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__irq_delay));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__irq_active));
        bufp->chgIData(oldp+95,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__irq_mask),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__irq_pending),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__timer),32);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_state),2);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_wordsize),2);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_rdata_q),32);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_do_prefetch));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_do_rinst));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_do_rdata));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_do_wdata));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_secondword));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_firstword_reg));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__last_mem_valid));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__prefetched_high_word));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_busy));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_lui));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_auipc));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_jal));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_jalr));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_beq));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_bne));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_blt));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_bge));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_bltu));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_bgeu));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_lb));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_lh));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_lw));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_lbu));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_lhu));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sb));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sh));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sw));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_addi));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_slti));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sltiu));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_xori));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_ori));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_andi));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_slli));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_srli));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_srai));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_add));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sub));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sll));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_slt));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sltu));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_xor));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_srl));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_sra));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_or));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_and));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_rdcycle));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_rdcycleh));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_rdinstr));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_rdinstrh));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_ecall_ebreak));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_getq));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_setq));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_retirq));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_maskirq));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_waitirq));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_timer));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__instr_trap));
        bufp->chgCData(oldp+159,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoded_rd),5);
        bufp->chgCData(oldp+160,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoded_rs1),5);
        bufp->chgCData(oldp+161,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoded_rs2),5);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoded_imm),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoded_imm_j),32);
        bufp->chgBit(oldp+164,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoder_trigger));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoder_trigger_q));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__compressed_instr));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_lui_auipc_jal));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_slli_srli_srai));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_sb_sh_sw));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_sll_srl_sra));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_slti_blt_slt));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_alu_reg_imm));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_alu_reg_reg));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_compare));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+184,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__new_ascii_instr),64);
        bufp->chgQData(oldp+186,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_insn_imm),32);
        bufp->chgCData(oldp+189,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+190,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+191,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_insn_rd),5);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_rs1val),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_rs2val),32);
        bufp->chgBit(oldp+194,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_rs1val_valid));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_rs2val_valid));
        bufp->chgQData(oldp+196,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__q_ascii_instr),64);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__q_insn_imm),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__q_insn_opcode),32);
        bufp->chgCData(oldp+200,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__q_insn_rs1),5);
        bufp->chgCData(oldp+201,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__q_insn_rs2),5);
        bufp->chgCData(oldp+202,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__q_insn_rd),5);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_next));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__launch_next_insn));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_valid_insn));
        bufp->chgQData(oldp+206,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cached_ascii_instr),64);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cached_insn_imm),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cached_insn_opcode),32);
        bufp->chgCData(oldp+210,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cached_insn_rs1),5);
        bufp->chgCData(oldp+211,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cached_insn_rs2),5);
        bufp->chgCData(oldp+212,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cached_insn_rd),5);
        bufp->chgCData(oldp+213,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpu_state),8);
        bufp->chgCData(oldp+214,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__irq_state),2);
        bufp->chgWData(oldp+215,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_ascii_state),128);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__set_mem_do_rinst));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__set_mem_do_rdata));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__set_mem_do_wdata));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_store));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_stalu));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_branch));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_compr));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_trace));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_is_lu));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_is_lh));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_is_lb));
        bufp->chgCData(oldp+230,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__latched_rd),5);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__current_pc),32);
        bufp->chgBit(oldp+232,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__pcpi_timeout));
        bufp->chgIData(oldp+233,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__next_irq_pending),32);
        bufp->chgBit(oldp+234,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__do_waitirq));
        bufp->chgIData(oldp+235,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_out),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_out_q),32);
        bufp->chgBit(oldp+237,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_out_0));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_out_0_q));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_wait));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_wait_2));
        bufp->chgIData(oldp+241,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_add_sub),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_shl),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_shr),32);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_eq));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_ltu));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__alu_lts));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_write));
        bufp->chgIData(oldp+249,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_wrdata),32);
        bufp->chgCData(oldp+250,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_waddr),6);
        bufp->chgCData(oldp+251,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_raddr1),6);
        bufp->chgCData(oldp+252,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_raddr2),6);
        bufp->chgCData(oldp+253,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__waddr),6);
        bufp->chgCData(oldp+254,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__raddr1),6);
        bufp->chgCData(oldp+255,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__raddr2),6);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__wdata),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+257,(vlSymsp->TOP__picorv32core.__PVT__mem_ready));
        bufp->chgIData(oldp+258,(vlSymsp->TOP__picorv32core.__PVT__mem_rdata),32);
        bufp->chgBit(oldp+259,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_ready));
        bufp->chgIData(oldp+260,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_rdata),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_read__Vstatic__mem_rdata),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_write__Vstatic__m_addr),32);
        bufp->chgBit(oldp+263,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_ready));
        bufp->chgIData(oldp+264,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_rdata),32);
        bufp->chgBit(oldp+265,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_mem_ready));
        bufp->chgIData(oldp+266,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__dbg_mem_rdata),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+267,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_rs1),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_rs2),32);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__decoded_rs),5);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_rdata1),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__cpuregs_rdata2),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__rdata1),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__rdata2),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+274,(vlSymsp->TOP__picorv32core.__PVT__mem_la_read));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__picorv32core.__PVT__mem_la_write));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_read));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_write));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_read));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_write));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__clear_prefetched_high_word));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__picorv32core__picorv32_core__cpuregs.__PVT__wen));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+282,(vlSymsp->TOP__picorv32core.__PVT__mem_la_wdata),32);
        bufp->chgCData(oldp+283,(vlSymsp->TOP__picorv32core.__PVT__mem_la_wstrb),4);
        bufp->chgCData(oldp+284,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_wstrb),4);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_wdata),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_wdata),32);
        bufp->chgCData(oldp+287,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_la_wstrb),4);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_rdata_word),32);
        bufp->chgBit(oldp+289,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_xfer));
        bufp->chgIData(oldp+290,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_rdata_latched_noshuffle),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_rdata_latched),32);
    }
    bufp->chgBit(oldp+292,(vlSelfRef.clk));
    bufp->chgBit(oldp+293,(vlSelfRef.rst));
    bufp->chgBit(oldp+294,(vlSymsp->TOP__picorv32core.__PVT__resetn));
    bufp->chgIData(oldp+295,(vlSymsp->TOP__picorv32core__memory_modelling_inst.__PVT__mem_la_addr),32);
    bufp->chgBit(oldp+296,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__resetn));
    bufp->chgBit(oldp+297,(vlSymsp->TOP__picorv32core__picorv32_core.__PVT__mem_done));
}

void Vpicorv32core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32core___024root__trace_cleanup\n"); );
    // Init
    Vpicorv32core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32core___024root*>(voidSelf);
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
