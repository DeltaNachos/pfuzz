// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_csr_file.h"

VL_ATTR_COLD void Vfalco_top_csr_file___eval_initial__TOP__falco_top__core__csr(Vfalco_top_csr_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_csr_file___eval_initial__TOP__falco_top__core__csr\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mvendorid = 0U;
    vlSelfRef.__PVT__marchid = 0U;
    vlSelfRef.__PVT__mimpid = 0U;
    vlSelfRef.__PVT__mhartid = 0U;
}

VL_ATTR_COLD void Vfalco_top_csr_file___ctor_var_reset(Vfalco_top_csr_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_csr_file___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ext_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tmr_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sft_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_taken_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_handler_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__nxt_unwb_PC_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mstatus_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mie_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mip_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcause_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__medeleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mideleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mvendorid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__marchid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mimpid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mhartid = VL_RAND_RESET_I(32);
    vlSelf->branch_counter = VL_RAND_RESET_I(32);
    vlSelf->branch_miss_counter = VL_RAND_RESET_I(32);
    vlSelf->recovery_counter = VL_RAND_RESET_I(32);
    vlSelf->recovery_big_counter = VL_RAND_RESET_I(32);
    vlSelf->recovery_small_counter = VL_RAND_RESET_I(32);
    vlSelf->recovery_total_amount = VL_RAND_RESET_I(32);
    vlSelf->recovery_rollback_amount = VL_RAND_RESET_I(32);
    vlSelf->recovery_cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sstatus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sip = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sie = VL_RAND_RESET_I(32);
    vlSelf->__PVT__satp_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scause_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__privilege_level_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mtvec_base = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stvec_base = VL_RAND_RESET_I(32);
    vlSelf->__PVT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_sret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_uret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__trap_to_M = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interrupt_cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__irq_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_handler = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mstatus_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mie_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mip_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mtvec_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mepc_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mcause_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mtval_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__medeleg_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mideleg_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mcycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__branch_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__branch_miss_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__recovery_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__recovery_big_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__recovery_small_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__recovery_total_amount = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__recovery_rollback_amount = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__recovery_cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__satp_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__stvec_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sepc_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__scause_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__stval_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__cycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__privilege_level_r = VL_RAND_RESET_I(2);
}
