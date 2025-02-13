// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top__Syms.h"
#include "Vaquila_top_aquila_top.h"

VL_INLINE_OPT void Vaquila_top_aquila_top___ico_sequent__TOP__aquila_top__0(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___ico_sequent__TOP__aquila_top__0\n"); );
    // Body
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__aquila_top__core.__PVT__clk_i = vlSelf->clk;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__0(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__0\n"); );
    // Body
    vlSelf->__PVT__code_req = vlSymsp->TOP__aquila_top__core.__PVT__code_req_o;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__1(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__1\n"); );
    // Body
    vlSelf->__PVT__data_amo_type = vlSymsp->TOP__aquila_top__core.__PVT__data_amo_type_o;
    vlSelf->__PVT__cache_flush = vlSymsp->TOP__aquila_top__core.__PVT__cache_flush_o;
    vlSelf->__PVT__data_addr = vlSymsp->TOP__aquila_top__core.__PVT__data_addr_o;
    vlSelf->__PVT__data_is_amo = vlSymsp->TOP__aquila_top__core.__PVT__data_is_amo_o;
    vlSelf->__PVT__data_rw = vlSymsp->TOP__aquila_top__core.__PVT__data_rw_o;
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_amo_type_i 
        = vlSelf->__PVT__data_amo_type;
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__cache_flush_i 
        = vlSelf->__PVT__cache_flush;
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_is_amo_i 
        = vlSelf->__PVT__data_is_amo;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__2(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__2\n"); );
    // Body
    vlSelf->__PVT__data_core_out = vlSymsp->TOP__aquila_top__core.__PVT__data_o;
    vlSelf->__PVT__data_byte_enable = vlSymsp->TOP__aquila_top__core.__PVT__data_byte_enable_o;
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_byte_enable_i 
        = vlSelf->__PVT__data_byte_enable;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__3(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__3\n"); );
    // Body
    vlSelf->__PVT__code_addr = vlSymsp->TOP__aquila_top__core.__PVT__code_addr_o;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__4(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__4\n"); );
    // Body
    vlSelf->__PVT__data_core_in = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_o;
    vlSelf->__PVT__code = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__code_o;
    vlSelf->__PVT__stall = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__stall_o;
    vlSelf->__PVT__init_pc_addr = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__init_pc_addr_o;
    vlSelf->__PVT__data_ready = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_ready_o;
    vlSelf->__PVT__code_ready = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__code_ready_o;
    vlSelf->__PVT__ext_irq = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__ext_irq_o;
    vlSelf->__PVT__tmr_irq = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__tmr_irq_o;
    vlSelf->__PVT__sft_irq = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__sft_irq_o;
    vlSelf->__PVT__data_addr_ext = vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_addr_ext_o;
    vlSymsp->TOP__aquila_top__core.__PVT__data_i = vlSelf->__PVT__data_core_in;
    vlSymsp->TOP__aquila_top__core.__PVT__code_i = vlSelf->__PVT__code;
    vlSymsp->TOP__aquila_top__core.__PVT__stall_i = vlSelf->__PVT__stall;
    vlSymsp->TOP__aquila_top__core.__PVT__init_pc_addr_i 
        = vlSelf->__PVT__init_pc_addr;
    vlSymsp->TOP__aquila_top__core.__PVT__data_ready_i 
        = vlSelf->__PVT__data_ready;
    vlSymsp->TOP__aquila_top__core.__PVT__code_ready_i 
        = vlSelf->__PVT__code_ready;
    vlSymsp->TOP__aquila_top__core.__PVT__ext_irq_i 
        = vlSelf->__PVT__ext_irq;
    vlSymsp->TOP__aquila_top__core.__PVT__tmr_irq_i 
        = vlSelf->__PVT__tmr_irq;
    vlSymsp->TOP__aquila_top__core.__PVT__sft_irq_i 
        = vlSelf->__PVT__sft_irq;
    vlSymsp->TOP__aquila_top__core.__PVT__data_addr_ext_i 
        = vlSelf->__PVT__data_addr_ext;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__5(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__5\n"); );
    // Body
    vlSelf->__Vdly__reset = vlSelf->__PVT__reset;
    vlSelf->__Vdly__reset = vlSelf->rst;
    vlSelf->__PVT__reset = vlSelf->__Vdly__reset;
    vlSymsp->TOP__aquila_top__core.__PVT__rst_i = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_comb__TOP__aquila_top__0(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_comb__TOP__aquila_top__0\n"); );
    // Body
    vlSelf->__PVT__data_req = vlSymsp->TOP__aquila_top__core.__PVT__data_req_o;
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_req_i 
        = vlSelf->__PVT__data_req;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__6(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__6\n"); );
    // Body
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_rw_i 
        = vlSelf->__PVT__data_rw;
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_i 
        = vlSelf->__PVT__data_core_out;
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__data_addr_i 
        = vlSelf->__PVT__data_addr;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__7(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__7\n"); );
    // Body
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__code_addr_i 
        = vlSelf->__PVT__code_addr;
}

VL_INLINE_OPT void Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__8(Vaquila_top_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_top_aquila_top___nba_sequent__TOP__aquila_top__8\n"); );
    // Body
    vlSymsp->TOP__aquila_top__memory_modelling_inst.__PVT__code_req_i 
        = vlSelf->__PVT__code_req;
}
