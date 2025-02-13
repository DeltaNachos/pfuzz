// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_alu.h"

VL_ATTR_COLD void Vaquila_top_alu___stl_sequent__TOP__aquila_top__core__Execute__ALU__0(Vaquila_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_alu___stl_sequent__TOP__aquila_top__core__Execute__ALU__0\n"); );
    // Body
    vlSelf->__PVT__operation_add = (0U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_sll = (1U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_slt = (2U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_sltu = (3U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_xor = (4U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_sr = (5U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_or = (6U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_and = (7U == (IData)(vlSelf->__PVT__operation_sel_i));
}

VL_ATTR_COLD void Vaquila_top_alu___stl_sequent__TOP__aquila_top__core__Execute__ALU__1(Vaquila_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_alu___stl_sequent__TOP__aquila_top__core__Execute__ALU__1\n"); );
    // Body
    vlSelf->__PVT__result_add = (vlSelf->__PVT__a_i 
                                 + vlSelf->__PVT__b_i);
    vlSelf->__PVT__result_sll = (vlSelf->__PVT__a_i 
                                 << (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__b_i, 0U, 5U)));
    vlSelf->__PVT__result_slt = (VL_LTS_III(32, vlSelf->__PVT__a_i, vlSelf->__PVT__b_i)
                                  ? 1U : 0U);
    vlSelf->__PVT__result_sltu = ((vlSelf->__PVT__a_i 
                                   < vlSelf->__PVT__b_i)
                                   ? 1U : 0U);
    vlSelf->__PVT__result_xor = (vlSelf->__PVT__a_i 
                                 ^ vlSelf->__PVT__b_i);
    vlSelf->__PVT__result_or = (vlSelf->__PVT__a_i 
                                | vlSelf->__PVT__b_i);
    vlSelf->__PVT__result_and = (vlSelf->__PVT__a_i 
                                 & vlSelf->__PVT__b_i);
    vlSelf->__PVT__result_sr = ((IData)(vlSelf->__PVT__shift_sel_i)
                                 ? VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__a_i, 
                                                  (0x1fU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__b_i, 0U, 5U)))
                                 : (vlSelf->__PVT__a_i 
                                    >> (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__b_i, 0U, 5U))));
    vlSelf->__PVT__alu_result_o = ((((((((VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_add), 0x20U) 
                                          & vlSelf->__PVT__result_add) 
                                         | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_sll), 0x20U) 
                                            & vlSelf->__PVT__result_sll)) 
                                        | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_slt), 0x20U) 
                                           & vlSelf->__PVT__result_slt)) 
                                       | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_sltu), 0x20U) 
                                          & vlSelf->__PVT__result_sltu)) 
                                      | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_xor), 0x20U) 
                                         & vlSelf->__PVT__result_xor)) 
                                     | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_sr), 0x20U) 
                                        & vlSelf->__PVT__result_sr)) 
                                    | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_or), 0x20U) 
                                       & vlSelf->__PVT__result_or)) 
                                   | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__operation_and), 0x20U) 
                                      & vlSelf->__PVT__result_and));
}

VL_ATTR_COLD void Vaquila_top_alu___ctor_var_reset(Vaquila_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_alu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__a_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operation_sel_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__shift_sel_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_result_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ones = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_add = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_sll = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_slt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_sltu = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_xor = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_sr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_or = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_and = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operation_add = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_sll = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_slt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_sltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_xor = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_sr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_or = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_and = VL_RAND_RESET_I(1);
}
