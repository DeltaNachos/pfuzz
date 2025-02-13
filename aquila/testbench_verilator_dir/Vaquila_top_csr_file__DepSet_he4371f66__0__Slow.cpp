// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_top__Syms.h"
#include "Vaquila_top_csr_file.h"

VL_ATTR_COLD void Vaquila_top_csr_file___eval_static__TOP__aquila_top__core__CSR(Vaquila_top_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_csr_file___eval_static__TOP__aquila_top__core__CSR\n"); );
    // Body
    vlSelf->__PVT__minstret_r = 0ULL;
}

VL_ATTR_COLD void Vaquila_top_csr_file___eval_initial__TOP__aquila_top__core__CSR(Vaquila_top_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_csr_file___eval_initial__TOP__aquila_top__core__CSR\n"); );
    // Body
    vlSelf->__PVT__mvendorid = 0U;
    vlSelf->__PVT__marchid = 0U;
    vlSelf->__PVT__mimpid = 0U;
    vlSelf->__PVT__mhartid = 0U;
}

VL_ATTR_COLD void Vaquila_top_csr_file___stl_sequent__TOP__aquila_top__core__CSR__0(Vaquila_top_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_csr_file___stl_sequent__TOP__aquila_top__core__CSR__0\n"); );
    // Body
    vlSelf->__PVT__privilege_level_o = vlSelf->__PVT__privilege_level_r;
    vlSelf->__PVT__mtvec_base = VL_CONCAT_III(32,30,2, 
                                              (0x3fffffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__mtvec_r, 2U, 0x1eU)), 0U);
    vlSelf->__PVT__stvec_base = VL_CONCAT_III(32,30,2, 
                                              (0x3fffffffU 
                                               & VL_SEL_IIII(32, vlSelf->__PVT__stvec_r, 2U, 0x1eU)), 0U);
    vlSelf->__PVT__sstatus = VL_CONCAT_III(32,1,31, 
                                           (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mstatus_r, 0x1fU)), 
                                           VL_EXTEND_II(31,20, 
                                                        VL_CONCAT_III(20,2,18, 
                                                                      (3U 
                                                                       & VL_SEL_IIII(32, vlSelf->__PVT__mstatus_r, 0x12U, 2U)), 
                                                                      VL_EXTEND_II(18,17, 
                                                                                VL_CONCAT_III(17,4,13, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__mstatus_r, 0xdU, 4U)), 
                                                                                VL_EXTEND_II(13,9, 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__mstatus_r, 8U)), 
                                                                                VL_EXTEND_II(8,6, 
                                                                                VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__mstatus_r, 4U, 2U)), 
                                                                                VL_EXTEND_II(4,2, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__mstatus_r, 0U, 2U))))))))))));
    vlSelf->__PVT__sip = VL_EXTEND_II(32,30, VL_CONCAT_III(30,22,8, 
                                                           VL_EXTEND_II(22,2, 
                                                                        (3U 
                                                                         & VL_SEL_IIII(32, vlSelf->__PVT__mip_r, 8U, 2U))), 
                                                           VL_EXTEND_II(8,6, 
                                                                        VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__mip_r, 4U, 2U)), 
                                                                                VL_EXTEND_II(4,2, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__mip_r, 0U, 2U)))))));
    vlSelf->__PVT__sie = VL_EXTEND_II(32,30, VL_CONCAT_III(30,22,8, 
                                                           VL_EXTEND_II(22,2, 
                                                                        (3U 
                                                                         & VL_SEL_IIII(32, vlSelf->__PVT__mie_r, 8U, 2U))), 
                                                           VL_EXTEND_II(8,6, 
                                                                        VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__mie_r, 4U, 2U)), 
                                                                                VL_EXTEND_II(4,2, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__mie_r, 0U, 2U)))))));
}

