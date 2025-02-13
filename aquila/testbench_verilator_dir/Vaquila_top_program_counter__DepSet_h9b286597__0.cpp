// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_program_counter.h"

VL_INLINE_OPT void Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__0(Vaquila_top_program_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__0\n"); );
    // Body
    vlSelf->__Vdly__pc_r = vlSelf->__PVT__pc_r;
    vlSelf->__Vdly__pc_r = ((IData)(vlSelf->__PVT__rst_i)
                             ? vlSelf->__PVT__init_pc_addr_i
                             : ((IData)(vlSelf->__PVT__stall_i)
                                 ? vlSelf->__PVT__pc_r
                                 : ((IData)(vlSelf->__PVT__irq_taken_i)
                                     ? vlSelf->__PVT__PC_handler_i
                                     : ((IData)(vlSelf->__PVT__is_fencei_i)
                                         ? vlSelf->__PVT__dec_pc_i
                                         : (((IData)(vlSelf->__PVT__exe_branch_taken_i) 
                                             & (~ (IData)(vlSelf->__PVT__dec_branch_hit_i)))
                                             ? vlSelf->__PVT__exe_branch_target_addr_i
                                             : ((IData)(vlSelf->__PVT__exe_branch_misprediction_i)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__dec_branch_decision_i)
                                                  ? vlSelf->__PVT__exe_branch_restore_addr_i
                                                  : vlSelf->__PVT__exe_branch_target_addr_i)
                                                 : 
                                                ((IData)(vlSelf->__PVT__sys_jump_i)
                                                  ? vlSelf->__PVT__sys_jump_data_i
                                                  : 
                                                 (((IData)(vlSelf->__PVT__bpu_branch_hit_i) 
                                                   & (IData)(vlSelf->__PVT__bpu_branch_decision_i))
                                                   ? vlSelf->__PVT__bpu_branch_target_addr_i
                                                   : vlSelf->__PVT__pc_increment))))))));
    vlSelf->__PVT__pc_r = vlSelf->__Vdly__pc_r;
    vlSelf->__PVT__pc_o = vlSelf->__PVT__pc_r;
}

VL_INLINE_OPT void Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__1(Vaquila_top_program_counter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__1\n"); );
    // Body
    vlSelf->__PVT__pc_increment = (vlSelf->__PVT__pc_r 
                                   + VL_EXTEND_II(32,3, (IData)(vlSelf->__PVT__pc_offset)));
}
