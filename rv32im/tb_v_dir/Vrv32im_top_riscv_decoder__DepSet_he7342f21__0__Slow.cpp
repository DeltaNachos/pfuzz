// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_decoder.h"

VL_ATTR_COLD void Vrv32im_top_riscv_decoder___stl_sequent__TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec__0(Vrv32im_top_riscv_decoder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_decoder___stl_sequent__TOP__rv32im_top__core__u_decode__genblk1__DOT__u_dec__0\n"); );
    // Body
    vlSelf->__PVT__exec_o = (((((((((((((((((((((0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->__PVT__opcode_i)) 
                                                | (0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->__PVT__opcode_i))) 
                                               | (0x2013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                              | (0x3013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                             | (0x6013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                            | (0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                           | (0x1013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                          | (0x5013U 
                                             == (0xfc00707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                         | (0x40005013U 
                                            == (0xfc00707fU 
                                                & vlSelf->__PVT__opcode_i))) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->__PVT__opcode_i))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->__PVT__opcode_i))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                     | (0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                                    | (0x2033U == (0xfe00707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                   | (0x3033U == (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                  | (0x4033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_i))) 
                                | (0x7033U == (0xfe00707fU 
                                               & vlSelf->__PVT__opcode_i))) 
                               | (0x1033U == (0xfe00707fU 
                                              & vlSelf->__PVT__opcode_i))) 
                              | (0x5033U == (0xfe00707fU 
                                             & vlSelf->__PVT__opcode_i))) 
                             | (0x40005033U == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_i)));
    vlSelf->__PVT__lsu_o = (((((((((3U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i)) 
                                   | (0x1003U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                  | (0x2003U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                 | (0x4003U == (0x707fU 
                                                & vlSelf->__PVT__opcode_i))) 
                                | (0x5003U == (0x707fU 
                                               & vlSelf->__PVT__opcode_i))) 
                               | (0x6003U == (0x707fU 
                                              & vlSelf->__PVT__opcode_i))) 
                              | (0x23U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                             | (0x1023U == (0x707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                            | (0x2023U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i)));
    vlSelf->__PVT__branch_o = ((((((((0x6fU == (0x7fU 
                                                & vlSelf->__PVT__opcode_i)) 
                                     | (0x67U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                    | (0x63U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                   | (0x1063U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                 | (0x5063U == (0x707fU 
                                                & vlSelf->__PVT__opcode_i))) 
                                | (0x6063U == (0x707fU 
                                               & vlSelf->__PVT__opcode_i))) 
                               | (0x7063U == (0x707fU 
                                              & vlSelf->__PVT__opcode_i)));
    vlSelf->__PVT__rd_valid_o = (((((((((((((((((((
                                                   ((((((((((((((((((((((((0x67U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->__PVT__opcode_i)) 
                                                                          | (0x6fU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->__PVT__opcode_i))) 
                                                                         | (0x37U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->__PVT__opcode_i))) 
                                                                        | (0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->__PVT__opcode_i))) 
                                                                       | (0x13U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->__PVT__opcode_i))) 
                                                                      | (0x1013U 
                                                                         == 
                                                                         (0xfc00707fU 
                                                                          & vlSelf->__PVT__opcode_i))) 
                                                                     | (0x2013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->__PVT__opcode_i))) 
                                                                    | (0x3013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->__PVT__opcode_i))) 
                                                                   | (0x4013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->__PVT__opcode_i))) 
                                                                  | (0x5013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelf->__PVT__opcode_i))) 
                                                                 | (0x40005013U 
                                                                    == 
                                                                    (0xfc00707fU 
                                                                     & vlSelf->__PVT__opcode_i))) 
                                                                | (0x6013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->__PVT__opcode_i))) 
                                                               | (0x7013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->__PVT__opcode_i))) 
                                                              | (0x33U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->__PVT__opcode_i))) 
                                                             | (0x40000033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->__PVT__opcode_i))) 
                                                            | (0x1033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->__PVT__opcode_i))) 
                                                           | (0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->__PVT__opcode_i))) 
                                                          | (0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->__PVT__opcode_i))) 
                                                         | (0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->__PVT__opcode_i))) 
                                                        | (0x5033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->__PVT__opcode_i))) 
                                                       | (0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->__PVT__opcode_i))) 
                                                      | (0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->__PVT__opcode_i))) 
                                                     | (0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->__PVT__opcode_i))) 
                                                    | (3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->__PVT__opcode_i))) 
                                                   | (0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->__PVT__opcode_i))) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->__PVT__opcode_i))) 
                                                 | (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->__PVT__opcode_i))) 
                                                | (0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->__PVT__opcode_i))) 
                                               | (0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                              | (0x2000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                             | (0x2001033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                            | (0x2002033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                           | (0x2003033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                          | (0x2004033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                         | (0x2005033U 
                                            == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_i))) 
                                        | (0x2006033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__PVT__opcode_i))) 
                                       | (0x2007033U 
                                          == (0xfe00707fU 
                                              & vlSelf->__PVT__opcode_i))) 
                                      | (0x1073U == 
                                         (0x707fU & vlSelf->__PVT__opcode_i))) 
                                     | (0x2073U == 
                                        (0x707fU & vlSelf->__PVT__opcode_i))) 
                                    | (0x3073U == (0x707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                   | (0x5073U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                  | (0x6073U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                 | (0x7073U == (0x707fU 
                                                & vlSelf->__PVT__opcode_i)));
    vlSelf->__PVT__mul_o = ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                            & ((((0x2000033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i)) 
                                 | (0x2001033U == (0xfe00707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                | (0x2002033U == (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                               | (0x2003033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i))));
    vlSelf->__PVT__div_o = ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                            & ((((0x2004033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i)) 
                                 | (0x2005033U == (0xfe00707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                | (0x2006033U == (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                               | (0x2007033U == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i))));
    vlSelf->__PVT__invalid_w = ((IData)(vlSelf->__PVT__valid_i) 
                                & (~ ((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__opcode_i)) 
                                                                                | (0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x2013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x1013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x5013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                                | (0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                               | (0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                              | (0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                             | (0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                            | (0x40005033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->__PVT__opcode_i))) 
                                                                           | (0x6fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->__PVT__opcode_i))) 
                                                                          | (0x67U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->__PVT__opcode_i))) 
                                                                         | (0x63U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->__PVT__opcode_i))) 
                                                                        | (0x1063U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->__PVT__opcode_i))) 
                                                                       | (0x4063U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->__PVT__opcode_i))) 
                                                                      | (0x5063U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->__PVT__opcode_i))) 
                                                                     | (0x6063U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->__PVT__opcode_i))) 
                                                                    | (0x7063U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->__PVT__opcode_i))) 
                                                                   | (3U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->__PVT__opcode_i))) 
                                                                  | (0x1003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->__PVT__opcode_i))) 
                                                                 | (0x2003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->__PVT__opcode_i))) 
                                                                | (0x4003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->__PVT__opcode_i))) 
                                                               | (0x5003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->__PVT__opcode_i))) 
                                                              | (0x6003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->__PVT__opcode_i))) 
                                                             | (0x23U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->__PVT__opcode_i))) 
                                                            | (0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->__PVT__opcode_i))) 
                                                           | (0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->__PVT__opcode_i))) 
                                                          | (0x73U 
                                                             == vlSelf->__PVT__opcode_i)) 
                                                         | (0x100073U 
                                                            == vlSelf->__PVT__opcode_i)) 
                                                        | (0x200073U 
                                                           == 
                                                           (0xcfffffffU 
                                                            & vlSelf->__PVT__opcode_i))) 
                                                       | (0x1073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->__PVT__opcode_i))) 
                                                      | (0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->__PVT__opcode_i))) 
                                                     | (0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__opcode_i))) 
                                                    | (0x5073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->__PVT__opcode_i))) 
                                                   | (0x6073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->__PVT__opcode_i))) 
                                                  | (0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->__PVT__opcode_i))) 
                                                 | (0x10500073U 
                                                    == 
                                                    (0xffff8fffU 
                                                     & vlSelf->__PVT__opcode_i))) 
                                                | (0xfU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->__PVT__opcode_i))) 
                                               | (0x100fU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                              | (0x12000073U 
                                                 == 
                                                 (0xfe007fffU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                             | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                                & (0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->__PVT__opcode_i)))) 
                                            | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                               & (0x2001033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->__PVT__opcode_i)))) 
                                           | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                              & (0x2002033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_i)))) 
                                          | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                             & (0x2003033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i)))) 
                                         | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                            & (0x2004033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->__PVT__opcode_i)))) 
                                        | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                           & (0x2005033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->__PVT__opcode_i)))) 
                                       | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                          & (0x2006033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->__PVT__opcode_i)))) 
                                      | ((IData)(vlSelf->__PVT__enable_muldiv_i) 
                                         & (0x2007033U 
                                            == (0xfe00707fU 
                                                & vlSelf->__PVT__opcode_i))))));
    vlSelf->__PVT__invalid_o = vlSelf->__PVT__invalid_w;
    vlSelf->__PVT__csr_o = (((((((((((((((0x73U == vlSelf->__PVT__opcode_i) 
                                         | (0x100073U 
                                            == vlSelf->__PVT__opcode_i)) 
                                        | (0x200073U 
                                           == (0xcfffffffU 
                                               & vlSelf->__PVT__opcode_i))) 
                                       | (0x1073U == 
                                          (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                                      | (0x2073U == 
                                         (0x707fU & vlSelf->__PVT__opcode_i))) 
                                     | (0x3073U == 
                                        (0x707fU & vlSelf->__PVT__opcode_i))) 
                                    | (0x5073U == (0x707fU 
                                                   & vlSelf->__PVT__opcode_i))) 
                                   | (0x6073U == (0x707fU 
                                                  & vlSelf->__PVT__opcode_i))) 
                                  | (0x7073U == (0x707fU 
                                                 & vlSelf->__PVT__opcode_i))) 
                                 | (0x10500073U == 
                                    (0xffff8fffU & vlSelf->__PVT__opcode_i))) 
                                | (0xfU == (0x707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                               | (0x100fU == (0x707fU 
                                              & vlSelf->__PVT__opcode_i))) 
                              | (0x12000073U == (0xfe007fffU 
                                                 & vlSelf->__PVT__opcode_i))) 
                             | (IData)(vlSelf->__PVT__invalid_w)) 
                            | (IData)(vlSelf->__PVT__fetch_fault_i));
}

VL_ATTR_COLD void Vrv32im_top_riscv_decoder___ctor_var_reset(Vrv32im_top_riscv_decoder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_decoder___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_fault_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable_muldiv_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__invalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invalid_w = VL_RAND_RESET_I(1);
}
