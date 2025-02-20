// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_ALU.h"

VL_INLINE_OPT void Vfalco_top_ALU___ico_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___ico_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__result_add = (vlSelfRef.__PVT__a 
                                   + vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sll = (vlSelfRef.__PVT__a 
                                   << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)));
    vlSelfRef.__PVT__result_slt = (VL_LTS_III(32, vlSelfRef.__PVT__a, vlSelfRef.__PVT__b)
                                    ? 1U : 0U);
    vlSelfRef.__PVT__result_sltu = ((vlSelfRef.__PVT__a 
                                     < vlSelfRef.__PVT__b)
                                     ? 1U : 0U);
    vlSelfRef.__PVT__result_xor = (vlSelfRef.__PVT__a 
                                   ^ vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_or = (vlSelfRef.__PVT__a 
                                  | vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_and = (vlSelfRef.__PVT__a 
                                   & vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sr = ((IData)(vlSelfRef.__PVT__shift_sel)
                                   ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__a, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)))
                                   : (vlSelfRef.__PVT__a 
                                      >> (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U))));
}

VL_INLINE_OPT void Vfalco_top_ALU___ico_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___ico_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__operation = vlSelfRef.__PVT__operation_sel;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__operation)) 
               | (1U == (IData)(vlSelfRef.__PVT__operation))) 
              | (2U == (IData)(vlSelfRef.__PVT__operation))) 
             | (3U == (IData)(vlSelfRef.__PVT__operation))) 
            | (4U == (IData)(vlSelfRef.__PVT__operation))) 
           | (5U == (IData)(vlSelfRef.__PVT__operation))) 
          | (6U == (IData)(vlSelfRef.__PVT__operation))) 
         | (7U == (IData)(vlSelfRef.__PVT__operation)))) {
        vlSelfRef.__PVT__alu_result = ((0U == (IData)(vlSelfRef.__PVT__operation))
                                        ? vlSelfRef.__PVT__result_add
                                        : ((1U == (IData)(vlSelfRef.__PVT__operation))
                                            ? vlSelfRef.__PVT__result_sll
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__operation))
                                                ? vlSelfRef.__PVT__result_slt
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__operation))
                                                    ? vlSelfRef.__PVT__result_sltu
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__operation))
                                                     ? vlSelfRef.__PVT__result_xor
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__operation))
                                                      ? vlSelfRef.__PVT__result_sr
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__operation))
                                                       ? vlSelfRef.__PVT__result_or
                                                       : vlSelfRef.__PVT__result_and)))))));
    }
}

VL_INLINE_OPT void Vfalco_top_ALU___act_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___act_sequent__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__result_add = (vlSelfRef.__PVT__a 
                                   + vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sll = (vlSelfRef.__PVT__a 
                                   << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)));
    vlSelfRef.__PVT__result_slt = (VL_LTS_III(32, vlSelfRef.__PVT__a, vlSelfRef.__PVT__b)
                                    ? 1U : 0U);
    vlSelfRef.__PVT__result_sltu = ((vlSelfRef.__PVT__a 
                                     < vlSelfRef.__PVT__b)
                                     ? 1U : 0U);
    vlSelfRef.__PVT__result_xor = (vlSelfRef.__PVT__a 
                                   ^ vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_or = (vlSelfRef.__PVT__a 
                                  | vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_and = (vlSelfRef.__PVT__a 
                                   & vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sr = ((IData)(vlSelfRef.__PVT__shift_sel)
                                   ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__a, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)))
                                   : (vlSelfRef.__PVT__a 
                                      >> (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U))));
}

VL_INLINE_OPT void Vfalco_top_ALU___act_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___act_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__operation = vlSelfRef.__PVT__operation_sel;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__operation)) 
               | (1U == (IData)(vlSelfRef.__PVT__operation))) 
              | (2U == (IData)(vlSelfRef.__PVT__operation))) 
             | (3U == (IData)(vlSelfRef.__PVT__operation))) 
            | (4U == (IData)(vlSelfRef.__PVT__operation))) 
           | (5U == (IData)(vlSelfRef.__PVT__operation))) 
          | (6U == (IData)(vlSelfRef.__PVT__operation))) 
         | (7U == (IData)(vlSelfRef.__PVT__operation)))) {
        vlSelfRef.__PVT__alu_result = ((0U == (IData)(vlSelfRef.__PVT__operation))
                                        ? vlSelfRef.__PVT__result_add
                                        : ((1U == (IData)(vlSelfRef.__PVT__operation))
                                            ? vlSelfRef.__PVT__result_sll
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__operation))
                                                ? vlSelfRef.__PVT__result_slt
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__operation))
                                                    ? vlSelfRef.__PVT__result_sltu
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__operation))
                                                     ? vlSelfRef.__PVT__result_xor
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__operation))
                                                      ? vlSelfRef.__PVT__result_sr
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__operation))
                                                       ? vlSelfRef.__PVT__result_or
                                                       : vlSelfRef.__PVT__result_and)))))));
    }
}

