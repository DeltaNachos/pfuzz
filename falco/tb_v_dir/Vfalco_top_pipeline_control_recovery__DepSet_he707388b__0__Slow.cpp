// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_pipeline_control_recovery.h"

VL_ATTR_COLD void Vfalco_top_pipeline_control_recovery___ctor_var_reset(Vfalco_top_pipeline_control_recovery* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_pipeline_control_recovery___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DMEM_access_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spec_tag_full = VL_RAND_RESET_I(1);
    vlSelf->recovery_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__recovery_next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rollback_finished = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replay_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__replay_next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_replay_counter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_consumer_spec_replay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_consumer_spec_kill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_consumer_spec_kill_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SDA_full_delay = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__recovery_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__load_consumer_spec_kill_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__load_replay_counter = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__SDA_full_delay = VL_RAND_RESET_I(1);
}
