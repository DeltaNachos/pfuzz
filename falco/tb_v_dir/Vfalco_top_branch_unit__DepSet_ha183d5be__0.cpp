// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_branch_unit.h"

VL_INLINE_OPT void Vfalco_top_branch_unit___ico_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0(Vfalco_top_branch_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_branch_unit___ico_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0\n"); );
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

VL_INLINE_OPT void Vfalco_top_branch_unit___act_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0(Vfalco_top_branch_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_branch_unit___act_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0\n"); );
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

VL_INLINE_OPT void Vfalco_top_branch_unit___nba_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0(Vfalco_top_branch_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_branch_unit___nba_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__branch_op = vlSelfRef.__PVT__operation_sel;
}

VL_INLINE_OPT void Vfalco_top_branch_unit___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0(Vfalco_top_branch_unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_branch_unit___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__BCU__0\n"); );
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
