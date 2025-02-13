// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top___024root.h"

VL_ATTR_COLD void Vssrv_top___024root___eval_final(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vssrv_top___024root___eval_triggers__stl(Vssrv_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vssrv_top___024root___dump_triggers__stl(Vssrv_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vssrv_top___024root___eval_stl(Vssrv_top___024root* vlSelf);

VL_ATTR_COLD void Vssrv_top___024root___eval_settle(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__VstlIterCount = 0U;
    vlSelf->__VstlContinue = 1U;
    while (vlSelf->__VstlContinue) {
        vlSelf->__VstlContinue = 0U;
        Vssrv_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            vlSelf->__VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vssrv_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ssrv_top.v", 7, "", "Settle region did not converge.");
            }
            __Vtemp_1 = ((IData)(1U) + vlSelf->__VstlIterCount);
            vlSelf->__VstlIterCount = __Vtemp_1;
            Vssrv_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vssrv_top___024root___dump_triggers__stl(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.tdu2exu_i_x_req)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_tdu.csr2tdu_req)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd or [hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.div_cmd)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd or [hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mul_cmd)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.shft_cmd)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_lsu.lsu_hwbrk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vssrv_top___024root___dump_triggers__ico(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vssrv_top___024root___dump_triggers__act(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ssrv_top.memory_modelling_inst.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.tdu2exu_i_x_req)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_tdu.csr2tdu_req)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd or [hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.div_cmd)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd or [hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mul_cmd)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.shft_cmd)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_lsu.lsu_hwbrk)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge ssrv_top.clk)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.clk or negedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.reset_n_in_mux)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.clk or negedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.rst_n_mux)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_ifu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_ifu.rst_n)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_exu.rst_n)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_mprf.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_mprf.rst_n)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_csr.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_csr.rst_n)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_tdu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_tdu.rst_n)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_tdu.clk)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.rst_n)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.clk)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_lsu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_lsu.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vssrv_top___024root___dump_triggers__nba(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ssrv_top.memory_modelling_inst.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.tdu2exu_i_x_req)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_tdu.csr2tdu_req)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd or [hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.div_cmd)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mdu_cmd or [hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.mul_cmd)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.shft_cmd)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] ssrv_top.core.i_pipe_top.i_pipe_exu.i_lsu.lsu_hwbrk)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge ssrv_top.clk)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.clk or negedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.reset_n_in_mux)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.clk or negedge ssrv_top.core.i_core_rstn_buf_qlfy_cell.rst_n_mux)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_ifu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_ifu.rst_n)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_exu.rst_n)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_mprf.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_mprf.rst_n)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_csr.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_csr.rst_n)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_tdu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_tdu.rst_n)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_tdu.clk)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.rst_n)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_ialu.clk)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_lsu.clk or negedge ssrv_top.core.i_pipe_top.i_pipe_exu.i_lsu.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vssrv_top___024root___ctor_var_reset(Vssrv_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vssrv_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__tdu2exu_i_x_req__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__csr2tdu_req__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__div_cmd__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mul_cmd__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__shft_cmd__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__lsu_hwbrk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__memory_modelling_inst____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__tdu2exu_i_x_req__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__csr2tdu_req__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mdu_cmd__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__div_cmd__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__mul_cmd__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__shft_cmd__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__lsu_hwbrk__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__reset_n_in_mux__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_core_rstn_buf_qlfy_cell____PVT__rst_n_mux__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_ifu____PVT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu____PVT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_mprf____PVT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_csr____PVT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_tdu____PVT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_ialu____PVT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ssrv_top__core__i_pipe_top__i_pipe_exu__i_lsu____PVT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
