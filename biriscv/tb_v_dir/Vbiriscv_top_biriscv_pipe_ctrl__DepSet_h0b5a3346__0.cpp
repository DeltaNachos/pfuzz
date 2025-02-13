// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_pipe_ctrl.h"
#include "Vbiriscv_top_biriscv_trace_sim.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__0\n"); );
    // Body
    vlSelf->__Vdly__squash_e1_e2_q = vlSelf->__PVT__squash_e1_e2_q;
    vlSelf->__Vdly__exception_e2_q = vlSelf->__PVT__exception_e2_q;
    vlSelf->__Vdly__npc_wb_q = vlSelf->__PVT__npc_wb_q;
    vlSelf->__Vdly__operand_rb_wb_q = vlSelf->__PVT__operand_rb_wb_q;
    vlSelf->__Vdly__operand_ra_wb_q = vlSelf->__PVT__operand_ra_wb_q;
    vlSelf->__Vdly__csr_wdata_wb_q = vlSelf->__PVT__csr_wdata_wb_q;
    vlSelf->__Vdly__csr_wr_wb_q = vlSelf->__PVT__csr_wr_wb_q;
    vlSelf->__Vdly__pc_wb_q = vlSelf->__PVT__pc_wb_q;
    vlSelf->__Vdly__exception_wb_q = vlSelf->__PVT__exception_wb_q;
    vlSelf->__Vdly__ctrl_wb_q = vlSelf->__PVT__ctrl_wb_q;
    vlSelf->__Vdly__valid_wb_q = vlSelf->__PVT__valid_wb_q;
    vlSelf->__Vdly__result_wb_q = vlSelf->__PVT__result_wb_q;
    vlSelf->__Vdly__opcode_wb_q = vlSelf->__PVT__opcode_wb_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__squash_e1_e2_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        vlSelf->__Vdly__squash_e1_e2_q = vlSelf->__PVT__squash_e1_e2_w;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__valid_wb_q = 0U;
        vlSelf->__Vdly__ctrl_wb_q = 0U;
        vlSelf->__Vdly__csr_wr_wb_q = 0U;
        vlSelf->__Vdly__csr_wdata_wb_q = 0U;
        vlSelf->__Vdly__pc_wb_q = 0U;
        vlSelf->__Vdly__npc_wb_q = 0U;
        vlSelf->__Vdly__opcode_wb_q = 0U;
        vlSelf->__Vdly__operand_ra_wb_q = 0U;
        vlSelf->__Vdly__operand_rb_wb_q = 0U;
        vlSelf->__Vdly__result_wb_q = 0U;
        vlSelf->__Vdly__exception_wb_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        if (vlSelf->__PVT__squash_wb_i) {
            vlSelf->__Vdly__valid_wb_q = 0U;
            vlSelf->__Vdly__ctrl_wb_q = 0U;
            vlSelf->__Vdly__csr_wr_wb_q = 0U;
            vlSelf->__Vdly__csr_wdata_wb_q = 0U;
            vlSelf->__Vdly__pc_wb_q = 0U;
            vlSelf->__Vdly__npc_wb_q = 0U;
            vlSelf->__Vdly__opcode_wb_q = 0U;
            vlSelf->__Vdly__operand_ra_wb_q = 0U;
            vlSelf->__Vdly__operand_rb_wb_q = 0U;
            vlSelf->__Vdly__result_wb_q = 0U;
            vlSelf->__Vdly__exception_wb_q = 0U;
        } else {
            vlSelf->__Vdly__valid_wb_q = ((~ ((((((0x14U 
                                                   == (IData)(vlSelf->__PVT__exception_e2_r)) 
                                                  | (0x15U 
                                                     == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                                 | (0x16U 
                                                    == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                                | (0x17U 
                                                   == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                               | (0x1dU 
                                                  == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                              | (0x1fU 
                                                 == (IData)(vlSelf->__PVT__exception_e2_r)))) 
                                          & (IData)(vlSelf->__PVT__valid_e2_q));
            vlSelf->__Vdly__csr_wr_wb_q = vlSelf->__PVT__csr_wr_e2_q;
            vlSelf->__Vdly__csr_wdata_wb_q = vlSelf->__PVT__csr_wdata_e2_q;
            vlSelf->__Vdly__ctrl_wb_q = (VL_REDOR_I((IData)(vlSelf->__PVT__exception_e2_r))
                                          ? (0x37fU 
                                             & (IData)(vlSelf->__PVT__ctrl_e2_q))
                                          : (IData)(vlSelf->__PVT__ctrl_e2_q));
            vlSelf->__Vdly__pc_wb_q = vlSelf->__PVT__pc_e2_q;
            vlSelf->__Vdly__npc_wb_q = vlSelf->__PVT__npc_e2_q;
            vlSelf->__Vdly__opcode_wb_q = vlSelf->__PVT__opcode_e2_q;
            vlSelf->__Vdly__operand_ra_wb_q = vlSelf->__PVT__operand_ra_e2_q;
            vlSelf->__Vdly__operand_rb_wb_q = vlSelf->__PVT__operand_rb_e2_q;
            vlSelf->__Vdly__exception_wb_q = vlSelf->__PVT__exception_e2_r;
            vlSelf->__Vdly__result_wb_q = (((IData)(vlSelf->__PVT__valid_e2_w) 
                                            & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                               | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)))
                                            ? vlSelf->__PVT__mem_result_e2_i
                                            : (((IData)(vlSelf->__PVT__valid_e2_w) 
                                                & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 5U))
                                                ? vlSelf->__PVT__mul_result_e2_i
                                                : vlSelf->__PVT__result_e2_q));
        }
    }
    vlSelf->__PVT__squash_e1_e2_q = vlSelf->__Vdly__squash_e1_e2_q;
    vlSelf->__PVT__npc_wb_q = vlSelf->__Vdly__npc_wb_q;
    vlSelf->__PVT__operand_ra_wb_q = vlSelf->__Vdly__operand_ra_wb_q;
    vlSelf->__PVT__operand_rb_wb_q = vlSelf->__Vdly__operand_rb_wb_q;
    vlSelf->__PVT__csr_wdata_wb_q = vlSelf->__Vdly__csr_wdata_wb_q;
    vlSelf->__PVT__csr_wr_wb_q = vlSelf->__Vdly__csr_wr_wb_q;
    vlSelf->__PVT__pc_wb_q = vlSelf->__Vdly__pc_wb_q;
    vlSelf->__PVT__exception_wb_q = vlSelf->__Vdly__exception_wb_q;
    vlSelf->__PVT__ctrl_wb_q = vlSelf->__Vdly__ctrl_wb_q;
    vlSelf->__PVT__valid_wb_q = vlSelf->__Vdly__valid_wb_q;
    vlSelf->__PVT__result_wb_q = vlSelf->__Vdly__result_wb_q;
    vlSelf->__PVT__opcode_wb_q = vlSelf->__Vdly__opcode_wb_q;
    vlSelf->__Vdly__csr_wr_e2_q = vlSelf->__PVT__csr_wr_e2_q;
    vlSelf->__Vdly__csr_wdata_e2_q = vlSelf->__PVT__csr_wdata_e2_q;
    vlSelf->__Vdly__pc_e2_q = vlSelf->__PVT__pc_e2_q;
    vlSelf->__Vdly__npc_e2_q = vlSelf->__PVT__npc_e2_q;
    vlSelf->__Vdly__operand_ra_e2_q = vlSelf->__PVT__operand_ra_e2_q;
    vlSelf->__Vdly__operand_rb_e2_q = vlSelf->__PVT__operand_rb_e2_q;
    vlSelf->__Vdly__opcode_e2_q = vlSelf->__PVT__opcode_e2_q;
    vlSelf->__Vdly__result_e2_q = vlSelf->__PVT__result_e2_q;
    vlSelf->__Vdly__valid_e2_q = vlSelf->__PVT__valid_e2_q;
    vlSelf->__Vdly__ctrl_e2_q = vlSelf->__PVT__ctrl_e2_q;
    vlSelf->__PVT__operand_ra_wb_o = vlSelf->__PVT__operand_ra_wb_q;
    vlSelf->__PVT__operand_rb_wb_o = vlSelf->__PVT__operand_rb_wb_q;
    vlSelf->__PVT__csr_wdata_wb_o = vlSelf->__PVT__csr_wdata_wb_q;
    vlSelf->__PVT__csr_write_wb_o = vlSelf->__PVT__csr_wr_wb_q;
    vlSelf->__PVT__pc_wb_o = vlSelf->__PVT__pc_wb_q;
    vlSelf->__PVT__exception_wb_o = vlSelf->__PVT__exception_wb_q;
    vlSelf->__PVT__result_wb_o = vlSelf->__PVT__result_wb_q;
    vlSelf->__PVT__csr_waddr_wb_o = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_wb_q, 0x14U, 0xcU));
    vlSelf->__PVT__opcode_wb_o = vlSelf->__PVT__opcode_wb_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__valid_e2_q = 0U;
        vlSelf->__Vdly__ctrl_e2_q = 0U;
        vlSelf->__Vdly__csr_wr_e2_q = 0U;
        vlSelf->__Vdly__csr_wdata_e2_q = 0U;
        vlSelf->__Vdly__pc_e2_q = 0U;
        vlSelf->__Vdly__npc_e2_q = 0U;
        vlSelf->__Vdly__opcode_e2_q = 0U;
        vlSelf->__Vdly__operand_ra_e2_q = 0U;
        vlSelf->__Vdly__operand_rb_e2_q = 0U;
        vlSelf->__Vdly__result_e2_q = 0U;
        vlSelf->__Vdly__exception_e2_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        if (((IData)(vlSelf->__PVT__squash_e1_e2_o) 
             | (IData)(vlSelf->__PVT__squash_e1_e2_i))) {
            vlSelf->__Vdly__valid_e2_q = 0U;
            vlSelf->__Vdly__ctrl_e2_q = 0U;
            vlSelf->__Vdly__csr_wr_e2_q = 0U;
            vlSelf->__Vdly__csr_wdata_e2_q = 0U;
            vlSelf->__Vdly__pc_e2_q = 0U;
            vlSelf->__Vdly__npc_e2_q = 0U;
            vlSelf->__Vdly__opcode_e2_q = 0U;
            vlSelf->__Vdly__operand_ra_e2_q = 0U;
            vlSelf->__Vdly__operand_rb_e2_q = 0U;
            vlSelf->__Vdly__result_e2_q = 0U;
            vlSelf->__Vdly__exception_e2_q = 0U;
        } else {
            vlSelf->__Vdly__valid_e2_q = vlSelf->__PVT__valid_e1_q;
            vlSelf->__Vdly__ctrl_e2_q = vlSelf->__PVT__ctrl_e1_q;
            vlSelf->__Vdly__csr_wr_e2_q = vlSelf->__PVT__csr_result_write_e1_i;
            vlSelf->__Vdly__csr_wdata_e2_q = vlSelf->__PVT__csr_result_wdata_e1_i;
            vlSelf->__Vdly__pc_e2_q = vlSelf->__PVT__pc_e1_q;
            vlSelf->__Vdly__npc_e2_q = vlSelf->__PVT__npc_e1_q;
            vlSelf->__Vdly__opcode_e2_q = vlSelf->__PVT__opcode_e1_q;
            vlSelf->__Vdly__operand_ra_e2_q = vlSelf->__PVT__operand_ra_e1_q;
            vlSelf->__Vdly__operand_rb_e2_q = vlSelf->__PVT__operand_rb_e1_q;
            if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 8U))) {
                vlSelf->__Vdly__exception_e2_q = 0x20U;
            } else if (VL_REDOR_I((IData)(vlSelf->__PVT__exception_e1_q))) {
                vlSelf->__Vdly__valid_e2_q = 0U;
                vlSelf->__Vdly__exception_e2_q = vlSelf->__PVT__exception_e1_q;
            } else {
                vlSelf->__Vdly__exception_e2_q = vlSelf->__PVT__csr_result_exception_e1_i;
            }
            vlSelf->__Vdly__result_e2_q = ((1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 4U))
                                            ? vlSelf->__PVT__div_result_i
                                            : ((1U 
                                                & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 3U))
                                                ? vlSelf->__PVT__csr_result_value_e1_i
                                                : vlSelf->__PVT__alu_result_e1_i));
        }
    }
    vlSelf->__PVT__u_trace_wb->__PVT__pc_i = vlSelf->__PVT__pc_wb_o;
    vlSelf->__PVT__u_trace_wb->__PVT__opcode_i = vlSelf->__PVT__opcode_wb_o;
    vlSelf->__PVT__csr_wr_e2_q = vlSelf->__Vdly__csr_wr_e2_q;
    vlSelf->__PVT__csr_wdata_e2_q = vlSelf->__Vdly__csr_wdata_e2_q;
    vlSelf->__PVT__pc_e2_q = vlSelf->__Vdly__pc_e2_q;
    vlSelf->__PVT__npc_e2_q = vlSelf->__Vdly__npc_e2_q;
    vlSelf->__PVT__operand_ra_e2_q = vlSelf->__Vdly__operand_ra_e2_q;
    vlSelf->__PVT__operand_rb_e2_q = vlSelf->__Vdly__operand_rb_e2_q;
    vlSelf->__PVT__opcode_e2_q = vlSelf->__Vdly__opcode_e2_q;
    vlSelf->__PVT__result_e2_q = vlSelf->__Vdly__result_e2_q;
    vlSelf->__PVT__exception_e2_q = vlSelf->__Vdly__exception_e2_q;
    vlSelf->__PVT__valid_e2_q = vlSelf->__Vdly__valid_e2_q;
    vlSelf->__PVT__ctrl_e2_q = vlSelf->__Vdly__ctrl_e2_q;
    vlSelf->__Vdly__valid_e1_q = vlSelf->__PVT__valid_e1_q;
    vlSelf->__Vdly__npc_e1_q = vlSelf->__PVT__npc_e1_q;
    vlSelf->__Vdly__exception_e1_q = vlSelf->__PVT__exception_e1_q;
    vlSelf->__Vdly__pc_e1_q = vlSelf->__PVT__pc_e1_q;
    vlSelf->__Vdly__operand_ra_e1_q = vlSelf->__PVT__operand_ra_e1_q;
    vlSelf->__Vdly__operand_rb_e1_q = vlSelf->__PVT__operand_rb_e1_q;
    vlSelf->__Vdly__opcode_e1_q = vlSelf->__PVT__opcode_e1_q;
    vlSelf->__Vdly__ctrl_e1_q = vlSelf->__PVT__ctrl_e1_q;
    vlSelf->__PVT__load_store_e2_w = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                            | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)));
    vlSelf->__PVT__load_e2_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U));
    vlSelf->__PVT__mul_e2_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 5U));
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__valid_e1_q = 0U;
        vlSelf->__Vdly__ctrl_e1_q = 0U;
        vlSelf->__Vdly__pc_e1_q = 0U;
        vlSelf->__Vdly__npc_e1_q = 0U;
        vlSelf->__Vdly__opcode_e1_q = 0U;
        vlSelf->__Vdly__operand_ra_e1_q = 0U;
        vlSelf->__Vdly__operand_rb_e1_q = 0U;
        vlSelf->__Vdly__exception_e1_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        if ((((IData)(vlSelf->__PVT__issue_valid_i) 
              & (IData)(vlSelf->__PVT__issue_accept_i)) 
             & (~ ((IData)(vlSelf->__PVT__squash_e1_e2_o) 
                   | (IData)(vlSelf->__PVT__squash_e1_e2_i))))) {
            vlSelf->__Vdly__valid_e1_q = 1U;
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__ctrl_e1_q, 
                            (1U & (~ ((((IData)(vlSelf->__PVT__issue_lsu_i) 
                                        | (IData)(vlSelf->__PVT__issue_csr_i)) 
                                       | (IData)(vlSelf->__PVT__issue_div_i)) 
                                      | (IData)(vlSelf->__PVT__issue_mul_i)))));
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__ctrl_e1_q, 
                            (((IData)(vlSelf->__PVT__issue_lsu_i) 
                              & (IData)(vlSelf->__PVT__issue_rd_valid_i)) 
                             & (~ (IData)(vlSelf->__PVT__take_interrupt_i))));
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__ctrl_e1_q, 
                            (((IData)(vlSelf->__PVT__issue_lsu_i) 
                              & (~ (IData)(vlSelf->__PVT__issue_rd_valid_i))) 
                             & (~ (IData)(vlSelf->__PVT__take_interrupt_i))));
            VL_ASSIGNSEL_II(10,2,3U, vlSelf->__Vdly__ctrl_e1_q, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__issue_div_i) 
                                                  & (~ (IData)(vlSelf->__PVT__take_interrupt_i))), 
                                          ((IData)(vlSelf->__PVT__issue_csr_i) 
                                           & (~ (IData)(vlSelf->__PVT__take_interrupt_i)))));
            VL_ASSIGNSEL_II(10,2,5U, vlSelf->__Vdly__ctrl_e1_q, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__issue_branch_i) 
                                                  & (~ (IData)(vlSelf->__PVT__take_interrupt_i))), 
                                          ((IData)(vlSelf->__PVT__issue_mul_i) 
                                           & (~ (IData)(vlSelf->__PVT__take_interrupt_i)))));
            VL_ASSIGNSEL_II(10,2,7U, vlSelf->__Vdly__ctrl_e1_q, 
                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__take_interrupt_i), 
                                          ((IData)(vlSelf->__PVT__issue_rd_valid_i) 
                                           & (~ (IData)(vlSelf->__PVT__take_interrupt_i)))));
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__ctrl_e1_q);
            vlSelf->__Vdly__pc_e1_q = vlSelf->__PVT__issue_pc_i;
            vlSelf->__Vdly__npc_e1_q = ((IData)(vlSelf->__PVT__issue_branch_taken_i)
                                         ? vlSelf->__PVT__issue_branch_target_i
                                         : ((IData)(4U) 
                                            + vlSelf->__PVT__issue_pc_i));
            vlSelf->__Vdly__opcode_e1_q = vlSelf->__PVT__issue_opcode_i;
            vlSelf->__Vdly__operand_ra_e1_q = vlSelf->__PVT__issue_operand_ra_i;
            vlSelf->__Vdly__operand_rb_e1_q = vlSelf->__PVT__issue_operand_rb_i;
            vlSelf->__Vdly__exception_e1_q = (VL_REDOR_I((IData)(vlSelf->__PVT__issue_exception_i))
                                               ? (IData)(vlSelf->__PVT__issue_exception_i)
                                               : ((IData)(vlSelf->__PVT__branch_misaligned_w)
                                                   ? 0x10U
                                                   : 0U));
        } else {
            vlSelf->__Vdly__valid_e1_q = 0U;
            vlSelf->__Vdly__ctrl_e1_q = 0U;
            vlSelf->__Vdly__pc_e1_q = 0U;
            vlSelf->__Vdly__npc_e1_q = 0U;
            vlSelf->__Vdly__opcode_e1_q = 0U;
            vlSelf->__Vdly__operand_ra_e1_q = 0U;
            vlSelf->__Vdly__operand_rb_e1_q = 0U;
            vlSelf->__Vdly__exception_e1_q = 0U;
        }
    }
    vlSelf->__PVT__valid_e1_q = vlSelf->__Vdly__valid_e1_q;
    vlSelf->__PVT__npc_e1_q = vlSelf->__Vdly__npc_e1_q;
    vlSelf->__PVT__exception_e1_q = vlSelf->__Vdly__exception_e1_q;
    vlSelf->__PVT__pc_e1_q = vlSelf->__Vdly__pc_e1_q;
    vlSelf->__PVT__operand_ra_e1_q = vlSelf->__Vdly__operand_ra_e1_q;
    vlSelf->__PVT__operand_rb_e1_q = vlSelf->__Vdly__operand_rb_e1_q;
    vlSelf->__PVT__opcode_e1_q = vlSelf->__Vdly__opcode_e1_q;
    vlSelf->__PVT__ctrl_e1_q = vlSelf->__Vdly__ctrl_e1_q;
    vlSelf->__PVT__pc_e1_o = vlSelf->__PVT__pc_e1_q;
    vlSelf->__PVT__operand_ra_e1_o = vlSelf->__PVT__operand_ra_e1_q;
    vlSelf->__PVT__operand_rb_e1_o = vlSelf->__PVT__operand_rb_e1_q;
    vlSelf->__PVT__opcode_e1_o = vlSelf->__PVT__opcode_e1_q;
    vlSelf->__PVT__alu_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 0U));
    vlSelf->__PVT__csr_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 3U));
    vlSelf->__PVT__div_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 4U));
    vlSelf->__PVT__branch_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 6U));
    vlSelf->__PVT__load_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 1U));
    vlSelf->__PVT__store_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 2U));
    vlSelf->__PVT__mul_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 5U));
    vlSelf->__PVT__rd_e1_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (1U 
                                                         & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 7U)), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_e1_q, 7U, 5U)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__2(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__2\n"); );
    // Body
    vlSelf->__PVT__complete_wb_w = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 9U) 
                                          & (~ (IData)(vlSelf->__PVT__issue_stall_i))));
    vlSelf->__PVT__csr_wb_o = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 3U) 
                                     & (~ (IData)(vlSelf->__PVT__issue_stall_i))));
    vlSelf->__PVT__valid_wb_o = ((IData)(vlSelf->__PVT__valid_wb_q) 
                                 & (~ (IData)(vlSelf->__PVT__issue_stall_i)));
    vlSelf->__PVT__valid_e2_w = ((IData)(vlSelf->__PVT__valid_e2_q) 
                                 & (~ (IData)(vlSelf->__PVT__issue_stall_i)));
    vlSelf->__PVT__u_trace_wb->__PVT__valid_i = vlSelf->__PVT__valid_wb_o;
    vlSelf->__PVT__rd_wb_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (((IData)(vlSelf->__PVT__valid_wb_o) 
                                                          & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 7U)) 
                                                         & (~ (IData)(vlSelf->__PVT__stall_o))), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_wb_q, 7U, 5U)));
    vlSelf->__PVT__rd_e2_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (((IData)(vlSelf->__PVT__valid_e2_w) 
                                                          & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 7U)) 
                                                         & (~ (IData)(vlSelf->__PVT__stall_o))), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_e2_q, 7U, 5U)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__4(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__4\n"); );
    // Body
    vlSelf->__PVT__u_trace_d->__PVT__pc_i = vlSelf->__PVT__issue_pc_i;
    vlSelf->__PVT__u_trace_d->__PVT__opcode_i = vlSelf->__PVT__issue_opcode_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__5(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__5\n"); );
    // Body
    vlSelf->__PVT__u_trace_d->__PVT__valid_i = vlSelf->__PVT__issue_valid_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__0\n"); );
    // Body
    vlSelf->__Vdly__squash_e1_e2_q = vlSelf->__PVT__squash_e1_e2_q;
    vlSelf->__Vdly__exception_e2_q = vlSelf->__PVT__exception_e2_q;
    vlSelf->__Vdly__npc_wb_q = vlSelf->__PVT__npc_wb_q;
    vlSelf->__Vdly__csr_wdata_wb_q = vlSelf->__PVT__csr_wdata_wb_q;
    vlSelf->__Vdly__csr_wr_wb_q = vlSelf->__PVT__csr_wr_wb_q;
    vlSelf->__Vdly__operand_rb_wb_q = vlSelf->__PVT__operand_rb_wb_q;
    vlSelf->__Vdly__operand_ra_wb_q = vlSelf->__PVT__operand_ra_wb_q;
    vlSelf->__Vdly__pc_wb_q = vlSelf->__PVT__pc_wb_q;
    vlSelf->__Vdly__exception_wb_q = vlSelf->__PVT__exception_wb_q;
    vlSelf->__Vdly__ctrl_wb_q = vlSelf->__PVT__ctrl_wb_q;
    vlSelf->__Vdly__valid_wb_q = vlSelf->__PVT__valid_wb_q;
    vlSelf->__Vdly__result_wb_q = vlSelf->__PVT__result_wb_q;
    vlSelf->__Vdly__opcode_wb_q = vlSelf->__PVT__opcode_wb_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__squash_e1_e2_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        vlSelf->__Vdly__squash_e1_e2_q = vlSelf->__PVT__squash_e1_e2_w;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__valid_wb_q = 0U;
        vlSelf->__Vdly__ctrl_wb_q = 0U;
        vlSelf->__Vdly__csr_wr_wb_q = 0U;
        vlSelf->__Vdly__csr_wdata_wb_q = 0U;
        vlSelf->__Vdly__pc_wb_q = 0U;
        vlSelf->__Vdly__npc_wb_q = 0U;
        vlSelf->__Vdly__opcode_wb_q = 0U;
        vlSelf->__Vdly__operand_ra_wb_q = 0U;
        vlSelf->__Vdly__operand_rb_wb_q = 0U;
        vlSelf->__Vdly__result_wb_q = 0U;
        vlSelf->__Vdly__exception_wb_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        if (vlSelf->__PVT__squash_wb_i) {
            vlSelf->__Vdly__valid_wb_q = 0U;
            vlSelf->__Vdly__ctrl_wb_q = 0U;
            vlSelf->__Vdly__csr_wr_wb_q = 0U;
            vlSelf->__Vdly__csr_wdata_wb_q = 0U;
            vlSelf->__Vdly__pc_wb_q = 0U;
            vlSelf->__Vdly__npc_wb_q = 0U;
            vlSelf->__Vdly__opcode_wb_q = 0U;
            vlSelf->__Vdly__operand_ra_wb_q = 0U;
            vlSelf->__Vdly__operand_rb_wb_q = 0U;
            vlSelf->__Vdly__result_wb_q = 0U;
            vlSelf->__Vdly__exception_wb_q = 0U;
        } else {
            vlSelf->__Vdly__valid_wb_q = ((~ ((((((0x14U 
                                                   == (IData)(vlSelf->__PVT__exception_e2_r)) 
                                                  | (0x15U 
                                                     == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                                 | (0x16U 
                                                    == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                                | (0x17U 
                                                   == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                               | (0x1dU 
                                                  == (IData)(vlSelf->__PVT__exception_e2_r))) 
                                              | (0x1fU 
                                                 == (IData)(vlSelf->__PVT__exception_e2_r)))) 
                                          & (IData)(vlSelf->__PVT__valid_e2_q));
            vlSelf->__Vdly__csr_wr_wb_q = vlSelf->__PVT__csr_wr_e2_q;
            vlSelf->__Vdly__csr_wdata_wb_q = vlSelf->__PVT__csr_wdata_e2_q;
            vlSelf->__Vdly__ctrl_wb_q = (VL_REDOR_I((IData)(vlSelf->__PVT__exception_e2_r))
                                          ? (0x37fU 
                                             & (IData)(vlSelf->__PVT__ctrl_e2_q))
                                          : (IData)(vlSelf->__PVT__ctrl_e2_q));
            vlSelf->__Vdly__pc_wb_q = vlSelf->__PVT__pc_e2_q;
            vlSelf->__Vdly__npc_wb_q = vlSelf->__PVT__npc_e2_q;
            vlSelf->__Vdly__opcode_wb_q = vlSelf->__PVT__opcode_e2_q;
            vlSelf->__Vdly__operand_ra_wb_q = vlSelf->__PVT__operand_ra_e2_q;
            vlSelf->__Vdly__operand_rb_wb_q = vlSelf->__PVT__operand_rb_e2_q;
            vlSelf->__Vdly__exception_wb_q = vlSelf->__PVT__exception_e2_r;
            vlSelf->__Vdly__result_wb_q = (((IData)(vlSelf->__PVT__valid_e2_w) 
                                            & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                               | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)))
                                            ? vlSelf->__PVT__mem_result_e2_i
                                            : (((IData)(vlSelf->__PVT__valid_e2_w) 
                                                & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 5U))
                                                ? vlSelf->__PVT__mul_result_e2_i
                                                : vlSelf->__PVT__result_e2_q));
        }
    }
    vlSelf->__PVT__squash_e1_e2_q = vlSelf->__Vdly__squash_e1_e2_q;
    vlSelf->__PVT__npc_wb_q = vlSelf->__Vdly__npc_wb_q;
    vlSelf->__PVT__csr_wr_wb_q = vlSelf->__Vdly__csr_wr_wb_q;
    vlSelf->__PVT__csr_wdata_wb_q = vlSelf->__Vdly__csr_wdata_wb_q;
    vlSelf->__PVT__operand_ra_wb_q = vlSelf->__Vdly__operand_ra_wb_q;
    vlSelf->__PVT__operand_rb_wb_q = vlSelf->__Vdly__operand_rb_wb_q;
    vlSelf->__PVT__pc_wb_q = vlSelf->__Vdly__pc_wb_q;
    vlSelf->__PVT__exception_wb_q = vlSelf->__Vdly__exception_wb_q;
    vlSelf->__PVT__ctrl_wb_q = vlSelf->__Vdly__ctrl_wb_q;
    vlSelf->__PVT__valid_wb_q = vlSelf->__Vdly__valid_wb_q;
    vlSelf->__PVT__result_wb_q = vlSelf->__Vdly__result_wb_q;
    vlSelf->__PVT__opcode_wb_q = vlSelf->__Vdly__opcode_wb_q;
    vlSelf->__Vdly__csr_wr_e2_q = vlSelf->__PVT__csr_wr_e2_q;
    vlSelf->__Vdly__csr_wdata_e2_q = vlSelf->__PVT__csr_wdata_e2_q;
    vlSelf->__Vdly__pc_e2_q = vlSelf->__PVT__pc_e2_q;
    vlSelf->__Vdly__npc_e2_q = vlSelf->__PVT__npc_e2_q;
    vlSelf->__Vdly__operand_ra_e2_q = vlSelf->__PVT__operand_ra_e2_q;
    vlSelf->__Vdly__operand_rb_e2_q = vlSelf->__PVT__operand_rb_e2_q;
    vlSelf->__Vdly__opcode_e2_q = vlSelf->__PVT__opcode_e2_q;
    vlSelf->__Vdly__result_e2_q = vlSelf->__PVT__result_e2_q;
    vlSelf->__Vdly__valid_e2_q = vlSelf->__PVT__valid_e2_q;
    vlSelf->__Vdly__ctrl_e2_q = vlSelf->__PVT__ctrl_e2_q;
    vlSelf->__PVT__csr_write_wb_o = vlSelf->__PVT__csr_wr_wb_q;
    vlSelf->__PVT__csr_wdata_wb_o = vlSelf->__PVT__csr_wdata_wb_q;
    vlSelf->__PVT__operand_ra_wb_o = vlSelf->__PVT__operand_ra_wb_q;
    vlSelf->__PVT__operand_rb_wb_o = vlSelf->__PVT__operand_rb_wb_q;
    vlSelf->__PVT__pc_wb_o = vlSelf->__PVT__pc_wb_q;
    vlSelf->__PVT__exception_wb_o = vlSelf->__PVT__exception_wb_q;
    vlSelf->__PVT__result_wb_o = vlSelf->__PVT__result_wb_q;
    vlSelf->__PVT__csr_waddr_wb_o = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_wb_q, 0x14U, 0xcU));
    vlSelf->__PVT__opcode_wb_o = vlSelf->__PVT__opcode_wb_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__valid_e2_q = 0U;
        vlSelf->__Vdly__ctrl_e2_q = 0U;
        vlSelf->__Vdly__csr_wr_e2_q = 0U;
        vlSelf->__Vdly__csr_wdata_e2_q = 0U;
        vlSelf->__Vdly__pc_e2_q = 0U;
        vlSelf->__Vdly__npc_e2_q = 0U;
        vlSelf->__Vdly__opcode_e2_q = 0U;
        vlSelf->__Vdly__operand_ra_e2_q = 0U;
        vlSelf->__Vdly__operand_rb_e2_q = 0U;
        vlSelf->__Vdly__result_e2_q = 0U;
        vlSelf->__Vdly__exception_e2_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        if (((IData)(vlSelf->__PVT__squash_e1_e2_o) 
             | (IData)(vlSelf->__PVT__squash_e1_e2_i))) {
            vlSelf->__Vdly__valid_e2_q = 0U;
            vlSelf->__Vdly__ctrl_e2_q = 0U;
            vlSelf->__Vdly__csr_wr_e2_q = 0U;
            vlSelf->__Vdly__csr_wdata_e2_q = 0U;
            vlSelf->__Vdly__pc_e2_q = 0U;
            vlSelf->__Vdly__npc_e2_q = 0U;
            vlSelf->__Vdly__opcode_e2_q = 0U;
            vlSelf->__Vdly__operand_ra_e2_q = 0U;
            vlSelf->__Vdly__operand_rb_e2_q = 0U;
            vlSelf->__Vdly__result_e2_q = 0U;
            vlSelf->__Vdly__exception_e2_q = 0U;
        } else {
            vlSelf->__Vdly__valid_e2_q = vlSelf->__PVT__valid_e1_q;
            vlSelf->__Vdly__ctrl_e2_q = vlSelf->__PVT__ctrl_e1_q;
            vlSelf->__Vdly__csr_wr_e2_q = vlSelf->__PVT__csr_result_write_e1_i;
            vlSelf->__Vdly__csr_wdata_e2_q = vlSelf->__PVT__csr_result_wdata_e1_i;
            vlSelf->__Vdly__pc_e2_q = vlSelf->__PVT__pc_e1_q;
            vlSelf->__Vdly__npc_e2_q = vlSelf->__PVT__npc_e1_q;
            vlSelf->__Vdly__opcode_e2_q = vlSelf->__PVT__opcode_e1_q;
            vlSelf->__Vdly__operand_ra_e2_q = vlSelf->__PVT__operand_ra_e1_q;
            vlSelf->__Vdly__operand_rb_e2_q = vlSelf->__PVT__operand_rb_e1_q;
            if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 8U))) {
                vlSelf->__Vdly__exception_e2_q = 0x20U;
            } else if (VL_REDOR_I((IData)(vlSelf->__PVT__exception_e1_q))) {
                vlSelf->__Vdly__valid_e2_q = 0U;
                vlSelf->__Vdly__exception_e2_q = vlSelf->__PVT__exception_e1_q;
            } else {
                vlSelf->__Vdly__exception_e2_q = vlSelf->__PVT__csr_result_exception_e1_i;
            }
            vlSelf->__Vdly__result_e2_q = ((1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 4U))
                                            ? vlSelf->__PVT__div_result_i
                                            : ((1U 
                                                & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 3U))
                                                ? vlSelf->__PVT__csr_result_value_e1_i
                                                : vlSelf->__PVT__alu_result_e1_i));
        }
    }
    vlSelf->__PVT__u_trace_wb->__PVT__pc_i = vlSelf->__PVT__pc_wb_o;
    vlSelf->__PVT__u_trace_wb->__PVT__opcode_i = vlSelf->__PVT__opcode_wb_o;
    vlSelf->__PVT__csr_wr_e2_q = vlSelf->__Vdly__csr_wr_e2_q;
    vlSelf->__PVT__csr_wdata_e2_q = vlSelf->__Vdly__csr_wdata_e2_q;
    vlSelf->__PVT__pc_e2_q = vlSelf->__Vdly__pc_e2_q;
    vlSelf->__PVT__npc_e2_q = vlSelf->__Vdly__npc_e2_q;
    vlSelf->__PVT__operand_ra_e2_q = vlSelf->__Vdly__operand_ra_e2_q;
    vlSelf->__PVT__operand_rb_e2_q = vlSelf->__Vdly__operand_rb_e2_q;
    vlSelf->__PVT__opcode_e2_q = vlSelf->__Vdly__opcode_e2_q;
    vlSelf->__PVT__result_e2_q = vlSelf->__Vdly__result_e2_q;
    vlSelf->__PVT__exception_e2_q = vlSelf->__Vdly__exception_e2_q;
    vlSelf->__PVT__valid_e2_q = vlSelf->__Vdly__valid_e2_q;
    vlSelf->__PVT__ctrl_e2_q = vlSelf->__Vdly__ctrl_e2_q;
    vlSelf->__Vdly__valid_e1_q = vlSelf->__PVT__valid_e1_q;
    vlSelf->__Vdly__npc_e1_q = vlSelf->__PVT__npc_e1_q;
    vlSelf->__Vdly__exception_e1_q = vlSelf->__PVT__exception_e1_q;
    vlSelf->__Vdly__pc_e1_q = vlSelf->__PVT__pc_e1_q;
    vlSelf->__Vdly__operand_ra_e1_q = vlSelf->__PVT__operand_ra_e1_q;
    vlSelf->__Vdly__operand_rb_e1_q = vlSelf->__PVT__operand_rb_e1_q;
    vlSelf->__Vdly__opcode_e1_q = vlSelf->__PVT__opcode_e1_q;
    vlSelf->__Vdly__ctrl_e1_q = vlSelf->__PVT__ctrl_e1_q;
    vlSelf->__PVT__load_store_e2_w = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                            | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)));
    vlSelf->__PVT__load_e2_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U));
    vlSelf->__PVT__mul_e2_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 5U));
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__valid_e1_q = 0U;
        vlSelf->__Vdly__ctrl_e1_q = 0U;
        vlSelf->__Vdly__pc_e1_q = 0U;
        vlSelf->__Vdly__npc_e1_q = 0U;
        vlSelf->__Vdly__opcode_e1_q = 0U;
        vlSelf->__Vdly__operand_ra_e1_q = 0U;
        vlSelf->__Vdly__operand_rb_e1_q = 0U;
        vlSelf->__Vdly__exception_e1_q = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__issue_stall_i)))) {
        if ((((IData)(vlSelf->__PVT__issue_valid_i) 
              & (IData)(vlSelf->__PVT__issue_accept_i)) 
             & (~ ((IData)(vlSelf->__PVT__squash_e1_e2_o) 
                   | (IData)(vlSelf->__PVT__squash_e1_e2_i))))) {
            vlSelf->__Vdly__valid_e1_q = 1U;
            VL_ASSIGNBIT_II(0U, vlSelf->__Vdly__ctrl_e1_q, 
                            (1U & (~ ((((IData)(vlSelf->__PVT__issue_lsu_i) 
                                        | (IData)(vlSelf->__PVT__issue_csr_i)) 
                                       | (IData)(vlSelf->__PVT__issue_div_i)) 
                                      | (IData)(vlSelf->__PVT__issue_mul_i)))));
            VL_ASSIGNBIT_II(1U, vlSelf->__Vdly__ctrl_e1_q, 
                            (((IData)(vlSelf->__PVT__issue_lsu_i) 
                              & (IData)(vlSelf->__PVT__issue_rd_valid_i)) 
                             & (~ (IData)(vlSelf->__PVT__take_interrupt_i))));
            VL_ASSIGNBIT_II(2U, vlSelf->__Vdly__ctrl_e1_q, 
                            (((IData)(vlSelf->__PVT__issue_lsu_i) 
                              & (~ (IData)(vlSelf->__PVT__issue_rd_valid_i))) 
                             & (~ (IData)(vlSelf->__PVT__take_interrupt_i))));
            VL_ASSIGNSEL_II(10,2,3U, vlSelf->__Vdly__ctrl_e1_q, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__issue_div_i) 
                                                  & (~ (IData)(vlSelf->__PVT__take_interrupt_i))), 
                                          ((IData)(vlSelf->__PVT__issue_csr_i) 
                                           & (~ (IData)(vlSelf->__PVT__take_interrupt_i)))));
            VL_ASSIGNSEL_II(10,2,5U, vlSelf->__Vdly__ctrl_e1_q, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__issue_branch_i) 
                                                  & (~ (IData)(vlSelf->__PVT__take_interrupt_i))), 
                                          ((IData)(vlSelf->__PVT__issue_mul_i) 
                                           & (~ (IData)(vlSelf->__PVT__take_interrupt_i)))));
            VL_ASSIGNSEL_II(10,2,7U, vlSelf->__Vdly__ctrl_e1_q, 
                            VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__take_interrupt_i), 
                                          ((IData)(vlSelf->__PVT__issue_rd_valid_i) 
                                           & (~ (IData)(vlSelf->__PVT__take_interrupt_i)))));
            VL_ASSIGNBIT_IO(9U, vlSelf->__Vdly__ctrl_e1_q);
            vlSelf->__Vdly__pc_e1_q = vlSelf->__PVT__issue_pc_i;
            vlSelf->__Vdly__npc_e1_q = ((IData)(vlSelf->__PVT__issue_branch_taken_i)
                                         ? vlSelf->__PVT__issue_branch_target_i
                                         : ((IData)(4U) 
                                            + vlSelf->__PVT__issue_pc_i));
            vlSelf->__Vdly__opcode_e1_q = vlSelf->__PVT__issue_opcode_i;
            vlSelf->__Vdly__operand_ra_e1_q = vlSelf->__PVT__issue_operand_ra_i;
            vlSelf->__Vdly__operand_rb_e1_q = vlSelf->__PVT__issue_operand_rb_i;
            vlSelf->__Vdly__exception_e1_q = (VL_REDOR_I((IData)(vlSelf->__PVT__issue_exception_i))
                                               ? (IData)(vlSelf->__PVT__issue_exception_i)
                                               : ((IData)(vlSelf->__PVT__branch_misaligned_w)
                                                   ? 0x10U
                                                   : 0U));
        } else {
            vlSelf->__Vdly__valid_e1_q = 0U;
            vlSelf->__Vdly__ctrl_e1_q = 0U;
            vlSelf->__Vdly__pc_e1_q = 0U;
            vlSelf->__Vdly__npc_e1_q = 0U;
            vlSelf->__Vdly__opcode_e1_q = 0U;
            vlSelf->__Vdly__operand_ra_e1_q = 0U;
            vlSelf->__Vdly__operand_rb_e1_q = 0U;
            vlSelf->__Vdly__exception_e1_q = 0U;
        }
    }
    vlSelf->__PVT__valid_e1_q = vlSelf->__Vdly__valid_e1_q;
    vlSelf->__PVT__npc_e1_q = vlSelf->__Vdly__npc_e1_q;
    vlSelf->__PVT__exception_e1_q = vlSelf->__Vdly__exception_e1_q;
    vlSelf->__PVT__pc_e1_q = vlSelf->__Vdly__pc_e1_q;
    vlSelf->__PVT__operand_ra_e1_q = vlSelf->__Vdly__operand_ra_e1_q;
    vlSelf->__PVT__operand_rb_e1_q = vlSelf->__Vdly__operand_rb_e1_q;
    vlSelf->__PVT__opcode_e1_q = vlSelf->__Vdly__opcode_e1_q;
    vlSelf->__PVT__ctrl_e1_q = vlSelf->__Vdly__ctrl_e1_q;
    vlSelf->__PVT__pc_e1_o = vlSelf->__PVT__pc_e1_q;
    vlSelf->__PVT__operand_ra_e1_o = vlSelf->__PVT__operand_ra_e1_q;
    vlSelf->__PVT__operand_rb_e1_o = vlSelf->__PVT__operand_rb_e1_q;
    vlSelf->__PVT__opcode_e1_o = vlSelf->__PVT__opcode_e1_q;
    vlSelf->__PVT__alu_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 0U));
    vlSelf->__PVT__csr_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 3U));
    vlSelf->__PVT__div_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 4U));
    vlSelf->__PVT__branch_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 6U));
    vlSelf->__PVT__load_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 1U));
    vlSelf->__PVT__store_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 2U));
    vlSelf->__PVT__mul_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 5U));
    vlSelf->__PVT__rd_e1_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (1U 
                                                         & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 7U)), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_e1_q, 7U, 5U)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__2(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__2\n"); );
    // Body
    vlSelf->__PVT__complete_wb_w = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 9U) 
                                          & (~ (IData)(vlSelf->__PVT__issue_stall_i))));
    vlSelf->__PVT__csr_wb_o = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 3U) 
                                     & (~ (IData)(vlSelf->__PVT__issue_stall_i))));
    vlSelf->__PVT__valid_wb_o = ((IData)(vlSelf->__PVT__valid_wb_q) 
                                 & (~ (IData)(vlSelf->__PVT__issue_stall_i)));
    vlSelf->__PVT__valid_e2_w = ((IData)(vlSelf->__PVT__valid_e2_q) 
                                 & (~ (IData)(vlSelf->__PVT__issue_stall_i)));
    vlSelf->__PVT__u_trace_wb->__PVT__valid_i = vlSelf->__PVT__valid_wb_o;
    vlSelf->__PVT__rd_wb_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (((IData)(vlSelf->__PVT__valid_wb_o) 
                                                          & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 7U)) 
                                                         & (~ (IData)(vlSelf->__PVT__stall_o))), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_wb_q, 7U, 5U)));
    vlSelf->__PVT__rd_e2_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (((IData)(vlSelf->__PVT__valid_e2_w) 
                                                          & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 7U)) 
                                                         & (~ (IData)(vlSelf->__PVT__stall_o))), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_e2_q, 7U, 5U)));
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__4(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__4\n"); );
    // Body
    vlSelf->__PVT__u_trace_d->__PVT__pc_i = vlSelf->__PVT__issue_pc_i;
    vlSelf->__PVT__u_trace_d->__PVT__opcode_i = vlSelf->__PVT__issue_opcode_i;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__5(Vbiriscv_top_biriscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_top_biriscv_pipe_ctrl___nba_comb__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__5\n"); );
    // Body
    vlSelf->__PVT__u_trace_d->__PVT__valid_i = vlSelf->__PVT__issue_valid_i;
}
