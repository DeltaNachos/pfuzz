// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_commit_stage_io.h"

VL_ATTR_COLD void Vfalco_top_commit_stage_io___ctor_var_reset(Vfalco_top_commit_stage_io* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_commit_stage_io___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__committed_update = VL_RAND_RESET_I(24);
    vlSelf->__PVT__cur_commit_rob_tag = VL_RAND_RESET_I(6);
    vlSelf->__PVT__recovery_old_prf_0 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__recovery_arf_0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__recovery_arf_map_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recovery_old_prf_1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__recovery_arf_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__recovery_arf_map_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recycle_freelist_prf_0 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__recycle_freelist_prf_1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__recycle_freelist_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recycle_freelist_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_commit_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_commit_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_flush_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_flush_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__commit_instr0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__commit_instr1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_miss_first = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__store_flush_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__store_flush_1_valid = VL_RAND_RESET_I(1);
}
