// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_CSRFile.h"

VL_INLINE_OPT void Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__1(Vsodor_top_CSRFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__1\n"); );
    // Body
    vlSelf->__PVT___T_158 = (0xb80U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_159 = (0xb82U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT__read_only = VL_REDAND_II(2, (3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__io_decode_csr), 0xaU, 2U)));
    vlSelf->__PVT__opcode = (0xffU & ((IData)(1U) << 
                                      (7U & VL_SEL_IIII(12, (IData)(vlSelf->__PVT__io_decode_csr), 0U, 3U))));
    vlSelf->__PVT___T_156 = (0xb22U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_157 = (0xba2U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_154 = (0xb21U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_155 = (0xba1U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_152 = (0xb20U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_153 = (0xba0U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_150 = (0xb1fU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_151 = (0xb9fU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_148 = (0xb1eU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_149 = (0xb9eU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_146 = (0xb1dU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_147 = (0xb9dU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_144 = (0xb1cU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_145 = (0xb9cU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_142 = (0xb1bU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_143 = (0xb9bU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_140 = (0xb1aU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_141 = (0xb9aU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_138 = (0xb19U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_139 = (0xb99U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_136 = (0xb18U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_137 = (0xb98U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_134 = (0xb17U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_135 = (0xb97U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_132 = (0xb16U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_133 = (0xb96U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_130 = (0xb15U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_131 = (0xb95U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_128 = (0xb14U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_129 = (0xb94U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_126 = (0xb13U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_127 = (0xb93U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_124 = (0xb12U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_125 = (0xb92U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_122 = (0xb11U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_123 = (0xb91U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_120 = (0xb10U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_121 = (0xb90U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_118 = (0xb0fU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_119 = (0xb8fU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_116 = (0xb0eU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_117 = (0xb8eU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_114 = (0xb0dU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_115 = (0xb8dU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_112 = (0xb0cU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_113 = (0xb8cU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_110 = (0xb0bU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_111 = (0xb8bU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_108 = (0xb0aU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_109 = (0xb8aU == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_106 = (0xb09U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_107 = (0xb89U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_104 = (0xb08U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_105 = (0xb88U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_102 = (0xb07U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_103 = (0xb87U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_100 = (0xb06U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_101 = (0xb86U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_98 = (0xb05U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_99 = (0xb85U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_96 = (0xb04U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_97 = (0xb84U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_93 = (0x302U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_92 = (0x7b2U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_94 = (0xb03U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_95 = (0xb83U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_91 = (0x7b1U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_90 = (0x7b0U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_88 = (0x342U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_87 = (0x343U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_85 = (0x340U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_84 = (0x304U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_86 = (0x341U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_83 = (0x344U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_82 = (0x305U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_81 = (0x300U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_80 = (0x301U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_77 = (0xf13U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_75 = (0xb00U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_76 = (0xb02U == (IData)(vlSelf->__PVT__io_decode_csr));
    vlSelf->__PVT___T_392 = ((IData)(vlSelf->__PVT___T_82)
                              ? 0x100U : 0U);
    vlSelf->__PVT___T_390 = ((IData)(vlSelf->__PVT___T_80)
                              ? 0x100U : 0U);
    vlSelf->__PVT___T_387 = ((IData)(vlSelf->__PVT___T_77)
                              ? 0x8000U : 0U);
    vlSelf->__PVT___GEN_154 = VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___T_392));
    vlSelf->__PVT___GEN_152 = VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___T_390));
    vlSelf->__PVT___GEN_151 = VL_EXTEND_QI(64,16, (IData)(vlSelf->__PVT___T_387));
}

VL_INLINE_OPT void Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__2(Vsodor_top_CSRFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsodor_top_CSRFile___nba_sequent__TOP__sodor_top__sodor_core__d__csr__2\n"); );
    // Body
    vlSelf->__PVT___GEN_150 = VL_EXTEND_II(6,1, (IData)(vlSelf->__PVT__io_retire));
    vlSelf->__PVT__system_insn = (4U == (IData)(vlSelf->__PVT__io_rw_cmd));
    vlSelf->__PVT___T_166 = (3U == (IData)(vlSelf->__PVT__io_rw_cmd));
    vlSelf->__PVT___T_167 = ((2U == (IData)(vlSelf->__PVT__io_rw_cmd)) 
                             | (3U == (IData)(vlSelf->__PVT__io_rw_cmd)));
    vlSelf->__PVT__insn_break = ((IData)(vlSelf->__PVT__system_insn) 
                                 & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opcode), 1U));
    vlSelf->__PVT__insn_call = ((IData)(vlSelf->__PVT__system_insn) 
                                & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opcode), 0U));
    vlSelf->__PVT__cpu_ren = ((0U != (IData)(vlSelf->__PVT__io_rw_cmd)) 
                              & (~ (IData)(vlSelf->__PVT__system_insn)));
    vlSelf->__PVT__insn_ret = ((IData)(vlSelf->__PVT__system_insn) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opcode), 2U));
    vlSelf->__PVT__cpu_wen = ((IData)(vlSelf->__PVT__cpu_ren) 
                              & (5U != (IData)(vlSelf->__PVT__io_rw_cmd)));
    vlSelf->__PVT___T_369 = (3U & (VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__insn_ret)) 
                                   + VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__io_exception))));
    vlSelf->__PVT__io_eret = (((IData)(vlSelf->__PVT__insn_call) 
                               | (IData)(vlSelf->__PVT__insn_break)) 
                              | (IData)(vlSelf->__PVT__insn_ret));
    vlSelf->__PVT__wen = ((IData)(vlSelf->__PVT__cpu_wen) 
                          & (~ (IData)(vlSelf->__PVT__read_only)));
}

VL_INLINE_OPT void Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__0(Vsodor_top_CSRFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__0\n"); );
    // Body
    vlSelf->__PVT___T_171 = ((IData)(vlSelf->__PVT___T_166)
                              ? vlSelf->__PVT__io_rw_wdata
                              : 0U);
    vlSelf->__PVT___T_172 = (~ vlSelf->__PVT___T_171);
}

VL_INLINE_OPT void Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__1(Vsodor_top_CSRFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__1\n"); );
    // Body
    vlSelf->__PVT___T_466 = ((IData)(vlSelf->__PVT___T_156)
                              ? vlSelf->__PVT__REG_35
                              : 0ULL);
    vlSelf->__PVT___T_467 = ((IData)(vlSelf->__PVT___T_157)
                              ? vlSelf->__PVT__REG_35
                              : 0ULL);
    vlSelf->__PVT___T_464 = ((IData)(vlSelf->__PVT___T_154)
                              ? vlSelf->__PVT__REG_34
                              : 0ULL);
    vlSelf->__PVT___T_465 = ((IData)(vlSelf->__PVT___T_155)
                              ? vlSelf->__PVT__REG_34
                              : 0ULL);
    vlSelf->__PVT___T_462 = ((IData)(vlSelf->__PVT___T_152)
                              ? vlSelf->__PVT__REG_33
                              : 0ULL);
    vlSelf->__PVT___T_463 = ((IData)(vlSelf->__PVT___T_153)
                              ? vlSelf->__PVT__REG_33
                              : 0ULL);
    vlSelf->__PVT___T_460 = ((IData)(vlSelf->__PVT___T_150)
                              ? vlSelf->__PVT__REG_32
                              : 0ULL);
    vlSelf->__PVT___T_461 = ((IData)(vlSelf->__PVT___T_151)
                              ? vlSelf->__PVT__REG_32
                              : 0ULL);
    vlSelf->__PVT___T_458 = ((IData)(vlSelf->__PVT___T_148)
                              ? vlSelf->__PVT__REG_31
                              : 0ULL);
    vlSelf->__PVT___T_459 = ((IData)(vlSelf->__PVT___T_149)
                              ? vlSelf->__PVT__REG_31
                              : 0ULL);
    vlSelf->__PVT___T_456 = ((IData)(vlSelf->__PVT___T_146)
                              ? vlSelf->__PVT__REG_30
                              : 0ULL);
    vlSelf->__PVT___T_457 = ((IData)(vlSelf->__PVT___T_147)
                              ? vlSelf->__PVT__REG_30
                              : 0ULL);
    vlSelf->__PVT___T_454 = ((IData)(vlSelf->__PVT___T_144)
                              ? vlSelf->__PVT__REG_29
                              : 0ULL);
    vlSelf->__PVT___T_455 = ((IData)(vlSelf->__PVT___T_145)
                              ? vlSelf->__PVT__REG_29
                              : 0ULL);
    vlSelf->__PVT___T_452 = ((IData)(vlSelf->__PVT___T_142)
                              ? vlSelf->__PVT__REG_28
                              : 0ULL);
    vlSelf->__PVT___T_453 = ((IData)(vlSelf->__PVT___T_143)
                              ? vlSelf->__PVT__REG_28
                              : 0ULL);
    vlSelf->__PVT___T_450 = ((IData)(vlSelf->__PVT___T_140)
                              ? vlSelf->__PVT__REG_27
                              : 0ULL);
    vlSelf->__PVT___T_451 = ((IData)(vlSelf->__PVT___T_141)
                              ? vlSelf->__PVT__REG_27
                              : 0ULL);
    vlSelf->__PVT___T_448 = ((IData)(vlSelf->__PVT___T_138)
                              ? vlSelf->__PVT__REG_26
                              : 0ULL);
    vlSelf->__PVT___T_449 = ((IData)(vlSelf->__PVT___T_139)
                              ? vlSelf->__PVT__REG_26
                              : 0ULL);
    vlSelf->__PVT___T_446 = ((IData)(vlSelf->__PVT___T_136)
                              ? vlSelf->__PVT__REG_25
                              : 0ULL);
    vlSelf->__PVT___T_447 = ((IData)(vlSelf->__PVT___T_137)
                              ? vlSelf->__PVT__REG_25
                              : 0ULL);
    vlSelf->__PVT___T_444 = ((IData)(vlSelf->__PVT___T_134)
                              ? vlSelf->__PVT__REG_24
                              : 0ULL);
    vlSelf->__PVT___T_445 = ((IData)(vlSelf->__PVT___T_135)
                              ? vlSelf->__PVT__REG_24
                              : 0ULL);
    vlSelf->__PVT___T_442 = ((IData)(vlSelf->__PVT___T_132)
                              ? vlSelf->__PVT__REG_23
                              : 0ULL);
    vlSelf->__PVT___T_443 = ((IData)(vlSelf->__PVT___T_133)
                              ? vlSelf->__PVT__REG_23
                              : 0ULL);
    vlSelf->__PVT___T_440 = ((IData)(vlSelf->__PVT___T_130)
                              ? vlSelf->__PVT__REG_22
                              : 0ULL);
    vlSelf->__PVT___T_441 = ((IData)(vlSelf->__PVT___T_131)
                              ? vlSelf->__PVT__REG_22
                              : 0ULL);
    vlSelf->__PVT___T_438 = ((IData)(vlSelf->__PVT___T_128)
                              ? vlSelf->__PVT__REG_21
                              : 0ULL);
    vlSelf->__PVT___T_439 = ((IData)(vlSelf->__PVT___T_129)
                              ? vlSelf->__PVT__REG_21
                              : 0ULL);
    vlSelf->__PVT___T_436 = ((IData)(vlSelf->__PVT___T_126)
                              ? vlSelf->__PVT__REG_20
                              : 0ULL);
    vlSelf->__PVT___T_437 = ((IData)(vlSelf->__PVT___T_127)
                              ? vlSelf->__PVT__REG_20
                              : 0ULL);
    vlSelf->__PVT___T_434 = ((IData)(vlSelf->__PVT___T_124)
                              ? vlSelf->__PVT__REG_19
                              : 0ULL);
    vlSelf->__PVT___T_435 = ((IData)(vlSelf->__PVT___T_125)
                              ? vlSelf->__PVT__REG_19
                              : 0ULL);
    vlSelf->__PVT___T_432 = ((IData)(vlSelf->__PVT___T_122)
                              ? vlSelf->__PVT__REG_18
                              : 0ULL);
    vlSelf->__PVT___T_433 = ((IData)(vlSelf->__PVT___T_123)
                              ? vlSelf->__PVT__REG_18
                              : 0ULL);
    vlSelf->__PVT___T_430 = ((IData)(vlSelf->__PVT___T_120)
                              ? vlSelf->__PVT__REG_17
                              : 0ULL);
    vlSelf->__PVT___T_431 = ((IData)(vlSelf->__PVT___T_121)
                              ? vlSelf->__PVT__REG_17
                              : 0ULL);
    vlSelf->__PVT___T_428 = ((IData)(vlSelf->__PVT___T_118)
                              ? vlSelf->__PVT__REG_16
                              : 0ULL);
    vlSelf->__PVT___T_429 = ((IData)(vlSelf->__PVT___T_119)
                              ? vlSelf->__PVT__REG_16
                              : 0ULL);
    vlSelf->__PVT___T_426 = ((IData)(vlSelf->__PVT___T_116)
                              ? vlSelf->__PVT__REG_15
                              : 0ULL);
    vlSelf->__PVT___T_427 = ((IData)(vlSelf->__PVT___T_117)
                              ? vlSelf->__PVT__REG_15
                              : 0ULL);
    vlSelf->__PVT___T_424 = ((IData)(vlSelf->__PVT___T_114)
                              ? vlSelf->__PVT__REG_14
                              : 0ULL);
    vlSelf->__PVT___T_425 = ((IData)(vlSelf->__PVT___T_115)
                              ? vlSelf->__PVT__REG_14
                              : 0ULL);
    vlSelf->__PVT___T_422 = ((IData)(vlSelf->__PVT___T_112)
                              ? vlSelf->__PVT__REG_13
                              : 0ULL);
    vlSelf->__PVT___T_423 = ((IData)(vlSelf->__PVT___T_113)
                              ? vlSelf->__PVT__REG_13
                              : 0ULL);
    vlSelf->__PVT___T_420 = ((IData)(vlSelf->__PVT___T_110)
                              ? vlSelf->__PVT__REG_12
                              : 0ULL);
    vlSelf->__PVT___T_421 = ((IData)(vlSelf->__PVT___T_111)
                              ? vlSelf->__PVT__REG_12
                              : 0ULL);
    vlSelf->__PVT___T_418 = ((IData)(vlSelf->__PVT___T_108)
                              ? vlSelf->__PVT__REG_11
                              : 0ULL);
    vlSelf->__PVT___T_419 = ((IData)(vlSelf->__PVT___T_109)
                              ? vlSelf->__PVT__REG_11
                              : 0ULL);
    vlSelf->__PVT___T_416 = ((IData)(vlSelf->__PVT___T_106)
                              ? vlSelf->__PVT__REG_10
                              : 0ULL);
    vlSelf->__PVT___T_417 = ((IData)(vlSelf->__PVT___T_107)
                              ? vlSelf->__PVT__REG_10
                              : 0ULL);
    vlSelf->__PVT___T_414 = ((IData)(vlSelf->__PVT___T_104)
                              ? vlSelf->__PVT__REG_9
                              : 0ULL);
    vlSelf->__PVT___T_415 = ((IData)(vlSelf->__PVT___T_105)
                              ? vlSelf->__PVT__REG_9
                              : 0ULL);
    vlSelf->__PVT___T_412 = ((IData)(vlSelf->__PVT___T_102)
                              ? vlSelf->__PVT__REG_8
                              : 0ULL);
    vlSelf->__PVT___T_413 = ((IData)(vlSelf->__PVT___T_103)
                              ? vlSelf->__PVT__REG_8
                              : 0ULL);
    vlSelf->__PVT___T_410 = ((IData)(vlSelf->__PVT___T_100)
                              ? vlSelf->__PVT__REG_7
                              : 0ULL);
    vlSelf->__PVT___T_411 = ((IData)(vlSelf->__PVT___T_101)
                              ? vlSelf->__PVT__REG_7
                              : 0ULL);
    vlSelf->__PVT___T_408 = ((IData)(vlSelf->__PVT___T_98)
                              ? vlSelf->__PVT__REG_6
                              : 0ULL);
    vlSelf->__PVT___T_409 = ((IData)(vlSelf->__PVT___T_99)
                              ? vlSelf->__PVT__REG_6
                              : 0ULL);
    vlSelf->__PVT___T_406 = ((IData)(vlSelf->__PVT___T_96)
                              ? vlSelf->__PVT__REG_5
                              : 0ULL);
    vlSelf->__PVT___T_407 = ((IData)(vlSelf->__PVT___T_97)
                              ? vlSelf->__PVT__REG_5
                              : 0ULL);
    vlSelf->__PVT___T_403 = ((IData)(vlSelf->__PVT___T_93)
                              ? vlSelf->__PVT__reg_medeleg
                              : 0U);
    vlSelf->__PVT___T_402 = ((IData)(vlSelf->__PVT___T_92)
                              ? vlSelf->__PVT__reg_dscratch
                              : 0U);
    vlSelf->__PVT___T_404 = ((IData)(vlSelf->__PVT___T_94)
                              ? vlSelf->__PVT__REG_4
                              : 0ULL);
    vlSelf->__PVT___T_405 = ((IData)(vlSelf->__PVT___T_95)
                              ? vlSelf->__PVT__REG_4
                              : 0ULL);
    vlSelf->__PVT___T_401 = ((IData)(vlSelf->__PVT___T_91)
                              ? vlSelf->__PVT__reg_dpc
                              : 0U);
    vlSelf->__PVT___T_400 = ((IData)(vlSelf->__PVT___T_90)
                              ? vlSelf->__PVT___T_74
                              : 0U);
    vlSelf->__PVT___T_398 = ((IData)(vlSelf->__PVT___T_88)
                              ? vlSelf->__PVT__reg_mcause
                              : 0U);
    vlSelf->__PVT___T_397 = ((IData)(vlSelf->__PVT___T_87)
                              ? vlSelf->__PVT__reg_mtval
                              : 0U);
    vlSelf->__PVT___T_395 = ((IData)(vlSelf->__PVT___T_85)
                              ? vlSelf->__PVT__reg_mscratch
                              : 0U);
    vlSelf->__PVT___T_394 = ((IData)(vlSelf->__PVT___T_84)
                              ? (IData)(vlSelf->__PVT___T_73)
                              : 0U);
    vlSelf->__PVT___T_396 = ((IData)(vlSelf->__PVT___T_86)
                              ? vlSelf->__PVT__reg_mepc
                              : 0U);
    vlSelf->__PVT___T_393 = ((IData)(vlSelf->__PVT___T_83)
                              ? (IData)(vlSelf->__PVT___T_72)
                              : 0U);
    vlSelf->__PVT___T_391 = ((IData)(vlSelf->__PVT___T_81)
                              ? vlSelf->__PVT__read_mstatus
                              : 0ULL);
    vlSelf->__PVT___T_385 = ((IData)(vlSelf->__PVT___T_75)
                              ? vlSelf->__PVT___T_4
                              : 0ULL);
    vlSelf->__PVT___T_386 = ((IData)(vlSelf->__PVT___T_76)
                              ? vlSelf->__PVT___T_9
                              : 0ULL);
    vlSelf->__PVT___GEN_2 = ((IData)(vlSelf->__PVT__io_exception)
                              ? 2U : vlSelf->__PVT__reg_mcause);
    vlSelf->__PVT___T_5 = (0x7fU & (VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT__REG_2)) 
                                    + VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___GEN_150))));
    vlSelf->__PVT___GEN_8 = (((IData)(vlSelf->__PVT__insn_ret) 
                              & (~ VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__io_decode_csr), 0xaU))) 
                             | (IData)(vlSelf->__PVT__reg_mstatus_mpie));
    vlSelf->__PVT___GEN_7 = (((IData)(vlSelf->__PVT__insn_ret) 
                              & (~ VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__io_decode_csr), 0xaU)))
                              ? (IData)(vlSelf->__PVT__reg_mstatus_mpie)
                              : (IData)(vlSelf->__PVT__reg_mstatus_mie));
    vlSelf->__PVT___GEN_6 = (((IData)(vlSelf->__PVT__insn_ret) 
                              & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__io_decode_csr), 0xaU))
                              ? vlSelf->__PVT__reg_dpc
                              : 0x80000004U);
    vlSelf->__PVT___GEN_227 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_466);
    vlSelf->__PVT___GEN_228 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_467);
    vlSelf->__PVT___GEN_225 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_464);
    vlSelf->__PVT___GEN_226 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_465);
    vlSelf->__PVT___GEN_223 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_462);
    vlSelf->__PVT___GEN_224 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_463);
    vlSelf->__PVT___GEN_221 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_460);
    vlSelf->__PVT___GEN_222 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_461);
    vlSelf->__PVT___GEN_219 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_458);
    vlSelf->__PVT___GEN_220 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_459);
    vlSelf->__PVT___GEN_217 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_456);
    vlSelf->__PVT___GEN_218 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_457);
    vlSelf->__PVT___GEN_215 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_454);
    vlSelf->__PVT___GEN_216 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_455);
    vlSelf->__PVT___GEN_213 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_452);
    vlSelf->__PVT___GEN_214 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_453);
    vlSelf->__PVT___GEN_211 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_450);
    vlSelf->__PVT___GEN_212 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_451);
    vlSelf->__PVT___GEN_209 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_448);
    vlSelf->__PVT___GEN_210 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_449);
    vlSelf->__PVT___GEN_207 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_446);
    vlSelf->__PVT___GEN_208 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_447);
    vlSelf->__PVT___GEN_205 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_444);
    vlSelf->__PVT___GEN_206 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_445);
    vlSelf->__PVT___GEN_203 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_442);
    vlSelf->__PVT___GEN_204 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_443);
    vlSelf->__PVT___GEN_201 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_440);
    vlSelf->__PVT___GEN_202 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_441);
    vlSelf->__PVT___GEN_199 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_438);
    vlSelf->__PVT___GEN_200 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_439);
    vlSelf->__PVT___GEN_197 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_436);
    vlSelf->__PVT___GEN_198 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_437);
    vlSelf->__PVT___GEN_195 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_434);
    vlSelf->__PVT___GEN_196 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_435);
    vlSelf->__PVT___GEN_193 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_432);
    vlSelf->__PVT___GEN_194 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_433);
    vlSelf->__PVT___GEN_191 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_430);
    vlSelf->__PVT___GEN_192 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_431);
    vlSelf->__PVT___GEN_189 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_428);
    vlSelf->__PVT___GEN_190 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_429);
    vlSelf->__PVT___GEN_187 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_426);
    vlSelf->__PVT___GEN_188 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_427);
    vlSelf->__PVT___GEN_185 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_424);
    vlSelf->__PVT___GEN_186 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_425);
    vlSelf->__PVT___GEN_183 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_422);
    vlSelf->__PVT___GEN_184 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_423);
    vlSelf->__PVT___GEN_181 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_420);
    vlSelf->__PVT___GEN_182 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_421);
    vlSelf->__PVT___GEN_179 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_418);
    vlSelf->__PVT___GEN_180 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_419);
    vlSelf->__PVT___GEN_177 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_416);
    vlSelf->__PVT___GEN_178 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_417);
    vlSelf->__PVT___GEN_175 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_414);
    vlSelf->__PVT___GEN_176 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_415);
    vlSelf->__PVT___GEN_173 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_412);
    vlSelf->__PVT___GEN_174 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_413);
    vlSelf->__PVT___GEN_171 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_410);
    vlSelf->__PVT___GEN_172 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_411);
    vlSelf->__PVT___GEN_169 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_408);
    vlSelf->__PVT___GEN_170 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_409);
    vlSelf->__PVT___GEN_167 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_406);
    vlSelf->__PVT___GEN_168 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_407);
    vlSelf->__PVT___GEN_164 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_403);
    vlSelf->__PVT___GEN_163 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_402);
    vlSelf->__PVT___GEN_165 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_404);
    vlSelf->__PVT___GEN_166 = VL_EXTEND_QQ(64,40, vlSelf->__PVT___T_405);
    vlSelf->__PVT___GEN_162 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_401);
    vlSelf->__PVT___GEN_161 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_400);
    vlSelf->__PVT___GEN_160 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_398);
    vlSelf->__PVT___GEN_159 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_397);
    vlSelf->__PVT___GEN_157 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_395);
    vlSelf->__PVT___GEN_156 = VL_EXTEND_QI(64,16, (IData)(vlSelf->__PVT___T_394));
    vlSelf->__PVT___GEN_158 = VL_EXTEND_QI(64,32, vlSelf->__PVT___T_396);
    vlSelf->__PVT___GEN_155 = VL_EXTEND_QI(64,16, (IData)(vlSelf->__PVT___T_393));
    vlSelf->__PVT___GEN_153 = VL_EXTEND_QQ(64,35, vlSelf->__PVT___T_391);
    vlSelf->__PVT___T_470 = (vlSelf->__PVT___T_385 
                             | vlSelf->__PVT___T_386);
    vlSelf->__PVT___GEN_11 = ((IData)(vlSelf->__PVT__insn_call)
                               ? 0xbU : vlSelf->__PVT___GEN_2);
    vlSelf->__PVT___GEN_1 = ((1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT___T_5), 6U))
                              ? vlSelf->__PVT___T_8
                              : vlSelf->__PVT__REG_3);
    vlSelf->__PVT__io_evec = (((IData)(vlSelf->__PVT__insn_ret) 
                               & (~ VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__io_decode_csr), 0xaU)))
                               ? vlSelf->__PVT__reg_mepc
                               : vlSelf->__PVT___GEN_6);
    vlSelf->__PVT___T_471 = (vlSelf->__PVT___T_470 
                             | vlSelf->__PVT___GEN_151);
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__insn_break)
                               ? 3U : vlSelf->__PVT___GEN_11);
    vlSelf->__PVT___T_474 = (vlSelf->__PVT___T_471 
                             | vlSelf->__PVT___GEN_152);
    vlSelf->__PVT___T_475 = (vlSelf->__PVT___T_474 
                             | vlSelf->__PVT___GEN_153);
    vlSelf->__PVT___T_476 = (vlSelf->__PVT___T_475 
                             | vlSelf->__PVT___GEN_154);
    vlSelf->__PVT___T_477 = (vlSelf->__PVT___T_476 
                             | vlSelf->__PVT___GEN_155);
    vlSelf->__PVT___T_478 = (vlSelf->__PVT___T_477 
                             | vlSelf->__PVT___GEN_156);
    vlSelf->__PVT___T_479 = (vlSelf->__PVT___T_478 
                             | vlSelf->__PVT___GEN_157);
    vlSelf->__PVT___T_480 = (vlSelf->__PVT___T_479 
                             | vlSelf->__PVT___GEN_158);
    vlSelf->__PVT___T_481 = (vlSelf->__PVT___T_480 
                             | vlSelf->__PVT___GEN_159);
    vlSelf->__PVT___T_482 = (vlSelf->__PVT___T_481 
                             | vlSelf->__PVT___GEN_160);
    vlSelf->__PVT___T_484 = (vlSelf->__PVT___T_482 
                             | vlSelf->__PVT___GEN_161);
    vlSelf->__PVT___T_485 = (vlSelf->__PVT___T_484 
                             | vlSelf->__PVT___GEN_162);
    vlSelf->__PVT___T_486 = (vlSelf->__PVT___T_485 
                             | vlSelf->__PVT___GEN_163);
    vlSelf->__PVT___T_487 = (vlSelf->__PVT___T_486 
                             | vlSelf->__PVT___GEN_164);
    vlSelf->__PVT___T_488 = (vlSelf->__PVT___T_487 
                             | vlSelf->__PVT___GEN_165);
    vlSelf->__PVT___T_489 = (vlSelf->__PVT___T_488 
                             | vlSelf->__PVT___GEN_166);
    vlSelf->__PVT___T_490 = (vlSelf->__PVT___T_489 
                             | vlSelf->__PVT___GEN_167);
    vlSelf->__PVT___T_491 = (vlSelf->__PVT___T_490 
                             | vlSelf->__PVT___GEN_168);
    vlSelf->__PVT___T_492 = (vlSelf->__PVT___T_491 
                             | vlSelf->__PVT___GEN_169);
    vlSelf->__PVT___T_493 = (vlSelf->__PVT___T_492 
                             | vlSelf->__PVT___GEN_170);
    vlSelf->__PVT___T_494 = (vlSelf->__PVT___T_493 
                             | vlSelf->__PVT___GEN_171);
    vlSelf->__PVT___T_495 = (vlSelf->__PVT___T_494 
                             | vlSelf->__PVT___GEN_172);
    vlSelf->__PVT___T_496 = (vlSelf->__PVT___T_495 
                             | vlSelf->__PVT___GEN_173);
    vlSelf->__PVT___T_497 = (vlSelf->__PVT___T_496 
                             | vlSelf->__PVT___GEN_174);
    vlSelf->__PVT___T_498 = (vlSelf->__PVT___T_497 
                             | vlSelf->__PVT___GEN_175);
    vlSelf->__PVT___T_499 = (vlSelf->__PVT___T_498 
                             | vlSelf->__PVT___GEN_176);
    vlSelf->__PVT___T_500 = (vlSelf->__PVT___T_499 
                             | vlSelf->__PVT___GEN_177);
    vlSelf->__PVT___T_501 = (vlSelf->__PVT___T_500 
                             | vlSelf->__PVT___GEN_178);
    vlSelf->__PVT___T_502 = (vlSelf->__PVT___T_501 
                             | vlSelf->__PVT___GEN_179);
    vlSelf->__PVT___T_503 = (vlSelf->__PVT___T_502 
                             | vlSelf->__PVT___GEN_180);
    vlSelf->__PVT___T_504 = (vlSelf->__PVT___T_503 
                             | vlSelf->__PVT___GEN_181);
    vlSelf->__PVT___T_505 = (vlSelf->__PVT___T_504 
                             | vlSelf->__PVT___GEN_182);
    vlSelf->__PVT___T_506 = (vlSelf->__PVT___T_505 
                             | vlSelf->__PVT___GEN_183);
    vlSelf->__PVT___T_507 = (vlSelf->__PVT___T_506 
                             | vlSelf->__PVT___GEN_184);
    vlSelf->__PVT___T_508 = (vlSelf->__PVT___T_507 
                             | vlSelf->__PVT___GEN_185);
    vlSelf->__PVT___T_509 = (vlSelf->__PVT___T_508 
                             | vlSelf->__PVT___GEN_186);
    vlSelf->__PVT___T_510 = (vlSelf->__PVT___T_509 
                             | vlSelf->__PVT___GEN_187);
    vlSelf->__PVT___T_511 = (vlSelf->__PVT___T_510 
                             | vlSelf->__PVT___GEN_188);
    vlSelf->__PVT___T_512 = (vlSelf->__PVT___T_511 
                             | vlSelf->__PVT___GEN_189);
    vlSelf->__PVT___T_513 = (vlSelf->__PVT___T_512 
                             | vlSelf->__PVT___GEN_190);
    vlSelf->__PVT___T_514 = (vlSelf->__PVT___T_513 
                             | vlSelf->__PVT___GEN_191);
    vlSelf->__PVT___T_515 = (vlSelf->__PVT___T_514 
                             | vlSelf->__PVT___GEN_192);
    vlSelf->__PVT___T_516 = (vlSelf->__PVT___T_515 
                             | vlSelf->__PVT___GEN_193);
    vlSelf->__PVT___T_517 = (vlSelf->__PVT___T_516 
                             | vlSelf->__PVT___GEN_194);
    vlSelf->__PVT___T_518 = (vlSelf->__PVT___T_517 
                             | vlSelf->__PVT___GEN_195);
    vlSelf->__PVT___T_519 = (vlSelf->__PVT___T_518 
                             | vlSelf->__PVT___GEN_196);
    vlSelf->__PVT___T_520 = (vlSelf->__PVT___T_519 
                             | vlSelf->__PVT___GEN_197);
    vlSelf->__PVT___T_521 = (vlSelf->__PVT___T_520 
                             | vlSelf->__PVT___GEN_198);
    vlSelf->__PVT___T_522 = (vlSelf->__PVT___T_521 
                             | vlSelf->__PVT___GEN_199);
    vlSelf->__PVT___T_523 = (vlSelf->__PVT___T_522 
                             | vlSelf->__PVT___GEN_200);
    vlSelf->__PVT___T_524 = (vlSelf->__PVT___T_523 
                             | vlSelf->__PVT___GEN_201);
    vlSelf->__PVT___T_525 = (vlSelf->__PVT___T_524 
                             | vlSelf->__PVT___GEN_202);
    vlSelf->__PVT___T_526 = (vlSelf->__PVT___T_525 
                             | vlSelf->__PVT___GEN_203);
    vlSelf->__PVT___T_527 = (vlSelf->__PVT___T_526 
                             | vlSelf->__PVT___GEN_204);
    vlSelf->__PVT___T_528 = (vlSelf->__PVT___T_527 
                             | vlSelf->__PVT___GEN_205);
    vlSelf->__PVT___T_529 = (vlSelf->__PVT___T_528 
                             | vlSelf->__PVT___GEN_206);
    vlSelf->__PVT___T_530 = (vlSelf->__PVT___T_529 
                             | vlSelf->__PVT___GEN_207);
    vlSelf->__PVT___T_531 = (vlSelf->__PVT___T_530 
                             | vlSelf->__PVT___GEN_208);
    vlSelf->__PVT___T_532 = (vlSelf->__PVT___T_531 
                             | vlSelf->__PVT___GEN_209);
    vlSelf->__PVT___T_533 = (vlSelf->__PVT___T_532 
                             | vlSelf->__PVT___GEN_210);
    vlSelf->__PVT___T_534 = (vlSelf->__PVT___T_533 
                             | vlSelf->__PVT___GEN_211);
    vlSelf->__PVT___T_535 = (vlSelf->__PVT___T_534 
                             | vlSelf->__PVT___GEN_212);
    vlSelf->__PVT___T_536 = (vlSelf->__PVT___T_535 
                             | vlSelf->__PVT___GEN_213);
    vlSelf->__PVT___T_537 = (vlSelf->__PVT___T_536 
                             | vlSelf->__PVT___GEN_214);
    vlSelf->__PVT___T_538 = (vlSelf->__PVT___T_537 
                             | vlSelf->__PVT___GEN_215);
    vlSelf->__PVT___T_539 = (vlSelf->__PVT___T_538 
                             | vlSelf->__PVT___GEN_216);
    vlSelf->__PVT___T_540 = (vlSelf->__PVT___T_539 
                             | vlSelf->__PVT___GEN_217);
    vlSelf->__PVT___T_541 = (vlSelf->__PVT___T_540 
                             | vlSelf->__PVT___GEN_218);
    vlSelf->__PVT___T_542 = (vlSelf->__PVT___T_541 
                             | vlSelf->__PVT___GEN_219);
    vlSelf->__PVT___T_543 = (vlSelf->__PVT___T_542 
                             | vlSelf->__PVT___GEN_220);
    vlSelf->__PVT___T_544 = (vlSelf->__PVT___T_543 
                             | vlSelf->__PVT___GEN_221);
    vlSelf->__PVT___T_545 = (vlSelf->__PVT___T_544 
                             | vlSelf->__PVT___GEN_222);
    vlSelf->__PVT___T_546 = (vlSelf->__PVT___T_545 
                             | vlSelf->__PVT___GEN_223);
    vlSelf->__PVT___T_547 = (vlSelf->__PVT___T_546 
                             | vlSelf->__PVT___GEN_224);
    vlSelf->__PVT___T_548 = (vlSelf->__PVT___T_547 
                             | vlSelf->__PVT___GEN_225);
    vlSelf->__PVT___T_549 = (vlSelf->__PVT___T_548 
                             | vlSelf->__PVT___GEN_226);
    vlSelf->__PVT___T_550 = (vlSelf->__PVT___T_549 
                             | vlSelf->__PVT___GEN_227);
    vlSelf->__PVT___T_551 = (vlSelf->__PVT___T_550 
                             | vlSelf->__PVT___GEN_228);
    vlSelf->__PVT__io_rw_rdata = VL_SEL_IQII(64, vlSelf->__PVT___T_551, 0U, 0x20U);
    vlSelf->__PVT___T_168 = ((IData)(vlSelf->__PVT___T_167)
                              ? vlSelf->__PVT__io_rw_rdata
                              : 0U);
}

