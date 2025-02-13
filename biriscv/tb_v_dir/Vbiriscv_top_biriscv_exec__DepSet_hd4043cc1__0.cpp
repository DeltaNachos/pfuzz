// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_alu.h"
#include "Vbiriscv_top_biriscv_exec.h"

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__1(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__1\n"); );
    // Body
    vlSelf->__PVT__branch_r = 0U;
    vlSelf->__PVT__branch_taken_r = 0U;
    vlSelf->__PVT__branch_call_r = 0U;
    vlSelf->__PVT__branch_ret_r = 0U;
    vlSelf->__PVT__branch_jmp_r = 0U;
    vlSelf->__PVT__branch_target_r = (vlSelf->__PVT__opcode_pc_i 
                                      + vlSelf->__PVT__bimm_r);
    if ((0x6fU == (0x7fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = 1U;
        vlSelf->__PVT__branch_target_r = (vlSelf->__PVT__opcode_pc_i 
                                          + vlSelf->__PVT__jimm20_r);
        vlSelf->__PVT__branch_call_r = (1U == (IData)(vlSelf->__PVT__opcode_rd_idx_i));
        vlSelf->__PVT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = 1U;
        vlSelf->__PVT__branch_target_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                          + vlSelf->__PVT__imm12_r);
        VL_ASSIGNBIT_II(0U, vlSelf->__PVT__branch_target_r, 0U);
        vlSelf->__PVT__branch_ret_r = ((1U == (IData)(vlSelf->__PVT__opcode_ra_idx_i)) 
                                       & (0U == (0xfffU 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__imm12_r, 0U, 0xcU))));
        vlSelf->__PVT__branch_call_r = ((~ (IData)(vlSelf->__PVT__branch_ret_r)) 
                                        & (1U == (IData)(vlSelf->__PVT__opcode_rd_idx_i)));
        vlSelf->__PVT__branch_jmp_r = (1U & (~ ((IData)(vlSelf->__PVT__branch_call_r) 
                                                | (IData)(vlSelf->__PVT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         == vlSelf->__PVT__opcode_rb_operand_i);
    } else if ((0x1063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         != vlSelf->__PVT__opcode_rb_operand_i);
    } else if ((0x4063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__Vfunc_less_than_signed__0__y = vlSelf->__PVT__opcode_rb_operand_i;
        vlSelf->__Vfunc_less_than_signed__0__x = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__less_than_signed__Vstatic__v 
            = (vlSelf->__Vfunc_less_than_signed__0__x 
               - vlSelf->__Vfunc_less_than_signed__0__y);
        vlSelf->__Vfunc_less_than_signed__0__Vfuncout 
            = (1U & (((1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_less_than_signed__0__x, 0x1fU)) 
                      != (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_less_than_signed__0__y, 0x1fU)))
                      ? VL_BITSEL_IIII(32, vlSelf->__Vfunc_less_than_signed__0__x, 0x1fU)
                      : VL_BITSEL_IIII(32, vlSelf->__PVT__less_than_signed__Vstatic__v, 0x1fU)));
        vlSelf->__PVT__branch_taken_r = vlSelf->__Vfunc_less_than_signed__0__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (([&]() {
                    vlSelf->__Vfunc_greater_than_signed__1__y 
                        = vlSelf->__PVT__opcode_rb_operand_i;
                    vlSelf->__Vfunc_greater_than_signed__1__x 
                        = vlSelf->__PVT__opcode_ra_operand_i;
                    vlSelf->__PVT__greater_than_signed__Vstatic__v 
                        = (vlSelf->__Vfunc_greater_than_signed__1__y 
                           - vlSelf->__Vfunc_greater_than_signed__1__x);
                    vlSelf->__Vfunc_greater_than_signed__1__Vfuncout 
                        = (1U & (((1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_greater_than_signed__1__x, 0x1fU)) 
                                  != (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_greater_than_signed__1__y, 0x1fU)))
                                  ? VL_BITSEL_IIII(32, vlSelf->__Vfunc_greater_than_signed__1__y, 0x1fU)
                                  : VL_BITSEL_IIII(32, vlSelf->__PVT__greater_than_signed__Vstatic__v, 0x1fU)));
                }(), (IData)(vlSelf->__Vfunc_greater_than_signed__1__Vfuncout)) 
                                         | (vlSelf->__PVT__opcode_ra_operand_i 
                                            == vlSelf->__PVT__opcode_rb_operand_i));
    } else if ((0x6063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         < vlSelf->__PVT__opcode_rb_operand_i);
    } else if ((0x7063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         >= vlSelf->__PVT__opcode_rb_operand_i);
    }
    vlSelf->__PVT__alu_func_r = 0U;
    vlSelf->__PVT__alu_input_a_r = 0U;
    vlSelf->__PVT__alu_input_b_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 7U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 8U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 1U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 3U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 2U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 6U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 9U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xbU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xaU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x13U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 7U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xbU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xaU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 8U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 9U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 1U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt_r));
    } else if ((0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 2U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt_r));
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 3U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt_r));
    } else if ((0x37U == (0x7fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__imm20_r;
    } else if ((0x17U == (0x7fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_pc_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm20_r;
    } else if (((0x6fU == (0x7fU & vlSelf->__PVT__opcode_opcode_i)) 
                | (0x67U == (0x707fU & vlSelf->__PVT__opcode_opcode_i)))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_pc_i;
        vlSelf->__PVT__alu_input_b_r = 4U;
    }
    vlSelf->__PVT__branch_d_pc_o = vlSelf->__PVT__branch_target_r;
    vlSelf->__PVT__u_alu->__PVT__alu_op_i = vlSelf->__PVT__alu_func_r;
    vlSelf->__PVT__u_alu->__PVT__alu_a_i = vlSelf->__PVT__alu_input_a_r;
    vlSelf->__PVT__u_alu->__PVT__alu_b_i = vlSelf->__PVT__alu_input_b_r;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__2(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec0__2\n"); );
    // Body
    vlSelf->__PVT__alu_p_w = vlSelf->__PVT__u_alu->__PVT__alu_p_o;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__1(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__1\n"); );
    // Body
    vlSelf->__PVT__branch_r = 0U;
    vlSelf->__PVT__branch_taken_r = 0U;
    vlSelf->__PVT__branch_call_r = 0U;
    vlSelf->__PVT__branch_ret_r = 0U;
    vlSelf->__PVT__branch_jmp_r = 0U;
    vlSelf->__PVT__branch_target_r = (vlSelf->__PVT__opcode_pc_i 
                                      + vlSelf->__PVT__bimm_r);
    if ((0x6fU == (0x7fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = 1U;
        vlSelf->__PVT__branch_target_r = (vlSelf->__PVT__opcode_pc_i 
                                          + vlSelf->__PVT__jimm20_r);
        vlSelf->__PVT__branch_call_r = (1U == (IData)(vlSelf->__PVT__opcode_rd_idx_i));
        vlSelf->__PVT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = 1U;
        vlSelf->__PVT__branch_target_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                          + vlSelf->__PVT__imm12_r);
        VL_ASSIGNBIT_II(0U, vlSelf->__PVT__branch_target_r, 0U);
        vlSelf->__PVT__branch_ret_r = ((1U == (IData)(vlSelf->__PVT__opcode_ra_idx_i)) 
                                       & (0U == (0xfffU 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__imm12_r, 0U, 0xcU))));
        vlSelf->__PVT__branch_call_r = ((~ (IData)(vlSelf->__PVT__branch_ret_r)) 
                                        & (1U == (IData)(vlSelf->__PVT__opcode_rd_idx_i)));
        vlSelf->__PVT__branch_jmp_r = (1U & (~ ((IData)(vlSelf->__PVT__branch_call_r) 
                                                | (IData)(vlSelf->__PVT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         == vlSelf->__PVT__opcode_rb_operand_i);
    } else if ((0x1063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         != vlSelf->__PVT__opcode_rb_operand_i);
    } else if ((0x4063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__Vfunc_less_than_signed__2__y = vlSelf->__PVT__opcode_rb_operand_i;
        vlSelf->__Vfunc_less_than_signed__2__x = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__less_than_signed__Vstatic__v 
            = (vlSelf->__Vfunc_less_than_signed__2__x 
               - vlSelf->__Vfunc_less_than_signed__2__y);
        vlSelf->__Vfunc_less_than_signed__2__Vfuncout 
            = (1U & (((1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_less_than_signed__2__x, 0x1fU)) 
                      != (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_less_than_signed__2__y, 0x1fU)))
                      ? VL_BITSEL_IIII(32, vlSelf->__Vfunc_less_than_signed__2__x, 0x1fU)
                      : VL_BITSEL_IIII(32, vlSelf->__PVT__less_than_signed__Vstatic__v, 0x1fU)));
        vlSelf->__PVT__branch_taken_r = vlSelf->__Vfunc_less_than_signed__2__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (([&]() {
                    vlSelf->__Vfunc_greater_than_signed__3__y 
                        = vlSelf->__PVT__opcode_rb_operand_i;
                    vlSelf->__Vfunc_greater_than_signed__3__x 
                        = vlSelf->__PVT__opcode_ra_operand_i;
                    vlSelf->__PVT__greater_than_signed__Vstatic__v 
                        = (vlSelf->__Vfunc_greater_than_signed__3__y 
                           - vlSelf->__Vfunc_greater_than_signed__3__x);
                    vlSelf->__Vfunc_greater_than_signed__3__Vfuncout 
                        = (1U & (((1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_greater_than_signed__3__x, 0x1fU)) 
                                  != (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_greater_than_signed__3__y, 0x1fU)))
                                  ? VL_BITSEL_IIII(32, vlSelf->__Vfunc_greater_than_signed__3__y, 0x1fU)
                                  : VL_BITSEL_IIII(32, vlSelf->__PVT__greater_than_signed__Vstatic__v, 0x1fU)));
                }(), (IData)(vlSelf->__Vfunc_greater_than_signed__3__Vfuncout)) 
                                         | (vlSelf->__PVT__opcode_ra_operand_i 
                                            == vlSelf->__PVT__opcode_rb_operand_i));
    } else if ((0x6063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         < vlSelf->__PVT__opcode_rb_operand_i);
    } else if ((0x7063U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_taken_r = (vlSelf->__PVT__opcode_ra_operand_i 
                                         >= vlSelf->__PVT__opcode_rb_operand_i);
    }
    vlSelf->__PVT__alu_func_r = 0U;
    vlSelf->__PVT__alu_input_a_r = 0U;
    vlSelf->__PVT__alu_input_b_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 7U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 8U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 1U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 3U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 2U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 6U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 9U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xbU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xaU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__opcode_rb_operand_i;
    } else if ((0x13U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 7U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xbU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 0xaU;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 8U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 9U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 1U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt_r));
    } else if ((0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 2U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt_r));
    } else if ((0x40005013U == (0xfc00707fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 3U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_ra_operand_i;
        vlSelf->__PVT__alu_input_b_r = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt_r));
    } else if ((0x37U == (0x7fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__imm20_r;
    } else if ((0x17U == (0x7fU & vlSelf->__PVT__opcode_opcode_i))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_pc_i;
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm20_r;
    } else if (((0x6fU == (0x7fU & vlSelf->__PVT__opcode_opcode_i)) 
                | (0x67U == (0x707fU & vlSelf->__PVT__opcode_opcode_i)))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__alu_input_a_r = vlSelf->__PVT__opcode_pc_i;
        vlSelf->__PVT__alu_input_b_r = 4U;
    }
    vlSelf->__PVT__branch_d_pc_o = vlSelf->__PVT__branch_target_r;
    vlSelf->__PVT__u_alu->__PVT__alu_op_i = vlSelf->__PVT__alu_func_r;
    vlSelf->__PVT__u_alu->__PVT__alu_a_i = vlSelf->__PVT__alu_input_a_r;
    vlSelf->__PVT__u_alu->__PVT__alu_b_i = vlSelf->__PVT__alu_input_b_r;
}

VL_INLINE_OPT void Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__2(Vbiriscv_top_biriscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_top_biriscv_exec___nba_comb__TOP__biriscv_top__u_core__u_exec1__2\n"); );
    // Body
    vlSelf->__PVT__alu_p_w = vlSelf->__PVT__u_alu->__PVT__alu_p_o;
}
