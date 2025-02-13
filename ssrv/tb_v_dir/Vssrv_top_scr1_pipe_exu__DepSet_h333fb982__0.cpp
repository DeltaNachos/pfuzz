// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_exu.h"

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___ico_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___ico_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem2lsu_rdata 
        = vlSelf->__PVT__dmem2exu_rdata;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1\n"); );
    // Body
    vlSelf->__PVT__lsu_l_data = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_l_data;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2\n"); );
    // Body
    vlSelf->__PVT__exu_queue_vd = ((IData)(vlSelf->__PVT__idu2exu_req) 
                                   & (~ (IData)(vlSelf->__PVT__queue_barrier)));
    VL_ASSIGN_W(75,vlSelf->__PVT__exu_queue, vlSelf->__PVT__idu2exu_cmd);
    vlSelf->__PVT__brkpt = ((IData)(vlSelf->__PVT__exu_queue_vd) 
                            & (3U == (0xfU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0U, 4U))));
    vlSelf->__PVT__ifu_fault_rvi_hi = (1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x4aU));
    vlSelf->__PVT__wfi_halt_cond = ((~ (IData)(vlSelf->__PVT__csr2exu_ip_ie)) 
                                    & (((IData)(vlSelf->__PVT__exu_queue_vd) 
                                        & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x34U)) 
                                       | (IData)(vlSelf->__PVT__wfi_run_start)));
    vlSelf->__PVT__inc_pc = (vlSelf->__PVT__curr_pc 
                             + ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x4aU))
                                 ? 2U : 4U));
    vlSelf->__PVT__exu2csr_w_cmd = (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U));
    vlSelf->__Vcellinp__i_lsu__exu2lsu_cmd = (0xfU 
                                              & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3fU, 4U));
    vlSelf->__PVT__exu2csr_rw_addr = (0xfffU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0xcU));
    vlSelf->__PVT__lsu_req = ((0U != (0xfU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3fU, 4U))) 
                              & (IData)(vlSelf->__PVT__exu_queue_vd));
    vlSelf->__Vcellinp__i_ialu__ialu_cmd = (0x1fU & 
                                            VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x44U, 5U));
    vlSelf->__PVT__exu2mprf_rs2_addr = (0x1fU & (((IData)(vlSelf->__PVT__exu_queue_vd) 
                                                  & (IData)(vlSelf->__PVT__idu2exu_use_rs2))
                                                  ? 
                                                 VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2aU, 5U)
                                                  : 0U));
    vlSelf->__PVT__exu2mprf_rs1_addr = (0x1fU & (((IData)(vlSelf->__PVT__exu_queue_vd) 
                                                  & (IData)(vlSelf->__PVT__idu2exu_use_rs1))
                                                  ? 
                                                 VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2fU, 5U)
                                                  : 0U));
    vlSelf->__PVT__wfi_run2halt = ((~ (IData)(vlSelf->__PVT__wfi_halted)) 
                                   & (IData)(vlSelf->__PVT__wfi_halt_cond));
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_cmd 
        = vlSelf->__Vcellinp__i_lsu__exu2lsu_cmd;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_req 
        = vlSelf->__PVT__lsu_req;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_cmd 
        = vlSelf->__Vcellinp__i_ialu__ialu_cmd;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3\n"); );
    // Body
    vlSelf->__PVT__exu2dmem_width = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_width;
    vlSelf->__PVT__exu2dmem_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_cmd;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_s_data 
        = vlSelf->__PVT__mprf2exu_rs2_data;
    vlSelf->__PVT__exu2csr_w_data = ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3eU))
                                      ? vlSelf->__PVT__mprf2exu_rs1_data
                                      : VL_EXTEND_II(32,5, 
                                                     (0x1fU 
                                                      & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2fU, 5U))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__5\n"); );
    // Body
    vlSelf->__PVT__exu2dmem_wdata = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_wdata;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    vlSelf->__PVT__exu2csr_mret_instr = (((IData)(vlSelf->__PVT__exu_queue_vd) 
                                          & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x36U)) 
                                         & (~ (IData)(vlSelf->__PVT__tdu2exu_i_x_req)));
    vlSelf->__PVT__exu2csr_r_req = 0U;
    vlSelf->__PVT__exu2csr_w_req = 0U;
    if (vlSelf->__PVT__exu_queue_vd) {
        if ((1U == (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U)))) {
            vlSelf->__PVT__exu2csr_r_req = VL_REDOR_I(
                                                      (0x1fU 
                                                       & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x25U, 5U)));
            vlSelf->__PVT__exu2csr_w_req = (1U & (~ (IData)(vlSelf->__PVT__csr_access)));
        } else if (((2U == (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U))) 
                    | (3U == (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U))))) {
            vlSelf->__PVT__exu2csr_r_req = 1U;
            vlSelf->__PVT__exu2csr_w_req = (VL_REDOR_I(
                                                       (0x1fU 
                                                        & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2fU, 5U))) 
                                            & (~ (IData)(vlSelf->__PVT__csr_access)));
        }
    }
    if (vlSelf->__PVT__tdu2exu_i_x_req) {
        vlSelf->__PVT__exu2csr_r_req = 0U;
        vlSelf->__PVT__exu2csr_w_req = 0U;
    }
    vlSelf->__PVT__ialu_vd = (((IData)(vlSelf->__PVT__exu_queue_vd) 
                               & (0U != (0x1fU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x44U, 5U)))) 
                              & (~ (IData)(vlSelf->__PVT__tdu2exu_i_x_req)));
    vlSelf->__PVT__exu2csr_mret_update = ((IData)(vlSelf->__PVT__exu2csr_mret_instr) 
                                          & (~ (IData)(vlSelf->__PVT__csr_access)));
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_vd 
        = vlSelf->__PVT__ialu_vd;
    if ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x49U))) {
        vlSelf->__PVT__ialu_op1 = vlSelf->__PVT__mprf2exu_rs1_data;
        vlSelf->__PVT__ialu_op2 = vlSelf->__PVT__mprf2exu_rs2_data;
    } else {
        vlSelf->__PVT__ialu_op1 = vlSelf->__PVT__mprf2exu_rs1_data;
        vlSelf->__PVT__ialu_op2 = VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U);
    }
    __Vtemp_1 = ((IData)(vlSelf->__PVT__ialu_vd) ? vlSelf->__PVT__ialu_op1
                  : 0U);
    vlSelf->__PVT__ialu_op1 = __Vtemp_1;
    __Vtemp_2 = ((IData)(vlSelf->__PVT__ialu_vd) ? vlSelf->__PVT__ialu_op2
                  : 0U);
    vlSelf->__PVT__ialu_op2 = __Vtemp_2;
    if ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x43U))) {
        vlSelf->__PVT__ialu_sum2_op1 = vlSelf->__PVT__mprf2exu_rs1_data;
        vlSelf->__PVT__ialu_sum2_op2 = VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U);
    } else {
        vlSelf->__PVT__ialu_sum2_op1 = vlSelf->__PVT__curr_pc;
        vlSelf->__PVT__ialu_sum2_op2 = VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U);
    }
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_op1 
        = vlSelf->__PVT__ialu_sum2_op1;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_op2 
        = vlSelf->__PVT__ialu_sum2_op2;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_op2 
        = vlSelf->__PVT__ialu_op2;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_op1 
        = vlSelf->__PVT__ialu_op1;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1\n"); );
    // Body
    vlSelf->__PVT__ialu_sum2_res = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_res;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_addr 
        = vlSelf->__PVT__ialu_sum2_res;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2\n"); );
    // Body
    vlSelf->__PVT__exu2dmem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_addr;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3\n"); );
    // Body
    vlSelf->__PVT__lsu_exc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_exc;
    vlSelf->__PVT__exu2dmem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4\n"); );
    // Body
    vlSelf->__PVT__ialu_res = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_res;
    vlSelf->__PVT__ialu_cmp = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_cmp;
    vlSelf->__PVT__ialu_rdy = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_rdy;
    vlSelf->__PVT__next_pc = ((IData)(vlSelf->__PVT__exu_queue_vd)
                               ? ((1U & (VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x38U) 
                                         | (VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x37U) 
                                            & (IData)(vlSelf->__PVT__ialu_cmp))))
                                   ? (0xfffffffeU & vlSelf->__PVT__ialu_sum2_res)
                                   : vlSelf->__PVT__inc_pc)
                               : vlSelf->__PVT__curr_pc);
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__tdu2lsu_i_x_req 
        = vlSelf->__PVT__tdu2lsu_i_x_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7\n"); );
    // Body
    vlSelf->__PVT__lsu2tdu_d_mon = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2tdu_d_mon;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__exu2tdu_bp_retire = 0U;
    if (vlSelf->__PVT__exu_queue_vd) {
        vlSelf->__PVT__exu2tdu_bp_retire = vlSelf->__PVT__tdu2exu_i_match;
        if (vlSelf->__PVT__lsu_req) {
            __Vtemp_1 = (3U & (VL_SEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 0U, 2U) 
                               | (IData)(vlSelf->__PVT__tdu2lsu_d_match)));
            VL_ASSIGNSEL_II(3,2,0U, vlSelf->__PVT__exu2tdu_bp_retire, __Vtemp_1);
        }
    }
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__tdu2lsu_d_x_req 
        = vlSelf->__PVT__tdu2lsu_d_x_req;
    vlSelf->__PVT__brkpt_hw = ((IData)(vlSelf->__PVT__tdu2exu_i_x_req) 
                               | (IData)(vlSelf->__PVT__tdu2lsu_d_x_req));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9\n"); );
    // Body
    vlSelf->__PVT__lsu_exc_code = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_exc_code;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__1\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem2lsu_req_ack 
        = vlSelf->__PVT__dmem2exu_req_ack;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__dmem2lsu_resp 
        = vlSelf->__PVT__dmem2exu_resp;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2\n"); );
    // Body
    vlSelf->__PVT__lsu_rdy = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_rdy;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__0\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3\n"); );
    // Body
    vlSelf->__PVT__lsu_l_data = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_l_data;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__2\n"); );
    // Body
    VL_ASSIGN_W(75,vlSelf->__PVT__exu_queue, vlSelf->__PVT__idu2exu_cmd);
    vlSelf->__PVT__ifu_fault_rvi_hi = (1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x4aU));
    vlSelf->__PVT__exu2csr_w_cmd = (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U));
    vlSelf->__Vcellinp__i_lsu__exu2lsu_cmd = (0xfU 
                                              & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3fU, 4U));
    vlSelf->__PVT__exu2csr_rw_addr = (0xfffU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0xcU));
    vlSelf->__Vcellinp__i_ialu__ialu_cmd = (0x1fU & 
                                            VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x44U, 5U));
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_cmd 
        = vlSelf->__Vcellinp__i_lsu__exu2lsu_cmd;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_cmd 
        = vlSelf->__Vcellinp__i_ialu__ialu_cmd;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__3\n"); );
    // Body
    vlSelf->__PVT__exu2dmem_width = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_width;
    vlSelf->__PVT__exu2dmem_cmd = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_cmd;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__4\n"); );
    // Body
    vlSelf->__PVT__exu_queue_vd = ((IData)(vlSelf->__PVT__idu2exu_req) 
                                   & (~ (IData)(vlSelf->__PVT__queue_barrier)));
    vlSelf->__PVT__inc_pc = (vlSelf->__PVT__curr_pc 
                             + ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x4aU))
                                 ? 2U : 4U));
    vlSelf->__PVT__brkpt = ((IData)(vlSelf->__PVT__exu_queue_vd) 
                            & (3U == (0xfU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0U, 4U))));
    vlSelf->__PVT__lsu_req = ((0U != (0xfU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3fU, 4U))) 
                              & (IData)(vlSelf->__PVT__exu_queue_vd));
    vlSelf->__PVT__exu2mprf_rs2_addr = (0x1fU & (((IData)(vlSelf->__PVT__exu_queue_vd) 
                                                  & (IData)(vlSelf->__PVT__idu2exu_use_rs2))
                                                  ? 
                                                 VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2aU, 5U)
                                                  : 0U));
    vlSelf->__PVT__exu2mprf_rs1_addr = (0x1fU & (((IData)(vlSelf->__PVT__exu_queue_vd) 
                                                  & (IData)(vlSelf->__PVT__idu2exu_use_rs1))
                                                  ? 
                                                 VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2fU, 5U)
                                                  : 0U));
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_req 
        = vlSelf->__PVT__lsu_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__6\n"); );
    // Body
    vlSelf->__PVT__exu2csr_mret_instr = (((IData)(vlSelf->__PVT__exu_queue_vd) 
                                          & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x36U)) 
                                         & (~ (IData)(vlSelf->__PVT__tdu2exu_i_x_req)));
    vlSelf->__PVT__exu2csr_r_req = 0U;
    vlSelf->__PVT__exu2csr_w_req = 0U;
    if (vlSelf->__PVT__exu_queue_vd) {
        if ((1U == (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U)))) {
            vlSelf->__PVT__exu2csr_r_req = VL_REDOR_I(
                                                      (0x1fU 
                                                       & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x25U, 5U)));
            vlSelf->__PVT__exu2csr_w_req = (1U & (~ (IData)(vlSelf->__PVT__csr_access)));
        } else if (((2U == (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U))) 
                    | (3U == (3U & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3cU, 2U))))) {
            vlSelf->__PVT__exu2csr_r_req = 1U;
            vlSelf->__PVT__exu2csr_w_req = (VL_REDOR_I(
                                                       (0x1fU 
                                                        & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2fU, 5U))) 
                                            & (~ (IData)(vlSelf->__PVT__csr_access)));
        }
    }
    if (vlSelf->__PVT__tdu2exu_i_x_req) {
        vlSelf->__PVT__exu2csr_r_req = 0U;
        vlSelf->__PVT__exu2csr_w_req = 0U;
    }
    vlSelf->__PVT__ialu_vd = (((IData)(vlSelf->__PVT__exu_queue_vd) 
                               & (0U != (0x1fU & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x44U, 5U)))) 
                              & (~ (IData)(vlSelf->__PVT__tdu2exu_i_x_req)));
    vlSelf->__PVT__exu2csr_mret_update = ((IData)(vlSelf->__PVT__exu2csr_mret_instr) 
                                          & (~ (IData)(vlSelf->__PVT__csr_access)));
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_vd 
        = vlSelf->__PVT__ialu_vd;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__7\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_s_data 
        = vlSelf->__PVT__mprf2exu_rs2_data;
    vlSelf->__PVT__exu2csr_w_data = ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x3eU))
                                      ? vlSelf->__PVT__mprf2exu_rs1_data
                                      : VL_EXTEND_II(32,5, 
                                                     (0x1fU 
                                                      & VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 0x2fU, 5U))));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__8\n"); );
    // Body
    vlSelf->__PVT__exu2dmem_wdata = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_wdata;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__9\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    if ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x49U))) {
        vlSelf->__PVT__ialu_op1 = vlSelf->__PVT__mprf2exu_rs1_data;
        vlSelf->__PVT__ialu_op2 = vlSelf->__PVT__mprf2exu_rs2_data;
    } else {
        vlSelf->__PVT__ialu_op1 = vlSelf->__PVT__mprf2exu_rs1_data;
        vlSelf->__PVT__ialu_op2 = VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U);
    }
    __Vtemp_1 = ((IData)(vlSelf->__PVT__ialu_vd) ? vlSelf->__PVT__ialu_op1
                  : 0U);
    vlSelf->__PVT__ialu_op1 = __Vtemp_1;
    __Vtemp_2 = ((IData)(vlSelf->__PVT__ialu_vd) ? vlSelf->__PVT__ialu_op2
                  : 0U);
    vlSelf->__PVT__ialu_op2 = __Vtemp_2;
    if ((1U & VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x43U))) {
        vlSelf->__PVT__ialu_sum2_op1 = vlSelf->__PVT__mprf2exu_rs1_data;
        vlSelf->__PVT__ialu_sum2_op2 = VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U);
    } else {
        vlSelf->__PVT__ialu_sum2_op1 = vlSelf->__PVT__curr_pc;
        vlSelf->__PVT__ialu_sum2_op2 = VL_SEL_IWII(75, vlSelf->__PVT__exu_queue, 5U, 0x20U);
    }
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_op1 
        = vlSelf->__PVT__ialu_sum2_op1;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_op2 
        = vlSelf->__PVT__ialu_sum2_op2;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_op2 
        = vlSelf->__PVT__ialu_op2;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_op1 
        = vlSelf->__PVT__ialu_op1;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__10\n"); );
    // Body
    vlSelf->__PVT__ialu_sum2_res = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_sum2_res;
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__exu2lsu_addr 
        = vlSelf->__PVT__ialu_sum2_res;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__11\n"); );
    // Body
    vlSelf->__PVT__exu2dmem_addr = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_addr;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__12(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__12\n"); );
    // Body
    vlSelf->__PVT__lsu_exc = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_exc;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__13(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__13\n"); );
    // Body
    vlSelf->__PVT__ialu_res = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_res;
    vlSelf->__PVT__ialu_cmp = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_cmp;
    vlSelf->__PVT__ialu_rdy = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu.__PVT__ialu_rdy;
    vlSelf->__PVT__next_pc = ((IData)(vlSelf->__PVT__exu_queue_vd)
                               ? ((1U & (VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x38U) 
                                         | (VL_BITSEL_IWII(75, vlSelf->__PVT__exu_queue, 0x37U) 
                                            & (IData)(vlSelf->__PVT__ialu_cmp))))
                                   ? (0xfffffffeU & vlSelf->__PVT__ialu_sum2_res)
                                   : vlSelf->__PVT__inc_pc)
                               : vlSelf->__PVT__curr_pc);
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__14(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__14\n"); );
    // Body
    vlSelf->__PVT__exu2dmem_req = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2dmem_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__17(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__17\n"); );
    // Body
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__tdu2lsu_i_x_req 
        = vlSelf->__PVT__tdu2lsu_i_x_req;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__18(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__18\n"); );
    // Body
    vlSelf->__PVT__lsu2tdu_d_mon = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2tdu_d_mon;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__19(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__19\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__exu2tdu_bp_retire = 0U;
    if (vlSelf->__PVT__exu_queue_vd) {
        vlSelf->__PVT__exu2tdu_bp_retire = vlSelf->__PVT__tdu2exu_i_match;
        if (vlSelf->__PVT__lsu_req) {
            __Vtemp_1 = (3U & (VL_SEL_IIII(3, (IData)(vlSelf->__PVT__exu2tdu_bp_retire), 0U, 2U) 
                               | (IData)(vlSelf->__PVT__tdu2lsu_d_match)));
            VL_ASSIGNSEL_II(3,2,0U, vlSelf->__PVT__exu2tdu_bp_retire, __Vtemp_1);
        }
    }
    vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__tdu2lsu_d_x_req 
        = vlSelf->__PVT__tdu2lsu_d_x_req;
    vlSelf->__PVT__brkpt_hw = ((IData)(vlSelf->__PVT__tdu2exu_i_x_req) 
                               | (IData)(vlSelf->__PVT__tdu2lsu_d_x_req));
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__20(Vssrv_top_scr1_pipe_exu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_exu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__20\n"); );
    // Body
    vlSelf->__PVT__lsu_exc_code = vlSymsp->TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu.__PVT__lsu2exu_exc_code;
}