VL_INLINE_OPT void Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__result_add = (vlSelfRef.__PVT__a 
                                   + vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sll = (vlSelfRef.__PVT__a 
                                   << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)));
    vlSelfRef.__PVT__result_slt = (VL_LTS_III(32, vlSelfRef.__PVT__a, vlSelfRef.__PVT__b)
                                    ? 1U : 0U);
    vlSelfRef.__PVT__result_sltu = ((vlSelfRef.__PVT__a 
                                     < vlSelfRef.__PVT__b)
                                     ? 1U : 0U);
    vlSelfRef.__PVT__result_xor = (vlSelfRef.__PVT__a 
                                   ^ vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_or = (vlSelfRef.__PVT__a 
                                  | vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_and = (vlSelfRef.__PVT__a 
                                   & vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sr = ((IData)(vlSelfRef.__PVT__shift_sel)
                                   ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__a, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)))
                                   : (vlSelfRef.__PVT__a 
                                      >> (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U))));
}

VL_INLINE_OPT void Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__1(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__operation = vlSelfRef.__PVT__operation_sel;
}

VL_INLINE_OPT void Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__2(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_csr_bc_execute_group_inst__ALU0__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((((((0U == (IData)(vlSelfRef.__PVT__operation)) 
               | (1U == (IData)(vlSelfRef.__PVT__operation))) 
              | (2U == (IData)(vlSelfRef.__PVT__operation))) 
             | (3U == (IData)(vlSelfRef.__PVT__operation))) 
            | (4U == (IData)(vlSelfRef.__PVT__operation))) 
           | (5U == (IData)(vlSelfRef.__PVT__operation))) 
          | (6U == (IData)(vlSelfRef.__PVT__operation))) 
         | (7U == (IData)(vlSelfRef.__PVT__operation)))) {
        vlSelfRef.__PVT__alu_result = ((0U == (IData)(vlSelfRef.__PVT__operation))
                                        ? vlSelfRef.__PVT__result_add
                                        : ((1U == (IData)(vlSelfRef.__PVT__operation))
                                            ? vlSelfRef.__PVT__result_sll
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__operation))
                                                ? vlSelfRef.__PVT__result_slt
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__operation))
                                                    ? vlSelfRef.__PVT__result_sltu
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__operation))
                                                     ? vlSelfRef.__PVT__result_xor
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__operation))
                                                      ? vlSelfRef.__PVT__result_sr
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__operation))
                                                       ? vlSelfRef.__PVT__result_or
                                                       : vlSelfRef.__PVT__result_and)))))));
    }
}

VL_INLINE_OPT void Vfalco_top_ALU___ico_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___ico_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__result_add = (vlSelfRef.__PVT__a 
                                   + vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sll = (vlSelfRef.__PVT__a 
                                   << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)));
    vlSelfRef.__PVT__result_slt = (VL_LTS_III(32, vlSelfRef.__PVT__a, vlSelfRef.__PVT__b)
                                    ? 1U : 0U);
    vlSelfRef.__PVT__result_sltu = ((vlSelfRef.__PVT__a 
                                     < vlSelfRef.__PVT__b)
                                     ? 1U : 0U);
    vlSelfRef.__PVT__result_xor = (vlSelfRef.__PVT__a 
                                   ^ vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_or = (vlSelfRef.__PVT__a 
                                  | vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_and = (vlSelfRef.__PVT__a 
                                   & vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sr = ((IData)(vlSelfRef.__PVT__shift_sel)
                                   ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__a, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)))
                                   : (vlSelfRef.__PVT__a 
                                      >> (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U))));
    if (((((((((0U == (IData)(vlSelfRef.__PVT__operation)) 
               | (1U == (IData)(vlSelfRef.__PVT__operation))) 
              | (2U == (IData)(vlSelfRef.__PVT__operation))) 
             | (3U == (IData)(vlSelfRef.__PVT__operation))) 
            | (4U == (IData)(vlSelfRef.__PVT__operation))) 
           | (5U == (IData)(vlSelfRef.__PVT__operation))) 
          | (6U == (IData)(vlSelfRef.__PVT__operation))) 
         | (7U == (IData)(vlSelfRef.__PVT__operation)))) {
        vlSelfRef.__PVT__alu_result = ((0U == (IData)(vlSelfRef.__PVT__operation))
                                        ? vlSelfRef.__PVT__result_add
                                        : ((1U == (IData)(vlSelfRef.__PVT__operation))
                                            ? vlSelfRef.__PVT__result_sll
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__operation))
                                                ? vlSelfRef.__PVT__result_slt
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__operation))
                                                    ? vlSelfRef.__PVT__result_sltu
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__operation))
                                                     ? vlSelfRef.__PVT__result_xor
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__operation))
                                                      ? vlSelfRef.__PVT__result_sr
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__operation))
                                                       ? vlSelfRef.__PVT__result_or
                                                       : vlSelfRef.__PVT__result_and)))))));
    }
}

