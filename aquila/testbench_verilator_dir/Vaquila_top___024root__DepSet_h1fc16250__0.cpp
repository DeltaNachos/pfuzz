// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaquila_top___024root___dump_triggers__ico(Vaquila_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vaquila_top___024root___eval_triggers__ico(Vaquila_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaquila_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vaquila_top___024root___ico_sequent__TOP__0(Vaquila_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__aquila_top.rst = vlSelf->rst;
    vlSymsp->TOP__aquila_top.clk = vlSelf->clk;
}

void Vaquila_top_aquila_top___ico_sequent__TOP__aquila_top__0(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_core_top___ico_sequent__TOP__aquila_top__core__0(Vaquila_top_core_top* vlSelf);
void Vaquila_top_bpu___ico_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__0(Vaquila_top_bpu* vlSelf);
void Vaquila_top_execute___ico_sequent__TOP__aquila_top__core__Execute__0(Vaquila_top_execute* vlSelf);

void Vaquila_top___024root___eval_ico(Vaquila_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vaquila_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vaquila_top_aquila_top___ico_sequent__TOP__aquila_top__0((&vlSymsp->TOP__aquila_top));
        Vaquila_top_core_top___ico_sequent__TOP__aquila_top__core__0((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_bpu___ico_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__0((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
        Vaquila_top_execute___ico_sequent__TOP__aquila_top__core__Execute__0((&vlSymsp->TOP__aquila_top__core__Execute));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaquila_top___024root___dump_triggers__act(Vaquila_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vaquila_top___024root___eval_triggers__act(Vaquila_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__aquila_top.clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__aquila_top__core.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__memory_modelling_inst____PVT__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__aquila_top__core__CSR.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__CSR____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Branch_Prediction_Unit____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSymsp->TOP__aquila_top__core__Register_File.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Register_File____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Program_Counter____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSymsp->TOP__aquila_top__core__Fetch.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Fetch____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSymsp->TOP__aquila_top__core__Decode.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Decode____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSymsp->TOP__aquila_top__core__Execute.__PVT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Execute____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSymsp->TOP__aquila_top__core__Writeback.__PVT__clk_i) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Writeback____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__clk_i) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Execute__MulDiv____PVT__clk_i__0))));
    vlSelf->__VactTriggered.set(0xcU, ((IData)(vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__clk_i) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history____PVT__clk_i__0))));
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__clk__0 
        = vlSymsp->TOP__aquila_top.clk;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__memory_modelling_inst____PVT__clk__0 
        = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__CSR____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__CSR.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Branch_Prediction_Unit____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Register_File____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Register_File.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Program_Counter____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Program_Counter.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Fetch____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Fetch.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Decode____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Decode.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Execute____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Execute.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Writeback____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Writeback.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Execute__MulDiv____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Execute__MulDiv.__PVT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history____PVT__clk_i__0 
        = vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history.__PVT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaquila_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vaquila_top_bpu___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__0(Vaquila_top_bpu* vlSelf);
