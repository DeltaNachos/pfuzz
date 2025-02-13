// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_program_counter.h"

VL_ATTR_COLD void Vaquila_top_program_counter___eval_initial__TOP__aquila_top__core__Program_Counter(Vaquila_top_program_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_program_counter___eval_initial__TOP__aquila_top__core__Program_Counter\n"); );
    // Body
    vlSelf->__PVT__rv32 = 1U;
}

VL_ATTR_COLD void Vaquila_top_program_counter___stl_sequent__TOP__aquila_top__core__Program_Counter__0(Vaquila_top_program_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_program_counter___stl_sequent__TOP__aquila_top__core__Program_Counter__0\n"); );
    // Body
    vlSelf->__PVT__pc_offset = (7U & VL_SEL_IIII(32, 
                                                 ((IData)(vlSelf->__PVT__rv32)
                                                   ? 4U
                                                   : 2U), 0U, 3U));
    vlSelf->__PVT__pc_o = vlSelf->__PVT__pc_r;
    vlSelf->__PVT__pc_increment = (vlSelf->__PVT__pc_r 
                                   + VL_EXTEND_II(32,3, (IData)(vlSelf->__PVT__pc_offset)));
}

VL_ATTR_COLD void Vaquila_top_program_counter___ctor_var_reset(Vaquila_top_program_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_program_counter___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__irq_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PC_handler_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpu_branch_hit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpu_branch_decision_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpu_branch_target_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sys_jump_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec_branch_hit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_branch_decision_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_branch_misprediction_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_branch_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_branch_target_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_branch_restore_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__is_fencei_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rv32 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__pc_increment = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc_r = VL_RAND_RESET_I(32);
}
