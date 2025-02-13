// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_top.h"

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___eval_initial__TOP__ssrv_top__core__i_pipe_top(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___eval_initial__TOP__ssrv_top__core__i_pipe_top\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__dsbl = 0U;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk_en = 1U;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__0(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__0\n"); );
    // Body
    vlSelf->__PVT__curr_pc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__curr_pc;
    vlSelf->__PVT__imem_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_cmd;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__curr_pc 
        = vlSelf->__PVT__curr_pc;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__1(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__1\n"); );
    // Body
    vlSelf->__PVT__exu_init_pc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_init_pc;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__ext_irq 
        = vlSelf->__PVT__ext_irq;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__mtime_ext 
        = vlSelf->__PVT__mtime_ext;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__fuse_mhartid 
        = vlSelf->__PVT__fuse_mhartid;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__timer_irq 
        = vlSelf->__PVT__timer_irq;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__soft_irq 
        = vlSelf->__PVT__soft_irq;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__dmem2exu_req_ack 
        = vlSelf->__PVT__dmem_req_ack;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_req_ack 
        = vlSelf->__PVT__imem_req_ack;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__dmem2exu_rdata 
        = vlSelf->__PVT__dmem_rdata;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__dmem2exu_resp 
        = vlSelf->__PVT__dmem_resp;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_rdata 
        = vlSelf->__PVT__imem_rdata;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_resp 
        = vlSelf->__PVT__imem_resp;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__2(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__2\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__rst_n 
        = vlSelf->__PVT__pipe_rst_n;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__rst_n 
        = vlSelf->__PVT__pipe_rst_n;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__rst_n 
        = vlSelf->__PVT__pipe_rst_n;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__rst_n 
        = vlSelf->__PVT__pipe_rst_n;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__rst_n 
        = vlSelf->__PVT__pipe_rst_n;
    vlSelf->__PVT__csr2exu_ip_ie = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_ip_ie;
    vlSelf->__PVT__csr2exu_irq = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_irq;
    vlSelf->__PVT__ifu2idu_instr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_instr;
    vlSelf->__PVT__ifu2idu_vd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_vd;
    vlSelf->__PVT__ifu2idu_imem_err = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_imem_err;
    vlSelf->__PVT__ifu2idu_err_rvi_hi = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__ifu2idu_err_rvi_hi;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_ip_ie 
        = vlSelf->__PVT__csr2exu_ip_ie;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_irq 
        = vlSelf->__PVT__csr2exu_irq;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_instr 
        = vlSelf->__PVT__ifu2idu_instr;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_vd 
        = vlSelf->__PVT__ifu2idu_vd;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_imem_err 
        = vlSelf->__PVT__ifu2idu_imem_err;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__ifu2idu_err_rvi_hi 
        = vlSelf->__PVT__ifu2idu_err_rvi_hi;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__3(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__3\n"); );
    // Body
    vlSelf->__PVT__idu2exu_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_req;
    vlSelf->__PVT__idu2exu_use_rd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_rd;
    vlSelf->__PVT__idu2exu_use_imm = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_imm;
    vlSelf->__PVT__idu2exu_use_rs2 = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_rs2;
    vlSelf->__PVT__idu2exu_use_rs1 = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_use_rs1;
    VL_ASSIGN_W(75,vlSelf->__PVT__idu2exu_cmd, vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2exu_cmd);
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_req 
        = vlSelf->__PVT__idu2exu_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_use_rs2 
        = vlSelf->__PVT__idu2exu_use_rs2;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_use_rs1 
        = vlSelf->__PVT__idu2exu_use_rs1;
    VL_ASSIGN_W(75,vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__idu2exu_cmd, vlSelf->__PVT__idu2exu_cmd);
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__4(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__4\n"); );
    // Body
    vlSelf->__PVT__brkpt = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__brkpt;
    vlSelf->__PVT__exu2csr_w_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_w_cmd;
    vlSelf->__PVT__exu2csr_rw_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_rw_addr;
    vlSelf->__PVT__exu2mprf_rs2_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rs2_addr;
    vlSelf->__PVT__exu2mprf_rs1_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rs1_addr;
    vlSelf->__PVT__wfi_run2halt = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__wfi_run2halt;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_w_cmd 
        = vlSelf->__PVT__exu2csr_w_cmd;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_rw_addr 
        = vlSelf->__PVT__exu2csr_rw_addr;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rs2_addr 
        = vlSelf->__PVT__exu2mprf_rs2_addr;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rs1_addr 
        = vlSelf->__PVT__exu2mprf_rs1_addr;
    vlSelf->__PVT__stop_fetch = vlSelf->__PVT__wfi_run2halt;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__stop_fetch 
        = vlSelf->__PVT__stop_fetch;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__5(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__5\n"); );
    // Body
    vlSelf->__PVT__csr2tdu_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_cmd;
    vlSelf->__PVT__csr2tdu_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_addr;
    vlSelf->__PVT__mprf2exu_rs2_data = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__mprf2exu_rs2_data;
    vlSelf->__PVT__mprf2exu_rs1_data = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__mprf2exu_rs1_data;
    vlSelf->__PVT__dmem_width = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_width;
    vlSelf->__PVT__dmem_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_cmd;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_cmd 
        = vlSelf->__PVT__csr2tdu_cmd;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_addr 
        = vlSelf->__PVT__csr2tdu_addr;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__mprf2exu_rs2_data 
        = vlSelf->__PVT__mprf2exu_rs2_data;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__mprf2exu_rs1_data 
        = vlSelf->__PVT__mprf2exu_rs1_data;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__6(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__6\n"); );
    // Body
    vlSelf->__PVT__exu2csr_w_data = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_w_data;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_w_data 
        = vlSelf->__PVT__exu2csr_w_data;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__7(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_sequent__TOP__ssrv_top__core__i_pipe_top__7\n"); );
    // Body
    vlSelf->__PVT__dmem_wdata = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_wdata;
    vlSelf->__PVT__csr2tdu_wdata = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_wdata;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_wdata 
        = vlSelf->__PVT__csr2tdu_wdata;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__0(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__0\n"); );
    // Body
    vlSelf->__PVT__exu2csr_mret_instr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_mret_instr;
    vlSelf->__PVT__exu2csr_r_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_r_req;
    vlSelf->__PVT__exu2csr_w_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_w_req;
    vlSelf->__PVT__exu2csr_mret_update = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_mret_update;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_mret_instr 
        = vlSelf->__PVT__exu2csr_mret_instr;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_r_req 
        = vlSelf->__PVT__exu2csr_r_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_w_req 
        = vlSelf->__PVT__exu2csr_w_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_mret_update 
        = vlSelf->__PVT__exu2csr_mret_update;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__1(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__1\n"); );
    // Body
    vlSelf->__PVT__csr2exu_mstatus_mie_up = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_mstatus_mie_up;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_mstatus_mie_up 
        = vlSelf->__PVT__csr2exu_mstatus_mie_up;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__2(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__2\n"); );
    // Body
    vlSelf->__PVT__tdu2csr_resp = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_resp;
    vlSelf->__PVT__tdu2csr_rdata = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_rdata;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__tdu2csr_resp 
        = vlSelf->__PVT__tdu2csr_resp;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__tdu2csr_rdata 
        = vlSelf->__PVT__tdu2csr_rdata;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__3(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__3\n"); );
    // Body
    vlSelf->__PVT__dmem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_addr;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__4(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__4\n"); );
    // Body
    vlSelf->__PVT__csr2exu_r_data = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_r_data;
    vlSelf->__PVT__csr2tdu_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2tdu_req;
    vlSelf->__PVT__csr2exu_rw_exc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_rw_exc;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_r_data 
        = vlSelf->__PVT__csr2exu_r_data;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__csr2tdu_req 
        = vlSelf->__PVT__csr2tdu_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_rw_exc 
        = vlSelf->__PVT__csr2exu_rw_exc;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__5(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__5\n"); );
    // Body
    vlSelf->__PVT__dmem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2dmem_req;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__6(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__6\n"); );
    // Body
    vlSelf->__PVT__next_pc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__next_pc;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__next_pc 
        = vlSelf->__PVT__next_pc;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__7(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__7\n"); );
    // Body
    vlSelf->__PVT__exu2idu_rdy = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2idu_rdy;
    vlSelf->__PVT__exu_busy = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_busy;
    vlSelf->__PVT__instret = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__instret;
    vlSelf->__PVT__exu2csr_take_irq = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_take_irq;
    vlSelf->__PVT__exu2tdu_i_mon = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2tdu_i_mon;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__exu2idu_rdy 
        = vlSelf->__PVT__exu2idu_rdy;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_take_irq 
        = vlSelf->__PVT__exu2csr_take_irq;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__exu2tdu_i_mon 
        = vlSelf->__PVT__exu2tdu_i_mon;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__8(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__8\n"); );
    // Body
    vlSelf->__PVT__idu2ifu_rdy = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_idu.__PVT__idu2ifu_rdy;
    vlSelf->__PVT__tdu2exu_i_match = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2exu_i_match;
    vlSelf->__PVT__tdu2exu_i_x_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2exu_i_x_req;
    vlSelf->__PVT__tdu2lsu_i_x_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_i_x_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__idu2ifu_rdy 
        = vlSelf->__PVT__idu2ifu_rdy;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2exu_i_match 
        = vlSelf->__PVT__tdu2exu_i_match;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2exu_i_x_req 
        = vlSelf->__PVT__tdu2exu_i_x_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2lsu_i_x_req 
        = vlSelf->__PVT__tdu2lsu_i_x_req;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__9(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__9\n"); );
    // Body
    vlSelf->__PVT__lsu2tdu_d_mon = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__lsu2tdu_d_mon;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_d_mon 
        = vlSelf->__PVT__lsu2tdu_d_mon;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__10(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__10\n"); );
    // Body
    vlSelf->__PVT__tdu2lsu_d_match = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_d_match;
    vlSelf->__PVT__tdu2lsu_d_x_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__tdu2lsu_d_x_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2lsu_d_match 
        = vlSelf->__PVT__tdu2lsu_d_match;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__tdu2lsu_d_x_req 
        = vlSelf->__PVT__tdu2lsu_d_x_req;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__11(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__11\n"); );
    // Body
    vlSelf->__PVT__exu2tdu_bp_retire = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2tdu_bp_retire;
    vlSelf->__PVT__brkpt_hw = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__brkpt_hw;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu.__PVT__exu2tdu_bp_retire 
        = vlSelf->__PVT__exu2tdu_bp_retire;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__12(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__12\n"); );
    // Body
    vlSelf->__PVT__exu_exc_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu_exc_req;
    vlSelf->__PVT__exu2mprf_w_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_w_req;
    vlSelf->__PVT__exu2mprf_rd_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rd_addr;
    vlSelf->__PVT__exu2mprf_rd_data = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2mprf_rd_data;
    vlSelf->__PVT__instret_nexc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__instret_nexc;
    vlSelf->__PVT__exu2csr_take_exc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_take_exc;
    vlSelf->__PVT__exu2csr_exc_code = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_exc_code;
    vlSelf->__PVT__exu2csr_trap_val = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__exu2csr_trap_val;
    vlSelf->__PVT__new_pc_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__new_pc_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_w_req 
        = vlSelf->__PVT__exu2mprf_w_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rd_addr 
        = vlSelf->__PVT__exu2mprf_rd_addr;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf.__PVT__exu2mprf_rd_data 
        = vlSelf->__PVT__exu2mprf_rd_data;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__instret_nexc 
        = vlSelf->__PVT__instret_nexc;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_take_exc 
        = vlSelf->__PVT__exu2csr_take_exc;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_exc_code 
        = vlSelf->__PVT__exu2csr_exc_code;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__exu2csr_trap_val 
        = vlSelf->__PVT__exu2csr_trap_val;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__new_pc_req 
        = vlSelf->__PVT__new_pc_req;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__13(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__13\n"); );
    // Body
    vlSelf->__PVT__csr2exu_new_pc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_csr.__PVT__csr2exu_new_pc;
    vlSelf->__PVT__imem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__csr2exu_new_pc 
        = vlSelf->__PVT__csr2exu_new_pc;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__14(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__14\n"); );
    // Body
    vlSelf->__PVT__new_pc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu.__PVT__new_pc;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__new_pc 
        = vlSelf->__PVT__new_pc;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__15(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___stl_comb__TOP__ssrv_top__core__i_pipe_top__15\n"); );
    // Body
    vlSelf->__PVT__imem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu.__PVT__imem_addr;
}
