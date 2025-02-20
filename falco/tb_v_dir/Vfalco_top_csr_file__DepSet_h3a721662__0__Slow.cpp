// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_csr_file.h"

VL_ATTR_COLD void Vfalco_top_csr_file___stl_sequent__TOP__falco_top__core__csr__0(Vfalco_top_csr_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_csr_file___stl_sequent__TOP__falco_top__core__csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_uret = (0U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__sys_jump_csr_addr_i));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__sys_jump_o 
        = vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__sys_jump_i;
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__privilege_level_o 
        = vlSelfRef.__PVT__privilege_level_r;
    vlSelfRef.__PVT__is_mret = (3U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__sys_jump_csr_addr_i));
    vlSelfRef.__PVT__is_sret = (1U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__sys_jump_csr_addr_i));
    vlSelfRef.__PVT__mtvec_base = VL_CONCAT_III(32,30,2, 
                                                (0x3fffffffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__mtvec_r, 2U, 0x1eU)), 0U);
    vlSelfRef.__PVT__stvec_base = VL_CONCAT_III(32,30,2, 
                                                (0x3fffffffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__stvec_r, 2U, 0x1eU)), 0U);
    vlSelfRef.__PVT__sstatus = VL_CONCAT_III(32,1,31, 
                                             (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__mstatus_r, 0x1fU)), 
                                             VL_EXTEND_II(31,20, 
                                                          VL_CONCAT_III(20,2,18, 
                                                                        (3U 
                                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__mstatus_r, 0x12U, 2U)), 
                                                                        VL_EXTEND_II(18,17, 
                                                                                VL_CONCAT_III(17,4,13, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mstatus_r, 0xdU, 4U)), 
                                                                                VL_EXTEND_II(13,9, 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mstatus_r, 8U)), 
                                                                                VL_EXTEND_II(8,6, 
                                                                                VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mstatus_r, 4U, 2U)), 
                                                                                VL_EXTEND_II(4,2, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mstatus_r, 0U, 2U))))))))))));
    vlSelfRef.__PVT__sip = VL_EXTEND_II(32,30, VL_CONCAT_III(30,22,8, 
                                                             VL_EXTEND_II(22,2, 
                                                                          (3U 
                                                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__mip_r, 8U, 2U))), 
                                                             VL_EXTEND_II(8,6, 
                                                                          VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mip_r, 4U, 2U)), 
                                                                                VL_EXTEND_II(4,2, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mip_r, 0U, 2U)))))));
    vlSelfRef.__PVT__sie = VL_EXTEND_II(32,30, VL_CONCAT_III(30,22,8, 
                                                             VL_EXTEND_II(22,2, 
                                                                          (3U 
                                                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__mie_r, 8U, 2U))), 
                                                             VL_EXTEND_II(8,6, 
                                                                          VL_CONCAT_III(6,2,4, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mie_r, 4U, 2U)), 
                                                                                VL_EXTEND_II(4,2, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mie_r, 0U, 2U)))))));
    vlSelfRef.__PVT__irq_taken = 0U;
    vlSelfRef.__PVT__interrupt_cause = 0U;
    vlSelfRef.__PVT__trap_to_M = 1U;
    if (vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__xcpt_valid_i) {
        vlSelfRef.__PVT__irq_taken = 1U;
        vlSelfRef.__PVT__trap_to_M = (1U & VL_BITSEL_IIII(32, 
                                                          ((3U 
                                                            == (IData)(vlSelfRef.__PVT__privilege_level_r))
                                                            ? 1U
                                                            : 
                                                           (~ 
                                                            VL_EXTEND_II(32,1, 
                                                                         (1U 
                                                                          & VL_BITSEL_IIII(32, vlSelfRef.__PVT__medeleg_r, 
                                                                                VL_EXTEND_II(5,4, (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__xcpt_cause_i))))))), 0U));
    } else if ((3U == (IData)(vlSelfRef.__PVT__privilege_level_r))) {
        if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mstatus_r, 3U))) {
            if (((IData)(vlSelfRef.__PVT__ext_irq_i) 
                 & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mie_r, 0xbU))) {
                vlSelfRef.__PVT__irq_taken = 1U;
                vlSelfRef.__PVT__trap_to_M = 1U;
                vlSelfRef.__PVT__interrupt_cause = 0xbU;
            } else if (((IData)(vlSelfRef.__PVT__tmr_irq_i) 
                        & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mie_r, 7U))) {
                vlSelfRef.__PVT__irq_taken = 1U;
                vlSelfRef.__PVT__trap_to_M = 1U;
                vlSelfRef.__PVT__interrupt_cause = 7U;
            } else if (((IData)(vlSelfRef.__PVT__sft_irq_i) 
                        & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mie_r, 3U))) {
                vlSelfRef.__PVT__irq_taken = 1U;
                vlSelfRef.__PVT__trap_to_M = 1U;
                vlSelfRef.__PVT__interrupt_cause = 3U;
            } else {
                vlSelfRef.__PVT__irq_taken = 0U;
                vlSelfRef.__PVT__trap_to_M = 1U;
            }
        }
    } else {
        vlSelfRef.__PVT__irq_taken = 0U;
    }
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__sys_jump_csr_data_o 
        = ((IData)(vlSelfRef.__PVT__is_mret) ? vlSelfRef.__PVT__mepc_r
            : ((IData)(vlSelfRef.__PVT__is_sret) ? vlSelfRef.__PVT__sepc_r
                : 0U));
    vlSelfRef.__PVT__irq_taken_o = vlSelfRef.__PVT__irq_taken;
    vlSelfRef.__PVT__scause_d = vlSelfRef.__PVT__scause_r;
    if (((IData)(vlSelfRef.__PVT__irq_taken) & (~ (IData)(vlSelfRef.__PVT__trap_to_M)))) {
        vlSelfRef.__PVT__scause_d = VL_EXTEND_II(32,4, (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__xcpt_cause_i));
    }
    vlSelfRef.__PVT__mcause_d = vlSelfRef.__PVT__mcause_r;
    if (((IData)(vlSelfRef.__PVT__irq_taken) & (IData)(vlSelfRef.__PVT__trap_to_M))) {
        vlSelfRef.__PVT__mcause_d = ((IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__xcpt_valid_i)
                                      ? VL_EXTEND_II(32,4, (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__xcpt_cause_i))
                                      : VL_CONCAT_III(32,28,4, 0x8000000U, (IData)(vlSelfRef.__PVT__interrupt_cause)));
    }
    vlSelfRef.__PVT__pc_handler = ((IData)(vlSelfRef.__PVT__trap_to_M)
                                    ? ((1U & ((0U == 
                                               (3U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__mtvec_r, 0U, 2U))) 
                                              | (~ 
                                                 VL_BITSEL_IIII(32, vlSelfRef.__PVT__mcause_d, 0x1fU))))
                                        ? vlSelfRef.__PVT__mtvec_base
                                        : (vlSelfRef.__PVT__mtvec_base 
                                           + VL_SHIFTL_III(32,32,32, 
                                                           VL_EXTEND_II(32,31, 
                                                                        (0x7fffffffU 
                                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__mcause_d, 0U, 0x1fU))), 2U)))
                                    : ((0U == (3U & 
                                               VL_SEL_IIII(32, vlSelfRef.__PVT__mtvec_r, 0U, 2U)))
                                        ? vlSelfRef.__PVT__stvec_base
                                        : (vlSelfRef.__PVT__stvec_base 
                                           + VL_SHIFTL_III(32,32,32, 
                                                           VL_EXTEND_II(32,31, 
                                                                        (0x7fffffffU 
                                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__scause_d, 0U, 0x1fU))), 2U))));
    vlSelfRef.__PVT__pc_handler_o = vlSelfRef.__PVT__pc_handler;
}

