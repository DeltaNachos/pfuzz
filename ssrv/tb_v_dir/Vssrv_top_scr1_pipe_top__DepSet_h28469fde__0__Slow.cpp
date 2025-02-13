// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_top.h"

VL_ATTR_COLD void Vssrv_top_scr1_pipe_top___ctor_var_reset(Vssrv_top_scr1_pipe_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vssrv_top_scr1_pipe_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__pipe_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_width = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ext_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__soft_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mtime_ext = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__fuse_mhartid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__curr_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__new_pc_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stop_fetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_exc_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__brkpt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_init_pc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfi_run2halt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instret_nexc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__brkpt_hw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu2idu_vd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu2idu_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu2idu_imem_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu2idu_err_rvi_hi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2ifu_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2exu_req = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, vlSelf->__PVT__idu2exu_cmd);
    vlSelf->__PVT__idu2exu_use_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2exu_use_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2exu_use_rd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2exu_use_imm = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2idu_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2mprf_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mprf2exu_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu2mprf_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mprf2exu_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu2mprf_w_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2mprf_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exu2mprf_rd_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu2csr_rw_addr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exu2csr_r_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr2exu_r_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu2csr_w_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2csr_w_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exu2csr_w_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr2exu_rw_exc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2csr_take_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2csr_take_exc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2csr_mret_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2csr_mret_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2csr_exc_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exu2csr_trap_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr2exu_new_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr2exu_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr2exu_ip_ie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr2exu_mstatus_mie_up = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr2tdu_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr2tdu_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr2tdu_addr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__csr2tdu_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tdu2csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tdu2csr_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2tdu_i_mon = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__lsu2tdu_d_mon = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__tdu2exu_i_match = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tdu2lsu_d_match = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tdu2exu_i_x_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tdu2lsu_i_x_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tdu2lsu_d_x_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2tdu_bp_retire = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exu_busy = VL_RAND_RESET_I(1);
}
