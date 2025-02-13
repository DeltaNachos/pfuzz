// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top__Syms.h"
#include "Vsodor_top_sodor_top.h"

VL_INLINE_OPT void Vsodor_top_sodor_top___ico_sequent__TOP__sodor_top__0(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___ico_sequent__TOP__sodor_top__0\n"); );
    // Body
    vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__sodor_top__sodor_core.__PVT__clock 
        = vlSelf->clk;
}

VL_INLINE_OPT void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__0(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__0\n"); );
    // Body
    vlSelf->__PVT__imem_req_addr = vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_imem_req_bits_addr;
}

VL_INLINE_OPT void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__1(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__1\n"); );
    // Body
    vlSelf->__Vdly__reset = vlSelf->__PVT__reset;
    vlSelf->__Vdly__reset = vlSelf->rst;
    if (VL_UNLIKELY((0x8082U == vlSelf->__PVT__imem_resp_data))) {
        VL_FINISH_MT("sodor_top.v", 27, "");
    }
    vlSelf->__PVT__reset = vlSelf->__Vdly__reset;
    vlSymsp->TOP__sodor_top__sodor_core.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__2(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__2\n"); );
    // Body
    vlSelf->__PVT__dmem_resp_data = vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_resp_data;
    vlSelf->__PVT__imem_resp_data = vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__imem_data;
    vlSelf->__PVT__dmem_resp_valid = vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_resp_valid;
    vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_resp_bits_data 
        = vlSelf->__PVT__dmem_resp_data;
    vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_imem_resp_bits_data 
        = vlSelf->__PVT__imem_resp_data;
    vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_resp_valid 
        = vlSelf->__PVT__dmem_resp_valid;
}

VL_INLINE_OPT void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__3(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__3\n"); );
    // Body
    vlSelf->__PVT__dmem_fcn_write_en = vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_fcn;
    vlSelf->__PVT__dmem_bit_typ = vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_typ;
    vlSelf->__PVT__dmem_req_valid = vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_valid;
    vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_write_en 
        = vlSelf->__PVT__dmem_fcn_write_en;
    vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_bits_typ 
        = vlSelf->__PVT__dmem_bit_typ;
    vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_valid 
        = vlSelf->__PVT__dmem_req_valid;
}

VL_INLINE_OPT void Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__4(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___nba_sequent__TOP__sodor_top__4\n"); );
    // Body
    vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__imem_addr 
        = vlSelf->__PVT__imem_req_addr;
}

VL_INLINE_OPT void Vsodor_top_sodor_top___nba_comb__TOP__sodor_top__0(Vsodor_top_sodor_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsodor_top_sodor_top___nba_comb__TOP__sodor_top__0\n"); );
    // Body
    vlSelf->__PVT__dmem_req_data = vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_data;
    vlSelf->__PVT__dmem_req_addr = vlSymsp->TOP__sodor_top__sodor_core.__PVT__io_dmem_req_bits_addr;
    vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_data 
        = vlSelf->__PVT__dmem_req_data;
    vlSymsp->TOP__sodor_top__memory_modelling_inst.__PVT__dmem_req_addr 
        = vlSelf->__PVT__dmem_req_addr;
}
