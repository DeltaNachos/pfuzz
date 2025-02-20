// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top___024root.h"

VL_ATTR_COLD void Vfalco_top___024root___eval_final(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfalco_top___024root___dump_triggers__stl(Vfalco_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfalco_top___024root___eval_phase__stl(Vfalco_top___024root* vlSelf);

VL_ATTR_COLD void Vfalco_top___024root___eval_settle(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    vlSelfRef.__VstlContinue = 1U;
    while (vlSelfRef.__VstlContinue) {
        if (VL_UNLIKELY((0x64U < vlSelfRef.__VstlIterCount))) {
#ifdef VL_DEBUG
            Vfalco_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("falco_top.sv", 4, "", "Settle region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VstlIterCount);
        vlSelfRef.__VstlIterCount = __Vtemp_1;
        vlSelfRef.__VstlContinue = 0U;
        if (Vfalco_top___024root___eval_phase__stl(vlSelf)) {
            vlSelfRef.__VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfalco_top___024root___dump_triggers__stl(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] falco_top.core.LDB.compare_address)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] falco_top.core.ldb_io_inst.store_rob_tag)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] falco_top.core.pipe_ctrl_io_inst.LSU_stall)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfalco_top___024root___eval_triggers__stl(Vfalco_top___024root* vlSelf);
VL_ATTR_COLD void Vfalco_top___024root___eval_stl(Vfalco_top___024root* vlSelf);

VL_ATTR_COLD bool Vfalco_top___024root___eval_phase__stl(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfalco_top___024root___eval_triggers__stl(vlSelf);
    vlSelfRef.__VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (vlSelfRef.__VstlExecute) {
        Vfalco_top___024root___eval_stl(vlSelf);
    }
    return (vlSelfRef.__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfalco_top___024root___dump_triggers__ico(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] falco_top.core.LDB.compare_address)\n");
    }
    if ((4ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] falco_top.core.ldb_io_inst.store_rob_tag)\n");
    }
    if ((8ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] falco_top.core.pipe_ctrl_io_inst.LSU_stall)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfalco_top___024root___dump_triggers__act(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge falco_top.memory_modelling_inst.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] falco_top.core.LDB.compare_address)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] falco_top.core.ldb_io_inst.store_rob_tag)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] falco_top.core.pipe_ctrl_io_inst.LSU_stall)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge falco_top.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge falco_top.core.INT_IQ.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge falco_top.core.ROB.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge falco_top.core.register_read_stage.clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge falco_top.core.rename_dispatch_stage.clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge falco_top.core.instruction_fetch.clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge falco_top.core.SDB.clk)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge falco_top.core.alu_csr_bc_execute_group_inst.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge falco_top.core.LDB.clk)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge falco_top.core.committed_map_table_inst.clk)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge falco_top.core.address_generate_unit.clk)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge falco_top.core.instruction_decode.clk)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge falco_top.core.MemAccess.clk)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge falco_top.core.pipeline_ctrl.clk)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge falco_top.core.LSU.clk)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge falco_top.core.alu_muldiv_execute_group_inst.clk)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge falco_top.core.csr.clk_i)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge falco_top.core.MEM_IQ.clk)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(posedge falco_top.core.INT_IQ.Replay_Unit.clk)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(posedge falco_top.core.MEM_IQ.replay_unit.clk)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(posedge falco_top.core.rename_dispatch_stage.Map_Table.clk)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(posedge falco_top.core.alu_muldiv_execute_group_inst.imul.clk_i)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @(posedge falco_top.core.INT_IQ.INT_selector.clk)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(posedge falco_top.core.alu_muldiv_execute_group_inst.idiv.clk_i)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(posedge falco_top.core.instruction_fetch.branch_predictor.clk)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(posedge falco_top.core.register_read_stage.prf.clk)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(posedge falco_top.core.rename_dispatch_stage.LFST.clk)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(posedge falco_top.core.rename_dispatch_stage.freelist.clk)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge falco_top.core.rename_dispatch_stage.Busy_list.clk)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @(posedge falco_top.core.instruction_fetch.PC.clk)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(posedge falco_top.core.instruction_decode.SSIT.clk)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @(posedge falco_top.core.instruction_fetch.Branch_target_buffer.clk)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @(posedge falco_top.core.instruction_fetch.Branch_target_buffer.direct_mapped_cache_target.clk)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @(posedge falco_top.core.instruction_fetch.Branch_target_buffer.direct_mapped_cache_tag.clk)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @(posedge falco_top.core.instruction_decode.SSIT.store_set_id.clka)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @(posedge falco_top.core.instruction_decode.SSIT.store_set_id.clkb)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfalco_top___024root___dump_triggers__nba(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge falco_top.memory_modelling_inst.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] falco_top.core.LDB.compare_address)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] falco_top.core.ldb_io_inst.store_rob_tag)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] falco_top.core.pipe_ctrl_io_inst.LSU_stall)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge falco_top.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge falco_top.core.INT_IQ.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge falco_top.core.ROB.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge falco_top.core.register_read_stage.clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge falco_top.core.rename_dispatch_stage.clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge falco_top.core.instruction_fetch.clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge falco_top.core.SDB.clk)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge falco_top.core.alu_csr_bc_execute_group_inst.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge falco_top.core.LDB.clk)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge falco_top.core.committed_map_table_inst.clk)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge falco_top.core.address_generate_unit.clk)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge falco_top.core.instruction_decode.clk)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge falco_top.core.MemAccess.clk)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge falco_top.core.pipeline_ctrl.clk)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge falco_top.core.LSU.clk)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge falco_top.core.alu_muldiv_execute_group_inst.clk)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge falco_top.core.csr.clk_i)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge falco_top.core.MEM_IQ.clk)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(posedge falco_top.core.INT_IQ.Replay_Unit.clk)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(posedge falco_top.core.MEM_IQ.replay_unit.clk)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(posedge falco_top.core.rename_dispatch_stage.Map_Table.clk)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(posedge falco_top.core.alu_muldiv_execute_group_inst.imul.clk_i)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @(posedge falco_top.core.INT_IQ.INT_selector.clk)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(posedge falco_top.core.alu_muldiv_execute_group_inst.idiv.clk_i)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(posedge falco_top.core.instruction_fetch.branch_predictor.clk)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(posedge falco_top.core.register_read_stage.prf.clk)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(posedge falco_top.core.rename_dispatch_stage.LFST.clk)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(posedge falco_top.core.rename_dispatch_stage.freelist.clk)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge falco_top.core.rename_dispatch_stage.Busy_list.clk)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @(posedge falco_top.core.instruction_fetch.PC.clk)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(posedge falco_top.core.instruction_decode.SSIT.clk)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @(posedge falco_top.core.instruction_fetch.Branch_target_buffer.clk)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @(posedge falco_top.core.instruction_fetch.Branch_target_buffer.direct_mapped_cache_target.clk)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @(posedge falco_top.core.instruction_fetch.Branch_target_buffer.direct_mapped_cache_tag.clk)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @(posedge falco_top.core.instruction_decode.SSIT.store_set_id.clka)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @(posedge falco_top.core.instruction_decode.SSIT.store_set_id.clkb)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfalco_top___024root____Vm_traceActivitySetAll(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x13U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x14U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x15U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x16U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x17U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x18U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x19U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1dU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1eU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1fU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x20U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x21U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x22U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x23U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x24U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x25U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x26U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x27U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x28U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x29U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2dU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2eU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x2fU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x30U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x31U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x32U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x33U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x34U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x35U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x36U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x37U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x38U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x39U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3dU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3eU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x3fU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x40U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x41U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x42U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x43U] = 1U;
}