VL_ATTR_COLD void Vaquila_top_csr_file___stl_sequent__TOP__aquila_top__core__CSR__1(Vaquila_top_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_csr_file___stl_sequent__TOP__aquila_top__core__CSR__1\n"); );
    // Body
    vlSelf->__PVT__is_uret = (0U == (IData)(vlSelf->__PVT__sys_jump_csr_addr_i));
    vlSelf->__PVT__is_mret = (3U == (IData)(vlSelf->__PVT__sys_jump_csr_addr_i));
    vlSelf->__PVT__is_sret = (1U == (IData)(vlSelf->__PVT__sys_jump_csr_addr_i));
    vlSelf->__PVT__sys_jump_o = vlSelf->__PVT__sys_jump_i;
    vlSelf->__PVT__irq_taken = 0U;
    vlSelf->__PVT__interrupt_cause = 0U;
    vlSelf->__PVT__trap_to_M = 1U;
    if (vlSelf->__PVT__xcpt_valid_i) {
        vlSelf->__PVT__irq_taken = 1U;
        vlSelf->__PVT__trap_to_M = (1U & VL_BITSEL_IIII(32, 
                                                        ((3U 
                                                          == (IData)(vlSelf->__PVT__privilege_level_r))
                                                          ? 1U
                                                          : 
                                                         (~ 
                                                          VL_EXTEND_II(32,1, 
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__medeleg_r, 
                                                                                VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT__xcpt_cause_i))))))), 0U));
    } else if ((3U == (IData)(vlSelf->__PVT__privilege_level_r))) {
        if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mstatus_r, 3U))) {
            if (((IData)(vlSelf->__PVT__ext_irq_i) 
                 & VL_BITSEL_IIII(32, vlSelf->__PVT__mie_r, 0xbU))) {
                vlSelf->__PVT__irq_taken = 1U;
                vlSelf->__PVT__trap_to_M = 1U;
                vlSelf->__PVT__interrupt_cause = 0xbU;
            } else if (((IData)(vlSelf->__PVT__tmr_irq_i) 
                        & VL_BITSEL_IIII(32, vlSelf->__PVT__mie_r, 7U))) {
                vlSelf->__PVT__irq_taken = 1U;
                vlSelf->__PVT__trap_to_M = 1U;
                vlSelf->__PVT__interrupt_cause = 7U;
            } else if (((IData)(vlSelf->__PVT__sft_irq_i) 
                        & VL_BITSEL_IIII(32, vlSelf->__PVT__mie_r, 3U))) {
                vlSelf->__PVT__irq_taken = 1U;
                vlSelf->__PVT__trap_to_M = 1U;
                vlSelf->__PVT__interrupt_cause = 3U;
            } else {
                vlSelf->__PVT__irq_taken = 0U;
                vlSelf->__PVT__trap_to_M = 1U;
            }
        }
    } else {
        vlSelf->__PVT__irq_taken = 0U;
    }
    vlSelf->__PVT__sys_jump_csr_data_o = ((IData)(vlSelf->__PVT__is_mret)
                                           ? vlSelf->__PVT__mepc_r
                                           : ((IData)(vlSelf->__PVT__is_sret)
                                               ? vlSelf->__PVT__sepc_r
                                               : 0U));
    vlSelf->__PVT__scause_d = vlSelf->__PVT__scause_r;
    if (((IData)(vlSelf->__PVT__irq_taken) & (~ (IData)(vlSelf->__PVT__trap_to_M)))) {
        vlSelf->__PVT__scause_d = VL_EXTEND_II(32,4, (IData)(vlSelf->__PVT__xcpt_cause_i));
    }
    vlSelf->__PVT__mcause_d = vlSelf->__PVT__mcause_r;
    if (((IData)(vlSelf->__PVT__irq_taken) & (IData)(vlSelf->__PVT__trap_to_M))) {
        vlSelf->__PVT__mcause_d = ((IData)(vlSelf->__PVT__xcpt_valid_i)
                                    ? VL_EXTEND_II(32,4, (IData)(vlSelf->__PVT__xcpt_cause_i))
                                    : VL_CONCAT_III(32,28,4, 0x8000000U, (IData)(vlSelf->__PVT__interrupt_cause)));
    }
    vlSelf->__PVT__irq_taken_o = vlSelf->__PVT__irq_taken;
    vlSelf->__PVT__pc_handler = ((IData)(vlSelf->__PVT__trap_to_M)
                                  ? ((1U & ((0U == 
                                             (3U & 
                                              VL_SEL_IIII(32, vlSelf->__PVT__mtvec_r, 0U, 2U))) 
                                            | (~ VL_BITSEL_IIII(32, vlSelf->__PVT__mcause_d, 0x1fU))))
                                      ? vlSelf->__PVT__mtvec_base
                                      : (vlSelf->__PVT__mtvec_base 
                                         + ((0x1fU 
                                             >= 2U)
                                             ? (VL_EXTEND_II(32,31, 
                                                             (0x7fffffffU 
                                                              & VL_SEL_IIII(32, vlSelf->__PVT__mcause_d, 0U, 0x1fU))) 
                                                << 2U)
                                             : 0U)))
                                  : ((0U == (3U & VL_SEL_IIII(32, vlSelf->__PVT__mtvec_r, 0U, 2U)))
                                      ? vlSelf->__PVT__stvec_base
                                      : (vlSelf->__PVT__stvec_base 
                                         + ((0x1fU 
                                             >= 2U)
                                             ? (VL_EXTEND_II(32,31, 
                                                             (0x7fffffffU 
                                                              & VL_SEL_IIII(32, vlSelf->__PVT__scause_d, 0U, 0x1fU))) 
                                                << 2U)
                                             : 0U))));
    vlSelf->__PVT__pc_handler_o = vlSelf->__PVT__pc_handler;
}