VL_INLINE_OPT void Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__2(Vsodor_top_CSRFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsodor_top_CSRFile___nba_comb__TOP__sodor_top__sodor_core__d__csr__2\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((((IData)(vlSelf->__PVT__io_exception) 
                                | (IData)(vlSelf->__PVT__insn_call)) 
                               | (IData)(vlSelf->__PVT__insn_break))
                               ? vlSelf->__PVT__io_pc
                               : vlSelf->__PVT__reg_mepc);
    vlSelf->__PVT___T_169 = (vlSelf->__PVT___T_168 
                             | vlSelf->__PVT__io_rw_wdata);
    vlSelf->__PVT__wdata = (vlSelf->__PVT___T_169 & vlSelf->__PVT___T_172);
    vlSelf->__PVT___WIRE_8 = VL_EXTEND_QI(35,32, vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_801 = (0x8000001fU & vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_628 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_4, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_633 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_5, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_638 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_6, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_643 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_7, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_648 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_8, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_653 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_9, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_658 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_10, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_663 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_11, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_668 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_12, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_673 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_13, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_678 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_14, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_683 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_15, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_688 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_16, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_693 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_17, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_698 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_18, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_703 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_19, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_708 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_20, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_713 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_21, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_718 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_22, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_723 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_23, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_728 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_24, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_733 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_25, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_738 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_26, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_743 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_27, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_748 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_28, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_753 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_29, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_758 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_30, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_763 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_31, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_768 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_32, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_773 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_33, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_778 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_34, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_783 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IQII(40, vlSelf->__PVT__REG_35, 0x20U, 8U)), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_789 = VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IQII(64, vlSelf->__PVT___T_4, 0x20U, 0x20U), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_796 = VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IQII(64, vlSelf->__PVT___T_9, 0x20U, 0x20U), vlSelf->__PVT__wdata);
    vlSelf->__PVT___T_626 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_4, 0U, 0x20U));
    vlSelf->__PVT___T_631 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_5, 0U, 0x20U));
    vlSelf->__PVT___T_636 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_6, 0U, 0x20U));
    vlSelf->__PVT___T_641 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_7, 0U, 0x20U));
    vlSelf->__PVT___T_646 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_8, 0U, 0x20U));
    vlSelf->__PVT___T_651 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_9, 0U, 0x20U));
    vlSelf->__PVT___T_656 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_10, 0U, 0x20U));
    vlSelf->__PVT___T_661 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_11, 0U, 0x20U));
    vlSelf->__PVT___T_666 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_12, 0U, 0x20U));
    vlSelf->__PVT___T_671 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_13, 0U, 0x20U));
    vlSelf->__PVT___T_676 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_14, 0U, 0x20U));
    vlSelf->__PVT___T_681 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_15, 0U, 0x20U));
    vlSelf->__PVT___T_686 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_16, 0U, 0x20U));
    vlSelf->__PVT___T_691 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_17, 0U, 0x20U));
    vlSelf->__PVT___T_696 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_18, 0U, 0x20U));
    vlSelf->__PVT___T_701 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_19, 0U, 0x20U));
    vlSelf->__PVT___T_706 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_20, 0U, 0x20U));
    vlSelf->__PVT___T_711 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_21, 0U, 0x20U));
    vlSelf->__PVT___T_716 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_22, 0U, 0x20U));
    vlSelf->__PVT___T_721 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_23, 0U, 0x20U));
    vlSelf->__PVT___T_726 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_24, 0U, 0x20U));
    vlSelf->__PVT___T_731 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_25, 0U, 0x20U));
    vlSelf->__PVT___T_736 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_26, 0U, 0x20U));
    vlSelf->__PVT___T_741 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_27, 0U, 0x20U));
    vlSelf->__PVT___T_746 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_28, 0U, 0x20U));
    vlSelf->__PVT___T_751 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_29, 0U, 0x20U));
    vlSelf->__PVT___T_756 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_30, 0U, 0x20U));
    vlSelf->__PVT___T_761 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_31, 0U, 0x20U));
    vlSelf->__PVT___T_766 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_32, 0U, 0x20U));
    vlSelf->__PVT___T_771 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_33, 0U, 0x20U));
    vlSelf->__PVT___T_776 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_34, 0U, 0x20U));
    vlSelf->__PVT___T_781 = VL_CONCAT_QII(40,8,32, 
                                          (0xffU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__wdata, 0U, 8U)), 
                                          VL_SEL_IQII(40, vlSelf->__PVT__REG_35, 0U, 0x20U));
    vlSelf->__PVT___T_786 = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__wdata, 
                                          VL_SEL_IQII(64, vlSelf->__PVT___T_4, 0U, 0x20U));
    vlSelf->__PVT___T_793 = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__wdata, 
                                          VL_SEL_IQII(64, vlSelf->__PVT___T_9, 0U, 0x20U));
    vlSelf->__PVT___T_799 = VL_EXTEND_II(32,30, (0x3fffffffU 
                                                 & VL_SEL_IIII(32, vlSelf->__PVT__wdata, 2U, 0x1eU)));
    vlSelf->__PVT___GEN_21 = ((IData)(vlSelf->__PVT___T_95)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_626)
                               : vlSelf->__PVT___T_10);
    vlSelf->__PVT___GEN_23 = ((IData)(vlSelf->__PVT___T_97)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_631)
                               : vlSelf->__PVT___T_11);
    vlSelf->__PVT___GEN_25 = ((IData)(vlSelf->__PVT___T_99)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_636)
                               : vlSelf->__PVT___T_12);
    vlSelf->__PVT___GEN_27 = ((IData)(vlSelf->__PVT___T_101)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_641)
                               : vlSelf->__PVT___T_13);
    vlSelf->__PVT___GEN_29 = ((IData)(vlSelf->__PVT___T_103)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_646)
                               : vlSelf->__PVT___T_14);
    vlSelf->__PVT___GEN_31 = ((IData)(vlSelf->__PVT___T_105)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_651)
                               : vlSelf->__PVT___T_15);
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT___T_107)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_656)
                               : vlSelf->__PVT___T_16);
    vlSelf->__PVT___GEN_35 = ((IData)(vlSelf->__PVT___T_109)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_661)
                               : vlSelf->__PVT___T_17);
    vlSelf->__PVT___GEN_37 = ((IData)(vlSelf->__PVT___T_111)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_666)
                               : vlSelf->__PVT___T_18);
    vlSelf->__PVT___GEN_39 = ((IData)(vlSelf->__PVT___T_113)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_671)
                               : vlSelf->__PVT___T_19);
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT___T_115)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_676)
                               : vlSelf->__PVT___T_20);
    vlSelf->__PVT___GEN_43 = ((IData)(vlSelf->__PVT___T_117)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_681)
                               : vlSelf->__PVT___T_21);
    vlSelf->__PVT___GEN_45 = ((IData)(vlSelf->__PVT___T_119)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_686)
                               : vlSelf->__PVT___T_22);
    vlSelf->__PVT___GEN_47 = ((IData)(vlSelf->__PVT___T_121)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_691)
                               : vlSelf->__PVT___T_23);
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_123)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_696)
                               : vlSelf->__PVT___T_24);
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT___T_125)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_701)
                               : vlSelf->__PVT___T_25);
    vlSelf->__PVT___GEN_53 = ((IData)(vlSelf->__PVT___T_127)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_706)
                               : vlSelf->__PVT___T_26);
    vlSelf->__PVT___GEN_55 = ((IData)(vlSelf->__PVT___T_129)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_711)
                               : vlSelf->__PVT___T_27);
    vlSelf->__PVT___GEN_57 = ((IData)(vlSelf->__PVT___T_131)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_716)
                               : vlSelf->__PVT___T_28);
    vlSelf->__PVT___GEN_59 = ((IData)(vlSelf->__PVT___T_133)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_721)
                               : vlSelf->__PVT___T_29);
    vlSelf->__PVT___GEN_61 = ((IData)(vlSelf->__PVT___T_135)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_726)
                               : vlSelf->__PVT___T_30);
    vlSelf->__PVT___GEN_63 = ((IData)(vlSelf->__PVT___T_137)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_731)
                               : vlSelf->__PVT___T_31);
    vlSelf->__PVT___GEN_65 = ((IData)(vlSelf->__PVT___T_139)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_736)
                               : vlSelf->__PVT___T_32);
    vlSelf->__PVT___GEN_67 = ((IData)(vlSelf->__PVT___T_141)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_741)
                               : vlSelf->__PVT___T_33);
    vlSelf->__PVT___GEN_69 = ((IData)(vlSelf->__PVT___T_143)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_746)
                               : vlSelf->__PVT___T_34);
    vlSelf->__PVT___GEN_71 = ((IData)(vlSelf->__PVT___T_145)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_751)
                               : vlSelf->__PVT___T_35);
    vlSelf->__PVT___GEN_73 = ((IData)(vlSelf->__PVT___T_147)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_756)
                               : vlSelf->__PVT___T_36);
    vlSelf->__PVT___GEN_75 = ((IData)(vlSelf->__PVT___T_149)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_761)
                               : vlSelf->__PVT___T_37);
    vlSelf->__PVT___GEN_77 = ((IData)(vlSelf->__PVT___T_151)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_766)
                               : vlSelf->__PVT___T_38);
    vlSelf->__PVT___GEN_79 = ((IData)(vlSelf->__PVT___T_153)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_771)
                               : vlSelf->__PVT___T_39);
    vlSelf->__PVT___GEN_81 = ((IData)(vlSelf->__PVT___T_155)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_776)
                               : vlSelf->__PVT___T_40);
    vlSelf->__PVT___GEN_83 = ((IData)(vlSelf->__PVT___T_157)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_781)
                               : vlSelf->__PVT___T_41);
    vlSelf->__PVT___GEN_85 = ((IData)(vlSelf->__PVT___T_158)
                               ? vlSelf->__PVT___T_786
                               : VL_EXTEND_QI(64,7, (IData)(vlSelf->__PVT___T)));
    vlSelf->__PVT___GEN_89 = ((IData)(vlSelf->__PVT___T_159)
                               ? vlSelf->__PVT___T_793
                               : VL_EXTEND_QI(64,7, (IData)(vlSelf->__PVT___T_5)));
    vlSelf->__PVT___GEN_230 = VL_CONCAT_QII(34,32,2, vlSelf->__PVT___T_799, 0U);
    vlSelf->__PVT___GEN_22 = ((IData)(vlSelf->__PVT___T_94)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_628)
                               : vlSelf->__PVT___GEN_21);
    vlSelf->__PVT___GEN_24 = ((IData)(vlSelf->__PVT___T_96)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_633)
                               : vlSelf->__PVT___GEN_23);
    vlSelf->__PVT___GEN_26 = ((IData)(vlSelf->__PVT___T_98)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_638)
                               : vlSelf->__PVT___GEN_25);
    vlSelf->__PVT___GEN_28 = ((IData)(vlSelf->__PVT___T_100)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_643)
                               : vlSelf->__PVT___GEN_27);
    vlSelf->__PVT___GEN_30 = ((IData)(vlSelf->__PVT___T_102)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_648)
                               : vlSelf->__PVT___GEN_29);
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT___T_104)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_653)
                               : vlSelf->__PVT___GEN_31);
    vlSelf->__PVT___GEN_34 = ((IData)(vlSelf->__PVT___T_106)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_658)
                               : vlSelf->__PVT___GEN_33);
    vlSelf->__PVT___GEN_36 = ((IData)(vlSelf->__PVT___T_108)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_663)
                               : vlSelf->__PVT___GEN_35);
    vlSelf->__PVT___GEN_38 = ((IData)(vlSelf->__PVT___T_110)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_668)
                               : vlSelf->__PVT___GEN_37);
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT___T_112)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_673)
                               : vlSelf->__PVT___GEN_39);
    vlSelf->__PVT___GEN_42 = ((IData)(vlSelf->__PVT___T_114)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_678)
                               : vlSelf->__PVT___GEN_41);
    vlSelf->__PVT___GEN_44 = ((IData)(vlSelf->__PVT___T_116)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_683)
                               : vlSelf->__PVT___GEN_43);
    vlSelf->__PVT___GEN_46 = ((IData)(vlSelf->__PVT___T_118)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_688)
                               : vlSelf->__PVT___GEN_45);
    vlSelf->__PVT___GEN_48 = ((IData)(vlSelf->__PVT___T_120)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_693)
                               : vlSelf->__PVT___GEN_47);
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_122)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_698)
                               : vlSelf->__PVT___GEN_49);
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT___T_124)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_703)
                               : vlSelf->__PVT___GEN_51);
    vlSelf->__PVT___GEN_54 = ((IData)(vlSelf->__PVT___T_126)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_708)
                               : vlSelf->__PVT___GEN_53);
    vlSelf->__PVT___GEN_56 = ((IData)(vlSelf->__PVT___T_128)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_713)
                               : vlSelf->__PVT___GEN_55);
    vlSelf->__PVT___GEN_58 = ((IData)(vlSelf->__PVT___T_130)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_718)
                               : vlSelf->__PVT___GEN_57);
    vlSelf->__PVT___GEN_60 = ((IData)(vlSelf->__PVT___T_132)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_723)
                               : vlSelf->__PVT___GEN_59);
    vlSelf->__PVT___GEN_62 = ((IData)(vlSelf->__PVT___T_134)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_728)
                               : vlSelf->__PVT___GEN_61);
    vlSelf->__PVT___GEN_64 = ((IData)(vlSelf->__PVT___T_136)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_733)
                               : vlSelf->__PVT___GEN_63);
    vlSelf->__PVT___GEN_66 = ((IData)(vlSelf->__PVT___T_138)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_738)
                               : vlSelf->__PVT___GEN_65);
    vlSelf->__PVT___GEN_68 = ((IData)(vlSelf->__PVT___T_140)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_743)
                               : vlSelf->__PVT___GEN_67);
    vlSelf->__PVT___GEN_70 = ((IData)(vlSelf->__PVT___T_142)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_748)
                               : vlSelf->__PVT___GEN_69);
    vlSelf->__PVT___GEN_72 = ((IData)(vlSelf->__PVT___T_144)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_753)
                               : vlSelf->__PVT___GEN_71);
    vlSelf->__PVT___GEN_74 = ((IData)(vlSelf->__PVT___T_146)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_758)
                               : vlSelf->__PVT___GEN_73);
    vlSelf->__PVT___GEN_76 = ((IData)(vlSelf->__PVT___T_148)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_763)
                               : vlSelf->__PVT___GEN_75);
    vlSelf->__PVT___GEN_78 = ((IData)(vlSelf->__PVT___T_150)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_768)
                               : vlSelf->__PVT___GEN_77);
    vlSelf->__PVT___GEN_80 = ((IData)(vlSelf->__PVT___T_152)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_773)
                               : vlSelf->__PVT___GEN_79);
    vlSelf->__PVT___GEN_82 = ((IData)(vlSelf->__PVT___T_154)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_778)
                               : vlSelf->__PVT___GEN_81);
    vlSelf->__PVT___GEN_84 = ((IData)(vlSelf->__PVT___T_156)
                               ? VL_EXTEND_QQ(41,40, vlSelf->__PVT___T_783)
                               : vlSelf->__PVT___GEN_83);
    vlSelf->__PVT___GEN_87 = ((IData)(vlSelf->__PVT___T_75)
                               ? vlSelf->__PVT___T_789
                               : vlSelf->__PVT___GEN_85);
    vlSelf->__PVT___GEN_91 = ((IData)(vlSelf->__PVT___T_76)
                               ? vlSelf->__PVT___T_796
                               : vlSelf->__PVT___GEN_89);
    vlSelf->__PVT___T_800 = VL_EXTEND_QQ(35,34, vlSelf->__PVT___GEN_230);
    vlSelf->__PVT___GEN_107 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_22
                                : vlSelf->__PVT___T_10);
    vlSelf->__PVT___GEN_108 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_24
                                : vlSelf->__PVT___T_11);
    vlSelf->__PVT___GEN_109 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_26
                                : vlSelf->__PVT___T_12);
    vlSelf->__PVT___GEN_110 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_28
                                : vlSelf->__PVT___T_13);
    vlSelf->__PVT___GEN_111 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_30
                                : vlSelf->__PVT___T_14);
    vlSelf->__PVT___GEN_112 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_32
                                : vlSelf->__PVT___T_15);
    vlSelf->__PVT___GEN_113 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_34
                                : vlSelf->__PVT___T_16);
    vlSelf->__PVT___GEN_114 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_36
                                : vlSelf->__PVT___T_17);
    vlSelf->__PVT___GEN_115 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_38
                                : vlSelf->__PVT___T_18);
    vlSelf->__PVT___GEN_116 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_40
                                : vlSelf->__PVT___T_19);
    vlSelf->__PVT___GEN_117 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_42
                                : vlSelf->__PVT___T_20);
    vlSelf->__PVT___GEN_118 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_44
                                : vlSelf->__PVT___T_21);
    vlSelf->__PVT___GEN_119 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_46
                                : vlSelf->__PVT___T_22);
    vlSelf->__PVT___GEN_120 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_48
                                : vlSelf->__PVT___T_23);
    vlSelf->__PVT___GEN_121 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_50
                                : vlSelf->__PVT___T_24);
    vlSelf->__PVT___GEN_122 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_52
                                : vlSelf->__PVT___T_25);
    vlSelf->__PVT___GEN_123 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_54
                                : vlSelf->__PVT___T_26);
    vlSelf->__PVT___GEN_124 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_56
                                : vlSelf->__PVT___T_27);
    vlSelf->__PVT___GEN_125 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_58
                                : vlSelf->__PVT___T_28);
    vlSelf->__PVT___GEN_126 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_60
                                : vlSelf->__PVT___T_29);
    vlSelf->__PVT___GEN_127 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_62
                                : vlSelf->__PVT___T_30);
    vlSelf->__PVT___GEN_128 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_64
                                : vlSelf->__PVT___T_31);
    vlSelf->__PVT___GEN_129 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_66
                                : vlSelf->__PVT___T_32);
    vlSelf->__PVT___GEN_130 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_68
                                : vlSelf->__PVT___T_33);
    vlSelf->__PVT___GEN_131 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_70
                                : vlSelf->__PVT___T_34);
    vlSelf->__PVT___GEN_132 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_72
                                : vlSelf->__PVT___T_35);
    vlSelf->__PVT___GEN_133 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_74
                                : vlSelf->__PVT___T_36);
    vlSelf->__PVT___GEN_134 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_76
                                : vlSelf->__PVT___T_37);
    vlSelf->__PVT___GEN_135 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_78
                                : vlSelf->__PVT___T_38);
    vlSelf->__PVT___GEN_136 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_80
                                : vlSelf->__PVT___T_39);
    vlSelf->__PVT___GEN_137 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_82
                                : vlSelf->__PVT___T_40);
    vlSelf->__PVT___GEN_138 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_84
                                : vlSelf->__PVT___T_41);
    vlSelf->__PVT___GEN_139 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_87
                                : VL_EXTEND_QI(64,7, (IData)(vlSelf->__PVT___T)));
    vlSelf->__PVT___GEN_141 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_91
                                : VL_EXTEND_QI(64,7, (IData)(vlSelf->__PVT___T_5)));
    vlSelf->__PVT___GEN_95 = ((IData)(vlSelf->__PVT___T_86)
                               ? vlSelf->__PVT___T_800
                               : VL_EXTEND_QI(35,32, vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_145 = ((IData)(vlSelf->__PVT__wen)
                                ? vlSelf->__PVT___GEN_95
                                : VL_EXTEND_QI(35,32, vlSelf->__PVT___GEN_13));
}
