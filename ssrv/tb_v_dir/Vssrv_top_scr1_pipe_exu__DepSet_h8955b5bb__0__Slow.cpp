// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_exu.h"

VL_ATTR_COLD void Vssrv_top_scr1_pipe_exu___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___stl_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0\n"); );
    // Body
    vlSelf->__PVT__init_pc = (1U & ((~ VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__init_pc_v), 3U)) 
                                    & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__init_pc_v), 2U)));
    vlSelf->__PVT__queue_barrier = ((IData)(vlSelf->__PVT__wfi_halted) 
                                    | (IData)(vlSelf->__PVT__wfi_run_start));
    vlSelf->__PVT__exu_init_pc = vlSelf->__PVT__init_pc;
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_exu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5\n"); );
    // Body
    vlSelf->__PVT__exu_rdy = (1U & ((IData)(vlSelf->__PVT__lsu_req)
                                     ? ((IData)(vlSelf->__PVT__lsu_rdy) 
                                        | (IData)(vlSelf->__PVT__lsu_exc))
                                     : ((IData)(vlSelf->__PVT__ialu_vd)
                                         ? (IData)(vlSelf->__PVT__ialu_rdy)
                                         : (~ (IData)(vlSelf->__PVT__csr2exu_mstatus_mie_up)))));
    vlSelf->__PVT__exu2idu_rdy = ((IData)(vlSelf->__PVT__exu_rdy) 
                                  & (~ (IData)(vlSelf->__PVT__queue_barrier)));
    vlSelf->__PVT__exu_busy = ((IData)(vlSelf->__PVT__exu_queue_vd) 
                               & (~ (IData)(vlSelf->__PVT__exu_rdy)));
    vlSelf->__PVT__instret = ((IData)(vlSelf->__PVT__exu_queue_vd) 
                              & (IData)(vlSelf->__PVT__exu_rdy));
    vlSelf->__PVT__exu2csr_take_irq = ((IData)(vlSelf->__PVT__csr2exu_irq) 
                                       & (~ (IData)(vlSelf->__PVT__exu_busy)));
    vlSelf->__PVT__exu2tdu_i_mon = VL_CONCAT_QIQ(34,1,33, (IData)(vlSelf->__PVT__exu_queue_vd), 
                                                 VL_CONCAT_QII(33,1,32, (IData)(vlSelf->__PVT__instret), vlSelf->__PVT__curr_pc));
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_exu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10\n"); );
    // Body
    vlSelf->__PVT__exc_req = ((IData)(vlSelf->__PVT__exu_queue_vd) 
                              & (((VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 4U) 
                                   | (IData)(vlSelf->__PVT__lsu_exc)) 
                                  | (IData)(vlSelf->__PVT__csr2exu_rw_exc)) 
                                 | (IData)(vlSelf->__PVT__brkpt_hw)));
    vlSelf->__PVT__exc_code = (0xfU & ((IData)(vlSelf->__PVT__brkpt_hw)
                                        ? 3U : ((1U 
                                                 & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 4U))
                                                 ? 
                                                VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0U, 4U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__lsu_exc)
                                                  ? (IData)(vlSelf->__PVT__lsu_exc_code)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__csr2exu_rw_exc)
                                                   ? 2U
                                                   : 0xbU)))));
    vlSelf->__PVT__exu_exc_req = vlSelf->__PVT__exc_req;
    vlSelf->__PVT__exu2mprf_w_req = ((((0U != (7U & 
                                               VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x39U, 3U))) 
                                       & (IData)(vlSelf->__PVT__exu_queue_vd)) 
                                      & (~ (IData)(vlSelf->__PVT__exc_req))) 
                                     & ((6U == (7U 
                                                & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x39U, 3U)))
                                         ? (~ (IData)(vlSelf->__PVT__csr_access))
                                         : (IData)(vlSelf->__PVT__exu_rdy)));
    vlSelf->__PVT__exu2mprf_rd_addr = (0x1fU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x25U, 5U));
    vlSelf->__PVT__exu2mprf_rd_data = ((2U == (7U & 
                                               VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x39U, 3U)))
                                        ? vlSelf->__PVT__ialu_sum2_res
                                        : ((3U == (7U 
                                                   & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x39U, 3U)))
                                            ? VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x39U, 3U)))
                                                ? vlSelf->__PVT__inc_pc
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x39U, 3U)))
                                                    ? vlSelf->__PVT__lsu_l_data
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x39U, 3U)))
                                                     ? vlSelf->__PVT__csr2exu_r_data
                                                     : vlSelf->__PVT__ialu_res)))));
    vlSelf->__PVT__instret_nexc = ((IData)(vlSelf->__PVT__instret) 
                                   & (~ (IData)(vlSelf->__PVT__exc_req)));
    vlSelf->__PVT__exu2csr_take_exc = vlSelf->__PVT__exc_req;
    vlSelf->__PVT__exu2csr_exc_code = vlSelf->__PVT__exc_code;
    vlSelf->__PVT__exu2csr_trap_val = ((1U == (IData)(vlSelf->__PVT__exc_code))
                                        ? ((IData)(vlSelf->__PVT__ifu_fault_rvi_hi)
                                            ? vlSelf->__PVT__inc_pc
                                            : vlSelf->__PVT__curr_pc)
                                        : ((2U == (IData)(vlSelf->__PVT__exc_code))
                                            ? ((1U 
                                                & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 4U))
                                                ? VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U)
                                                : VL_CONCAT_III(32,12,20, (IData)(vlSelf->__PVT__exu2csr_rw_addr), 
                                                                VL_CONCAT_III(20,5,15, 
                                                                              (0x1fU 
                                                                               & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2fU, 5U)), 
                                                                              VL_CONCAT_III(15,3,12, 
                                                                                (7U 
                                                                                & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x11U, 3U)), 
                                                                                VL_CONCAT_III(12,5,7, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x25U, 5U)), 0x73U)))))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__exc_code))
                                                ? ((IData)(vlSelf->__PVT__tdu2exu_i_x_req)
                                                    ? vlSelf->__PVT__curr_pc
                                                    : 
                                                   ((IData)(vlSelf->__PVT__tdu2lsu_d_x_req)
                                                     ? vlSelf->__PVT__ialu_sum2_res
                                                     : 0U))
                                                : (
                                                   ((((4U 
                                                       == (IData)(vlSelf->__PVT__exc_code)) 
                                                      | (5U 
                                                         == (IData)(vlSelf->__PVT__exc_code))) 
                                                     | (6U 
                                                        == (IData)(vlSelf->__PVT__exc_code))) 
                                                    | (7U 
                                                       == (IData)(vlSelf->__PVT__exc_code)))
                                                    ? vlSelf->__PVT__ialu_sum2_res
                                                    : 0U))));
    vlSelf->__PVT__new_pc_req = (((((((IData)(vlSelf->__PVT__init_pc) 
                                      | (IData)(vlSelf->__PVT__exu2csr_take_irq)) 
                                     | (IData)(vlSelf->__PVT__exu2csr_take_exc)) 
                                    | ((IData)(vlSelf->__PVT__exu2csr_mret_instr) 
                                       & (~ (IData)(vlSelf->__PVT__csr2exu_mstatus_mie_up)))) 
                                   | ((IData)(vlSelf->__PVT__exu_queue_vd) 
                                      & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x35U))) 
                                  | (IData)(vlSelf->__PVT__wfi_run_start)) 
                                 | ((IData)(vlSelf->__PVT__exu_queue_vd) 
                                    & (VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x38U) 
                                       | (VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x37U) 
                                          & (IData)(vlSelf->__PVT__ialu_cmp)))));
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_exu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___stl_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11\n"); );
    // Body
    vlSelf->__PVT__new_pc = ((IData)(vlSelf->__PVT__init_pc)
                              ? 0x200U : ((((IData)(vlSelf->__PVT__exu2csr_take_exc) 
                                            | (IData)(vlSelf->__PVT__exu2csr_take_irq)) 
                                           | (IData)(vlSelf->__PVT__exu2csr_mret_instr))
                                           ? vlSelf->__PVT__csr2exu_new_pc
                                           : ((IData)(vlSelf->__PVT__wfi_run_start)
                                               ? vlSelf->__PVT__curr_pc
                                               : ((1U 
                                                   & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x35U))
                                                   ? vlSelf->__PVT__inc_pc
                                                   : 
                                                  (0xfffffffeU 
                                                   & vlSelf->__PVT__ialu_sum2_res)))));
}

