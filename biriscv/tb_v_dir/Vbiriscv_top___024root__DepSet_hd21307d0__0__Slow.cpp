// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top___024root.h"

VL_ATTR_COLD void Vbiriscv_top___024root___eval_final(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbiriscv_top___024root___eval_triggers__stl(Vbiriscv_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__stl(Vbiriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___eval_stl(Vbiriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vbiriscv_top___024root___eval_settle(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__VstlIterCount = 0U;
    vlSelf->__VstlContinue = 1U;
    while (vlSelf->__VstlContinue) {
        vlSelf->__VstlContinue = 0U;
        Vbiriscv_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            vlSelf->__VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vbiriscv_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("biriscv_top.v", 6, "", "Settle region did not converge.");
            }
            __Vtemp_1 = ((IData)(1U) + vlSelf->__VstlIterCount);
            vlSelf->__VstlIterCount = __Vtemp_1;
            Vbiriscv_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__stl(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__ico(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__act(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge biriscv_top.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge biriscv_top.memory_modelling_inst.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge biriscv_top.u_core.u_csr.clk_i or posedge biriscv_top.u_core.u_csr.rst_i)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge biriscv_top.u_core.u_mul.clk_i or posedge biriscv_top.u_core.u_mul.rst_i)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge biriscv_top.u_core.u_div.clk_i or posedge biriscv_top.u_core.u_div.rst_i)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge biriscv_top.u_core.u_issue.clk_i or posedge biriscv_top.u_core.u_issue.rst_i)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge biriscv_top.u_core.u_exec0.clk_i or posedge biriscv_top.u_core.u_exec0.rst_i)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge biriscv_top.u_core.u_exec1.clk_i or posedge biriscv_top.u_core.u_exec1.rst_i)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge biriscv_top.u_core.u_mmu.clk_i or posedge biriscv_top.u_core.u_mmu.rst_i)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge biriscv_top.u_core.u_lsu.clk_i or posedge biriscv_top.u_core.u_lsu.rst_i)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge biriscv_top.u_core.u_frontend.u_npc.clk_i or posedge biriscv_top.u_core.u_frontend.u_npc.rst_i)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge biriscv_top.u_core.u_frontend.u_fetch.clk_i or posedge biriscv_top.u_core.u_frontend.u_fetch.rst_i)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge biriscv_top.u_core.u_issue.u_pipe0_ctrl.clk_i or posedge biriscv_top.u_core.u_issue.u_pipe0_ctrl.rst_i)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge biriscv_top.u_core.u_issue.u_pipe1_ctrl.clk_i or posedge biriscv_top.u_core.u_issue.u_pipe1_ctrl.rst_i)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge biriscv_top.u_core.u_issue.u_regfile.clk_i)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge biriscv_top.u_core.u_frontend.u_decode.clk_i or posedge biriscv_top.u_core.u_frontend.u_decode.rst_i)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge biriscv_top.u_core.u_lsu.u_lsu_request.clk_i or posedge biriscv_top.u_core.u_lsu.u_lsu_request.rst_i)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge biriscv_top.u_core.u_csr.u_csrfile.clk_i or posedge biriscv_top.u_core.u_csr.u_csrfile.rst_i)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge biriscv_top.u_core.u_frontend.u_npc.BRANCH_PREDICTION.u_lru.clk_i or posedge biriscv_top.u_core.u_frontend.u_npc.BRANCH_PREDICTION.u_lru.rst_i)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge biriscv_top.u_core.u_frontend.u_decode.genblk1.u_fifo.clk_i or posedge biriscv_top.u_core.u_frontend.u_decode.genblk1.u_fifo.rst_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_top___024root___dump_triggers__nba(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge biriscv_top.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge biriscv_top.memory_modelling_inst.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge biriscv_top.u_core.u_csr.clk_i or posedge biriscv_top.u_core.u_csr.rst_i)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge biriscv_top.u_core.u_mul.clk_i or posedge biriscv_top.u_core.u_mul.rst_i)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge biriscv_top.u_core.u_div.clk_i or posedge biriscv_top.u_core.u_div.rst_i)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge biriscv_top.u_core.u_issue.clk_i or posedge biriscv_top.u_core.u_issue.rst_i)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge biriscv_top.u_core.u_exec0.clk_i or posedge biriscv_top.u_core.u_exec0.rst_i)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge biriscv_top.u_core.u_exec1.clk_i or posedge biriscv_top.u_core.u_exec1.rst_i)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge biriscv_top.u_core.u_mmu.clk_i or posedge biriscv_top.u_core.u_mmu.rst_i)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge biriscv_top.u_core.u_lsu.clk_i or posedge biriscv_top.u_core.u_lsu.rst_i)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge biriscv_top.u_core.u_frontend.u_npc.clk_i or posedge biriscv_top.u_core.u_frontend.u_npc.rst_i)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge biriscv_top.u_core.u_frontend.u_fetch.clk_i or posedge biriscv_top.u_core.u_frontend.u_fetch.rst_i)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge biriscv_top.u_core.u_issue.u_pipe0_ctrl.clk_i or posedge biriscv_top.u_core.u_issue.u_pipe0_ctrl.rst_i)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge biriscv_top.u_core.u_issue.u_pipe1_ctrl.clk_i or posedge biriscv_top.u_core.u_issue.u_pipe1_ctrl.rst_i)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge biriscv_top.u_core.u_issue.u_regfile.clk_i)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge biriscv_top.u_core.u_frontend.u_decode.clk_i or posedge biriscv_top.u_core.u_frontend.u_decode.rst_i)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge biriscv_top.u_core.u_lsu.u_lsu_request.clk_i or posedge biriscv_top.u_core.u_lsu.u_lsu_request.rst_i)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge biriscv_top.u_core.u_csr.u_csrfile.clk_i or posedge biriscv_top.u_core.u_csr.u_csrfile.rst_i)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge biriscv_top.u_core.u_frontend.u_npc.BRANCH_PREDICTION.u_lru.clk_i or posedge biriscv_top.u_core.u_frontend.u_npc.BRANCH_PREDICTION.u_lru.rst_i)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge biriscv_top.u_core.u_frontend.u_decode.genblk1.u_fifo.clk_i or posedge biriscv_top.u_core.u_frontend.u_decode.genblk1.u_fifo.rst_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbiriscv_top___024root___ctor_var_reset(Vbiriscv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__memory_modelling_inst____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mul____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_div____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec0____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_exec1____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_mmu____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_fetch____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_issue__u_regfile____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_lsu__u_lsu_request____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_csr__u_csrfile____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__DOT__u_lru____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_top__u_core__u_frontend__u_decode__genblk1__DOT__u_fifo____PVT__rst_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 57; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