VL_INLINE_OPT void Vfalco_top_ALU___act_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___act_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__result_add = (vlSelfRef.__PVT__a 
                                   + vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sll = (vlSelfRef.__PVT__a 
                                   << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)));
    vlSelfRef.__PVT__result_slt = (VL_LTS_III(32, vlSelfRef.__PVT__a, vlSelfRef.__PVT__b)
                                    ? 1U : 0U);
    vlSelfRef.__PVT__result_sltu = ((vlSelfRef.__PVT__a 
                                     < vlSelfRef.__PVT__b)
                                     ? 1U : 0U);
    vlSelfRef.__PVT__result_xor = (vlSelfRef.__PVT__a 
                                   ^ vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_or = (vlSelfRef.__PVT__a 
                                  | vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_and = (vlSelfRef.__PVT__a 
                                   & vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sr = ((IData)(vlSelfRef.__PVT__shift_sel)
                                   ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__a, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)))
                                   : (vlSelfRef.__PVT__a 
                                      >> (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U))));
    if (((((((((0U == (IData)(vlSelfRef.__PVT__operation)) 
               | (1U == (IData)(vlSelfRef.__PVT__operation))) 
              | (2U == (IData)(vlSelfRef.__PVT__operation))) 
             | (3U == (IData)(vlSelfRef.__PVT__operation))) 
            | (4U == (IData)(vlSelfRef.__PVT__operation))) 
           | (5U == (IData)(vlSelfRef.__PVT__operation))) 
          | (6U == (IData)(vlSelfRef.__PVT__operation))) 
         | (7U == (IData)(vlSelfRef.__PVT__operation)))) {
        vlSelfRef.__PVT__alu_result = ((0U == (IData)(vlSelfRef.__PVT__operation))
                                        ? vlSelfRef.__PVT__result_add
                                        : ((1U == (IData)(vlSelfRef.__PVT__operation))
                                            ? vlSelfRef.__PVT__result_sll
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__operation))
                                                ? vlSelfRef.__PVT__result_slt
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__operation))
                                                    ? vlSelfRef.__PVT__result_sltu
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__operation))
                                                     ? vlSelfRef.__PVT__result_xor
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__operation))
                                                      ? vlSelfRef.__PVT__result_sr
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__operation))
                                                       ? vlSelfRef.__PVT__result_or
                                                       : vlSelfRef.__PVT__result_and)))))));
    }
}

VL_INLINE_OPT void Vfalco_top_ALU___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___nba_sequent__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__operation = vlSelfRef.__PVT__operation_sel;
}

VL_INLINE_OPT void Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0(Vfalco_top_ALU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfalco_top_ALU___nba_comb__TOP__falco_top__core__alu_muldiv_execute_group_inst__ALU1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__result_add = (vlSelfRef.__PVT__a 
                                   + vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sll = (vlSelfRef.__PVT__a 
                                   << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)));
    vlSelfRef.__PVT__result_slt = (VL_LTS_III(32, vlSelfRef.__PVT__a, vlSelfRef.__PVT__b)
                                    ? 1U : 0U);
    vlSelfRef.__PVT__result_sltu = ((vlSelfRef.__PVT__a 
                                     < vlSelfRef.__PVT__b)
                                     ? 1U : 0U);
    vlSelfRef.__PVT__result_xor = (vlSelfRef.__PVT__a 
                                   ^ vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_or = (vlSelfRef.__PVT__a 
                                  | vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_and = (vlSelfRef.__PVT__a 
                                   & vlSelfRef.__PVT__b);
    vlSelfRef.__PVT__result_sr = ((IData)(vlSelfRef.__PVT__shift_sel)
                                   ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__a, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U)))
                                   : (vlSelfRef.__PVT__a 
                                      >> (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__b, 0U, 5U))));
    if (((((((((0U == (IData)(vlSelfRef.__PVT__operation)) 
               | (1U == (IData)(vlSelfRef.__PVT__operation))) 
              | (2U == (IData)(vlSelfRef.__PVT__operation))) 
             | (3U == (IData)(vlSelfRef.__PVT__operation))) 
            | (4U == (IData)(vlSelfRef.__PVT__operation))) 
           | (5U == (IData)(vlSelfRef.__PVT__operation))) 
          | (6U == (IData)(vlSelfRef.__PVT__operation))) 
         | (7U == (IData)(vlSelfRef.__PVT__operation)))) {
        vlSelfRef.__PVT__alu_result = ((0U == (IData)(vlSelfRef.__PVT__operation))
                                        ? vlSelfRef.__PVT__result_add
                                        : ((1U == (IData)(vlSelfRef.__PVT__operation))
                                            ? vlSelfRef.__PVT__result_sll
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__operation))
                                                ? vlSelfRef.__PVT__result_slt
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__operation))
                                                    ? vlSelfRef.__PVT__result_sltu
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__operation))
                                                     ? vlSelfRef.__PVT__result_xor
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__operation))
                                                      ? vlSelfRef.__PVT__result_sr
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__operation))
                                                       ? vlSelfRef.__PVT__result_or
                                                       : vlSelfRef.__PVT__result_and)))))));
    }
}