VL_ATTR_COLD void Vfalco_top___024root___ctor_var_reset(Vfalco_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfalco_top___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__compare_address__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__ldb_io_inst____PVT__store_rob_tag__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__pipe_ctrl_io_inst____PVT__LSU_stall__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__compare_address__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__ldb_io_inst____PVT__store_rob_tag__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__pipe_ctrl_io_inst____PVT__LSU_stall__1 = VL_RAND_RESET_I(1);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__falco_top__memory_modelling_inst____PVT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__compare_address__2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__ldb_io_inst____PVT__store_rob_tag__2 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__pipe_ctrl_io_inst____PVT__LSU_stall__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__INT_IQ____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__ROB____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__register_read_stage____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_fetch____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__SDB____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__alu_csr_bc_execute_group_inst____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__LDB____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__committed_map_table_inst____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__address_generate_unit____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_decode____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__MemAccess____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__pipeline_ctrl____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__LSU____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__alu_muldiv_execute_group_inst____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__csr____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__MEM_IQ____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__INT_IQ__Replay_Unit____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__MEM_IQ__replay_unit____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__Map_Table____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__alu_muldiv_execute_group_inst__imul____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__INT_IQ__INT_selector____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__alu_muldiv_execute_group_inst__idiv____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__branch_predictor____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__register_read_stage__prf____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__LFST____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__freelist____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__rename_dispatch_stage__Busy_list____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__PC____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_decode__SSIT____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__Branch_target_buffer____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_target____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_fetch__Branch_target_buffer__direct_mapped_cache_tag____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_decode__SSIT__store_set_id____PVT__clka__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__falco_top__core__instruction_decode__SSIT__store_set_id____PVT__clkb__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 68; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
