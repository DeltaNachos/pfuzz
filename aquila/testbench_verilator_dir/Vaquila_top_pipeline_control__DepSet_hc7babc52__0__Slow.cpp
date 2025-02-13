// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_pipeline_control.h"

VL_ATTR_COLD void Vaquila_top_pipeline_control___stl_sequent__TOP__aquila_top__core__Pipeline_Control__0(Vaquila_top_pipeline_control* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_pipeline_control___stl_sequent__TOP__aquila_top__core__Pipeline_Control__0\n"); );
    // Body
    vlSelf->__PVT__flush2wbk_o = vlSelf->__PVT__sys_jump_i;
    vlSelf->__PVT__flush2exe_o = ((IData)(vlSelf->__PVT__is_fencei_i) 
                                  | (IData)(vlSelf->__PVT__sys_jump_i));
    vlSelf->__PVT__data_hazard_o = vlSelf->__PVT__is_load_hazard;
}

VL_ATTR_COLD void Vaquila_top_pipeline_control___stl_sequent__TOP__aquila_top__core__Pipeline_Control__1(Vaquila_top_pipeline_control* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_pipeline_control___stl_sequent__TOP__aquila_top__core__Pipeline_Control__1\n"); );
    // Body
    vlSelf->__PVT__branch_flush = (((IData)(vlSelf->__PVT__branch_taken_i) 
                                    & (~ (IData)(vlSelf->__PVT__branch_hit_i))) 
                                   | (IData)(vlSelf->__PVT__branch_misprediction_i));
    vlSelf->__PVT__flush2fet_o = (((IData)(vlSelf->__PVT__branch_flush) 
                                   | (IData)(vlSelf->__PVT__sys_jump_i)) 
                                  | (IData)(vlSelf->__PVT__is_fencei_i));
    vlSelf->__PVT__flush2dec_o = (((((IData)(vlSelf->__PVT__branch_flush) 
                                     | (IData)(vlSelf->__PVT__sys_jump_i)) 
                                    | (IData)(vlSelf->__PVT__is_fencei_i)) 
                                   | (IData)(vlSelf->__PVT__is_load_hazard)) 
                                  | (IData)(vlSelf->__PVT__unsupported_instr_i));
}

VL_ATTR_COLD void Vaquila_top_pipeline_control___ctor_var_reset(Vaquila_top_pipeline_control* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_pipeline_control___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__unsupported_instr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_load_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_hit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_misprediction_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fencei_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush2fet_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush2dec_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush2exe_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush2wbk_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_hazard_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_flush = VL_RAND_RESET_I(1);
}