VL_ATTR_COLD void Vssrv_top_scr1_pipe_exu___ctor_var_reset(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2exu_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2idu_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, vlSelf->__PVT__idu2exu_cmd);
    vlSelf->__PVT__idu2exu_use_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idu2exu_use_rs2 = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__exu2dmem_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2dmem_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2dmem_width = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exu2dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu2dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem2exu_req_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem2exu_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem2exu_resp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exu_exc_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__brkpt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_init_pc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfi_run2halt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instret_nexc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2tdu_i_mon = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__tdu2exu_i_match = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tdu2exu_i_x_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu2tdu_d_mon = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__tdu2lsu_i_x_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tdu2lsu_d_match = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tdu2lsu_d_x_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu2tdu_bp_retire = VL_RAND_RESET_I(3);
    vlSelf->__PVT__brkpt_hw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__curr_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__new_pc_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exu_queue_vd = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, vlSelf->__PVT__exu_queue);
    vlSelf->__PVT__queue_barrier = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ialu_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ialu_vd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ialu_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_sum2_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_sum2_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_sum2_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ialu_cmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_l_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lsu_exc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_exc_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__csr_access = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exc_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exc_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ifu_fault_rvi_hi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfi_halted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfi_halt_cond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfi_run_cond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfi_run_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc_v = VL_RAND_RESET_I(4);
    vlSelf->__PVT__init_pc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inc_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__i_ialu__ialu_cmd = VL_RAND_RESET_I(5);
    vlSelf->__Vcellinp__i_lsu__exu2lsu_cmd = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__csr_access = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__init_pc_v = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__curr_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__wfi_run_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__wfi_halted = VL_RAND_RESET_I(1);
}
