// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_csr_regfile__SB1.h"

uint32_t Vrv32im_top_riscv_csr_regfile__SB1::get_mcycle() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_csr_regfile__SB1::get_mcycle\n"); );
    VL_OUT(get_mcycle__Vfuncrtn,31,0);
    // Body
    get_mcycle__Vfuncrtn = this->__PVT__csr_mcycle_q;
    // Final
    return (get_mcycle__Vfuncrtn);
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr_regfile__SB1___nba_sequent__TOP__rv32im_top__core__u_csr__u_csrfile__0(Vrv32im_top_riscv_csr_regfile__SB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_csr_regfile__SB1___nba_sequent__TOP__rv32im_top__core__u_csr__u_csrfile__0\n"); );
    // Body
    vlSelf->__Vdly__csr_mcycle_h_q = vlSelf->__PVT__csr_mcycle_h_q;
    vlSelf->__Vdly__csr_mcycle_q = vlSelf->__PVT__csr_mcycle_q;
    vlSelf->__Vdly__irq_priv_q = vlSelf->__PVT__irq_priv_q;
    vlSelf->__Vdly__csr_mip_upd_q = vlSelf->__PVT__csr_mip_upd_q;
    vlSelf->__Vdly__csr_mip_next_q = vlSelf->__PVT__csr_mip_next_q;
    vlSelf->__Vdly__csr_mtime_ie_q = vlSelf->__PVT__csr_mtime_ie_q;
    vlSelf->__Vdly__csr_sscratch_q = vlSelf->__PVT__csr_sscratch_q;
    vlSelf->__Vdly__csr_stval_q = vlSelf->__PVT__csr_stval_q;
    vlSelf->__Vdly__csr_scause_q = vlSelf->__PVT__csr_scause_q;
    vlSelf->__Vdly__csr_mtimecmp_q = vlSelf->__PVT__csr_mtimecmp_q;
    vlSelf->__Vdly__csr_mscratch_q = vlSelf->__PVT__csr_mscratch_q;
    vlSelf->__Vdly__csr_mtval_q = vlSelf->__PVT__csr_mtval_q;
    vlSelf->__Vdly__csr_mcause_q = vlSelf->__PVT__csr_mcause_q;
    vlSelf->__Vdly__csr_stvec_q = vlSelf->__PVT__csr_stvec_q;
    vlSelf->__Vdly__csr_sepc_q = vlSelf->__PVT__csr_sepc_q;
    vlSelf->__Vdly__csr_mtvec_q = vlSelf->__PVT__csr_mtvec_q;
    vlSelf->__Vdly__csr_mepc_q = vlSelf->__PVT__csr_mepc_q;
    vlSelf->__Vdly__csr_mideleg_q = vlSelf->__PVT__csr_mideleg_q;
    vlSelf->__Vdly__csr_mie_q = vlSelf->__PVT__csr_mie_q;
    vlSelf->__Vdly__csr_mip_q = vlSelf->__PVT__csr_mip_q;
    vlSelf->__Vdly__csr_medeleg_q = vlSelf->__PVT__csr_medeleg_q;
    vlSelf->__Vdly__csr_satp_q = vlSelf->__PVT__csr_satp_q;
    vlSelf->__Vdly__csr_mpriv_q = vlSelf->__PVT__csr_mpriv_q;
    vlSelf->__Vdly__csr_sr_q = vlSelf->__PVT__csr_sr_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__irq_priv_q = 3U;
    } else if (VL_REDOR_I(vlSelf->__PVT__irq_masked_r)) {
        vlSelf->__Vdly__irq_priv_q = vlSelf->__PVT__irq_priv_r;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__csr_mip_upd_q = 0U;
    } else if (((IData)(vlSelf->__PVT__csr_ren_i) & 
                ((0x344U == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                 | (0x144U == (IData)(vlSelf->__PVT__csr_raddr_i))))) {
        vlSelf->__Vdly__csr_mip_upd_q = 1U;
    } else if ((((0x344U == (IData)(vlSelf->__PVT__csr_waddr_i)) 
                 | (0x144U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                | VL_REDOR_I((IData)(vlSelf->__PVT__exception_i)))) {
        vlSelf->__Vdly__csr_mip_upd_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__csr_mepc_q = 0U;
        vlSelf->__Vdly__csr_sr_q = 0U;
        vlSelf->__Vdly__csr_mcause_q = 0U;
        vlSelf->__Vdly__csr_mtval_q = 0U;
        vlSelf->__Vdly__csr_mtvec_q = 0U;
        vlSelf->__Vdly__csr_mip_q = 0U;
        vlSelf->__Vdly__csr_mie_q = 0U;
        vlSelf->__Vdly__csr_mpriv_q = 3U;
        vlSelf->__Vdly__csr_mcycle_q = 0U;
        vlSelf->__Vdly__csr_mcycle_h_q = 0U;
        vlSelf->__Vdly__csr_mscratch_q = 0U;
        vlSelf->__Vdly__csr_mtimecmp_q = 0U;
        vlSelf->__Vdly__csr_mtime_ie_q = 0U;
        vlSelf->__Vdly__csr_medeleg_q = 0U;
        vlSelf->__Vdly__csr_mideleg_q = 0U;
        vlSelf->__Vdly__csr_sepc_q = 0U;
        vlSelf->__Vdly__csr_stvec_q = 0U;
        vlSelf->__Vdly__csr_scause_q = 0U;
        vlSelf->__Vdly__csr_stval_q = 0U;
        vlSelf->__Vdly__csr_satp_q = 0U;
        vlSelf->__Vdly__csr_sscratch_q = 0U;
        vlSelf->__Vdly__csr_mip_next_q = 0U;
    } else {
        vlSelf->__Vdly__csr_mepc_q = vlSelf->__PVT__csr_mepc_r;
        vlSelf->__Vdly__csr_sr_q = vlSelf->__PVT__csr_sr_r;
        vlSelf->__Vdly__csr_mcause_q = vlSelf->__PVT__csr_mcause_r;
        vlSelf->__Vdly__csr_mtval_q = vlSelf->__PVT__csr_mtval_r;
        vlSelf->__Vdly__csr_mtvec_q = vlSelf->__PVT__csr_mtvec_r;
        vlSelf->__Vdly__csr_mip_q = vlSelf->__PVT__csr_mip_r;
        vlSelf->__Vdly__csr_mie_q = vlSelf->__PVT__csr_mie_r;
        vlSelf->__Vdly__csr_mpriv_q = vlSelf->__PVT__csr_mpriv_r;
        vlSelf->__Vdly__csr_mcycle_q = vlSelf->__PVT__csr_mcycle_r;
        vlSelf->__Vdly__csr_mscratch_q = vlSelf->__PVT__csr_mscratch_r;
        vlSelf->__Vdly__csr_mtimecmp_q = vlSelf->__PVT__csr_mtimecmp_r;
        vlSelf->__Vdly__csr_mtime_ie_q = vlSelf->__PVT__csr_mtime_ie_r;
        vlSelf->__Vdly__csr_medeleg_q = (0xffffU & vlSelf->__PVT__csr_medeleg_r);
        vlSelf->__Vdly__csr_mideleg_q = (0xffffU & vlSelf->__PVT__csr_mideleg_r);
        vlSelf->__Vdly__csr_sepc_q = vlSelf->__PVT__csr_sepc_r;
        vlSelf->__Vdly__csr_stvec_q = vlSelf->__PVT__csr_stvec_r;
        vlSelf->__Vdly__csr_scause_q = (0x8000000fU 
                                        & vlSelf->__PVT__csr_scause_r);
        vlSelf->__Vdly__csr_stval_q = vlSelf->__PVT__csr_stval_r;
        vlSelf->__Vdly__csr_satp_q = vlSelf->__PVT__csr_satp_r;
        vlSelf->__Vdly__csr_sscratch_q = vlSelf->__PVT__csr_sscratch_r;
        vlSelf->__Vdly__csr_mip_next_q = ((IData)(vlSelf->__PVT__buffer_mip_w)
                                           ? vlSelf->__PVT__csr_mip_next_r
                                           : 0U);
        if ((0xffffffffU == vlSelf->__PVT__csr_mcycle_q)) {
            vlSelf->__Vdly__csr_mcycle_h_q = ((IData)(1U) 
                                              + vlSelf->__PVT__csr_mcycle_h_q);
        }
        if ((((0x7b2U == (IData)(vlSelf->__PVT__csr_waddr_i)) 
              | (0x8b2U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
             & (~ VL_REDOR_I((IData)(vlSelf->__PVT__exception_i))))) {
            if (VL_UNLIKELY((0U == (0xff000000U & vlSelf->__PVT__csr_wdata_i)))) {
                VL_FINISH_MT("include/riscv_csr_regfile.v", 567, "");
                VL_FINISH_MT("include/riscv_csr_regfile.v", 568, "");
            } else if (VL_UNLIKELY((0x1000000U == (0xff000000U 
                                                   & vlSelf->__PVT__csr_wdata_i)))) {
                VL_WRITEF("%c",8,(0xffU & VL_SEL_IIII(32, vlSelf->__PVT__csr_wdata_i, 0U, 8U)));
            }
        }
    }
    vlSelf->__PVT__irq_priv_q = vlSelf->__Vdly__irq_priv_q;
    vlSelf->__PVT__csr_mip_upd_q = vlSelf->__Vdly__csr_mip_upd_q;
    vlSelf->__PVT__csr_mcycle_h_q = vlSelf->__Vdly__csr_mcycle_h_q;
    vlSelf->__PVT__csr_mtime_ie_q = vlSelf->__Vdly__csr_mtime_ie_q;
    vlSelf->__PVT__csr_mip_next_q = vlSelf->__Vdly__csr_mip_next_q;
    vlSelf->__PVT__csr_mcause_q = vlSelf->__Vdly__csr_mcause_q;
    vlSelf->__PVT__csr_mtval_q = vlSelf->__Vdly__csr_mtval_q;
    vlSelf->__PVT__csr_mcycle_q = vlSelf->__Vdly__csr_mcycle_q;
    vlSelf->__PVT__csr_mscratch_q = vlSelf->__Vdly__csr_mscratch_q;
    vlSelf->__PVT__csr_mtimecmp_q = vlSelf->__Vdly__csr_mtimecmp_q;
    vlSelf->__PVT__csr_scause_q = vlSelf->__Vdly__csr_scause_q;
    vlSelf->__PVT__csr_stval_q = vlSelf->__Vdly__csr_stval_q;
    vlSelf->__PVT__csr_sscratch_q = vlSelf->__Vdly__csr_sscratch_q;
    vlSelf->__PVT__csr_mepc_q = vlSelf->__Vdly__csr_mepc_q;
    vlSelf->__PVT__csr_mtvec_q = vlSelf->__Vdly__csr_mtvec_q;
    vlSelf->__PVT__csr_sepc_q = vlSelf->__Vdly__csr_sepc_q;
    vlSelf->__PVT__csr_stvec_q = vlSelf->__Vdly__csr_stvec_q;
    vlSelf->__PVT__csr_mip_q = vlSelf->__Vdly__csr_mip_q;
    vlSelf->__PVT__csr_mie_q = vlSelf->__Vdly__csr_mie_q;
    vlSelf->__PVT__csr_mideleg_q = vlSelf->__Vdly__csr_mideleg_q;
    vlSelf->__PVT__csr_medeleg_q = vlSelf->__Vdly__csr_medeleg_q;
    vlSelf->__PVT__csr_satp_q = vlSelf->__Vdly__csr_satp_q;
    vlSelf->__PVT__csr_mpriv_q = vlSelf->__Vdly__csr_mpriv_q;
    vlSelf->__PVT__csr_sr_q = vlSelf->__Vdly__csr_sr_q;
    vlSelf->__PVT__satp_o = vlSelf->__PVT__csr_satp_q;
    vlSelf->__PVT__priv_o = vlSelf->__PVT__csr_mpriv_q;
    vlSelf->__PVT__irq_pending_r = (vlSelf->__PVT__csr_mip_q 
                                    & vlSelf->__PVT__csr_mie_q);
    vlSelf->__PVT__m_enabled_r = ((3U > (IData)(vlSelf->__PVT__csr_mpriv_q)) 
                                  | ((3U == (IData)(vlSelf->__PVT__csr_mpriv_q)) 
                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_q, 3U)));
    vlSelf->__PVT__s_enabled_r = ((1U > (IData)(vlSelf->__PVT__csr_mpriv_q)) 
                                  | ((1U == (IData)(vlSelf->__PVT__csr_mpriv_q)) 
                                     & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_q, 1U)));
    vlSelf->__PVT__m_interrupts_r = ((IData)(vlSelf->__PVT__m_enabled_r)
                                      ? (vlSelf->__PVT__irq_pending_r 
                                         & (~ vlSelf->__PVT__csr_mideleg_q))
                                      : 0U);
    vlSelf->__PVT__s_interrupts_r = ((IData)(vlSelf->__PVT__s_enabled_r)
                                      ? (vlSelf->__PVT__irq_pending_r 
                                         & vlSelf->__PVT__csr_mideleg_q)
                                      : 0U);
    vlSelf->__PVT__irq_masked_r = (VL_REDOR_I(vlSelf->__PVT__m_interrupts_r)
                                    ? vlSelf->__PVT__m_interrupts_r
                                    : vlSelf->__PVT__s_interrupts_r);
    vlSelf->__PVT__irq_priv_r = (VL_REDOR_I(vlSelf->__PVT__m_interrupts_r)
                                  ? 3U : 1U);
    vlSelf->__PVT__status_o = vlSelf->__PVT__csr_sr_q;
    vlSelf->__PVT__interrupt_o = vlSelf->__PVT__irq_masked_r;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr_regfile__SB1___nba_sequent__TOP__rv32im_top__core__u_csr__u_csrfile__1(Vrv32im_top_riscv_csr_regfile__SB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_csr_regfile__SB1___nba_sequent__TOP__rv32im_top__core__u_csr__u_csrfile__1\n"); );
    // Body
    vlSelf->__PVT__is_exception_w = (0x10U == (0x30U 
                                               & (IData)(vlSelf->__PVT__exception_i)));
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__0(Vrv32im_top_riscv_csr_regfile__SB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__0\n"); );
    // Body
    vlSelf->__PVT__exception_s_w = (((1U >= (IData)(vlSelf->__PVT__csr_mpriv_q)) 
                                     & (IData)(vlSelf->__PVT__is_exception_w)) 
                                    & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_medeleg_q, 
                                                     VL_EXTEND_II(5,4, 
                                                                  (0xfU 
                                                                   & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__exception_i), 0U, 4U)))));
    vlSelf->__PVT__branch_r = 0U;
    vlSelf->__PVT__branch_target_r = 0U;
    if ((0x20U == (IData)(vlSelf->__PVT__exception_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = ((3U == (IData)(vlSelf->__PVT__irq_priv_q))
                                           ? vlSelf->__PVT__csr_mtvec_q
                                           : vlSelf->__PVT__csr_stvec_q);
    } else if (((0x30U <= (IData)(vlSelf->__PVT__exception_i)) 
                & (0x33U >= (IData)(vlSelf->__PVT__exception_i)))) {
        if ((3U == (3U & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__exception_i), 0U, 2U)))) {
            vlSelf->__PVT__branch_r = 1U;
            vlSelf->__PVT__branch_target_r = vlSelf->__PVT__csr_mepc_q;
        } else {
            vlSelf->__PVT__branch_r = 1U;
            vlSelf->__PVT__branch_target_r = vlSelf->__PVT__csr_sepc_q;
        }
    } else if (((IData)(vlSelf->__PVT__is_exception_w) 
                & (IData)(vlSelf->__PVT__exception_s_w))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = vlSelf->__PVT__csr_stvec_q;
    } else if (vlSelf->__PVT__is_exception_w) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = vlSelf->__PVT__csr_mtvec_q;
    } else if ((0x34U == (IData)(vlSelf->__PVT__exception_i))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = ((IData)(4U) 
                                          + vlSelf->__PVT__exception_pc_i);
    }
    vlSelf->__PVT__csr_branch_o = vlSelf->__PVT__branch_r;
    vlSelf->__PVT__csr_target_o = vlSelf->__PVT__branch_target_r;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__1(Vrv32im_top_riscv_csr_regfile__SB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__1\n"); );
    // Body
    vlSelf->__PVT__rdata_r = 0U;
    vlSelf->__PVT__rdata_r = (((((((((0x340U == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                     | (0x341U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                    | (0x305U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                   | (0x342U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                  | (0x343U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                 | (0x300U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                | (0x344U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                               | (0x304U == (IData)(vlSelf->__PVT__csr_raddr_i)))
                               ? ((0x340U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                   ? vlSelf->__PVT__csr_mscratch_q
                                   : ((0x341U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                       ? vlSelf->__PVT__csr_mepc_q
                                       : ((0x305U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                           ? vlSelf->__PVT__csr_mtvec_q
                                           : ((0x342U 
                                               == (IData)(vlSelf->__PVT__csr_raddr_i))
                                               ? (0x8000000fU 
                                                  & vlSelf->__PVT__csr_mcause_q)
                                               : ((0x343U 
                                                   == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                   ? vlSelf->__PVT__csr_mtval_q
                                                   : 
                                                  ((0x300U 
                                                    == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                    ? vlSelf->__PVT__csr_sr_q
                                                    : 
                                                   ((0x344U 
                                                     == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                     ? 
                                                    (0xaaaU 
                                                     & vlSelf->__PVT__csr_mip_q)
                                                     : 
                                                    (0xaaaU 
                                                     & vlSelf->__PVT__csr_mie_q))))))))
                               : ((((((((((0xc00U == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                          | (0xc01U 
                                             == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                         | (0xc81U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                        | (0xf14U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                       | (0x301U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                      | (0x302U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                     | (0x303U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                    | (0x7c0U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                   | (0x100U == (IData)(vlSelf->__PVT__csr_raddr_i)))
                                   ? (((0xc00U == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                       | (0xc01U == (IData)(vlSelf->__PVT__csr_raddr_i)))
                                       ? vlSelf->__PVT__csr_mcycle_q
                                       : ((0xc81U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                           ? vlSelf->__PVT__csr_mcycle_h_q
                                           : ((0xf14U 
                                               == (IData)(vlSelf->__PVT__csr_raddr_i))
                                               ? vlSelf->__PVT__cpu_id_i
                                               : ((0x301U 
                                                   == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                   ? vlSelf->__PVT__misa_i
                                                   : 
                                                  ((0x302U 
                                                    == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__csr_medeleg_q)
                                                    : 
                                                   ((0x303U 
                                                     == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                     ? 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__csr_mideleg_q)
                                                     : 
                                                    ((0x7c0U 
                                                      == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                      ? vlSelf->__PVT__csr_mtimecmp_q
                                                      : 
                                                     (0x40133U 
                                                      & vlSelf->__PVT__csr_sr_q))))))))
                                   : (((((((((0x144U 
                                              == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                             | (0x104U 
                                                == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                            | (0x141U 
                                               == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                           | (0x105U 
                                              == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                          | (0x142U 
                                             == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                         | (0x143U 
                                            == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                        | (0x180U == (IData)(vlSelf->__PVT__csr_raddr_i))) 
                                       | (0x140U == (IData)(vlSelf->__PVT__csr_raddr_i)))
                                       ? ((0x144U == (IData)(vlSelf->__PVT__csr_raddr_i))
                                           ? (0x222U 
                                              & vlSelf->__PVT__csr_mip_q)
                                           : ((0x104U 
                                               == (IData)(vlSelf->__PVT__csr_raddr_i))
                                               ? (0x222U 
                                                  & vlSelf->__PVT__csr_mie_q)
                                               : ((0x141U 
                                                   == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                   ? vlSelf->__PVT__csr_sepc_q
                                                   : 
                                                  ((0x105U 
                                                    == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                    ? vlSelf->__PVT__csr_stvec_q
                                                    : 
                                                   ((0x142U 
                                                     == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                     ? 
                                                    (0x8000000fU 
                                                     & vlSelf->__PVT__csr_scause_q)
                                                     : 
                                                    ((0x143U 
                                                      == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                      ? vlSelf->__PVT__csr_stval_q
                                                      : 
                                                     ((0x180U 
                                                       == (IData)(vlSelf->__PVT__csr_raddr_i))
                                                       ? vlSelf->__PVT__csr_satp_q
                                                       : vlSelf->__PVT__csr_sscratch_q)))))))
                                       : 0U)));
    vlSelf->__PVT__csr_rdata_o = vlSelf->__PVT__rdata_r;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__2(Vrv32im_top_riscv_csr_regfile__SB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__2\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    CData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    IData/*31:0*/ __Vtemp_9;
    IData/*31:0*/ __Vtemp_10;
    // Body
    vlSelf->__PVT__csr_mip_next_r = vlSelf->__PVT__csr_mip_next_q;
    vlSelf->__PVT__csr_mepc_r = vlSelf->__PVT__csr_mepc_q;
    vlSelf->__PVT__csr_sr_r = vlSelf->__PVT__csr_sr_q;
    vlSelf->__PVT__csr_mcause_r = vlSelf->__PVT__csr_mcause_q;
    vlSelf->__PVT__csr_mtval_r = vlSelf->__PVT__csr_mtval_q;
    vlSelf->__PVT__csr_mtvec_r = vlSelf->__PVT__csr_mtvec_q;
    vlSelf->__PVT__csr_mip_r = vlSelf->__PVT__csr_mip_q;
    vlSelf->__PVT__csr_mie_r = vlSelf->__PVT__csr_mie_q;
    vlSelf->__PVT__csr_mpriv_r = vlSelf->__PVT__csr_mpriv_q;
    vlSelf->__PVT__csr_mscratch_r = vlSelf->__PVT__csr_mscratch_q;
    vlSelf->__PVT__csr_mcycle_r = ((IData)(1U) + vlSelf->__PVT__csr_mcycle_q);
    vlSelf->__PVT__csr_mtimecmp_r = vlSelf->__PVT__csr_mtimecmp_q;
    vlSelf->__PVT__csr_mtime_ie_r = vlSelf->__PVT__csr_mtime_ie_q;
    vlSelf->__PVT__csr_medeleg_r = vlSelf->__PVT__csr_medeleg_q;
    vlSelf->__PVT__csr_mideleg_r = vlSelf->__PVT__csr_mideleg_q;
    vlSelf->__PVT__csr_sepc_r = vlSelf->__PVT__csr_sepc_q;
    vlSelf->__PVT__csr_stvec_r = vlSelf->__PVT__csr_stvec_q;
    vlSelf->__PVT__csr_scause_r = vlSelf->__PVT__csr_scause_q;
    vlSelf->__PVT__csr_stval_r = vlSelf->__PVT__csr_stval_q;
    vlSelf->__PVT__csr_satp_r = vlSelf->__PVT__csr_satp_q;
    vlSelf->__PVT__csr_sscratch_r = vlSelf->__PVT__csr_sscratch_q;
    if ((0x20U == (0x30U & (IData)(vlSelf->__PVT__exception_i)))) {
        if ((3U == (IData)(vlSelf->__PVT__irq_priv_q))) {
            __Vtemp_1 = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_r, 3U));
            VL_ASSIGNBIT_II(7U, vlSelf->__PVT__csr_sr_r, __Vtemp_1);
            VL_ASSIGNSEL_II(32,2,0xbU, vlSelf->__PVT__csr_sr_r, vlSelf->__PVT__csr_mpriv_q);
            VL_ASSIGNBIT_II(3U, vlSelf->__PVT__csr_sr_r, 0U);
            vlSelf->__PVT__csr_mpriv_r = 3U;
            vlSelf->__PVT__csr_mepc_r = vlSelf->__PVT__exception_pc_i;
            vlSelf->__PVT__csr_mtval_r = 0U;
            if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__interrupt_o, 3U))) {
                vlSelf->__PVT__csr_mcause_r = 0x80000003U;
            } else if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__interrupt_o, 7U))) {
                vlSelf->__PVT__csr_mcause_r = 0x80000007U;
            } else if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__interrupt_o, 0xbU))) {
                vlSelf->__PVT__csr_mcause_r = 0x8000000bU;
            }
        } else {
            __Vtemp_2 = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_r, 1U));
            VL_ASSIGNBIT_II(5U, vlSelf->__PVT__csr_sr_r, __Vtemp_2);
            VL_ASSIGNBIT_II(8U, vlSelf->__PVT__csr_sr_r, 
                            (1U == (IData)(vlSelf->__PVT__csr_mpriv_q)));
            VL_ASSIGNBIT_II(1U, vlSelf->__PVT__csr_sr_r, 0U);
            vlSelf->__PVT__csr_mpriv_r = 1U;
            vlSelf->__PVT__csr_sepc_r = vlSelf->__PVT__exception_pc_i;
            vlSelf->__PVT__csr_stval_r = 0U;
            if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__interrupt_o, 1U))) {
                vlSelf->__PVT__csr_scause_r = 0x80000001U;
            } else if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__interrupt_o, 5U))) {
                vlSelf->__PVT__csr_scause_r = 0x80000005U;
            } else if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__interrupt_o, 9U))) {
                vlSelf->__PVT__csr_scause_r = 0x80000009U;
            }
        }
    } else if (((0x30U <= (IData)(vlSelf->__PVT__exception_i)) 
                & (0x33U >= (IData)(vlSelf->__PVT__exception_i)))) {
        if ((3U == (3U & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__exception_i), 0U, 2U)))) {
            vlSelf->__PVT__csr_mpriv_r = (3U & VL_SEL_IIII(32, vlSelf->__PVT__csr_sr_r, 0xbU, 2U));
            __Vtemp_3 = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_r, 7U));
            VL_ASSIGNBIT_II(3U, vlSelf->__PVT__csr_sr_r, __Vtemp_3);
            VL_ASSIGNBIT_IO(7U, vlSelf->__PVT__csr_sr_r);
            VL_ASSIGNSEL_II(32,2,0xbU, vlSelf->__PVT__csr_sr_r, 0U);
        } else {
            vlSelf->__PVT__csr_mpriv_r = ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_r, 8U))
                                           ? 1U : 0U);
            __Vtemp_4 = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_r, 5U));
            VL_ASSIGNBIT_II(1U, vlSelf->__PVT__csr_sr_r, __Vtemp_4);
            VL_ASSIGNBIT_IO(5U, vlSelf->__PVT__csr_sr_r);
            VL_ASSIGNBIT_II(8U, vlSelf->__PVT__csr_sr_r, 0U);
        }
    } else if (((IData)(vlSelf->__PVT__is_exception_w) 
                & (IData)(vlSelf->__PVT__exception_s_w))) {
        __Vtemp_5 = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_r, 1U));
        VL_ASSIGNBIT_II(5U, vlSelf->__PVT__csr_sr_r, __Vtemp_5);
        VL_ASSIGNBIT_II(8U, vlSelf->__PVT__csr_sr_r, 
                        (1U == (IData)(vlSelf->__PVT__csr_mpriv_q)));
        VL_ASSIGNBIT_II(1U, vlSelf->__PVT__csr_sr_r, 0U);
        vlSelf->__PVT__csr_mpriv_r = 1U;
        vlSelf->__PVT__csr_sepc_r = vlSelf->__PVT__exception_pc_i;
        vlSelf->__PVT__csr_stval_r = ((((0x10U == (IData)(vlSelf->__PVT__exception_i)) 
                                        | (0x11U == (IData)(vlSelf->__PVT__exception_i))) 
                                       | (0x1cU == (IData)(vlSelf->__PVT__exception_i)))
                                       ? vlSelf->__PVT__exception_pc_i
                                       : ((((((((0x12U 
                                                 == (IData)(vlSelf->__PVT__exception_i)) 
                                                | (0x14U 
                                                   == (IData)(vlSelf->__PVT__exception_i))) 
                                               | (0x15U 
                                                  == (IData)(vlSelf->__PVT__exception_i))) 
                                              | (0x16U 
                                                 == (IData)(vlSelf->__PVT__exception_i))) 
                                             | (0x17U 
                                                == (IData)(vlSelf->__PVT__exception_i))) 
                                            | (0x1dU 
                                               == (IData)(vlSelf->__PVT__exception_i))) 
                                           | (0x1fU 
                                              == (IData)(vlSelf->__PVT__exception_i)))
                                           ? vlSelf->__PVT__exception_addr_i
                                           : 0U));
        vlSelf->__PVT__csr_scause_r = VL_EXTEND_II(32,4, 
                                                   (0xfU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__exception_i), 0U, 4U)));
    } else if (vlSelf->__PVT__is_exception_w) {
        __Vtemp_6 = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_sr_r, 3U));
        VL_ASSIGNBIT_II(7U, vlSelf->__PVT__csr_sr_r, __Vtemp_6);
        VL_ASSIGNSEL_II(32,2,0xbU, vlSelf->__PVT__csr_sr_r, vlSelf->__PVT__csr_mpriv_q);
        VL_ASSIGNBIT_II(3U, vlSelf->__PVT__csr_sr_r, 0U);
        vlSelf->__PVT__csr_mpriv_r = 3U;
        vlSelf->__PVT__csr_mepc_r = vlSelf->__PVT__exception_pc_i;
        vlSelf->__PVT__csr_mtval_r = ((((0x10U == (IData)(vlSelf->__PVT__exception_i)) 
                                        | (0x11U == (IData)(vlSelf->__PVT__exception_i))) 
                                       | (0x1cU == (IData)(vlSelf->__PVT__exception_i)))
                                       ? vlSelf->__PVT__exception_pc_i
                                       : ((((((((0x12U 
                                                 == (IData)(vlSelf->__PVT__exception_i)) 
                                                | (0x14U 
                                                   == (IData)(vlSelf->__PVT__exception_i))) 
                                               | (0x15U 
                                                  == (IData)(vlSelf->__PVT__exception_i))) 
                                              | (0x16U 
                                                 == (IData)(vlSelf->__PVT__exception_i))) 
                                             | (0x17U 
                                                == (IData)(vlSelf->__PVT__exception_i))) 
                                            | (0x1dU 
                                               == (IData)(vlSelf->__PVT__exception_i))) 
                                           | (0x1fU 
                                              == (IData)(vlSelf->__PVT__exception_i)))
                                           ? vlSelf->__PVT__exception_addr_i
                                           : 0U));
        vlSelf->__PVT__csr_mcause_r = VL_EXTEND_II(32,4, 
                                                   (0xfU 
                                                    & VL_SEL_IIII(6, (IData)(vlSelf->__PVT__exception_i), 0U, 4U)));
    } else if (((((((((0x340U == (IData)(vlSelf->__PVT__csr_waddr_i)) 
                      | (0x341U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                     | (0x305U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                    | (0x342U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                   | (0x343U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                  | (0x300U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                 | (0x344U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                | (0x304U == (IData)(vlSelf->__PVT__csr_waddr_i)))) {
        if ((0x340U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mscratch_r = vlSelf->__PVT__csr_wdata_i;
        } else if ((0x341U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mepc_r = vlSelf->__PVT__csr_wdata_i;
        } else if ((0x305U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mtvec_r = vlSelf->__PVT__csr_wdata_i;
        } else if ((0x342U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mcause_r = (0x8000000fU 
                                           & vlSelf->__PVT__csr_wdata_i);
        } else if ((0x343U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mtval_r = vlSelf->__PVT__csr_wdata_i;
        } else if ((0x300U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_sr_r = vlSelf->__PVT__csr_wdata_i;
        } else if ((0x344U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mip_r = (0xaaaU & vlSelf->__PVT__csr_wdata_i);
        } else {
            vlSelf->__PVT__csr_mie_r = (0xaaaU & vlSelf->__PVT__csr_wdata_i);
        }
    } else if (((((((((0x302U == (IData)(vlSelf->__PVT__csr_waddr_i)) 
                      | (0x303U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                     | (0x7c0U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                    | (0x141U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                   | (0x105U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                  | (0x142U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                 | (0x143U == (IData)(vlSelf->__PVT__csr_waddr_i))) 
                | (0x180U == (IData)(vlSelf->__PVT__csr_waddr_i)))) {
        if ((0x302U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_medeleg_r = (0xffffU 
                                            & vlSelf->__PVT__csr_wdata_i);
        } else if ((0x303U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mideleg_r = (0xffffU 
                                            & vlSelf->__PVT__csr_wdata_i);
        } else if ((0x7c0U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_mtimecmp_r = vlSelf->__PVT__csr_wdata_i;
            vlSelf->__PVT__csr_mtime_ie_r = 1U;
        } else if ((0x141U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_sepc_r = vlSelf->__PVT__csr_wdata_i;
        } else if ((0x105U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_stvec_r = vlSelf->__PVT__csr_wdata_i;
        } else if ((0x142U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_scause_r = (0x8000000fU 
                                           & vlSelf->__PVT__csr_wdata_i);
        } else if ((0x143U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
            vlSelf->__PVT__csr_stval_r = vlSelf->__PVT__csr_wdata_i;
        } else {
            vlSelf->__PVT__csr_satp_r = vlSelf->__PVT__csr_wdata_i;
        }
    } else if ((0x140U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
        vlSelf->__PVT__csr_sscratch_r = vlSelf->__PVT__csr_wdata_i;
    } else if ((0x100U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
        __Vtemp_7 = ((0xfffbfeccU & vlSelf->__PVT__csr_sr_r) 
                     | (0x40133U & vlSelf->__PVT__csr_wdata_i));
        vlSelf->__PVT__csr_sr_r = __Vtemp_7;
    } else if ((0x144U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
        __Vtemp_8 = ((0xfffffdddU & vlSelf->__PVT__csr_mip_r) 
                     | (0x222U & vlSelf->__PVT__csr_wdata_i));
        vlSelf->__PVT__csr_mip_r = __Vtemp_8;
    } else if ((0x104U == (IData)(vlSelf->__PVT__csr_waddr_i))) {
        __Vtemp_9 = ((0xfffffdddU & vlSelf->__PVT__csr_mie_r) 
                     | (0x222U & vlSelf->__PVT__csr_wdata_i));
        vlSelf->__PVT__csr_mie_r = __Vtemp_9;
    }
    if (((IData)(vlSelf->__PVT__ext_intr_i) & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_mideleg_q, 0xbU))) {
        VL_ASSIGNBIT_IO(9U, vlSelf->__PVT__csr_mip_next_r);
    }
    if (((IData)(vlSelf->__PVT__ext_intr_i) & (~ VL_BITSEL_IIII(32, vlSelf->__PVT__csr_mideleg_q, 0xbU)))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelf->__PVT__csr_mip_next_r);
    }
    if (((IData)(vlSelf->__PVT__timer_intr_i) & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_mideleg_q, 7U))) {
        VL_ASSIGNBIT_IO(5U, vlSelf->__PVT__csr_mip_next_r);
    }
    if (((IData)(vlSelf->__PVT__timer_intr_i) & (~ 
                                                 VL_BITSEL_IIII(32, vlSelf->__PVT__csr_mideleg_q, 7U)))) {
        VL_ASSIGNBIT_IO(7U, vlSelf->__PVT__csr_mip_next_r);
    }
    if ((vlSelf->__PVT__csr_mcycle_q == vlSelf->__PVT__csr_mtimecmp_q)) {
        if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csr_mideleg_q, 7U))) {
            VL_ASSIGNBIT_II(5U, vlSelf->__PVT__csr_mip_next_r, vlSelf->__PVT__csr_mtime_ie_q);
        } else {
            VL_ASSIGNBIT_II(7U, vlSelf->__PVT__csr_mip_next_r, vlSelf->__PVT__csr_mtime_ie_q);
        }
        vlSelf->__PVT__csr_mtime_ie_r = 0U;
    }
    __Vtemp_10 = (vlSelf->__PVT__csr_mip_r | vlSelf->__PVT__csr_mip_next_r);
    vlSelf->__PVT__csr_mip_r = __Vtemp_10;
}

VL_INLINE_OPT void Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__3(Vrv32im_top_riscv_csr_regfile__SB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrv32im_top_riscv_csr_regfile__SB1___nba_comb__TOP__rv32im_top__core__u_csr__u_csrfile__3\n"); );
    // Body
    vlSelf->__PVT__buffer_mip_w = (((IData)(vlSelf->__PVT__csr_ren_i) 
                                    & ((0x344U == (IData)(vlSelf->__PVT__csr_raddr_i)) 
                                       | (0x144U == (IData)(vlSelf->__PVT__csr_raddr_i)))) 
                                   | (IData)(vlSelf->__PVT__csr_mip_upd_q));
}
