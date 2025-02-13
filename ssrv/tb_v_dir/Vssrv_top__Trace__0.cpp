// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vssrv_top__Syms.h"


void Vssrv_top___024root__trace_chg_sub_0(Vssrv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vssrv_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root__trace_chg_top_0\n"); );
    // Init
    Vssrv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vssrv_top___024root*>(voidSelf);
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vssrv_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vssrv_top___024root__trace_chg_sub_0(Vssrv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__ssrv_top.__PVT__imem_cmd));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__ssrv_top__core.__PVT__imem_cmd));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_cmd));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_cmd));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__ext_irq));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_cmd));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__ext_irq));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mip_meip));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk_en));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__dsbl));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+10,(vlSymsp->TOP__ssrv_top.clk));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__ssrv_top__core.__PVT__clk));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__clk));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__clk));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__clk));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__clk));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__clk));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__clk));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__clk));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__clk));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__clk));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+22,(vlSymsp->TOP__ssrv_top.__PVT__imem_rdata),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__ssrv_top.__PVT__dmem_rdata),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__ssrv_top__core.__PVT__imem_rdata),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_rdata),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_rdata),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_rdata),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_read__Vstatic__mem_rdata),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_read__Vstatic__mem_rdata),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_write__Vstatic__m_addr),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_rdata),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_rdata),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_rdata),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__dmem2exu_rdata),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem2lsu_rdata),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+36,(vlSymsp->TOP__ssrv_top.__PVT__dmem_cmd));
        bufp->chgCData(oldp+37,(vlSymsp->TOP__ssrv_top.__PVT__dmem_width),2);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_cmd));
        bufp->chgCData(oldp+39,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_width),2);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_cmd));
        bufp->chgCData(oldp+41,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_width),2);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_cmd));
        bufp->chgCData(oldp+43,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_width),2);
        bufp->chgBit(oldp+44,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__ifu2idu_vd));
        bufp->chgIData(oldp+45,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__ifu2idu_instr),32);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__ifu2idu_imem_err));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__ifu2idu_err_rvi_hi));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__idu2exu_req));
        bufp->chgWData(oldp+49,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__idu2exu_cmd),75);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__idu2exu_use_rs1));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__idu2exu_use_rs2));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__idu2exu_use_rd));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__idu2exu_use_imm));
        bufp->chgSData(oldp+56,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_rw_addr),12);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_w_cmd),2);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2tdu_cmd),2);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2tdu_addr),3);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_instr),32);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_imem_err));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_err_rvi_hi));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_vd));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__rdata_next));
        bufp->chgCData(oldp+65,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__rdata_ident),3);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__instr_bypass),2);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__instr_bypass_vd));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_instr),32);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_imem_err));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_err_rvi_hi));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_vd));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_req));
        bufp->chgWData(oldp+73,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_cmd),75);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_rs1));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_rs2));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_rd));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_imm));
        bufp->chgIData(oldp+80,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__instr),32);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__instr_type),2);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__rvi_opcode),5);
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__rvi_illegal));
        bufp->chgCData(oldp+84,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__funct3),3);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__funct7),7);
        bufp->chgSData(oldp+86,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__funct12),12);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__shamt),5);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__rvc_illegal));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_req));
        bufp->chgWData(oldp+90,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_cmd),75);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_use_rs1));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_use_rs2));
        bufp->chgSData(oldp+95,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_rw_addr),12);
        bufp->chgCData(oldp+96,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_w_cmd),2);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_cmd));
        bufp->chgCData(oldp+98,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_width),2);
        bufp->chgWData(oldp+99,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_queue),75);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ifu_fault_rvi_hi));
        bufp->chgSData(oldp+103,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_rw_addr),12);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_w_cmd),2);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_cmd),2);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_addr),3);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_cmd),2);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_addr),3);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_cmd),5);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_cmd),4);
        bufp->chgBit(oldp+111,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_cmd));
        bufp->chgCData(oldp+112,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_width),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgBit(oldp+113,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__brkpt));
        bufp->chgCData(oldp+114,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2mprf_rs1_addr),5);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2mprf_rs2_addr),5);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rs1_addr),5);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rs2_addr),5);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__brkpt));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_queue_vd));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__lsu_req));
        bufp->chgIData(oldp+121,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__inc_pc),32);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rs1_addr),5);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rs2_addr),5);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x19U]))) {
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__stop_fetch));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__wfi_run2halt));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__stop_fetch));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__wfi_run2halt));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__wfi_halt_cond));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x1bU]))) {
        bufp->chgIData(oldp+130,(vlSymsp->TOP__ssrv_top.__PVT__dmem_wdata),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_wdata),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_wdata),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_wdata),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__mprf2exu_rs1_data),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__mprf2exu_rs2_data),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_w_data),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2tdu_wdata),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__mprf2exu_rs1_data),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__mprf2exu_rs2_data),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_w_data),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_wdata),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__mprf2exu_rs1_data),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__mprf2exu_rs2_data),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_w_data),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_wdata),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_wdata),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_s_data),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_wdata),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+149,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_r_req));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_w_req));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_mret_update));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_mret_instr));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2exu_mstatus_mie_up));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_r_req));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_w_req));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_mret_update));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_mret_instr));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_mstatus_mie_up));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_vd));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_r_req));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_w_req));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_mret_update));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_mret_instr));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_mstatus_mie_up));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mstatus_up));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mie_up));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mscratch_up));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mepc_up));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcause_up));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mtval_up));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mtvec_up));
        bufp->chgCData(oldp+172,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle_up),2);
        bufp->chgCData(oldp+173,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret_up),2);
        bufp->chgBit(oldp+174,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcounten_up));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_w_exc));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__e_mret));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_vd));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1cU]))) {
        bufp->chgIData(oldp+178,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_op1),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_op2),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_sum2_op1),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_sum2_op2),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_op1),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_op2),32);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_op1),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_op2),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x1dU]))) {
        bufp->chgIData(oldp+186,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__tdu2csr_rdata),32);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__tdu2csr_resp));
        bufp->chgIData(oldp+188,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__tdu2csr_rdata),32);
        bufp->chgBit(oldp+189,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__tdu2csr_resp));
        bufp->chgIData(oldp+190,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_rdata),32);
        bufp->chgBit(oldp+191,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_resp));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr_addr_tselect_cmb));
        bufp->chgCData(oldp+193,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr_addr_mcontrol_cmb),2);
        bufp->chgCData(oldp+194,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr_addr_tdata2_cmb),2);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr_wr_cmb));
        bufp->chgIData(oldp+196,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr_wr_data_cmb),32);
        bufp->chgCData(oldp+197,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk_en_mcontrol_cmb),2);
        bufp->chgBit(oldp+198,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr_addr_icount_cmb));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk_en_icount_cmb));
        bufp->chgIData(oldp+200,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+203,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum1_sub));
        bufp->chgIData(oldp+204,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum1_op1),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum1_op2),32);
        bufp->chgQData(oldp+206,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum1_res),33);
        bufp->chgCData(oldp+208,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum1_flags),4);
        bufp->chgCData(oldp+209,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__cnt_res),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0x1fU]))) {
        bufp->chgIData(oldp+210,(vlSymsp->TOP__ssrv_top.__PVT__dmem_addr),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_addr),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_addr),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_addr),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_addr),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_sum2_res),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_res),32);
        bufp->chgBit(oldp+217,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum2_sub));
        bufp->chgQData(oldp+218,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum2_op1),33);
        bufp->chgQData(oldp+220,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum2_op2),33);
        bufp->chgQData(oldp+222,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__sum2_res),33);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_1_c));
        bufp->chgIData(oldp+225,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_1),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_2),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_3),32);
        bufp->chgBit(oldp+228,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__unnamedblk1__DOT__sgn));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__unnamedblk1__DOT__inv));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__unnamedblk2__DOT__sgn));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__unnamedblk2__DOT__inv));
        bufp->chgIData(oldp+232,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__unnamedblk3__DOT__prev_low),31);
        bufp->chgBit(oldp+233,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__unnamedblk3__DOT__quo));
        bufp->chgIData(oldp+234,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_addr),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_addr),32);
        bufp->chgBit(oldp+236,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__l_misalign));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__s_misalign));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x20U]))) {
        bufp->chgIData(oldp+238,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2exu_r_data),32);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2exu_rw_exc));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2tdu_req));
        bufp->chgIData(oldp+241,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_r_data),32);
        bufp->chgBit(oldp+242,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_rw_exc));
        bufp->chgIData(oldp+243,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_r_data),32);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_rw_exc));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_req));
        bufp->chgQData(oldp+246,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle_hi_new),56);
        bufp->chgCData(oldp+248,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle_lo_new),8);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_r_data),32);
        bufp->chgBit(oldp+250,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_r_exc));
        bufp->chgIData(oldp+251,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_w_data),32);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_brkm_req));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x22U]))) {
        bufp->chgBit(oldp+254,(vlSymsp->TOP__ssrv_top.__PVT__dmem_req));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_req));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_req));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_req));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_req));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x21U]))) {
        bufp->chgIData(oldp+260,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__next_pc),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__next_pc),32);
        bufp->chgBit(oldp+262,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_rdy));
        bufp->chgIData(oldp+263,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_res),32);
        bufp->chgBit(oldp+264,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__ialu_cmp));
        bufp->chgIData(oldp+265,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__next_pc),32);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_rdy));
        bufp->chgIData(oldp+267,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_res),32);
        bufp->chgBit(oldp+268,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_cmp));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mdu_cmd),2);
        bufp->chgCData(oldp+270,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mul_cmd),2);
        bufp->chgCData(oldp+271,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__div_cmd),2);
        bufp->chgCData(oldp+272,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__shft_cmd),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x23U]))) {
        bufp->chgBit(oldp+273,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__instret));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__idu2ifu_rdy));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2idu_rdy));
        bufp->chgQData(oldp+276,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2tdu_i_mon),34);
        bufp->chgBit(oldp+278,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu_busy));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__idu2ifu_rdy));
        bufp->chgCData(oldp+280,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_rptr_next),3);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_wptr_next),3);
        bufp->chgCData(oldp+282,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_free_h_next),3);
        bufp->chgCData(oldp+283,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_free_w_next),2);
        bufp->chgCData(oldp+284,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_re),2);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_we),2);
        bufp->chgBit(oldp+286,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2ifu_rdy));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__exu2idu_rdy));
        bufp->chgBit(oldp+288,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2idu_rdy));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__instret));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_busy));
        bufp->chgQData(oldp+291,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2tdu_i_mon),34);
        bufp->chgBit(oldp+293,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_rdy));
        bufp->chgQData(oldp+294,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__exu2tdu_i_mon),34);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x24U]))) {
        bufp->chgCData(oldp+296,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__tdu2exu_i_match),3);
        bufp->chgBit(oldp+297,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__tdu2exu_i_x_req));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__tdu2lsu_i_x_req));
        bufp->chgCData(oldp+299,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2exu_i_match),3);
        bufp->chgBit(oldp+300,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2exu_i_x_req));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2lsu_i_x_req));
        bufp->chgCData(oldp+302,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2exu_i_match),3);
        bufp->chgBit(oldp+303,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2exu_i_x_req));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_i_x_req));
        bufp->chgBit(oldp+305,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__tdu2lsu_i_x_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x25U]))) {
        bufp->chgBit(oldp+306,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__brkpt_hw));
        bufp->chgQData(oldp+307,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__lsu2tdu_d_mon),35);
        bufp->chgCData(oldp+309,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__tdu2lsu_d_match),2);
        bufp->chgBit(oldp+310,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__tdu2lsu_d_x_req));
        bufp->chgCData(oldp+311,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2tdu_bp_retire),3);
        bufp->chgQData(oldp+312,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__lsu2tdu_d_mon),35);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2lsu_d_match),2);
        bufp->chgBit(oldp+315,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2lsu_d_x_req));
        bufp->chgCData(oldp+316,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2tdu_bp_retire),3);
        bufp->chgBit(oldp+317,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__brkpt_hw));
        bufp->chgCData(oldp+318,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__lsu_exc_code),4);
        bufp->chgQData(oldp+319,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_d_mon),35);
        bufp->chgCData(oldp+321,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_d_match),2);
        bufp->chgBit(oldp+322,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_d_x_req));
        bufp->chgCData(oldp+323,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__exu2tdu_bp_retire),3);
        bufp->chgBit(oldp+324,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2hdu_dmode_req));
        bufp->chgCData(oldp+325,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_ldst_hit_cmb),2);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__unnamedblk4__DOT__i),32);
        bufp->chgCData(oldp+327,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_exc_code),4);
        bufp->chgBit(oldp+328,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__tdu2lsu_d_x_req));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu_hwbrk));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xbU] 
                     | vlSelf->__Vm_traceActivity[0x26U]))) {
        bufp->chgBit(oldp+330,(vlSymsp->TOP__ssrv_top.__PVT__imem_req));
        bufp->chgIData(oldp+331,(vlSymsp->TOP__ssrv_top.__PVT__imem_addr),32);
        bufp->chgBit(oldp+332,(vlSymsp->TOP__ssrv_top__core.__PVT__imem_req));
        bufp->chgIData(oldp+333,(vlSymsp->TOP__ssrv_top__core.__PVT__imem_addr),32);
        bufp->chgBit(oldp+334,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_req));
        bufp->chgIData(oldp+335,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_addr),32);
        bufp->chgBit(oldp+336,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_req));
        bufp->chgIData(oldp+337,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_addr),32);
        bufp->chgBit(oldp+338,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__new_pc_req));
        bufp->chgIData(oldp+339,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__new_pc),32);
        bufp->chgBit(oldp+340,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu_exc_req));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__instret_nexc));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2mprf_w_req));
        bufp->chgCData(oldp+343,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2mprf_rd_addr),5);
        bufp->chgIData(oldp+344,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2mprf_rd_data),32);
        bufp->chgBit(oldp+345,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_take_exc));
        bufp->chgCData(oldp+346,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_exc_code),4);
        bufp->chgIData(oldp+347,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_trap_val),32);
        bufp->chgIData(oldp+348,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2exu_new_pc),32);
        bufp->chgBit(oldp+349,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_req));
        bufp->chgIData(oldp+350,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_addr),32);
        bufp->chgBit(oldp+351,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__new_pc_req));
        bufp->chgIData(oldp+352,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__new_pc),32);
        bufp->chgIData(oldp+353,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_addr_r_new),30);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__num_txns_pending_new),3);
        bufp->chgCData(oldp+355,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__discard_resp_cnt_new),3);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_flush));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_w_req));
        bufp->chgCData(oldp+358,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rd_addr),5);
        bufp->chgIData(oldp+359,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rd_data),32);
        bufp->chgBit(oldp+360,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_take_exc));
        bufp->chgCData(oldp+361,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_exc_code),4);
        bufp->chgIData(oldp+362,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_trap_val),32);
        bufp->chgIData(oldp+363,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_new_pc),32);
        bufp->chgBit(oldp+364,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_exc_req));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__instret_nexc));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__new_pc_req));
        bufp->chgIData(oldp+367,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__new_pc),32);
        bufp->chgBit(oldp+368,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exc_req));
        bufp->chgCData(oldp+369,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exc_code),4);
        bufp->chgBit(oldp+370,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_w_req));
        bufp->chgCData(oldp+371,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rd_addr),5);
        bufp->chgIData(oldp+372,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rd_data),32);
        bufp->chgBit(oldp+373,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_take_exc));
        bufp->chgCData(oldp+374,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_exc_code),4);
        bufp->chgIData(oldp+375,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_trap_val),32);
        bufp->chgIData(oldp+376,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_new_pc),32);
        bufp->chgBit(oldp+377,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__instret_nexc));
        bufp->chgQData(oldp+378,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret_hi_new),56);
        bufp->chgCData(oldp+380,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret_lo_new),8);
        bufp->chgBit(oldp+381,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret_inc_lo));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret_inc_hi));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__e_exc));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__e_irq));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+385,(vlSymsp->TOP__ssrv_top__core.__PVT__core_rst_n_qlfy));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_out_qlfy));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_status));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_victim_ff));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_qualifier_ff));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_lucky_ff));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_status_ff));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+392,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__fsm));
        bufp->chgIData(oldp+393,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_addr_r),30);
        bufp->chgCData(oldp+394,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__num_txns_pending),3);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__discard_resp_cnt),3);
        bufp->chgBit(oldp+396,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__discard_resp));
        bufp->chgCData(oldp+397,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__num_vd_txns_pending),3);
        bufp->chgBit(oldp+398,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__num_txns_pending_full));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__new_pc_unaligned));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_empty));
        bufp->chgCData(oldp+401,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_rptr),3);
        bufp->chgCData(oldp+402,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_wptr),3);
        bufp->chgCData(oldp+403,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_ocpd_h),3);
        bufp->chgSData(oldp+404,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_data[0]),16);
        bufp->chgSData(oldp+405,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_data[1]),16);
        bufp->chgSData(oldp+406,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_data[2]),16);
        bufp->chgSData(oldp+407,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_data[3]),16);
        bufp->chgBit(oldp+408,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_err[0]));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_err[1]));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_err[2]));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_err[3]));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_head_rvc));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_head_rvi));
        bufp->chgSData(oldp+414,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_data_head),16);
        bufp->chgSData(oldp+415,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_data_next),16);
        bufp->chgBit(oldp+416,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_err_head));
        bufp->chgBit(oldp+417,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__q_err_next));
        bufp->chgBit(oldp+418,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__rdata_curr));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgIData(oldp+419,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__curr_pc),32);
        bufp->chgBit(oldp+420,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu_init_pc));
        bufp->chgBit(oldp+421,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_init_pc));
        bufp->chgIData(oldp+422,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__curr_pc),32);
        bufp->chgBit(oldp+423,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__queue_barrier));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr_access));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__wfi_halted));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__wfi_run_start));
        bufp->chgCData(oldp+427,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__init_pc_v),4);
        bufp->chgBit(oldp+428,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__init_pc));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgBit(oldp+429,(vlSymsp->TOP__ssrv_top.__PVT__pwrup_rst_n));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__ssrv_top.__PVT__rst_n));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__ssrv_top.__PVT__cpu_rst_n));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__ssrv_top.__PVT__test_mode));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__ssrv_top.__PVT__test_rst_n));
        bufp->chgIData(oldp+434,(vlSymsp->TOP__ssrv_top.__PVT__fuse_mhartid),32);
        bufp->chgBit(oldp+435,(vlSymsp->TOP__ssrv_top.__PVT__soft_irq));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__ssrv_top.__PVT__timer_irq));
        bufp->chgQData(oldp+437,(vlSymsp->TOP__ssrv_top.__PVT__mtime_ext),64);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__ssrv_top.__PVT__trst_n));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__ssrv_top.__PVT__tck));
        bufp->chgBit(oldp+441,(vlSymsp->TOP__ssrv_top.__PVT__tms));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__ssrv_top.__PVT__tdi));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__ssrv_top__core.__PVT__pwrup_rst_n));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__ssrv_top__core.__PVT__rst_n));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__ssrv_top__core.__PVT__cpu_rst_n));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__ssrv_top__core.__PVT__test_mode));
        bufp->chgBit(oldp+447,(vlSymsp->TOP__ssrv_top__core.__PVT__test_rst_n));
        bufp->chgIData(oldp+448,(vlSymsp->TOP__ssrv_top__core.__PVT__fuse_mhartid),32);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__ssrv_top__core.__PVT__soft_irq));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__ssrv_top__core.__PVT__timer_irq));
        bufp->chgQData(oldp+451,(vlSymsp->TOP__ssrv_top__core.__PVT__mtime_ext),64);
        bufp->chgBit(oldp+453,(vlSymsp->TOP__ssrv_top__core.__PVT__core_rst_n_sync));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__ssrv_top__core.__PVT__pwrup_rst_n_sync));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__ssrv_top__core.__PVT__rst_n_sync));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__ssrv_top__core.__PVT__cpu_rst_n_sync));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__rst_n));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__test_rst_n));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__test_mode));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_in));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__rst_n_mux));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__soft_irq));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__timer_irq));
        bufp->chgQData(oldp+464,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__mtime_ext),64);
        bufp->chgIData(oldp+466,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__fuse_mhartid),32);
        bufp->chgBit(oldp+467,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__soft_irq));
        bufp->chgBit(oldp+468,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__timer_irq));
        bufp->chgQData(oldp+469,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__mtime_ext),64);
        bufp->chgIData(oldp+471,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__fuse_mhartid),32);
        bufp->chgBit(oldp+472,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mip_mtip));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mip_msip));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgCData(oldp+474,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tselect_ff),2);
        bufp->chgCData(oldp+475,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_dmode_ff),2);
        bufp->chgCData(oldp+476,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_action_ff),2);
        bufp->chgCData(oldp+477,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_hit_ff),2);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_m_ff),2);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_execution_ff),2);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_load_ff),2);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_store_ff),2);
        bufp->chgBit(oldp+482,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_skip_ff));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_dmode_ff));
        bufp->chgBit(oldp+484,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_action_ff));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_hit_ff));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_m_ff));
        bufp->chgSData(oldp+487,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_count_ff),14);
        bufp->chgBit(oldp+488,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_write_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgBit(oldp+489,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mstatus_mie));
        bufp->chgBit(oldp+490,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mstatus_mpie));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mie_mtie));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mie_meie));
        bufp->chgBit(oldp+493,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mie_msie));
        bufp->chgIData(oldp+494,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mscratch),32);
        bufp->chgIData(oldp+495,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mepc),31);
        bufp->chgBit(oldp+496,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcause_i));
        bufp->chgCData(oldp+497,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcause_ec),4);
        bufp->chgIData(oldp+498,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mtval),32);
        bufp->chgIData(oldp+499,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mtvec_base),26);
        bufp->chgBit(oldp+500,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mtvec_mode));
        bufp->chgQData(oldp+501,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret),64);
        bufp->chgQData(oldp+503,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret_hi),56);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_instret_lo),8);
        bufp->chgQData(oldp+506,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle),64);
        bufp->chgQData(oldp+508,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle_hi),56);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle_lo),8);
        bufp->chgBit(oldp+511,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcounten_cy));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcounten_ir));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle_inc_lo));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_cycle_inc_hi));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+515,(vlSymsp->TOP__ssrv_top.__PVT__imem_req_ack));
        bufp->chgCData(oldp+516,(vlSymsp->TOP__ssrv_top.__PVT__imem_resp),2);
        bufp->chgBit(oldp+517,(vlSymsp->TOP__ssrv_top.__PVT__dmem_req_ack));
        bufp->chgCData(oldp+518,(vlSymsp->TOP__ssrv_top.__PVT__dmem_resp),2);
        bufp->chgBit(oldp+519,(vlSymsp->TOP__ssrv_top__core.__PVT__imem_req_ack));
        bufp->chgCData(oldp+520,(vlSymsp->TOP__ssrv_top__core.__PVT__imem_resp),2);
        bufp->chgBit(oldp+521,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_req_ack));
        bufp->chgCData(oldp+522,(vlSymsp->TOP__ssrv_top__core.__PVT__dmem_resp),2);
        bufp->chgBit(oldp+523,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_req_ack));
        bufp->chgCData(oldp+524,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__imem_resp),2);
        bufp->chgBit(oldp+525,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_req_ack));
        bufp->chgCData(oldp+526,(vlSymsp->TOP__ssrv_top__memory_modelling_inst.__PVT__dmem_resp),2);
        bufp->chgBit(oldp+527,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_req_ack));
        bufp->chgCData(oldp+528,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__imem_resp),2);
        bufp->chgBit(oldp+529,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_req_ack));
        bufp->chgCData(oldp+530,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__dmem_resp),2);
        bufp->chgBit(oldp+531,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_req_ack));
        bufp->chgCData(oldp+532,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_resp),2);
        bufp->chgBit(oldp+533,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_resp_ok));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_resp_er));
        bufp->chgBit(oldp+535,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__dmem2exu_req_ack));
        bufp->chgCData(oldp+536,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__dmem2exu_resp),2);
        bufp->chgBit(oldp+537,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__lsu_rdy));
        bufp->chgBit(oldp+538,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_rdy));
        bufp->chgBit(oldp+539,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem2lsu_req_ack));
        bufp->chgCData(oldp+540,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem2lsu_resp),2);
        bufp->chgBit(oldp+541,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem_resp_ok));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem_resp_er));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgCData(oldp+543,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__cnt_res_reg),5);
        bufp->chgBit(oldp+544,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_1_c_reg));
        bufp->chgIData(oldp+545,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_1_reg),32);
        bufp->chgIData(oldp+546,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_2_reg),32);
        bufp->chgIData(oldp+547,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__res32_3_reg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgWData(oldp+548,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__mprf_int),992);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgBit(oldp+579,(vlSymsp->TOP__ssrv_top.__PVT__core_rst_n_out));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__ssrv_top__core.__PVT__core_rst_n_out));
        bufp->chgBit(oldp+581,(vlSymsp->TOP__ssrv_top__core.__PVT__core_rst_n));
        bufp->chgBit(oldp+582,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_out));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__pipe_rst_n));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__rst_n));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__rst_n));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__rst_n));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__rst_n));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__rst_n));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__rst_n));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__rst_n));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+591,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2exu_irq));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__csr2exu_ip_ie));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_irq));
        bufp->chgBit(oldp+594,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_ip_ie));
        bufp->chgBit(oldp+595,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__wfi_run_cond));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_irq));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_ip_ie));
        bufp->chgIData(oldp+598,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mstatus),32);
        bufp->chgIData(oldp+599,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mie),32);
        bufp->chgIData(oldp+600,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mip),32);
        bufp->chgCData(oldp+601,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcause_ec_new),4);
        bufp->chgIData(oldp+602,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr_mcounten),32);
    }
    bufp->chgBit(oldp+603,(vlSelf->clk));
    bufp->chgBit(oldp+604,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_in_mux));
    bufp->chgBit(oldp+605,(vlSymsp->TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell.__PVT__reset_n_front_ff));
    bufp->chgBit(oldp+606,(vlSymsp->TOP__ssrv_top__core__i_pipe_top.__PVT__exu2csr_take_irq));
    bufp->chgBit(oldp+607,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_resp_vd));
    bufp->chgBit(oldp+608,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_take_irq));
    bufp->chgIData(oldp+609,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__lsu_l_data),32);
    bufp->chgBit(oldp+610,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__lsu_exc));
    bufp->chgBit(oldp+611,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_take_irq));
    bufp->chgIData(oldp+612,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__curr_pc),32);
    bufp->chgQData(oldp+613,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdata2),64);
    bufp->chgCData(oldp+615,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_execution_hit_cmb),2);
    bufp->chgCData(oldp+616,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__mcontrol_write_en),2);
    bufp->chgBit(oldp+617,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_decrement_cmb));
    bufp->chgBit(oldp+618,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__icount_hit_cmb));
    bufp->chgCData(oldp+619,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__curr_state),2);
    bufp->chgCData(oldp+620,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__next_state),2);
    bufp->chgBit(oldp+621,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__iter_req));
    bufp->chgBit(oldp+622,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__iter_rdy));
    bufp->chgBit(oldp+623,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__corr_req));
    bufp->chgIData(oldp+624,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__shft_op1),32);
    bufp->chgCData(oldp+625,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__shft_op2),5);
    bufp->chgIData(oldp+626,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__shft_res),32);
    bufp->chgQData(oldp+627,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mul_op1),33);
    bufp->chgQData(oldp+629,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mul_op2),33);
    bufp->chgQData(oldp+631,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__mul_res),64);
    bufp->chgIData(oldp+633,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_l_data),32);
    bufp->chgBit(oldp+634,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_exc));
    bufp->chgQData(oldp+635,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2tdu_d_mon),35);
    bufp->chgBit(oldp+637,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__fsm));
    bufp->chgCData(oldp+638,(vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu_cmd_r),4);
}

void Vssrv_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root__trace_cleanup\n"); );
    // Init
    Vssrv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vssrv_top___024root*>(voidSelf);
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x23U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x24U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x25U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x26U] = 0U;
}