VL_ATTR_COLD void Vfalco_top_csr_file___stl_sequent__TOP__falco_top__core__csr__1(Vfalco_top_csr_file* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_csr_file___stl_sequent__TOP__falco_top__core__csr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_data = (((((((((0x300U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)) 
                                        | (0x304U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                       | (0x344U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                      | (0x305U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                     | (0x340U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                    | (0x341U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                   | (0x342U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                  | (0x343U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)))
                                  ? ((0x300U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                      ? vlSelfRef.__PVT__mstatus_r
                                      : ((0x304U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                          ? vlSelfRef.__PVT__mie_r
                                          : ((0x344U 
                                              == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                              ? vlSelfRef.__PVT__mip_r
                                              : ((0x305U 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                  ? vlSelfRef.__PVT__mtvec_r
                                                  : 
                                                 ((0x340U 
                                                   == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                   ? vlSelfRef.__PVT__mscratch_r
                                                   : 
                                                  ((0x341U 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                    ? vlSelfRef.__PVT__mepc_r
                                                    : 
                                                   ((0x342U 
                                                     == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                     ? vlSelfRef.__PVT__mcause_r
                                                     : vlSelfRef.__PVT__mtval_r)))))))
                                  : (((((((((0xb00U 
                                             == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)) 
                                            | (0xb80U 
                                               == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                           | (0xf11U 
                                              == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                          | (0xf12U 
                                             == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                         | (0xf13U 
                                            == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                        | (0xf14U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                       | (0x302U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                      | (0x303U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)))
                                      ? ((0xb00U == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                          ? VL_SEL_IQII(64, vlSelfRef.__PVT__mcycle_r, 0U, 0x20U)
                                          : ((0xb80U 
                                              == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                              ? VL_SEL_IQII(64, vlSelfRef.__PVT__mcycle_r, 0x20U, 0x20U)
                                              : ((0xf11U 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                  ? vlSelfRef.__PVT__mvendorid
                                                  : 
                                                 ((0xf12U 
                                                   == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                   ? vlSelfRef.__PVT__marchid
                                                   : 
                                                  ((0xf13U 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                    ? vlSelfRef.__PVT__mimpid
                                                    : 
                                                   ((0xf14U 
                                                     == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                     ? vlSelfRef.__PVT__mhartid
                                                     : 
                                                    ((0x302U 
                                                      == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                      ? vlSelfRef.__PVT__medeleg_r
                                                      : vlSelfRef.__PVT__mideleg_r)))))))
                                      : (((((((((0x100U 
                                                 == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)) 
                                                | (0x304U 
                                                   == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                               | (0x144U 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                              | (0x180U 
                                                 == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                             | (0x105U 
                                                == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                            | (0x140U 
                                               == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                           | (0x141U 
                                              == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                          | (0x142U 
                                             == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)))
                                          ? ((0x100U 
                                              == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                              ? vlSelfRef.__PVT__sstatus
                                              : ((0x304U 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                  ? vlSelfRef.__PVT__sie
                                                  : 
                                                 ((0x144U 
                                                   == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                   ? vlSelfRef.__PVT__sip
                                                   : 
                                                  ((0x180U 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                    ? vlSelfRef.__PVT__satp_r
                                                    : 
                                                   ((0x105U 
                                                     == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                     ? vlSelfRef.__PVT__stvec_r
                                                     : 
                                                    ((0x140U 
                                                      == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                      ? vlSelfRef.__PVT__sscratch_r
                                                      : 
                                                     ((0x141U 
                                                       == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                       ? vlSelfRef.__PVT__sepc_r
                                                       : vlSelfRef.__PVT__scause_r)))))))
                                          : (((((((
                                                   ((0x143U 
                                                     == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)) 
                                                    | (0xc00U 
                                                       == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                                   | (0xc00U 
                                                      == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                                  | (0xe09U 
                                                     == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                                 | (0xe0aU 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                                | (0xe0bU 
                                                   == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                               | (0xe0cU 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))) 
                                              | (0xe0dU 
                                                 == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i)))
                                              ? ((0x143U 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                  ? vlSelfRef.__PVT__stval_r
                                                  : 
                                                 ((0xc00U 
                                                   == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                   ? 
                                                  VL_SEL_IQII(64, vlSelfRef.__PVT__mcycle_r, 0U, 0x20U)
                                                   : 
                                                  ((0xc00U 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                    ? 
                                                   VL_SEL_IQII(64, vlSelfRef.__PVT__mcycle_r, 0x20U, 0x20U)
                                                    : 
                                                   ((0xe09U 
                                                     == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                     ? vlSelfRef.branch_counter
                                                     : 
                                                    ((0xe0aU 
                                                      == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                      ? vlSelfRef.branch_miss_counter
                                                      : 
                                                     ((0xe0bU 
                                                       == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                       ? vlSelfRef.recovery_counter
                                                       : 
                                                      ((0xe0cU 
                                                        == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                        ? vlSelfRef.recovery_big_counter
                                                        : vlSelfRef.recovery_small_counter)))))))
                                              : ((0xe0eU 
                                                  == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                  ? vlSelfRef.recovery_total_amount
                                                  : 
                                                 ((0xe0fU 
                                                   == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                   ? vlSelfRef.recovery_rollback_amount
                                                   : 
                                                  ((0xe10U 
                                                    == (IData)(vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_raddr_i))
                                                    ? vlSelfRef.recovery_cycle_count
                                                    : 0U)))))));
    vlSymsp->TOP__falco_top__core__csr_io_inst.__PVT__csr_data_o 
        = vlSelfRef.__PVT__csr_data;
}
