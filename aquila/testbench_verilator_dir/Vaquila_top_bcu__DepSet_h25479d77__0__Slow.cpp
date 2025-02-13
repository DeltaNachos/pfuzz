// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_bcu.h"

VL_ATTR_COLD void Vaquila_top_bcu___stl_sequent__TOP__aquila_top__core__Execute__BCU__0(Vaquila_top_bcu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_bcu___stl_sequent__TOP__aquila_top__core__Execute__BCU__0\n"); );
    // Body
    vlSelf->__PVT__operation_beq = (0U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_bne = (1U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_blt = (4U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_bge = (5U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_bltu = (6U == (IData)(vlSelf->__PVT__operation_sel_i));
    vlSelf->__PVT__operation_bgeu = (7U == (IData)(vlSelf->__PVT__operation_sel_i));
}

VL_ATTR_COLD void Vaquila_top_bcu___stl_sequent__TOP__aquila_top__core__Execute__BCU__1(Vaquila_top_bcu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_bcu___stl_sequent__TOP__aquila_top__core__Execute__BCU__1\n"); );
    // Body
    vlSelf->__PVT__signed_b = vlSelf->__PVT__b_i;
    vlSelf->__PVT__result_beq = (1U & VL_BITSEL_IIII(32, 
                                                     ((vlSelf->__PVT__a_i 
                                                       == vlSelf->__PVT__b_i)
                                                       ? 1U
                                                       : 0U), 0U));
    vlSelf->__PVT__result_bne = (1U & VL_BITSEL_IIII(32, 
                                                     ((vlSelf->__PVT__a_i 
                                                       != vlSelf->__PVT__b_i)
                                                       ? 1U
                                                       : 0U), 0U));
    vlSelf->__PVT__result_bltu = (1U & VL_BITSEL_IIII(32, 
                                                      ((vlSelf->__PVT__a_i 
                                                        < vlSelf->__PVT__b_i)
                                                        ? 1U
                                                        : 0U), 0U));
    vlSelf->__PVT__result_bgeu = (1U & VL_BITSEL_IIII(32, 
                                                      ((vlSelf->__PVT__a_i 
                                                        >= vlSelf->__PVT__b_i)
                                                        ? 1U
                                                        : 0U), 0U));
    vlSelf->__PVT__signed_a = vlSelf->__PVT__a_i;
    vlSelf->__PVT__result_blt = (1U & VL_BITSEL_IIII(32, 
                                                     (VL_LTS_III(32, vlSelf->__PVT__signed_a, vlSelf->__PVT__signed_b)
                                                       ? 1U
                                                       : 0U), 0U));
    vlSelf->__PVT__result_bge = (1U & VL_BITSEL_IIII(32, 
                                                     (VL_GTES_III(32, vlSelf->__PVT__signed_a, vlSelf->__PVT__signed_b)
                                                       ? 1U
                                                       : 0U), 0U));
    vlSelf->__PVT__compare_result_o = (((((((IData)(vlSelf->__PVT__operation_beq) 
                                            & (IData)(vlSelf->__PVT__result_beq)) 
                                           | ((IData)(vlSelf->__PVT__operation_bne) 
                                              & (IData)(vlSelf->__PVT__result_bne))) 
                                          | ((IData)(vlSelf->__PVT__operation_blt) 
                                             & (IData)(vlSelf->__PVT__result_blt))) 
                                         | ((IData)(vlSelf->__PVT__operation_bge) 
                                            & (IData)(vlSelf->__PVT__result_bge))) 
                                        | ((IData)(vlSelf->__PVT__operation_bltu) 
                                           & (IData)(vlSelf->__PVT__result_bltu))) 
                                       | ((IData)(vlSelf->__PVT__operation_bgeu) 
                                          & (IData)(vlSelf->__PVT__result_bgeu)));
}

VL_ATTR_COLD void Vaquila_top_bcu___ctor_var_reset(Vaquila_top_bcu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_top_bcu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__a_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operation_sel_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__compare_result_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signed_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__signed_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_beq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_bne = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_blt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_bge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_bltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_bgeu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_beq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_bne = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_blt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_bge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_bltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__operation_bgeu = VL_RAND_RESET_I(1);
}
