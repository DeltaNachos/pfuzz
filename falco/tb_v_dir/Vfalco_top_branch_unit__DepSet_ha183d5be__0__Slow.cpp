// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_branch_unit.h"

VL_ATTR_COLD void Vfalco_top_branch_unit___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0(Vfalco_top_branch_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_branch_unit___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__branch_op = vlSelfRef.__PVT__operation_sel;
}

VL_ATTR_COLD void Vfalco_top_branch_unit___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__1(Vfalco_top_branch_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_branch_unit___stl_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__signed_a = vlSelfRef.__PVT__a;
    vlSelfRef.__PVT__signed_b = vlSelfRef.__PVT__b;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__branch_op)) 
               | (1U == (IData)(vlSelfRef.__PVT__branch_op))) 
              | (2U == (IData)(vlSelfRef.__PVT__branch_op))) 
             | (3U == (IData)(vlSelfRef.__PVT__branch_op))) 
            | (4U == (IData)(vlSelfRef.__PVT__branch_op))) 
           | (5U == (IData)(vlSelfRef.__PVT__branch_op))) 
          | (6U == (IData)(vlSelfRef.__PVT__branch_op))) 
         | (7U == (IData)(vlSelfRef.__PVT__branch_op)))) {
        vlSelfRef.__PVT__compare_result = (1U & ((0U 
                                                  == (IData)(vlSelfRef.__PVT__branch_op))
                                                  ? 
                                                 VL_BITSEL_IIII(32, 
                                                                ((vlSelfRef.__PVT__a 
                                                                  == vlSelfRef.__PVT__b)
                                                                  ? 1U
                                                                  : 0U), 0U)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__branch_op))
                                                   ? 
                                                  VL_BITSEL_IIII(32, 
                                                                 ((vlSelfRef.__PVT__a 
                                                                   != vlSelfRef.__PVT__b)
                                                                   ? 1U
                                                                   : 0U), 0U)
                                                   : 
                                                  ((2U 
                                                    != (IData)(vlSelfRef.__PVT__branch_op)) 
                                                   && ((3U 
                                                        != (IData)(vlSelfRef.__PVT__branch_op)) 
                                                       && (1U 
                                                           & ((4U 
                                                               == (IData)(vlSelfRef.__PVT__branch_op))
                                                               ? 
                                                              VL_BITSEL_IIII(32, 
                                                                             (VL_LTS_III(32, vlSelfRef.__PVT__signed_a, vlSelfRef.__PVT__signed_b)
                                                                               ? 1U
                                                                               : 0U), 0U)
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSelfRef.__PVT__branch_op))
                                                                ? 
                                                               VL_BITSEL_IIII(32, 
                                                                              (VL_GTES_III(32, vlSelfRef.__PVT__signed_a, vlSelfRef.__PVT__signed_b)
                                                                                ? 1U
                                                                                : 0U), 0U)
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlSelfRef.__PVT__branch_op))
                                                                 ? 
                                                                VL_BITSEL_IIII(32, 
                                                                               ((vlSelfRef.__PVT__a 
                                                                                < vlSelfRef.__PVT__b)
                                                                                 ? 1U
                                                                                 : 0U), 0U)
                                                                 : 
                                                                VL_BITSEL_IIII(32, 
                                                                               ((vlSelfRef.__PVT__a 
                                                                                >= vlSelfRef.__PVT__b)
                                                                                 ? 1U
                                                                                 : 0U), 0U))))))))));
    }
}

VL_ATTR_COLD void Vfalco_top_branch_unit___ctor_var_reset(Vfalco_top_branch_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_branch_unit___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__operation_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__compare_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_op = VL_RAND_RESET_I(3);
    vlSelf->__PVT__signed_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__signed_b = VL_RAND_RESET_I(32);
}
