// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_rename_dispatch_io.h"

VL_ATTR_COLD void Vfalco_top_rename_dispatch_io___ctor_var_reset(Vfalco_top_rename_dispatch_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_rename_dispatch_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(205, vlSelf->__PVT__int_pack0);
    VL_RAND_RESET_W(205, vlSelf->__PVT__int_pack1);
    vlSelf->__PVT__int_pack0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_pack1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_iq_instr0_check_top = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_iq_instr1_check_top = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_instr0_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_instr0_rs2_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_instr1_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_instr1_rs2_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__mem_pack0);
    VL_RAND_RESET_W(129, vlSelf->__PVT__mem_pack1);
    vlSelf->__PVT__mem_pack0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_pack1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_iq_instr0_check_top = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_iq_instr1_check_top = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_instr0_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_instr0_rs2_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_instr1_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_instr1_rs2_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_store_id = VL_RAND_RESET_I(7);
    vlSelf->__PVT__issue_store_set_id = VL_RAND_RESET_I(8);
    vlSelf->__PVT__rob_instr0_check_top = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rob_instr1_check_top = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rob_is_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr1_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__recovery_no_copy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_target_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr0_stale_rd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr1_stale_rd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr0_stale_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_stale_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr0_rd_arf = VL_RAND_RESET_I(5);
    vlSelf->__PVT__instr1_rd_arf = VL_RAND_RESET_I(5);
    vlSelf->__PVT__instr0_rd_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr1_rd_prf = VL_RAND_RESET_I(6);
    vlSelf->__PVT__instr0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr0_is_store_op = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr1_is_store_op = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__int_pack0);
    VL_RAND_RESET_W(205, vlSelf->__Vdly__int_pack1);
    vlSelf->__Vdly__int_pack0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__int_pack1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__int_instr0_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__int_instr0_rs2_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__int_instr1_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__int_instr1_rs2_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__Vdly__mem_pack0);
    VL_RAND_RESET_W(129, vlSelf->__Vdly__mem_pack1);
    vlSelf->__Vdly__mem_pack0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_pack1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_instr0_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_instr0_rs2_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_instr1_rs1_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem_instr1_rs2_ready = VL_RAND_RESET_I(1);
}
