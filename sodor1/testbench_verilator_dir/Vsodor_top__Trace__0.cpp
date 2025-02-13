// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsodor_top__Syms.h"


void Vsodor_top___024root__trace_chg_sub_0(Vsodor_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsodor_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root__trace_chg_top_0\n"); );
    // Init
    Vsodor_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsodor_top___024root*>(voidSelf);
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsodor_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsodor_top___024root__trace_chg_sub_0(Vsodor_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ddpath_addr),5);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ddpath_wdata),32);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ddpath_addr),5);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ddpath_wdata),32);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_1_addr),5);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_mask));
        bufp->chgIData(oldp+6,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_2_data),32);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_2_addr),5);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_2_mask));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_2_en));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_debug));
        bufp->chgCData(oldp+11,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_prv),2);
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_sd));
        bufp->chgCData(oldp+13,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_zero1),8);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_tsr));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_tw));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_tvm));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_mxr));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_sum));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_mprv));
        bufp->chgCData(oldp+20,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_xs),2);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_fs),2);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_mpp),2);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_hpp),2);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_spp));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_hpie));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_spie));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_upie));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_hie));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_sie));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_uie));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_debug));
        bufp->chgCData(oldp+32,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_prv),2);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_sd));
        bufp->chgCData(oldp+34,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_zero1),8);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_tsr));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_tw));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_tvm));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_mxr));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_sum));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_mprv));
        bufp->chgCData(oldp+41,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_xs),2);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_fs),2);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_mpp),2);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_hpp),2);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_spp));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_hpie));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_spie));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_upie));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_hie));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_sie));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_uie));
        bufp->chgCData(oldp+52,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__hi_lo),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sodor_top.clk));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sodor_top.rst));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__clock));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_clock));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__clk));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__clock));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_clock));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__clock));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+61,(vlSymsp->TOP__sodor_top.__PVT__imem_req_addr),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_imem_req_bits_addr),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_imem_req_bits_addr),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_imem_req_bits_addr),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[0]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[1]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[2]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[3]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[4]),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[5]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[6]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[7]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[8]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[9]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[10]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[11]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[12]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[13]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[14]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[15]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[16]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[17]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[18]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[19]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[20]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[21]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[22]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[23]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[24]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[25]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[26]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[27]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[28]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[29]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[30]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile[31]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_pc),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__pc_reg),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__pc_plus4),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_pc),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_mpie));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_status_mie));
        bufp->chgIData(oldp+103,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_time),32);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_mpie));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_mie));
        bufp->chgIData(oldp+106,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_time),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mstatus_mpie));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mstatus_mie));
        bufp->chgIData(oldp+109,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mepc),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mcause),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mtval),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mscratch),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_medeleg),32);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mip_mtip));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mip_msip));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mie_mtip));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_mie_msip));
        bufp->chgCData(oldp+118,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG),6);
        bufp->chgQData(oldp+119,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_1),58);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_2),6);
        bufp->chgQData(oldp+122,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_3),58);
        bufp->chgQData(oldp+124,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_4),40);
        bufp->chgQData(oldp+126,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_5),40);
        bufp->chgQData(oldp+128,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_6),40);
        bufp->chgQData(oldp+130,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_7),40);
        bufp->chgQData(oldp+132,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_8),40);
        bufp->chgQData(oldp+134,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_9),40);
        bufp->chgQData(oldp+136,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_10),40);
        bufp->chgQData(oldp+138,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_11),40);
        bufp->chgQData(oldp+140,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_12),40);
        bufp->chgQData(oldp+142,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_13),40);
        bufp->chgQData(oldp+144,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_14),40);
        bufp->chgQData(oldp+146,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_15),40);
        bufp->chgQData(oldp+148,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_16),40);
        bufp->chgQData(oldp+150,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_17),40);
        bufp->chgQData(oldp+152,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_18),40);
        bufp->chgQData(oldp+154,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_19),40);
        bufp->chgQData(oldp+156,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_20),40);
        bufp->chgQData(oldp+158,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_21),40);
        bufp->chgQData(oldp+160,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_22),40);
        bufp->chgQData(oldp+162,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_23),40);
        bufp->chgQData(oldp+164,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_24),40);
        bufp->chgQData(oldp+166,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_25),40);
        bufp->chgQData(oldp+168,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_26),40);
        bufp->chgQData(oldp+170,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_27),40);
        bufp->chgQData(oldp+172,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_28),40);
        bufp->chgQData(oldp+174,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_29),40);
        bufp->chgQData(oldp+176,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_30),40);
        bufp->chgQData(oldp+178,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_31),40);
        bufp->chgQData(oldp+180,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_32),40);
        bufp->chgQData(oldp+182,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_33),40);
        bufp->chgQData(oldp+184,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_34),40);
        bufp->chgQData(oldp+186,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__REG_35),40);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_dpc),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_dscratch),32);
        bufp->chgBit(oldp+190,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_dcsr_ebreakm));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reg_dcsr_step));
        bufp->chgCData(oldp+192,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__lo_lo),5);
        bufp->chgSData(oldp+193,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__lo),13);
        bufp->chgQData(oldp+194,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__read_mstatus),35);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+196,(vlSymsp->TOP__sodor_top.__PVT__reset));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__reset));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_reset));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__reset));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_reset));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reset));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+202,(vlSymsp->TOP__sodor_top.__PVT__imem_resp_data),32);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__sodor_top.__PVT__dmem_resp_valid));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__sodor_top.__PVT__dmem_req_valid));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__sodor_top.__PVT__dmem_fcn_write_en));
        bufp->chgCData(oldp+206,(vlSymsp->TOP__sodor_top.__PVT__dmem_bit_typ),3);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__sodor_top.__PVT__dmem_resp_data),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_imem_resp_bits_data),32);
        bufp->chgBit(oldp+209,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_valid));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_fcn));
        bufp->chgCData(oldp+211,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_typ),3);
        bufp->chgBit(oldp+212,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_resp_valid));
        bufp->chgIData(oldp+213,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_resp_bits_data),32);
        bufp->chgBit(oldp+214,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dmem_req_valid));
        bufp->chgBit(oldp+215,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dmem_req_bits_fcn));
        bufp->chgCData(oldp+216,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dmem_req_bits_typ),3);
        bufp->chgBit(oldp+217,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dmem_resp_valid));
        bufp->chgIData(oldp+218,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dat_inst),32);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dat_csr_eret));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_stall));
        bufp->chgCData(oldp+221,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_op1_sel),2);
        bufp->chgCData(oldp+222,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_op2_sel),2);
        bufp->chgCData(oldp+223,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_alu_fun),4);
        bufp->chgCData(oldp+224,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_wb_sel),2);
        bufp->chgBit(oldp+225,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_rf_wen));
        bufp->chgCData(oldp+226,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_csr_cmd),3);
        bufp->chgBit(oldp+227,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_exception));
        bufp->chgIData(oldp+228,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_imem_resp_bits_data),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dmem_resp_bits_data),32);
        bufp->chgBit(oldp+230,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_stall));
        bufp->chgCData(oldp+231,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_op1_sel),2);
        bufp->chgCData(oldp+232,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_op2_sel),2);
        bufp->chgCData(oldp+233,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_alu_fun),4);
        bufp->chgCData(oldp+234,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_wb_sel),2);
        bufp->chgBit(oldp+235,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_rf_wen));
        bufp->chgCData(oldp+236,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_csr_cmd),3);
        bufp->chgBit(oldp+237,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_exception));
        bufp->chgIData(oldp+238,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dat_inst),32);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dat_csr_eret));
        bufp->chgIData(oldp+240,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__imem_data),32);
        bufp->chgBit(oldp+241,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_valid));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_write_en));
        bufp->chgCData(oldp+243,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_bits_typ),3);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_resp_valid));
        bufp->chgIData(oldp+245,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_resp_data),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__imem_read__Vstatic__mem_rdata),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_read__Vstatic__mem_rdata),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_write__Vstatic__m_addr),32);
        bufp->chgBit(oldp+249,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_req_valid));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_req_bits_fcn));
        bufp->chgCData(oldp+251,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_req_bits_typ),3);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dmem_resp_valid));
        bufp->chgIData(oldp+253,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_inst),32);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_csr_eret));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_stall));
        bufp->chgCData(oldp+256,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_op1_sel),2);
        bufp->chgCData(oldp+257,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_op2_sel),2);
        bufp->chgCData(oldp+258,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_alu_fun),4);
        bufp->chgCData(oldp+259,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_wb_sel),2);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_rf_wen));
        bufp->chgCData(oldp+261,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_csr_cmd),3);
        bufp->chgBit(oldp+262,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_exception));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__cs_val_inst));
        bufp->chgCData(oldp+264,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__cs_br_type),4);
        bufp->chgBit(oldp+265,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__cs0_2));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__cs0_3));
        bufp->chgCData(oldp+267,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__cs0_6),3);
        bufp->chgBit(oldp+268,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__stall));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__rs1_addr),5);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__csr_ren));
        bufp->chgCData(oldp+271,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__csr_cmd),3);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_imem_resp_bits_data),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dmem_resp_bits_data),32);
        bufp->chgBit(oldp+274,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_stall));
        bufp->chgCData(oldp+275,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_op1_sel),2);
        bufp->chgCData(oldp+276,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_op2_sel),2);
        bufp->chgCData(oldp+277,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_alu_fun),4);
        bufp->chgCData(oldp+278,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_wb_sel),2);
        bufp->chgBit(oldp+279,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_rf_wen));
        bufp->chgCData(oldp+280,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_csr_cmd),3);
        bufp->chgBit(oldp+281,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_exception));
        bufp->chgIData(oldp+282,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_inst),32);
        bufp->chgBit(oldp+283,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_csr_eret));
        bufp->chgCData(oldp+284,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_3_addr),5);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_4_addr),5);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_addr),5);
        bufp->chgBit(oldp+287,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_en));
        bufp->chgCData(oldp+288,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_rw_cmd),3);
        bufp->chgBit(oldp+289,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_eret));
        bufp->chgSData(oldp+290,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_decode_csr),12);
        bufp->chgBit(oldp+291,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_exception));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_retire));
        bufp->chgCData(oldp+293,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__rs1_addr),5);
        bufp->chgSData(oldp+294,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_i),12);
        bufp->chgIData(oldp+295,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_i_sext),32);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_j),20);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_j_sext),32);
        bufp->chgSData(oldp+298,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_b),12);
        bufp->chgIData(oldp+299,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_b_sext),32);
        bufp->chgCData(oldp+300,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__rs2_addr),5);
        bufp->chgCData(oldp+301,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__wb_addr),5);
        bufp->chgBit(oldp+302,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__wb_wen));
        bufp->chgIData(oldp+303,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_u),20);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_u_sext),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_z),32);
        bufp->chgSData(oldp+306,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_s),12);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__imm_s_sext),32);
        bufp->chgCData(oldp+308,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_rw_cmd),3);
        bufp->chgBit(oldp+309,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_eret));
        bufp->chgSData(oldp+310,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_decode_csr),12);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_exception));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_retire));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__system_insn));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__cpu_ren));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__read_only));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__cpu_wen));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__wen));
        bufp->chgCData(oldp+318,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__opcode),8);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__insn_call));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__insn_break));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__insn_ret));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+322,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_ddpath_rdata),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ddpath_rdata),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__imem_addr),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ddpath_rdata),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_1_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+327,(vlSymsp->TOP__sodor_top.__PVT__dmem_req_addr),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__sodor_top.__PVT__dmem_req_data),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_addr),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_data),32);
        bufp->chgBit(oldp+331,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dat_br_eq));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dat_br_lt));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_dat_br_ltu));
        bufp->chgCData(oldp+334,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__c_io_ctl_pc_sel),3);
        bufp->chgIData(oldp+335,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dmem_req_bits_addr),32);
        bufp->chgIData(oldp+336,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dmem_req_bits_data),32);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_ctl_pc_sel),3);
        bufp->chgBit(oldp+338,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dat_br_eq));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dat_br_lt));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__sodor_top__sodor_core.__PVT__d_io_dat_br_ltu));
        bufp->chgIData(oldp+341,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_addr),32);
        bufp->chgIData(oldp+342,(vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_data),32);
        bufp->chgBit(oldp+343,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_br_eq));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_br_lt));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_dat_br_ltu));
        bufp->chgCData(oldp+346,(vlSymsp->TOP__sodor_top__sodor_core__c.__PVT__io_ctl_pc_sel),3);
        bufp->chgIData(oldp+347,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dmem_req_bits_addr),32);
        bufp->chgIData(oldp+348,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dmem_req_bits_data),32);
        bufp->chgCData(oldp+349,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_ctl_pc_sel),3);
        bufp->chgBit(oldp+350,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_br_eq));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_br_lt));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__io_dat_br_ltu));
        bufp->chgIData(oldp+353,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_3_data),32);
        bufp->chgIData(oldp+354,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_4_data),32);
        bufp->chgIData(oldp+355,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_rw_wdata),32);
        bufp->chgIData(oldp+356,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__rs1_data),32);
        bufp->chgIData(oldp+357,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__jump_reg_target),32);
        bufp->chgIData(oldp+358,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__jmp_target),32);
        bufp->chgIData(oldp+359,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__br_target),32);
        bufp->chgIData(oldp+360,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__alu_op1),32);
        bufp->chgIData(oldp+361,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__rs2_data),32);
        bufp->chgIData(oldp+362,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__alu_op2),32);
        bufp->chgCData(oldp+363,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__alu_shamt),5);
        bufp->chgIData(oldp+364,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__alu_out),32);
        bufp->chgIData(oldp+365,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_rw_wdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+366,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_rw_rdata),32);
        bufp->chgIData(oldp+367,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__csr_io_evec),32);
        bufp->chgIData(oldp+368,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__exception_target),32);
        bufp->chgIData(oldp+369,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_rw_rdata),32);
        bufp->chgIData(oldp+370,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_evec),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+371,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__regfile_MPORT_data),32);
        bufp->chgIData(oldp+372,(vlSymsp->TOP__sodor_top__sodor_core__d.__PVT__wb_data),32);
        bufp->chgIData(oldp+373,(vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__wdata),32);
    }
    bufp->chgBit(oldp+374,(vlSelf->clk));
    bufp->chgBit(oldp+375,(vlSelf->rst));
}

void Vsodor_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsodor_top___024root__trace_cleanup\n"); );
    // Init
    Vsodor_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsodor_top___024root*>(voidSelf);
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
