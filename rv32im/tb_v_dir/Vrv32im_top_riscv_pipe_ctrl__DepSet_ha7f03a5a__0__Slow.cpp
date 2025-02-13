// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_pipe_ctrl.h"

VL_ATTR_COLD void Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__0(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__0\n"); );
    // Body
    vlSelf->__PVT__alu_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 0U));
    vlSelf->__PVT__csr_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 3U));
    vlSelf->__PVT__div_e1_w = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 4U));
    vlSelf->__PVT__load_store_e2_w = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                            | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)));
    vlSelf->__PVT__branch_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 6U));
    vlSelf->__PVT__pc_e1_o = vlSelf->__PVT__pc_e1_q;
    vlSelf->__PVT__opcode_e1_o = vlSelf->__PVT__opcode_e1_q;
    vlSelf->__PVT__operand_ra_e1_o = vlSelf->__PVT__operand_ra_e1_q;
    vlSelf->__PVT__operand_rb_e1_o = vlSelf->__PVT__operand_rb_e1_q;
    vlSelf->__PVT__load_e2_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U));
    vlSelf->__PVT__mul_e2_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 5U));
    vlSelf->__PVT__operand_ra_wb_o = vlSelf->__PVT__operand_ra_wb_q;
    vlSelf->__PVT__operand_rb_wb_o = vlSelf->__PVT__operand_rb_wb_q;
    vlSelf->__PVT__csr_wdata_wb_o = vlSelf->__PVT__csr_wdata_wb_q;
    vlSelf->__PVT__csr_write_wb_o = vlSelf->__PVT__csr_wr_wb_q;
    vlSelf->__PVT__csr_waddr_wb_o = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_wb_q, 0x14U, 0xcU));
    vlSelf->__PVT__pc_wb_o = vlSelf->__PVT__pc_wb_q;
    vlSelf->__PVT__opcode_wb_o = vlSelf->__PVT__opcode_wb_q;
    vlSelf->__PVT__exception_wb_o = vlSelf->__PVT__exception_wb_q;
    vlSelf->__PVT__load_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 1U));
    vlSelf->__PVT__store_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 2U));
    vlSelf->__PVT__mul_e1_o = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 5U));
    vlSelf->__PVT__rd_e1_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (1U 
                                                         & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e1_q), 7U)), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_e1_q, 7U, 5U)));
    vlSelf->__PVT__result_wb_o = vlSelf->__PVT__result_wb_q;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl__u_trace_wb.__PVT__pc_i 
        = vlSelf->__PVT__pc_wb_o;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl__u_trace_wb.__PVT__opcode_i 
        = vlSelf->__PVT__opcode_wb_o;
}

VL_ATTR_COLD void Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__1(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__1\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl__u_trace_d.__PVT__pc_i 
        = vlSelf->__PVT__issue_pc_i;
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl__u_trace_d.__PVT__opcode_i 
        = vlSelf->__PVT__issue_opcode_i;
}

VL_ATTR_COLD void Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__3(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__3\n"); );
    // Body
    vlSelf->__PVT__complete_wb_w = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 9U) 
                                          & (~ (IData)(vlSelf->__PVT__issue_stall_i))));
    vlSelf->__PVT__csr_wb_o = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 3U) 
                                     & (~ (IData)(vlSelf->__PVT__issue_stall_i))));
    vlSelf->__PVT__valid_e2_w = ((IData)(vlSelf->__PVT__valid_e2_q) 
                                 & (~ (IData)(vlSelf->__PVT__issue_stall_i)));
    vlSelf->__PVT__valid_wb_o = ((IData)(vlSelf->__PVT__valid_wb_q) 
                                 & (~ (IData)(vlSelf->__PVT__issue_stall_i)));
    vlSelf->__PVT__rd_e2_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (((IData)(vlSelf->__PVT__valid_e2_w) 
                                                          & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 7U)) 
                                                         & (~ (IData)(vlSelf->__PVT__stall_o))), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_e2_q, 7U, 5U)));
    vlSelf->__PVT__result_e2_r = vlSelf->__PVT__result_e2_q;
    if (((IData)(vlSelf->__PVT__valid_e2_w) & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 1U) 
                                               | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 2U)))) {
        vlSelf->__PVT__result_e2_r = vlSelf->__PVT__mem_result_e2_i;
    } else if (((IData)(vlSelf->__PVT__valid_e2_w) 
                & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_e2_q), 5U))) {
        vlSelf->__PVT__result_e2_r = vlSelf->__PVT__mul_result_e2_i;
    }
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl__u_trace_wb.__PVT__valid_i 
        = vlSelf->__PVT__valid_wb_o;
    vlSelf->__PVT__rd_wb_o = (0x1fU & (VL_REPLICATE_IOI(1,
                                                        (((IData)(vlSelf->__PVT__valid_wb_o) 
                                                          & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ctrl_wb_q), 7U)) 
                                                         & (~ (IData)(vlSelf->__PVT__stall_o))), 5U) 
                                       & VL_SEL_IIII(32, vlSelf->__PVT__opcode_wb_q, 7U, 5U)));
    vlSelf->__PVT__result_e2_o = vlSelf->__PVT__result_e2_r;
}

VL_ATTR_COLD void Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__4(Vrv32im_top_riscv_pipe_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_pipe_ctrl___stl_sequent__TOP__rv32im_top__core__u_issue__u_pipe_ctrl__4\n"); );
    // Body
    vlSymsp->TOP__rv32im_top__core__u_issue__u_pipe_ctrl__u_trace_d.__PVT__valid_i 
        = vlSelf->__PVT__issue_valid_i;
}
