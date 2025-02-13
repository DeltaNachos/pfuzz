// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_divider.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__0(Vbiriscv_top_biriscv_divider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__0\n"); );
    // Body
    vlSelf->__PVT__div_complete_w = ((~ VL_REDOR_I(vlSelf->__PVT__q_mask_q)) 
                                     & (IData)(vlSelf->__PVT__div_busy_q));
    vlSelf->__PVT__div_result_r = 0U;
    vlSelf->__PVT__div_result_r = ((IData)(vlSelf->__PVT__div_inst_q)
                                    ? ((IData)(vlSelf->__PVT__invert_res_q)
                                        ? (- vlSelf->__PVT__quotient_q)
                                        : vlSelf->__PVT__quotient_q)
                                    : ((IData)(vlSelf->__PVT__invert_res_q)
                                        ? (- vlSelf->__PVT__dividend_q)
                                        : vlSelf->__PVT__dividend_q));
    vlSelf->__PVT__writeback_value_o = vlSelf->__PVT__wb_result_q;
    vlSelf->__PVT__writeback_valid_o = vlSelf->__PVT__valid_q;
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__1(Vbiriscv_top_biriscv_divider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__1\n"); );
    // Body
    vlSelf->__PVT__inst_div_w = (0x2004033U == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__inst_divu_w = (0x2005033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__inst_rem_w = (0x2006033U == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__inst_remu_w = (0x2007033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_opcode_i));
    vlSelf->__PVT__signed_operation_w = ((0x2004033U 
                                          == (0xfe00707fU 
                                              & vlSelf->__PVT__opcode_opcode_i)) 
                                         | (0x2006033U 
                                            == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__div_operation_w = ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_opcode_i)) 
                                      | (0x2005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->__PVT__opcode_opcode_i)));
    vlSelf->__PVT__div_rem_inst_w = ((((0x2004033U 
                                        == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)) 
                                       | (0x2005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->__PVT__opcode_opcode_i))) 
                                      | (0x2006033U 
                                         == (0xfe00707fU 
                                             & vlSelf->__PVT__opcode_opcode_i))) 
                                     | (0x2007033U 
                                        == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_opcode_i)));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__2(Vbiriscv_top_biriscv_divider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_divider___stl_sequent__TOP__biriscv_top__u_core__u_div__2\n"); );
    // Body
    vlSelf->__PVT__div_start_w = ((IData)(vlSelf->__PVT__opcode_valid_i) 
                                  & (IData)(vlSelf->__PVT__div_rem_inst_w));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_divider___ctor_var_reset(Vbiriscv_top_biriscv_divider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_divider___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_invalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_rb_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writeback_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_result_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_div_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_divu_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_rem_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_remu_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_rem_inst_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signed_operation_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_operation_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dividend_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__divisor_q = VL_RAND_RESET_Q(63);
    vlSelf->__PVT__quotient_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__q_mask_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_inst_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_busy_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invert_res_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__last_a_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__last_b_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__last_div_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__last_divu_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__last_rem_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__last_remu_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_start_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_result_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__div_busy_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dividend_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__divisor_q = VL_RAND_RESET_Q(63);
    vlSelf->__Vdly__invert_res_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__quotient_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__q_mask_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__div_inst_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__last_a_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__last_b_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__last_div_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__last_divu_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__last_rem_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__last_remu_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__valid_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__wb_result_q = VL_RAND_RESET_I(32);
}