VL_ATTR_COLD void Vaquila_top_csr_file___stl_sequent__TOP__aquila_top__core__CSR__2(Vaquila_top_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_csr_file___stl_sequent__TOP__aquila_top__core__CSR__2\n"); );
    // Body
    vlSelf->__PVT__csr_data = (((((((((0x300U == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                      | (0x304U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                     | (0x344U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                    | (0x305U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                   | (0x340U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                  | (0x341U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                 | (0x342U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                | (0x343U == (IData)(vlSelf->__PVT__csr_raddr_i)))
                                ? ((0x300U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                    ? vlSelf->__PVT__mstatus_r
                                    : ((0x304U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                        ? vlSelf->__PVT__mie_r
                                        : ((0x344U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))
                                            ? vlSelf->__PVT__mip_r
                                            : ((0x305U 
                                                == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                ? vlSelf->__PVT__mtvec_r
                                                : (
                                                   (0x340U 
                                                    == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                    ? vlSelf->__PVT__mscratch_r
                                                    : 
                                                   ((0x341U 
                                                     == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                     ? vlSelf->__PVT__mepc_r
                                                     : 
                                                    ((0x342U 
                                                      == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                      ? vlSelf->__PVT__mcause_r
                                                      : vlSelf->__PVT__mtval_r)))))))
                                : (((((((((0xb00U == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                          | (0xb80U 
                                             == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                         | (0xb02U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                        | (0xb82U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                       | (0xf11U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                      | (0xf12U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                     | (0xf13U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                    | (0xf14U == (IData)(vlSelf->__PVT__csr_raddr_i)))
                                    ? ((0xb00U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                        ? VL_SEL_IQII(64, vlSelf->__PVT__mcycle_r, 0U, 0x20U)
                                        : ((0xb80U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))
                                            ? VL_SEL_IQII(64, vlSelf->__PVT__mcycle_r, 0x20U, 0x20U)
                                            : ((0xb02U 
                                                == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                ? VL_SEL_IQII(64, vlSelf->__PVT__minstret_r, 0U, 0x20U)
                                                : (
                                                   (0xb82U 
                                                    == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                    ? 
                                                   VL_SEL_IQII(64, vlSelf->__PVT__minstret_r, 0x20U, 0x20U)
                                                    : 
                                                   ((0xf11U 
                                                     == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                     ? vlSelf->__PVT__mvendorid
                                                     : 
                                                    ((0xf12U 
                                                      == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                      ? vlSelf->__PVT__marchid
                                                      : 
                                                     ((0xf13U 
                                                       == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                       ? vlSelf->__PVT__mimpid
                                                       : vlSelf->__PVT__mhartid)))))))
                                    : (((((((((0x302U 
                                               == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                              | (0x303U 
                                                 == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                             | (0x100U 
                                                == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                            | (0x304U 
                                               == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                           | (0x144U 
                                              == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                          | (0x180U 
                                             == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                         | (0x105U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                        | (0x140U == (IData)(vlSelf->__PVT__csr_raddr_i)))
                                        ? ((0x302U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))
                                            ? vlSelf->__PVT__medeleg_r
                                            : ((0x303U 
                                                == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                ? vlSelf->__PVT__mideleg_r
                                                : (
                                                   (0x100U 
                                                    == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                    ? vlSelf->__PVT__sstatus
                                                    : 
                                                   ((0x304U 
                                                     == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                     ? vlSelf->__PVT__sie
                                                     : 
                                                    ((0x144U 
                                                      == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                      ? vlSelf->__PVT__sip
                                                      : 
                                                     ((0x180U 
                                                       == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                       ? vlSelf->__PVT__satp_r
                                                       : 
                                                      ((0x105U 
                                                        == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                        ? vlSelf->__PVT__stvec_r
                                                        : vlSelf->__PVT__sscratch_r)))))))
                                        : ((0x141U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))
                                            ? vlSelf->__PVT__sepc_r
                                            : ((0x142U 
                                                == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                ? vlSelf->__PVT__scause_r
                                                : (
                                                   (0x143U 
                                                    == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                    ? vlSelf->__PVT__stval_r
                                                    : 
                                                   ((0xc00U 
                                                     == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                     ? 
                                                    VL_SEL_IQII(64, vlSelf->__PVT__mcycle_r, 0U, 0x20U)
                                                     : 
                                                    ((0xc00U 
                                                      == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                      ? 
                                                     VL_SEL_IQII(64, vlSelf->__PVT__mcycle_r, 0x20U, 0x20U)
                                                      : 0U))))))));
    vlSelf->__PVT__csr_data_o = vlSelf->__PVT__csr_data;
}

VL_ATTR_COLD void Vaquila_top_csr_file___ctor_var_reset(Vaquila_top_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_top_csr_file___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_raddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ext_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tmr_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sft_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_taken_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_handler_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__nxt_unwb_PC_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sys_jump_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sys_jump_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__privilege_level_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__xcpt_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mstatus_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__misa_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mie_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mip_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcause_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__medeleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mideleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__minstret_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mvendorid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__marchid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mimpid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mhartid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sstatus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sip = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sie = VL_RAND_RESET_I(32);
    vlSelf->__PVT__satp_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scause_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__privilege_level_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mtvec_base = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stvec_base = VL_RAND_RESET_I(32);
    vlSelf->__PVT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_sret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_uret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__trap_to_M = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interrupt_cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__irq_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_handler = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mstatus_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mie_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mip_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mtvec_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mepc_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mcause_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mtval_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__medeleg_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mideleg_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mcycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__satp_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__stvec_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sepc_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__scause_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__stval_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__cycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__privilege_level_r = VL_RAND_RESET_I(2);
}
