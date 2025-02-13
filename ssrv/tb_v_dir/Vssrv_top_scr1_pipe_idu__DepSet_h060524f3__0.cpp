// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top_scr1_pipe_idu.h"

VL_INLINE_OPT void Vssrv_top_scr1_pipe_idu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0(Vssrv_top_scr1_pipe_idu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_idu___act_sequent__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0\n"); );
    // Body
    vlSelf->__PVT__instr = vlSelf->__PVT__ifu2idu_instr;
    vlSelf->__PVT__idu2exu_req = vlSelf->__PVT__ifu2idu_vd;
    vlSelf->__PVT__rvi_opcode = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U));
    vlSelf->__PVT__funct7 = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x19U, 7U));
    vlSelf->__PVT__funct12 = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xcU));
    vlSelf->__PVT__shamt = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 5U));
    vlSelf->__PVT__instr_type = (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0U, 2U));
    vlSelf->__PVT__funct3 = (7U & ((3U == (IData)(vlSelf->__PVT__instr_type))
                                    ? VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 3U)
                                    : VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xdU, 3U)));
    VL_CONST_W_3X(75,vlSelf->__PVT__idu2exu_cmd,0x00000200,0x40000000,0x00000000);
    vlSelf->__PVT__idu2exu_use_rs1 = 0U;
    vlSelf->__PVT__idu2exu_use_rs2 = 0U;
    vlSelf->__PVT__idu2exu_use_rd = 0U;
    vlSelf->__PVT__idu2exu_use_imm = 0U;
    vlSelf->__PVT__rvi_illegal = 0U;
    vlSelf->__PVT__rvc_illegal = 0U;
    if (vlSelf->__PVT__ifu2idu_imem_err) {
        VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x11U);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__PVT__idu2exu_cmd, vlSelf->__PVT__ifu2idu_err_rvi_hi);
    } else if ((3U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNSEL_WI(75,15,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                        VL_CONCAT_III(15,5,10, (0x1fU 
                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 5U)), 
                                      VL_CONCAT_III(10,5,5, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 5U)), 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))));
        if (((((((((5U == (IData)(vlSelf->__PVT__rvi_opcode)) 
                   | (0xdU == (IData)(vlSelf->__PVT__rvi_opcode))) 
                  | (0x1bU == (IData)(vlSelf->__PVT__rvi_opcode))) 
                 | (0U == (IData)(vlSelf->__PVT__rvi_opcode))) 
                | (8U == (IData)(vlSelf->__PVT__rvi_opcode))) 
               | (0xcU == (IData)(vlSelf->__PVT__rvi_opcode))) 
              | (4U == (IData)(vlSelf->__PVT__rvi_opcode))) 
             | (3U == (IData)(vlSelf->__PVT__rvi_opcode)))) {
            if ((5U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 2U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,20,12, 
                                              (0xfffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 0x14U)), 0U));
            } else if ((0xdU == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 3U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,20,12, 
                                              (0xfffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 0x14U)), 0U));
            } else if ((0x1bU == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,12,20, 
                                              (0xfffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0xcU)), 
                                              VL_CONCAT_III(20,8,12, 
                                                            (0xffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 8U)), 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x14U)), 
                                                                          VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x15U, 0xaU)), 0U)))));
            } else if ((0U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 5U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              (0x7ffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xbU))));
                if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 1U);
                } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 2U);
                } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 3U);
                } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 4U);
                } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 5U);
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((8U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              VL_CONCAT_III(11,6,5, 
                                                            (0x3fU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x19U, 6U)), 
                                                            (0x1fU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))));
                if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 6U);
                } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 7U);
                } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 8U);
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((0xcU == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                VL_ASSIGNBIT_WO(0x49U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                    if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                               | (1U == (IData)(vlSelf->__PVT__funct3))) 
                              | (2U == (IData)(vlSelf->__PVT__funct3))) 
                             | (3U == (IData)(vlSelf->__PVT__funct3))) 
                            | (4U == (IData)(vlSelf->__PVT__funct3))) 
                           | (5U == (IData)(vlSelf->__PVT__funct3))) 
                          | (6U == (IData)(vlSelf->__PVT__funct3))) 
                         | (7U == (IData)(vlSelf->__PVT__funct3)))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 
                                        ((0U == (IData)(vlSelf->__PVT__funct3))
                                          ? 4U : ((1U 
                                                   == (IData)(vlSelf->__PVT__funct3))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__funct3))
                                                    ? 6U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->__PVT__funct3))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->__PVT__funct3))
                                                      ? 3U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__funct3))
                                                       ? 0xdU
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__funct3))
                                                        ? 2U
                                                        : 1U))))))));
                    }
                } else if ((0x20U == (IData)(vlSelf->__PVT__funct7))) {
                    if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 5U);
                    } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
                    } else {
                        vlSelf->__PVT__rvi_illegal = 1U;
                    }
                } else if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                               | (1U == (IData)(vlSelf->__PVT__funct3))) 
                              | (2U == (IData)(vlSelf->__PVT__funct3))) 
                             | (3U == (IData)(vlSelf->__PVT__funct3))) 
                            | (4U == (IData)(vlSelf->__PVT__funct3))) 
                           | (5U == (IData)(vlSelf->__PVT__funct3))) 
                          | (6U == (IData)(vlSelf->__PVT__funct3))) 
                         | (7U == (IData)(vlSelf->__PVT__funct3)))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 
                                        ((0U == (IData)(vlSelf->__PVT__funct3))
                                          ? 0xfU : 
                                         ((1U == (IData)(vlSelf->__PVT__funct3))
                                           ? 0x12U : 
                                          ((2U == (IData)(vlSelf->__PVT__funct3))
                                            ? 0x11U
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__funct3))
                                                ? 0x10U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__funct3))
                                                    ? 0x13U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__PVT__funct3))
                                                     ? 0x14U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__funct3))
                                                      ? 0x15U
                                                      : 0x16U))))))));
                    }
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              (0x7ffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xbU))));
                VL_ASSIGNBIT_WI(0x49U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                           | (2U == (IData)(vlSelf->__PVT__funct3))) 
                          | (3U == (IData)(vlSelf->__PVT__funct3))) 
                         | (4U == (IData)(vlSelf->__PVT__funct3))) 
                        | (6U == (IData)(vlSelf->__PVT__funct3))) 
                       | (7U == (IData)(vlSelf->__PVT__funct3))) 
                      | (1U == (IData)(vlSelf->__PVT__funct3))) 
                     | (5U == (IData)(vlSelf->__PVT__funct3)))) {
                    if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
                    } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 6U);
                    } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 7U);
                    } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 3U);
                    } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 2U);
                    } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                        if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                            VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt)));
                            VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xcU);
                        } else {
                            vlSelf->__PVT__rvi_illegal = 1U;
                        }
                    } else if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                        VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                        VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt)));
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xdU);
                    } else if ((0x20U == (IData)(vlSelf->__PVT__funct7))) {
                        VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                        VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt)));
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
                    } else {
                        vlSelf->__PVT__rvi_illegal = 1U;
                    }
                }
            } else if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                if ((VL_REDOR_I((0xfU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x1cU, 4U))) 
                     | (VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 5U))) 
                        | VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))))) {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                if ((VL_REDOR_I((0x1ffffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 0x11U))) 
                     | VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U))))) {
                    vlSelf->__PVT__rvi_illegal = 1U;
                } else {
                    VL_ASSIGNBIT_WO(0x35U, vlSelf->__PVT__idu2exu_cmd);
                }
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else if ((0x18U == (IData)(vlSelf->__PVT__rvi_opcode))) {
            vlSelf->__PVT__idu2exu_use_rs1 = 1U;
            vlSelf->__PVT__idu2exu_use_rs2 = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 7U)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 8U, 4U)), 0U)))));
            VL_ASSIGNBIT_WO(0x37U, vlSelf->__PVT__idu2exu_cmd);
            VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
            VL_ASSIGNBIT_WO(0x49U, vlSelf->__PVT__idu2exu_cmd);
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 8U);
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 9U);
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 6U);
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xaU);
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 7U);
            } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xbU);
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else if ((0x19U == (IData)(vlSelf->__PVT__rvi_opcode))) {
            vlSelf->__PVT__idu2exu_use_rs1 = 1U;
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              (0x7ffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xbU))));
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else if ((0x1cU == (IData)(vlSelf->__PVT__rvi_opcode))) {
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_EXTEND_II(32,15, VL_CONCAT_III(15,3,12, (IData)(vlSelf->__PVT__funct3), 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xcU)))));
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rd = 0U;
                vlSelf->__PVT__idu2exu_use_imm = 0U;
                if ((0U == VL_CONCAT_III(10,5,5, (0x1fU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 5U)), 
                                         (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U))))) {
                    if ((0U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x1bU);
                    } else if ((1U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x13U);
                    } else if ((0x302U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNBIT_WO(0x36U, vlSelf->__PVT__idu2exu_cmd);
                    } else if ((0x105U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNBIT_WO(0x34U, vlSelf->__PVT__idu2exu_cmd);
                    } else {
                        vlSelf->__PVT__rvi_illegal = 1U;
                    }
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x2eU);
            } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x36U);
            } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x3eU);
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x16U);
            } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x1eU);
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else {
            vlSelf->__PVT__rvi_illegal = 1U;
        }
    } else if ((0U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNBIT_WO(0x4aU, vlSelf->__PVT__idu2exu_cmd);
        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
        vlSelf->__PVT__idu2exu_use_imm = 1U;
        if ((0U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & (~ VL_REDOR_I((0xffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 8U)))))) {
                vlSelf->__PVT__rvc_illegal = 1U;
            }
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 2U);
            VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(5,2,3, 1U, 
                                          (7U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,4, 
                                                       (0xfU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 4U))), 
                                          VL_CONCAT_III(6,2,4, 
                                                        (3U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xbU, 2U)), 
                                                        VL_CONCAT_III(4,1,3, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U)), 
                                                                      VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U)))));
        } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x13U);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 5U);
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(5,2,3, 1U, 
                                          (7U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U))));
            VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(5,2,3, 1U, 
                                          (7U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,1, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U))), 
                                          VL_CONCAT_III(6,3,3, 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 3U)), 
                                                        VL_CONCAT_III(3,1,2, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U))));
        } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__idu2exu_use_rs2 = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x18U);
            VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(10,5,5, VL_CONCAT_III(5,2,3, 1U, 
                                                                (7U 
                                                                 & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U))), 
                                          VL_CONCAT_III(5,2,3, 1U, 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U)))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,1, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U))), 
                                          VL_CONCAT_III(6,3,3, 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 3U)), 
                                                        VL_CONCAT_III(3,1,2, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U))));
        } else {
            vlSelf->__PVT__rvc_illegal = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNBIT_WO(0x4aU, vlSelf->__PVT__idu2exu_cmd);
        vlSelf->__PVT__idu2exu_use_rd = 1U;
        vlSelf->__PVT__idu2exu_use_imm = 1U;
        if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                   | (1U == (IData)(vlSelf->__PVT__funct3))) 
                  | (2U == (IData)(vlSelf->__PVT__funct3))) 
                 | (3U == (IData)(vlSelf->__PVT__funct3))) 
                | (4U == (IData)(vlSelf->__PVT__funct3))) 
               | (5U == (IData)(vlSelf->__PVT__funct3))) 
              | (6U == (IData)(vlSelf->__PVT__funct3))) 
             | (7U == (IData)(vlSelf->__PVT__funct3)))) {
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,27,5, 
                                              (0x7ffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x1bU)), 
                                              (0x1fU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 1U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x15U)), 
                                              VL_CONCAT_III(11,1,10, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 8U)), 
                                                            VL_CONCAT_III(10,2,8, 
                                                                          (3U 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__instr, 9U, 2U)), 
                                                                          VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 7U)), 
                                                                                VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xbU)), 
                                                                                VL_CONCAT_III(4,3,1, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 3U)), 0U)))))))));
            } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 3U);
                VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,27,5, 
                                              (0x7ffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x1bU)), 
                                              (0x1fU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
            } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                if ((1U & (~ (VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU) 
                              | VL_REDOR_I((0x1fU & 
                                            VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))))))) {
                    vlSelf->__PVT__rvc_illegal = 1U;
                }
                if ((2U == (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))) {
                    vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 2U);
                    VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 2U);
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_CONCAT_III(32,23,9, 
                                                  (0x7fffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x17U)), 
                                                  VL_CONCAT_III(9,2,7, 
                                                                (3U 
                                                                 & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 2U)), 
                                                                VL_CONCAT_III(7,1,6, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U)), 
                                                                              VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U))))));
                } else {
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 3U);
                    VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                    (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_CONCAT_III(32,15,17, 
                                                  (0x7fffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0xfU)), 
                                                  VL_CONCAT_III(17,5,12, 
                                                                (0x1fU 
                                                                 & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)), 0U)));
                }
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(5,2,3, 1U, 
                                              (7U & 
                                               VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U))));
                VL_ASSIGNSEL_WI(75,10,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(10,5,5, 
                                              VL_CONCAT_III(5,2,3, 1U, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U))), 
                                              VL_CONCAT_III(5,2,3, 1U, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U)))));
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                if ((0U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                        vlSelf->__PVT__rvc_illegal = 1U;
                    }
                    vlSelf->__PVT__idu2exu_use_imm = 1U;
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_EXTEND_II(32,5, 
                                                 (0x1fU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xdU);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                } else if ((1U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                        vlSelf->__PVT__rvc_illegal = 1U;
                    }
                    vlSelf->__PVT__idu2exu_use_imm = 1U;
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_EXTEND_II(32,5, 
                                                 (0x1fU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                } else if ((2U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    vlSelf->__PVT__idu2exu_use_imm = 1U;
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_CONCAT_III(32,27,5, 
                                                  (0x7ffffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x1bU)), 
                                                  (0x1fU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
                } else if ((3U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                    if ((0U == VL_CONCAT_III(3,1,2, 
                                             (1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                             (3U & 
                                              VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x25U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((1U == VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                    (3U 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x23U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((2U == VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                    (3U 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x22U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((3U == VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                    (3U 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x21U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else {
                        vlSelf->__PVT__rvc_illegal = 1U;
                    }
                }
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNBIT_WO(0x38U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x15U)), 
                                              VL_CONCAT_III(11,1,10, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 8U)), 
                                                            VL_CONCAT_III(10,2,8, 
                                                                          (3U 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__instr, 9U, 2U)), 
                                                                          VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 7U)), 
                                                                                VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xbU)), 
                                                                                VL_CONCAT_III(4,3,1, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 3U)), 0U)))))))));
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,7,0x43U, vlSelf->__PVT__idu2exu_cmd, 0x50U);
                VL_ASSIGNBIT_WO(0x37U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(10,2,8, 1U, 
                                              VL_CONCAT_III(8,3,5, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U)), 0U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,24,8, 
                                              (0xffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x18U)), 
                                              VL_CONCAT_III(8,2,6, 
                                                            (3U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U)), 
                                                            VL_CONCAT_III(6,1,5, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                          VL_CONCAT_III(5,2,3, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)), 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 2U)), 0U))))));
            } else {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,7,0x43U, vlSelf->__PVT__idu2exu_cmd, 0x52U);
                VL_ASSIGNBIT_WO(0x37U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(10,2,8, 1U, 
                                              VL_CONCAT_III(8,3,5, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U)), 0U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,24,8, 
                                              (0xffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x18U)), 
                                              VL_CONCAT_III(8,2,6, 
                                                            (3U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U)), 
                                                            VL_CONCAT_III(6,1,5, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                          VL_CONCAT_III(5,2,3, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)), 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 2U)), 0U))))));
            }
        }
    } else if ((2U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNBIT_WO(0x4aU, vlSelf->__PVT__idu2exu_cmd);
        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
        if ((0U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                vlSelf->__PVT__rvc_illegal = 1U;
            }
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                            (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
            VL_ASSIGNSEL_WQ(75,37,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_QII(37,5,32, 
                                          (0x1fU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)), 
                                          VL_EXTEND_II(32,5, 
                                                       (0x1fU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)))));
            VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xcU);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
        } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & (~ VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))))) {
                vlSelf->__PVT__rvc_illegal = 1U;
            }
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x13U);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 5U);
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 2U);
            VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                            (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 2U))), 
                                          VL_CONCAT_III(6,1,5, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                        VL_CONCAT_III(5,3,2, 
                                                                      (7U 
                                                                       & VL_SEL_IIII(32, vlSelf->__PVT__instr, 4U, 3U)), 0U))));
        } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                if (VL_REDOR_I((0x3ffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 0xaU)))) {
                    if (VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)))) {
                        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                        vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                        vlSelf->__PVT__idu2exu_use_rd = 1U;
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x24U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                        VL_ASSIGNSEL_WI(75,15,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                        VL_CONCAT_III(15,5,10, 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)), 
                                                      VL_CONCAT_III(10,5,5, 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)), 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))));
                    } else {
                        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                        vlSelf->__PVT__idu2exu_use_rd = 1U;
                        vlSelf->__PVT__idu2exu_use_imm = 1U;
                        VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                        VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                        VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                        (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                        VL_ASSIGNSEL_WQ(75,37,5U, vlSelf->__PVT__idu2exu_cmd, 0x100000000ULL);
                    }
                } else {
                    VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x13U);
                }
            } else if (VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)))) {
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x24U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                VL_ASSIGNSEL_WI(75,15,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(15,10,5, 
                                              VL_EXTEND_II(10,5, 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))), 
                                              (0x1fU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U))));
            } else {
                if ((1U & (~ VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))))) {
                    vlSelf->__PVT__rvc_illegal = 1U;
                }
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNBIT_WO(0x38U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 0U);
            }
        } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__idu2exu_use_rs1 = 1U;
            vlSelf->__PVT__idu2exu_use_rs2 = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x18U);
            VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(10,5,5, 2U, 
                                          (0x1fU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 2U))), 
                                          VL_CONCAT_III(6,4,2, 
                                                        (0xfU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 9U, 4U)), 0U)));
        } else {
            vlSelf->__PVT__rvc_illegal = 1U;
        }
    }
    if (((IData)(vlSelf->__PVT__rvi_illegal) | (IData)(vlSelf->__PVT__rvc_illegal))) {
        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0U);
        VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0U);
        VL_ASSIGNSEL_WI(75,10,0x34U, vlSelf->__PVT__idu2exu_cmd, 0U);
        vlSelf->__PVT__idu2exu_use_rs1 = 0U;
        vlSelf->__PVT__idu2exu_use_rs2 = 0U;
        vlSelf->__PVT__idu2exu_use_rd = 0U;
        vlSelf->__PVT__idu2exu_use_imm = 1U;
        VL_ASSIGNSEL_WQ(75,37,0U, vlSelf->__PVT__idu2exu_cmd, 
                        VL_CONCAT_QII(37,32,5, vlSelf->__PVT__instr, 0x12U));
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_idu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0(Vssrv_top_scr1_pipe_idu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_idu___act_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0\n"); );
    // Body
    vlSelf->__PVT__idu2ifu_rdy = vlSelf->__PVT__exu2idu_rdy;
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0(Vssrv_top_scr1_pipe_idu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__0\n"); );
    // Body
    vlSelf->__PVT__instr = vlSelf->__PVT__ifu2idu_instr;
    vlSelf->__PVT__idu2exu_req = vlSelf->__PVT__ifu2idu_vd;
    vlSelf->__PVT__rvi_opcode = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U));
    vlSelf->__PVT__funct7 = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x19U, 7U));
    vlSelf->__PVT__funct12 = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xcU));
    vlSelf->__PVT__shamt = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 5U));
    vlSelf->__PVT__instr_type = (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0U, 2U));
    vlSelf->__PVT__funct3 = (7U & ((3U == (IData)(vlSelf->__PVT__instr_type))
                                    ? VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 3U)
                                    : VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xdU, 3U)));
    VL_CONST_W_3X(75,vlSelf->__PVT__idu2exu_cmd,0x00000200,0x40000000,0x00000000);
    vlSelf->__PVT__idu2exu_use_rs1 = 0U;
    vlSelf->__PVT__idu2exu_use_rs2 = 0U;
    vlSelf->__PVT__idu2exu_use_rd = 0U;
    vlSelf->__PVT__idu2exu_use_imm = 0U;
    vlSelf->__PVT__rvi_illegal = 0U;
    vlSelf->__PVT__rvc_illegal = 0U;
    if (vlSelf->__PVT__ifu2idu_imem_err) {
        VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x11U);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__PVT__idu2exu_cmd, vlSelf->__PVT__ifu2idu_err_rvi_hi);
    } else if ((3U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNSEL_WI(75,15,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                        VL_CONCAT_III(15,5,10, (0x1fU 
                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 5U)), 
                                      VL_CONCAT_III(10,5,5, 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 5U)), 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))));
        if (((((((((5U == (IData)(vlSelf->__PVT__rvi_opcode)) 
                   | (0xdU == (IData)(vlSelf->__PVT__rvi_opcode))) 
                  | (0x1bU == (IData)(vlSelf->__PVT__rvi_opcode))) 
                 | (0U == (IData)(vlSelf->__PVT__rvi_opcode))) 
                | (8U == (IData)(vlSelf->__PVT__rvi_opcode))) 
               | (0xcU == (IData)(vlSelf->__PVT__rvi_opcode))) 
              | (4U == (IData)(vlSelf->__PVT__rvi_opcode))) 
             | (3U == (IData)(vlSelf->__PVT__rvi_opcode)))) {
            if ((5U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 2U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,20,12, 
                                              (0xfffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 0x14U)), 0U));
            } else if ((0xdU == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 3U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,20,12, 
                                              (0xfffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 0x14U)), 0U));
            } else if ((0x1bU == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,12,20, 
                                              (0xfffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0xcU)), 
                                              VL_CONCAT_III(20,8,12, 
                                                            (0xffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xcU, 8U)), 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x14U)), 
                                                                          VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x15U, 0xaU)), 0U)))));
            } else if ((0U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 5U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              (0x7ffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xbU))));
                if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 1U);
                } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 2U);
                } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 3U);
                } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 4U);
                } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 5U);
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((8U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              VL_CONCAT_III(11,6,5, 
                                                            (0x3fU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x19U, 6U)), 
                                                            (0x1fU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))));
                if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 6U);
                } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 7U);
                } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                    VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 8U);
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((0xcU == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                VL_ASSIGNBIT_WO(0x49U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                    if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                               | (1U == (IData)(vlSelf->__PVT__funct3))) 
                              | (2U == (IData)(vlSelf->__PVT__funct3))) 
                             | (3U == (IData)(vlSelf->__PVT__funct3))) 
                            | (4U == (IData)(vlSelf->__PVT__funct3))) 
                           | (5U == (IData)(vlSelf->__PVT__funct3))) 
                          | (6U == (IData)(vlSelf->__PVT__funct3))) 
                         | (7U == (IData)(vlSelf->__PVT__funct3)))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 
                                        ((0U == (IData)(vlSelf->__PVT__funct3))
                                          ? 4U : ((1U 
                                                   == (IData)(vlSelf->__PVT__funct3))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__funct3))
                                                    ? 6U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->__PVT__funct3))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->__PVT__funct3))
                                                      ? 3U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__funct3))
                                                       ? 0xdU
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__funct3))
                                                        ? 2U
                                                        : 1U))))))));
                    }
                } else if ((0x20U == (IData)(vlSelf->__PVT__funct7))) {
                    if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 5U);
                    } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
                    } else {
                        vlSelf->__PVT__rvi_illegal = 1U;
                    }
                } else if ((1U == (IData)(vlSelf->__PVT__funct7))) {
                    if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                               | (1U == (IData)(vlSelf->__PVT__funct3))) 
                              | (2U == (IData)(vlSelf->__PVT__funct3))) 
                             | (3U == (IData)(vlSelf->__PVT__funct3))) 
                            | (4U == (IData)(vlSelf->__PVT__funct3))) 
                           | (5U == (IData)(vlSelf->__PVT__funct3))) 
                          | (6U == (IData)(vlSelf->__PVT__funct3))) 
                         | (7U == (IData)(vlSelf->__PVT__funct3)))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 
                                        ((0U == (IData)(vlSelf->__PVT__funct3))
                                          ? 0xfU : 
                                         ((1U == (IData)(vlSelf->__PVT__funct3))
                                           ? 0x12U : 
                                          ((2U == (IData)(vlSelf->__PVT__funct3))
                                            ? 0x11U
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__funct3))
                                                ? 0x10U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__funct3))
                                                    ? 0x13U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__PVT__funct3))
                                                     ? 0x14U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__funct3))
                                                      ? 0x15U
                                                      : 0x16U))))))));
                    }
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__rvi_opcode))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              (0x7ffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xbU))));
                VL_ASSIGNBIT_WI(0x49U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                           | (2U == (IData)(vlSelf->__PVT__funct3))) 
                          | (3U == (IData)(vlSelf->__PVT__funct3))) 
                         | (4U == (IData)(vlSelf->__PVT__funct3))) 
                        | (6U == (IData)(vlSelf->__PVT__funct3))) 
                       | (7U == (IData)(vlSelf->__PVT__funct3))) 
                      | (1U == (IData)(vlSelf->__PVT__funct3))) 
                     | (5U == (IData)(vlSelf->__PVT__funct3)))) {
                    if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
                    } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 6U);
                    } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 7U);
                    } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 3U);
                    } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 2U);
                    } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                        if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                            VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt)));
                            VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xcU);
                        } else {
                            vlSelf->__PVT__rvi_illegal = 1U;
                        }
                    } else if ((0U == (IData)(vlSelf->__PVT__funct7))) {
                        VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                        VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt)));
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xdU);
                    } else if ((0x20U == (IData)(vlSelf->__PVT__funct7))) {
                        VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                        VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__shamt)));
                        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
                    } else {
                        vlSelf->__PVT__rvi_illegal = 1U;
                    }
                }
            } else if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                if ((VL_REDOR_I((0xfU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x1cU, 4U))) 
                     | (VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 5U))) 
                        | VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))))) {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                if ((VL_REDOR_I((0x1ffffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 0x11U))) 
                     | VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U))))) {
                    vlSelf->__PVT__rvi_illegal = 1U;
                } else {
                    VL_ASSIGNBIT_WO(0x35U, vlSelf->__PVT__idu2exu_cmd);
                }
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else if ((0x18U == (IData)(vlSelf->__PVT__rvi_opcode))) {
            vlSelf->__PVT__idu2exu_use_rs1 = 1U;
            vlSelf->__PVT__idu2exu_use_rs2 = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 7U)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 8U, 4U)), 0U)))));
            VL_ASSIGNBIT_WO(0x37U, vlSelf->__PVT__idu2exu_cmd);
            VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
            VL_ASSIGNBIT_WO(0x49U, vlSelf->__PVT__idu2exu_cmd);
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 8U);
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 9U);
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 6U);
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xaU);
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 7U);
            } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xbU);
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else if ((0x19U == (IData)(vlSelf->__PVT__rvi_opcode))) {
            vlSelf->__PVT__idu2exu_use_rs1 = 1U;
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0x1fU)), 0x15U)), 
                                              (0x7ffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xbU))));
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else if ((0x1cU == (IData)(vlSelf->__PVT__rvi_opcode))) {
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_EXTEND_II(32,15, VL_CONCAT_III(15,3,12, (IData)(vlSelf->__PVT__funct3), 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0x14U, 0xcU)))));
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rd = 0U;
                vlSelf->__PVT__idu2exu_use_imm = 0U;
                if ((0U == VL_CONCAT_III(10,5,5, (0x1fU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xfU, 5U)), 
                                         (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U))))) {
                    if ((0U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x1bU);
                    } else if ((1U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x13U);
                    } else if ((0x302U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNBIT_WO(0x36U, vlSelf->__PVT__idu2exu_cmd);
                    } else if ((0x105U == (IData)(vlSelf->__PVT__funct12))) {
                        VL_ASSIGNBIT_WO(0x34U, vlSelf->__PVT__idu2exu_cmd);
                    } else {
                        vlSelf->__PVT__rvi_illegal = 1U;
                    }
                } else {
                    vlSelf->__PVT__rvi_illegal = 1U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x2eU);
            } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x36U);
            } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x3eU);
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x16U);
            } else if ((7U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x39U, vlSelf->__PVT__idu2exu_cmd, 0x1eU);
            } else {
                vlSelf->__PVT__rvi_illegal = 1U;
            }
        } else {
            vlSelf->__PVT__rvi_illegal = 1U;
        }
    } else if ((0U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNBIT_WO(0x4aU, vlSelf->__PVT__idu2exu_cmd);
        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
        vlSelf->__PVT__idu2exu_use_imm = 1U;
        if ((0U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & (~ VL_REDOR_I((0xffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 8U)))))) {
                vlSelf->__PVT__rvc_illegal = 1U;
            }
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 2U);
            VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(5,2,3, 1U, 
                                          (7U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,4, 
                                                       (0xfU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 4U))), 
                                          VL_CONCAT_III(6,2,4, 
                                                        (3U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xbU, 2U)), 
                                                        VL_CONCAT_III(4,1,3, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U)), 
                                                                      VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U)))));
        } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x13U);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 5U);
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(5,2,3, 1U, 
                                          (7U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U))));
            VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(5,2,3, 1U, 
                                          (7U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,1, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U))), 
                                          VL_CONCAT_III(6,3,3, 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 3U)), 
                                                        VL_CONCAT_III(3,1,2, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U))));
        } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__idu2exu_use_rs2 = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x18U);
            VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(10,5,5, VL_CONCAT_III(5,2,3, 1U, 
                                                                (7U 
                                                                 & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U))), 
                                          VL_CONCAT_III(5,2,3, 1U, 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U)))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,1, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U))), 
                                          VL_CONCAT_III(6,3,3, 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 3U)), 
                                                        VL_CONCAT_III(3,1,2, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U))));
        } else {
            vlSelf->__PVT__rvc_illegal = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNBIT_WO(0x4aU, vlSelf->__PVT__idu2exu_cmd);
        vlSelf->__PVT__idu2exu_use_rd = 1U;
        vlSelf->__PVT__idu2exu_use_imm = 1U;
        if (((((((((0U == (IData)(vlSelf->__PVT__funct3)) 
                   | (1U == (IData)(vlSelf->__PVT__funct3))) 
                  | (2U == (IData)(vlSelf->__PVT__funct3))) 
                 | (3U == (IData)(vlSelf->__PVT__funct3))) 
                | (4U == (IData)(vlSelf->__PVT__funct3))) 
               | (5U == (IData)(vlSelf->__PVT__funct3))) 
              | (6U == (IData)(vlSelf->__PVT__funct3))) 
             | (7U == (IData)(vlSelf->__PVT__funct3)))) {
            if ((0U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,27,5, 
                                              (0x7ffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x1bU)), 
                                              (0x1fU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
            } else if ((1U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 1U);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x15U)), 
                                              VL_CONCAT_III(11,1,10, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 8U)), 
                                                            VL_CONCAT_III(10,2,8, 
                                                                          (3U 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__instr, 9U, 2U)), 
                                                                          VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 7U)), 
                                                                                VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xbU)), 
                                                                                VL_CONCAT_III(4,3,1, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 3U)), 0U)))))))));
            } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 3U);
                VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,27,5, 
                                              (0x7ffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x1bU)), 
                                              (0x1fU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
            } else if ((3U == (IData)(vlSelf->__PVT__funct3))) {
                if ((1U & (~ (VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU) 
                              | VL_REDOR_I((0x1fU & 
                                            VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))))))) {
                    vlSelf->__PVT__rvc_illegal = 1U;
                }
                if ((2U == (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))) {
                    vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 4U);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 2U);
                    VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 2U);
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_CONCAT_III(32,23,9, 
                                                  (0x7fffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x17U)), 
                                                  VL_CONCAT_III(9,2,7, 
                                                                (3U 
                                                                 & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 2U)), 
                                                                VL_CONCAT_III(7,1,6, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 5U)), 
                                                                              VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 0U))))));
                } else {
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 3U);
                    VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                    (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_CONCAT_III(32,15,17, 
                                                  (0x7fffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0xfU)), 
                                                  VL_CONCAT_III(17,5,12, 
                                                                (0x1fU 
                                                                 & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)), 0U)));
                }
            } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
                VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(5,2,3, 1U, 
                                              (7U & 
                                               VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U))));
                VL_ASSIGNSEL_WI(75,10,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(10,5,5, 
                                              VL_CONCAT_III(5,2,3, 1U, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 3U))), 
                                              VL_CONCAT_III(5,2,3, 1U, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U)))));
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                if ((0U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                        vlSelf->__PVT__rvc_illegal = 1U;
                    }
                    vlSelf->__PVT__idu2exu_use_imm = 1U;
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_EXTEND_II(32,5, 
                                                 (0x1fU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xdU);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                } else if ((1U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                        vlSelf->__PVT__rvc_illegal = 1U;
                    }
                    vlSelf->__PVT__idu2exu_use_imm = 1U;
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_EXTEND_II(32,5, 
                                                 (0x1fU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xeU);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                } else if ((2U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    vlSelf->__PVT__idu2exu_use_imm = 1U;
                    VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                    VL_CONCAT_III(32,27,5, 
                                                  (0x7ffffffU 
                                                   & VL_REPLICATE_IOI(1,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x1bU)), 
                                                  (0x1fU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
                } else if ((3U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)))) {
                    vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                    if ((0U == VL_CONCAT_III(3,1,2, 
                                             (1U & 
                                              VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                             (3U & 
                                              VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x25U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((1U == VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                    (3U 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x23U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((2U == VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                    (3U 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x22U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else if ((3U == VL_CONCAT_III(3,1,2, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                    (3U 
                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U))))) {
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x21U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                    } else {
                        vlSelf->__PVT__rvc_illegal = 1U;
                    }
                }
            } else if ((5U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WI(0x43U, vlSelf->__PVT__idu2exu_cmd, 0U);
                VL_ASSIGNBIT_WO(0x38U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,21,11, 
                                              (0x1fffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x15U)), 
                                              VL_CONCAT_III(11,1,10, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 8U)), 
                                                            VL_CONCAT_III(10,2,8, 
                                                                          (3U 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__instr, 9U, 2U)), 
                                                                          VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 6U)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 7U)), 
                                                                                VL_CONCAT_III(6,1,5, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                                VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xbU)), 
                                                                                VL_CONCAT_III(4,3,1, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 3U)), 0U)))))))));
            } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,7,0x43U, vlSelf->__PVT__idu2exu_cmd, 0x50U);
                VL_ASSIGNBIT_WO(0x37U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(10,2,8, 1U, 
                                              VL_CONCAT_III(8,3,5, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U)), 0U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,24,8, 
                                              (0xffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x18U)), 
                                              VL_CONCAT_III(8,2,6, 
                                                            (3U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U)), 
                                                            VL_CONCAT_III(6,1,5, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                          VL_CONCAT_III(5,2,3, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)), 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 2U)), 0U))))));
            } else {
                vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNSEL_WI(75,7,0x43U, vlSelf->__PVT__idu2exu_cmd, 0x52U);
                VL_ASSIGNBIT_WO(0x37U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(10,2,8, 1U, 
                                              VL_CONCAT_III(8,3,5, 
                                                            (7U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 3U)), 0U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(32,24,8, 
                                              (0xffffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 0x18U)), 
                                              VL_CONCAT_III(8,2,6, 
                                                            (3U 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__instr, 5U, 2U)), 
                                                            VL_CONCAT_III(6,1,5, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 2U)), 
                                                                          VL_CONCAT_III(5,2,3, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 0xaU, 2U)), 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__instr, 3U, 2U)), 0U))))));
            }
        }
    } else if ((2U == (IData)(vlSelf->__PVT__instr_type))) {
        VL_ASSIGNBIT_WO(0x4aU, vlSelf->__PVT__idu2exu_cmd);
        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
        if ((0U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                vlSelf->__PVT__rvc_illegal = 1U;
            }
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                            (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
            VL_ASSIGNSEL_WQ(75,37,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_QII(37,5,32, 
                                          (0x1fU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)), 
                                          VL_EXTEND_II(32,5, 
                                                       (0x1fU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)))));
            VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0xcU);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
        } else if ((2U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & (~ VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))))) {
                vlSelf->__PVT__rvc_illegal = 1U;
            }
            vlSelf->__PVT__idu2exu_use_rd = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x13U);
            VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 5U);
            VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 2U);
            VL_ASSIGNSEL_WI(75,5,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                            (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 2U))), 
                                          VL_CONCAT_III(6,1,5, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU)), 
                                                        VL_CONCAT_III(5,3,2, 
                                                                      (7U 
                                                                       & VL_SEL_IIII(32, vlSelf->__PVT__instr, 4U, 3U)), 0U))));
        } else if ((4U == (IData)(vlSelf->__PVT__funct3))) {
            if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__instr, 0xcU))) {
                if (VL_REDOR_I((0x3ffU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 0xaU)))) {
                    if (VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)))) {
                        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                        vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                        vlSelf->__PVT__idu2exu_use_rd = 1U;
                        VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x24U);
                        VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                        VL_ASSIGNSEL_WI(75,15,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                        VL_CONCAT_III(15,5,10, 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)), 
                                                      VL_CONCAT_III(10,5,5, 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)), 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))));
                    } else {
                        vlSelf->__PVT__idu2exu_use_rs1 = 1U;
                        vlSelf->__PVT__idu2exu_use_rd = 1U;
                        vlSelf->__PVT__idu2exu_use_imm = 1U;
                        VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                        VL_ASSIGNSEL_WI(75,4,0x38U, vlSelf->__PVT__idu2exu_cmd, 9U);
                        VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                        (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                        VL_ASSIGNSEL_WQ(75,37,5U, vlSelf->__PVT__idu2exu_cmd, 0x100000000ULL);
                    }
                } else {
                    VL_ASSIGNSEL_WI(75,5,0U, vlSelf->__PVT__idu2exu_cmd, 0x13U);
                }
            } else if (VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U)))) {
                vlSelf->__PVT__idu2exu_use_rs2 = 1U;
                vlSelf->__PVT__idu2exu_use_rd = 1U;
                VL_ASSIGNSEL_WI(75,6,0x44U, vlSelf->__PVT__idu2exu_cmd, 0x24U);
                VL_ASSIGNSEL_WI(75,3,0x39U, vlSelf->__PVT__idu2exu_cmd, 1U);
                VL_ASSIGNSEL_WI(75,15,0x25U, vlSelf->__PVT__idu2exu_cmd, 
                                VL_CONCAT_III(15,10,5, 
                                              VL_EXTEND_II(10,5, 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))), 
                                              (0x1fU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U))));
            } else {
                if ((1U & (~ VL_REDOR_I((0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)))))) {
                    vlSelf->__PVT__rvc_illegal = 1U;
                }
                vlSelf->__PVT__idu2exu_use_imm = 1U;
                VL_ASSIGNBIT_WO(0x43U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNBIT_WO(0x38U, vlSelf->__PVT__idu2exu_cmd);
                VL_ASSIGNSEL_WI(75,5,0x2fU, vlSelf->__PVT__idu2exu_cmd, 
                                (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 5U)));
                VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 0U);
            }
        } else if ((6U == (IData)(vlSelf->__PVT__funct3))) {
            vlSelf->__PVT__idu2exu_use_rs1 = 1U;
            vlSelf->__PVT__idu2exu_use_rs2 = 1U;
            vlSelf->__PVT__idu2exu_use_imm = 1U;
            VL_ASSIGNSEL_WI(75,5,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0x18U);
            VL_ASSIGNSEL_WI(75,10,0x2aU, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(10,5,5, 2U, 
                                          (0x1fU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__instr, 2U, 5U))));
            VL_ASSIGNSEL_WI(75,32,5U, vlSelf->__PVT__idu2exu_cmd, 
                            VL_CONCAT_III(32,26,6, 
                                          VL_EXTEND_II(26,2, 
                                                       (3U 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__instr, 7U, 2U))), 
                                          VL_CONCAT_III(6,4,2, 
                                                        (0xfU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__instr, 9U, 4U)), 0U)));
        } else {
            vlSelf->__PVT__rvc_illegal = 1U;
        }
    }
    if (((IData)(vlSelf->__PVT__rvi_illegal) | (IData)(vlSelf->__PVT__rvc_illegal))) {
        VL_ASSIGNSEL_WI(75,5,0x44U, vlSelf->__PVT__idu2exu_cmd, 0U);
        VL_ASSIGNSEL_WI(75,4,0x3fU, vlSelf->__PVT__idu2exu_cmd, 0U);
        VL_ASSIGNSEL_WI(75,10,0x34U, vlSelf->__PVT__idu2exu_cmd, 0U);
        vlSelf->__PVT__idu2exu_use_rs1 = 0U;
        vlSelf->__PVT__idu2exu_use_rs2 = 0U;
        vlSelf->__PVT__idu2exu_use_rd = 0U;
        vlSelf->__PVT__idu2exu_use_imm = 1U;
        VL_ASSIGNSEL_WQ(75,37,0U, vlSelf->__PVT__idu2exu_cmd, 
                        VL_CONCAT_QII(37,32,5, vlSelf->__PVT__instr, 0x12U));
    }
}

VL_INLINE_OPT void Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__1(Vssrv_top_scr1_pipe_idu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vssrv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vssrv_top_scr1_pipe_idu___nba_comb__TOP__ssrv_top__core__i_pipe_top__i_pipe_idu__1\n"); );
    // Body
    vlSelf->__PVT__idu2ifu_rdy = vlSelf->__PVT__exu2idu_rdy;
}