void Vaquila_top_distri_ram__E40___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0(Vaquila_top_distri_ram__E40* vlSelf);
void Vaquila_top_csr_file___nba_sequent__TOP__aquila_top__core__CSR__0(Vaquila_top_csr_file* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__0(Vaquila_top_core_top* vlSelf);
void Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__0(Vaquila_top_muldiv* vlSelf);
void Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__0(Vaquila_top_execute* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__1(Vaquila_top_core_top* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__0(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__0(Vaquila_top_reg_file* vlSelf);
void Vaquila_top_writeback___nba_sequent__TOP__aquila_top__core__Writeback__0(Vaquila_top_writeback* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__2(Vaquila_top_core_top* vlSelf);
void Vaquila_top_csr_file___nba_sequent__TOP__aquila_top__core__CSR__1(Vaquila_top_csr_file* vlSelf);
void Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__1(Vaquila_top_reg_file* vlSelf);
void Vaquila_top_forwarding_unit___nba_sequent__TOP__aquila_top__core__Forwarding_Unit__0(Vaquila_top_forwarding_unit* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__3(Vaquila_top_core_top* vlSelf);
void Vaquila_top_pipeline_control___nba_sequent__TOP__aquila_top__core__Pipeline_Control__0(Vaquila_top_pipeline_control* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__4(Vaquila_top_core_top* vlSelf);
void Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__1(Vaquila_top_execute* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__5(Vaquila_top_core_top* vlSelf);
void Vaquila_top_forwarding_unit___nba_sequent__TOP__aquila_top__core__Forwarding_Unit__1(Vaquila_top_forwarding_unit* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__1(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_memory___nba_sequent__TOP__aquila_top__core__Memory__0(Vaquila_top_memory* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__6(Vaquila_top_core_top* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__2(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_fetch___nba_sequent__TOP__aquila_top__core__Fetch__0(Vaquila_top_fetch* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__7(Vaquila_top_core_top* vlSelf);
void Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__0(Vaquila_top_program_counter* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__8(Vaquila_top_core_top* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__3(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__0(Vaquila_top_decode* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__9(Vaquila_top_core_top* vlSelf);
void Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__2(Vaquila_top_execute* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__10(Vaquila_top_core_top* vlSelf);
void Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__1(Vaquila_top_muldiv* vlSelf);
void Vaquila_top_alu___nba_sequent__TOP__aquila_top__core__Execute__ALU__0(Vaquila_top_alu* vlSelf);
void Vaquila_top_bcu___nba_sequent__TOP__aquila_top__core__Execute__BCU__0(Vaquila_top_bcu* vlSelf);
void Vaquila_top_aquila_mem_model___nba_sequent__TOP__aquila_top__memory_modelling_inst__0(Vaquila_top_aquila_mem_model* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__4(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__11(Vaquila_top_core_top* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__5(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__12(Vaquila_top_core_top* vlSelf);
void Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__3(Vaquila_top_execute* vlSelf);
void Vaquila_top_bpu___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__1(Vaquila_top_bpu* vlSelf);
void Vaquila_top_csr_file___nba_comb__TOP__aquila_top__core__CSR__0(Vaquila_top_csr_file* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__0(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__1(Vaquila_top_core_top* vlSelf);
void Vaquila_top_aquila_top___nba_comb__TOP__aquila_top__0(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__0(Vaquila_top_pipeline_control* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__2(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__13(Vaquila_top_core_top* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__6(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__14(Vaquila_top_core_top* vlSelf);
void Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__0(Vaquila_top_bpu* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__3(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__15(Vaquila_top_core_top* vlSelf);
void Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__1(Vaquila_top_decode* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__4(Vaquila_top_core_top* vlSelf);
void Vaquila_top_forwarding_unit___nba_comb__TOP__aquila_top__core__Forwarding_Unit__0(Vaquila_top_forwarding_unit* vlSelf);
void Vaquila_top_forwarding_unit___nba_comb__TOP__aquila_top__core__Forwarding_Unit__1(Vaquila_top_forwarding_unit* vlSelf);
void Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__0(Vaquila_top_execute* vlSelf);
void Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__0(Vaquila_top_muldiv* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__5(Vaquila_top_core_top* vlSelf);
void Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__1(Vaquila_top_bpu* vlSelf);
void Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__1(Vaquila_top_program_counter* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__7(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__8(Vaquila_top_aquila_top* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__6(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__7(Vaquila_top_core_top* vlSelf);
void Vaquila_top_fetch___nba_comb__TOP__aquila_top__core__Fetch__0(Vaquila_top_fetch* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__8(Vaquila_top_core_top* vlSelf);
void Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__0(Vaquila_top_decode* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__9(Vaquila_top_core_top* vlSelf);
void Vaquila_top_distri_ram__E40___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0(Vaquila_top_distri_ram__E40* vlSelf);
void Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__2(Vaquila_top_bpu* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__10(Vaquila_top_core_top* vlSelf);
void Vaquila_top_forwarding_unit___nba_comb__TOP__aquila_top__core__Forwarding_Unit__2(Vaquila_top_forwarding_unit* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__11(Vaquila_top_core_top* vlSelf);
void Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__1(Vaquila_top_execute* vlSelf);
void Vaquila_top_bcu___nba_comb__TOP__aquila_top__core__Execute__BCU__0(Vaquila_top_bcu* vlSelf);
void Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__1(Vaquila_top_muldiv* vlSelf);
void Vaquila_top_alu___nba_comb__TOP__aquila_top__core__Execute__ALU__0(Vaquila_top_alu* vlSelf);
void Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__2(Vaquila_top_execute* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__12(Vaquila_top_core_top* vlSelf);
void Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__3(Vaquila_top_bpu* vlSelf);
void Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__1(Vaquila_top_pipeline_control* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__13(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__14(Vaquila_top_core_top* vlSelf);
void Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__3(Vaquila_top_execute* vlSelf);
void Vaquila_top_csr_file___nba_comb__TOP__aquila_top__core__CSR__1(Vaquila_top_csr_file* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__15(Vaquila_top_core_top* vlSelf);
void Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__1(Vaquila_top_decode* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__16(Vaquila_top_core_top* vlSelf);
void Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__2(Vaquila_top_pipeline_control* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__17(Vaquila_top_core_top* vlSelf);
void Vaquila_top_csr_file___nba_comb__TOP__aquila_top__core__CSR__2(Vaquila_top_csr_file* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__18(Vaquila_top_core_top* vlSelf);
void Vaquila_top_reg_file___nba_comb__TOP__aquila_top__core__Register_File__0(Vaquila_top_reg_file* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__19(Vaquila_top_core_top* vlSelf);
void Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__4(Vaquila_top_execute* vlSelf);
void Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__4(Vaquila_top_bpu* vlSelf);
void Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__2(Vaquila_top_muldiv* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__20(Vaquila_top_core_top* vlSelf);
void Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__3(Vaquila_top_pipeline_control* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__21(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__22(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__23(Vaquila_top_core_top* vlSelf);
void Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__24(Vaquila_top_core_top* vlSelf);

void Vaquila_top___024root___eval_nba(Vaquila_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_top___024root___eval_nba\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_bpu___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__0((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_distri_ram__E40___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_csr_file___nba_sequent__TOP__aquila_top__core__CSR__0((&vlSymsp->TOP__aquila_top__core__CSR));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__0((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__0((&vlSymsp->TOP__aquila_top__core__Execute__MulDiv));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__0((&vlSymsp->TOP__aquila_top__core__Execute));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__1((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__0((&vlSymsp->TOP__aquila_top));
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__0((&vlSymsp->TOP__aquila_top__core__Register_File));
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_writeback___nba_sequent__TOP__aquila_top__core__Writeback__0((&vlSymsp->TOP__aquila_top__core__Writeback));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__2((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_csr_file___nba_sequent__TOP__aquila_top__core__CSR__1((&vlSymsp->TOP__aquila_top__core__CSR));
        Vaquila_top_reg_file___nba_sequent__TOP__aquila_top__core__Register_File__1((&vlSymsp->TOP__aquila_top__core__Register_File));
        Vaquila_top_forwarding_unit___nba_sequent__TOP__aquila_top__core__Forwarding_Unit__0((&vlSymsp->TOP__aquila_top__core__Forwarding_Unit));
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__3((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_pipeline_control___nba_sequent__TOP__aquila_top__core__Pipeline_Control__0((&vlSymsp->TOP__aquila_top__core__Pipeline_Control));
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__4((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__1((&vlSymsp->TOP__aquila_top__core__Execute));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__5((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_forwarding_unit___nba_sequent__TOP__aquila_top__core__Forwarding_Unit__1((&vlSymsp->TOP__aquila_top__core__Forwarding_Unit));
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__1((&vlSymsp->TOP__aquila_top));
        Vaquila_top_memory___nba_sequent__TOP__aquila_top__core__Memory__0((&vlSymsp->TOP__aquila_top__core__Memory));
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__6((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__2((&vlSymsp->TOP__aquila_top));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_fetch___nba_sequent__TOP__aquila_top__core__Fetch__0((&vlSymsp->TOP__aquila_top__core__Fetch));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__7((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__0((&vlSymsp->TOP__aquila_top__core__Program_Counter));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__8((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__3((&vlSymsp->TOP__aquila_top));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__0((&vlSymsp->TOP__aquila_top__core__Decode));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__9((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__2((&vlSymsp->TOP__aquila_top__core__Execute));
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__10((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_muldiv___nba_sequent__TOP__aquila_top__core__Execute__MulDiv__1((&vlSymsp->TOP__aquila_top__core__Execute__MulDiv));
        Vaquila_top_alu___nba_sequent__TOP__aquila_top__core__Execute__ALU__0((&vlSymsp->TOP__aquila_top__core__Execute__ALU));
        Vaquila_top_bcu___nba_sequent__TOP__aquila_top__core__Execute__BCU__0((&vlSymsp->TOP__aquila_top__core__Execute__BCU));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_aquila_mem_model___nba_sequent__TOP__aquila_top__memory_modelling_inst__0((&vlSymsp->TOP__aquila_top__memory_modelling_inst));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__4((&vlSymsp->TOP__aquila_top));
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__11((&vlSymsp->TOP__aquila_top__core));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__5((&vlSymsp->TOP__aquila_top));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__12((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_execute___nba_sequent__TOP__aquila_top__core__Execute__3((&vlSymsp->TOP__aquila_top__core__Execute));
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_bpu___nba_sequent__TOP__aquila_top__core__Branch_Prediction_Unit__1((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
    }
    if ((0x408ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_csr_file___nba_comb__TOP__aquila_top__core__CSR__0((&vlSymsp->TOP__aquila_top__core__CSR));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__0((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x202ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__1((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        Vaquila_top_aquila_top___nba_comb__TOP__aquila_top__0((&vlSymsp->TOP__aquila_top));
    }
    if ((0x600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__0((&vlSymsp->TOP__aquila_top__core__Pipeline_Control));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__2((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__13((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__6((&vlSymsp->TOP__aquila_top));
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__14((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x50ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__0((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__3((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_sequent__TOP__aquila_top__core__15((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_decode___nba_sequent__TOP__aquila_top__core__Decode__1((&vlSymsp->TOP__aquila_top__core__Decode));
    }
    if ((0x7c0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__4((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_forwarding_unit___nba_comb__TOP__aquila_top__core__Forwarding_Unit__0((&vlSymsp->TOP__aquila_top__core__Forwarding_Unit));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x500ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_forwarding_unit___nba_comb__TOP__aquila_top__core__Forwarding_Unit__1((&vlSymsp->TOP__aquila_top__core__Forwarding_Unit));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x900ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__0((&vlSymsp->TOP__aquila_top__core__Execute));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__0((&vlSymsp->TOP__aquila_top__core__Execute__MulDiv));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__5((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x110ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__1((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_program_counter___nba_sequent__TOP__aquila_top__core__Program_Counter__1((&vlSymsp->TOP__aquila_top__core__Program_Counter));
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__7((&vlSymsp->TOP__aquila_top));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__8((&vlSymsp->TOP__aquila_top));
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__6((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x204ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__7((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((0x85ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_fetch___nba_comb__TOP__aquila_top__core__Fetch__0((&vlSymsp->TOP__aquila_top__core__Fetch));
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__8((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__0((&vlSymsp->TOP__aquila_top__core__Decode));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__9((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x1050ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_distri_ram__E40___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history__0((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history));
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__2((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__10((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x700ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_forwarding_unit___nba_comb__TOP__aquila_top__core__Forwarding_Unit__2((&vlSymsp->TOP__aquila_top__core__Forwarding_Unit));
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__11((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__1((&vlSymsp->TOP__aquila_top__core__Execute));
        Vaquila_top_bcu___nba_comb__TOP__aquila_top__core__Execute__BCU__0((&vlSymsp->TOP__aquila_top__core__Execute__BCU));
        Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__1((&vlSymsp->TOP__aquila_top__core__Execute__MulDiv));
        Vaquila_top_alu___nba_comb__TOP__aquila_top__core__Execute__ALU__0((&vlSymsp->TOP__aquila_top__core__Execute__ALU));
        Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__2((&vlSymsp->TOP__aquila_top__core__Execute));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__12((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__3((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
        Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__1((&vlSymsp->TOP__aquila_top__core__Pipeline_Control));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__13((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0xb06ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__14((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__3((&vlSymsp->TOP__aquila_top__core__Execute));
    }
    if ((0x60cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_csr_file___nba_comb__TOP__aquila_top__core__CSR__1((&vlSymsp->TOP__aquila_top__core__CSR));
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__15((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x185ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_decode___nba_comb__TOP__aquila_top__core__Decode__1((&vlSymsp->TOP__aquila_top__core__Decode));
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__16((&vlSymsp->TOP__aquila_top__core));
        Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__2((&vlSymsp->TOP__aquila_top__core__Pipeline_Control));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__17((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x8dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_csr_file___nba_comb__TOP__aquila_top__core__CSR__2((&vlSymsp->TOP__aquila_top__core__CSR));
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__18((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x4a5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_reg_file___nba_comb__TOP__aquila_top__core__Register_File__0((&vlSymsp->TOP__aquila_top__core__Register_File));
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__19((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0xf00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_execute___nba_comb__TOP__aquila_top__core__Execute__4((&vlSymsp->TOP__aquila_top__core__Execute));
    }
    if ((0xb16ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_bpu___nba_comb__TOP__aquila_top__core__Branch_Prediction_Unit__4((&vlSymsp->TOP__aquila_top__core__Branch_Prediction_Unit));
    }
    if ((0xf06ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_muldiv___nba_comb__TOP__aquila_top__core__Execute__MulDiv__2((&vlSymsp->TOP__aquila_top__core__Execute__MulDiv));
    }
    if ((0x60eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__20((&vlSymsp->TOP__aquila_top__core));
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((0x785ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_pipeline_control___nba_comb__TOP__aquila_top__core__Pipeline_Control__3((&vlSymsp->TOP__aquila_top__core__Pipeline_Control));
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__21((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0xf8fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__22((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x70eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__23((&vlSymsp->TOP__aquila_top__core));
    }
    if ((0x78fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaquila_top_core_top___nba_comb__TOP__aquila_top__core__24((&vlSymsp->TOP__aquila_top__core));
    }
}
