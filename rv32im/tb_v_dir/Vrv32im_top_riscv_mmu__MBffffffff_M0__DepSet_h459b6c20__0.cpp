// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32im_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32im_top__Syms.h"
#include "Vrv32im_top_riscv_mmu__MBffffffff_M0.h"

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__0(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__0\n"); );
    // Body
    vlSelf->__Vdly__genblk1__DOT__state_q = vlSelf->__PVT__genblk1__DOT__state_q;
    vlSelf->__Vdly__genblk1__DOT__pte_addr_q = vlSelf->__PVT__genblk1__DOT__pte_addr_q;
    vlSelf->__Vdly__genblk1__DOT__pc_fault_q = vlSelf->__PVT__genblk1__DOT__pc_fault_q;
    vlSelf->__Vdly__genblk1__DOT__itlb_entry_q = vlSelf->__PVT__genblk1__DOT__itlb_entry_q;
    vlSelf->__Vdly__genblk1__DOT__itlb_valid_q = vlSelf->__PVT__genblk1__DOT__itlb_valid_q;
    vlSelf->__Vdly__genblk1__DOT__mem_req_q = vlSelf->__PVT__genblk1__DOT__mem_req_q;
    vlSelf->__Vdly__genblk1__DOT__src_mmu_q = vlSelf->__PVT__genblk1__DOT__src_mmu_q;
    vlSelf->__Vdly__genblk1__DOT__read_hold_q = vlSelf->__PVT__genblk1__DOT__read_hold_q;
    vlSelf->__Vdly__genblk1__DOT__dtlb_valid_q = vlSelf->__PVT__genblk1__DOT__dtlb_valid_q;
    vlSelf->__Vdly__genblk1__DOT__dtlb_entry_q = vlSelf->__PVT__genblk1__DOT__dtlb_entry_q;
    vlSelf->__Vdly__genblk1__DOT__dtlb_va_addr_q = vlSelf->__PVT__genblk1__DOT__dtlb_va_addr_q;
    vlSelf->__Vdly__genblk1__DOT__store_q = vlSelf->__PVT__genblk1__DOT__store_q;
    vlSelf->__Vdly__genblk1__DOT__load_q = vlSelf->__PVT__genblk1__DOT__load_q;
    vlSelf->__Vdly__genblk1__DOT__lsu_in_addr_q = vlSelf->__PVT__genblk1__DOT__lsu_in_addr_q;
    vlSelf->__Vdly__genblk1__DOT__store_fault_q = vlSelf->__PVT__genblk1__DOT__store_fault_q;
    vlSelf->__Vdly__genblk1__DOT__load_fault_q = vlSelf->__PVT__genblk1__DOT__load_fault_q;
    vlSelf->__Vdly__genblk1__DOT__pc_fault_q = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__pc_fault_r));
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__itlb_valid_q = 0U;
    } else if (vlSelf->__PVT__flush_i) {
        vlSelf->__Vdly__genblk1__DOT__itlb_valid_q = 0U;
    } else if (((3U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_req_q)))) {
        vlSelf->__Vdly__genblk1__DOT__itlb_valid_q 
            = (vlSelf->__PVT__genblk1__DOT__itlb_va_addr_q 
               == (0xfffffU & VL_SEL_IIII(32, vlSelf->__PVT__fetch_in_pc_i, 0xcU, 0x14U)));
    } else if (((0U != (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_req_q)))) {
        vlSelf->__Vdly__genblk1__DOT__itlb_valid_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__mem_req_q = 0U;
    } else if (((0U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & ((IData)(vlSelf->__PVT__genblk1__DOT__itlb_miss_w) 
                   | (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_miss_w)))) {
        vlSelf->__Vdly__genblk1__DOT__mem_req_q = 1U;
    } else if ((((((1U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                   & (IData)(vlSelf->__PVT__genblk1__DOT__resp_valid_w)) 
                  & (~ (IData)(vlSelf->__PVT__genblk1__DOT__resp_error_w))) 
                 & VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 0U)) 
                & (~ ((VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 1U) 
                       | VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 2U)) 
                      | VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 3U))))) {
        vlSelf->__Vdly__genblk1__DOT__mem_req_q = 1U;
    } else if (vlSelf->__PVT__genblk1__DOT__mmu_accept_w) {
        vlSelf->__Vdly__genblk1__DOT__mem_req_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__read_hold_q = 0U;
        vlSelf->__Vdly__genblk1__DOT__src_mmu_q = 0U;
    } else if ((((IData)(vlSelf->__PVT__lsu_out_rd_o) 
                 | VL_REDOR_I((IData)(vlSelf->__PVT__lsu_out_wr_o))) 
                & (~ (IData)(vlSelf->__PVT__lsu_out_accept_i)))) {
        vlSelf->__Vdly__genblk1__DOT__read_hold_q = 1U;
        vlSelf->__Vdly__genblk1__DOT__src_mmu_q = vlSelf->__PVT__genblk1__DOT__src_mmu_w;
    } else if (vlSelf->__PVT__lsu_out_accept_i) {
        vlSelf->__Vdly__genblk1__DOT__read_hold_q = 0U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__dtlb_valid_q = 0U;
    } else if (vlSelf->__PVT__flush_i) {
        vlSelf->__Vdly__genblk1__DOT__dtlb_valid_q = 0U;
    } else if (((3U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_req_q))) {
        vlSelf->__Vdly__genblk1__DOT__dtlb_valid_q = 1U;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__dtlb_va_addr_q = 0U;
        vlSelf->__Vdly__genblk1__DOT__dtlb_entry_q = 0U;
    } else if (((3U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_req_q))) {
        vlSelf->__Vdly__genblk1__DOT__dtlb_va_addr_q 
            = (0xfffffU & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__virt_addr_q, 0xcU, 0x14U));
        vlSelf->__Vdly__genblk1__DOT__dtlb_entry_q 
            = vlSelf->__PVT__genblk1__DOT__pte_entry_q;
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__store_q = 0U;
    } else if (VL_REDOR_I((IData)(vlSelf->__PVT__lsu_in_wr_i))) {
        vlSelf->__Vdly__genblk1__DOT__store_q = ((IData)(vlSelf->__PVT__lsu_in_accept_o)
                                                  ? 0U
                                                  : (IData)(vlSelf->__PVT__lsu_in_wr_i));
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__load_q = 0U;
    } else if (vlSelf->__PVT__lsu_in_rd_i) {
        vlSelf->__Vdly__genblk1__DOT__load_q = (1U 
                                                & (~ (IData)(vlSelf->__PVT__lsu_in_accept_o)));
    }
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__lsu_in_addr_q = 0U;
    } else if (((IData)(vlSelf->__PVT__genblk1__DOT__load_w) 
                | VL_REDOR_I((IData)(vlSelf->__PVT__genblk1__DOT__store_w)))) {
        vlSelf->__Vdly__genblk1__DOT__lsu_in_addr_q 
            = vlSelf->__PVT__lsu_in_addr_i;
    }
    vlSelf->__Vdly__genblk1__DOT__store_fault_q = (
                                                   (~ (IData)(vlSelf->__PVT__rst_i)) 
                                                   & (IData)(vlSelf->__PVT__genblk1__DOT__store_fault_r));
    vlSelf->__Vdly__genblk1__DOT__load_fault_q = ((~ (IData)(vlSelf->__PVT__rst_i)) 
                                                  & (IData)(vlSelf->__PVT__genblk1__DOT__load_fault_r));
    vlSelf->__PVT__genblk1__DOT__pc_fault_q = vlSelf->__Vdly__genblk1__DOT__pc_fault_q;
    vlSelf->__PVT__genblk1__DOT__itlb_valid_q = vlSelf->__Vdly__genblk1__DOT__itlb_valid_q;
    vlSelf->__Vdly__genblk1__DOT__itlb_va_addr_q = vlSelf->__PVT__genblk1__DOT__itlb_va_addr_q;
    vlSelf->__PVT__genblk1__DOT__mem_req_q = vlSelf->__Vdly__genblk1__DOT__mem_req_q;
    vlSelf->__PVT__genblk1__DOT__read_hold_q = vlSelf->__Vdly__genblk1__DOT__read_hold_q;
    vlSelf->__PVT__genblk1__DOT__src_mmu_q = vlSelf->__Vdly__genblk1__DOT__src_mmu_q;
    vlSelf->__PVT__genblk1__DOT__dtlb_valid_q = vlSelf->__Vdly__genblk1__DOT__dtlb_valid_q;
    vlSelf->__PVT__genblk1__DOT__dtlb_entry_q = vlSelf->__Vdly__genblk1__DOT__dtlb_entry_q;
    vlSelf->__PVT__genblk1__DOT__dtlb_va_addr_q = vlSelf->__Vdly__genblk1__DOT__dtlb_va_addr_q;
    vlSelf->__PVT__genblk1__DOT__store_q = vlSelf->__Vdly__genblk1__DOT__store_q;
    vlSelf->__PVT__genblk1__DOT__load_q = vlSelf->__Vdly__genblk1__DOT__load_q;
    vlSelf->__PVT__genblk1__DOT__lsu_in_addr_q = vlSelf->__Vdly__genblk1__DOT__lsu_in_addr_q;
    vlSelf->__PVT__genblk1__DOT__store_fault_q = vlSelf->__Vdly__genblk1__DOT__store_fault_q;
    vlSelf->__PVT__genblk1__DOT__load_fault_q = vlSelf->__Vdly__genblk1__DOT__load_fault_q;
    vlSelf->__PVT__fetch_in_fault_o = vlSelf->__PVT__genblk1__DOT__pc_fault_q;
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__itlb_va_addr_q = 0U;
        vlSelf->__Vdly__genblk1__DOT__itlb_entry_q = 0U;
    } else if (((3U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_req_q)))) {
        vlSelf->__Vdly__genblk1__DOT__itlb_va_addr_q 
            = (0xfffffU & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__virt_addr_q, 0xcU, 0x14U));
        vlSelf->__Vdly__genblk1__DOT__itlb_entry_q 
            = vlSelf->__PVT__genblk1__DOT__pte_entry_q;
    }
    vlSelf->__PVT__genblk1__DOT__src_mmu_w = ((IData)(vlSelf->__PVT__genblk1__DOT__read_hold_q)
                                               ? (IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_q)
                                               : (IData)(vlSelf->__PVT__genblk1__DOT__mem_req_q));
    vlSelf->__PVT__lsu_in_store_fault_o = vlSelf->__PVT__genblk1__DOT__store_fault_q;
    vlSelf->__PVT__lsu_in_load_fault_o = vlSelf->__PVT__genblk1__DOT__load_fault_q;
    vlSelf->__PVT__genblk1__DOT__itlb_entry_q = vlSelf->__Vdly__genblk1__DOT__itlb_entry_q;
    vlSelf->__PVT__genblk1__DOT__itlb_va_addr_q = vlSelf->__Vdly__genblk1__DOT__itlb_va_addr_q;
    vlSelf->__Vdly__genblk1__DOT__virt_addr_q = vlSelf->__PVT__genblk1__DOT__virt_addr_q;
    vlSelf->__Vdly__genblk1__DOT__pte_entry_q = vlSelf->__PVT__genblk1__DOT__pte_entry_q;
    vlSelf->__Vdly__genblk1__DOT__dtlb_req_q = vlSelf->__PVT__genblk1__DOT__dtlb_req_q;
    vlSelf->__PVT__lsu_out_cacheable_o = ((IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w) 
                                          | (IData)(vlSelf->__PVT__genblk1__DOT__lsu_out_cacheable_r));
    if (vlSelf->__PVT__rst_i) {
        vlSelf->__Vdly__genblk1__DOT__pte_addr_q = 0U;
        vlSelf->__Vdly__genblk1__DOT__pte_entry_q = 0U;
        vlSelf->__Vdly__genblk1__DOT__virt_addr_q = 0U;
        vlSelf->__Vdly__genblk1__DOT__dtlb_req_q = 0U;
        vlSelf->__Vdly__genblk1__DOT__state_q = 0U;
    } else if (((0U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & ((IData)(vlSelf->__PVT__genblk1__DOT__itlb_miss_w) 
                   | (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_miss_w)))) {
        vlSelf->__Vdly__genblk1__DOT__pte_addr_q = 
            (vlSelf->__PVT__genblk1__DOT__ptbr_w + 
             VL_CONCAT_III(32,30,2, VL_EXTEND_II(30,10, 
                                                 (0x3ffU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__request_addr_w, 0x16U, 0xaU))), 0U));
        vlSelf->__Vdly__genblk1__DOT__virt_addr_q = vlSelf->__PVT__genblk1__DOT__request_addr_w;
        vlSelf->__Vdly__genblk1__DOT__dtlb_req_q = vlSelf->__PVT__genblk1__DOT__dtlb_miss_w;
        vlSelf->__Vdly__genblk1__DOT__state_q = 1U;
    } else if (((1U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & (IData)(vlSelf->__PVT__genblk1__DOT__resp_valid_w))) {
        if ((1U & ((IData)(vlSelf->__PVT__genblk1__DOT__resp_error_w) 
                   | (~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 0U))))) {
            vlSelf->__Vdly__genblk1__DOT__pte_entry_q = 0U;
            vlSelf->__Vdly__genblk1__DOT__state_q = 3U;
        } else if ((1U & ((VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 1U) 
                           | VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 2U)) 
                          | VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 3U)))) {
            vlSelf->__Vdly__genblk1__DOT__pte_entry_q 
                = (((0x1fU >= 0xcU) ? ((vlSelf->__PVT__genblk1__DOT__pte_ppn_w 
                                        | VL_EXTEND_II(32,10, 
                                                       (0x3ffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__request_addr_w, 0xcU, 0xaU)))) 
                                       << 0xcU) : 0U) 
                   | VL_EXTEND_II(32,10, (IData)(vlSelf->__PVT__genblk1__DOT__pte_flags_w)));
            vlSelf->__Vdly__genblk1__DOT__state_q = 3U;
        } else {
            vlSelf->__Vdly__genblk1__DOT__pte_addr_q 
                = (VL_CONCAT_III(32,20,12, (0xfffffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 0xaU, 0x14U)), 0U) 
                   + VL_CONCAT_III(32,30,2, VL_EXTEND_II(30,10, 
                                                         (0x3ffU 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__request_addr_w, 0xcU, 0xaU))), 0U));
            vlSelf->__Vdly__genblk1__DOT__state_q = 2U;
        }
    } else if (((2U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q)) 
                & (IData)(vlSelf->__PVT__genblk1__DOT__resp_valid_w))) {
        if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 0U))) {
            vlSelf->__Vdly__genblk1__DOT__pte_entry_q 
                = (((0x1fU >= 0xcU) ? (vlSelf->__PVT__genblk1__DOT__pte_ppn_w 
                                       << 0xcU) : 0U) 
                   | VL_EXTEND_II(32,10, (IData)(vlSelf->__PVT__genblk1__DOT__pte_flags_w)));
            vlSelf->__Vdly__genblk1__DOT__state_q = 3U;
        } else {
            vlSelf->__Vdly__genblk1__DOT__pte_entry_q = 0U;
            vlSelf->__Vdly__genblk1__DOT__state_q = 3U;
        }
    } else if ((3U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q))) {
        vlSelf->__Vdly__genblk1__DOT__state_q = 0U;
    }
    vlSelf->__PVT__genblk1__DOT__pte_entry_q = vlSelf->__Vdly__genblk1__DOT__pte_entry_q;
    vlSelf->__PVT__genblk1__DOT__virt_addr_q = vlSelf->__Vdly__genblk1__DOT__virt_addr_q;
    vlSelf->__PVT__genblk1__DOT__dtlb_req_q = vlSelf->__Vdly__genblk1__DOT__dtlb_req_q;
    vlSelf->__PVT__genblk1__DOT__pte_addr_q = vlSelf->__Vdly__genblk1__DOT__pte_addr_q;
    vlSelf->__PVT__genblk1__DOT__state_q = vlSelf->__Vdly__genblk1__DOT__state_q;
    vlSelf->__PVT__genblk1__DOT__idle_w = (0U == (IData)(vlSelf->__PVT__genblk1__DOT__state_q));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__1(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__1\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__ptbr_w = VL_CONCAT_III(32,20,12, 
                                                        (0xfffffU 
                                                         & VL_SEL_IIII(32, vlSelf->__PVT__satp_i, 0U, 0x14U)), 0U);
    vlSelf->__PVT__genblk1__DOT__vm_enable_w = (1U 
                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__satp_i, 0x1fU));
    vlSelf->__PVT__genblk1__DOT__supervisor_d_w = (1U 
                                                   == (IData)(vlSelf->__PVT__priv_d_i));
    vlSelf->__PVT__genblk1__DOT__dfetch_vm_w = (3U 
                                                != (IData)(vlSelf->__PVT__priv_d_i));
    vlSelf->__PVT__genblk1__DOT__vm_d_enable_w = ((IData)(vlSelf->__PVT__genblk1__DOT__vm_enable_w) 
                                                  & (IData)(vlSelf->__PVT__genblk1__DOT__dfetch_vm_w));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__2(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__2\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__lsu_out_data_wr_w 
        = vlSelf->__PVT__lsu_in_data_wr_i;
    vlSelf->__PVT__genblk1__DOT__lsu_out_invalidate_w 
        = vlSelf->__PVT__lsu_in_invalidate_i;
    vlSelf->__PVT__genblk1__DOT__lsu_out_writeback_w 
        = vlSelf->__PVT__lsu_in_writeback_i;
    vlSelf->__PVT__genblk1__DOT__lsu_out_flush_w = vlSelf->__PVT__lsu_in_flush_i;
    vlSelf->__PVT__lsu_out_data_wr_o = vlSelf->__PVT__genblk1__DOT__lsu_out_data_wr_w;
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__3(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__3\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__supervisor_i_w = (1U 
                                                   == (IData)(vlSelf->__PVT__fetch_in_priv_i));
    vlSelf->__PVT__genblk1__DOT__ifetch_vm_w = (3U 
                                                != (IData)(vlSelf->__PVT__fetch_in_priv_i));
    vlSelf->__PVT__genblk1__DOT__vm_i_enable_w = vlSelf->__PVT__genblk1__DOT__ifetch_vm_w;
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__4(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__4\n"); );
    // Body
    vlSelf->__PVT__fetch_in_inst_o = vlSelf->__PVT__fetch_out_inst_i;
    vlSelf->__PVT__lsu_in_data_rd_o = vlSelf->__PVT__lsu_out_data_rd_i;
    vlSelf->__PVT__genblk1__DOT__resp_data_w = vlSelf->__PVT__lsu_out_data_rd_i;
    vlSelf->__PVT__fetch_in_error_o = ((IData)(vlSelf->__PVT__fetch_out_valid_i) 
                                       & (IData)(vlSelf->__PVT__fetch_out_error_i));
    vlSelf->__PVT__genblk1__DOT__resp_valid_w = ((IData)(vlSelf->__PVT__genblk1__DOT__resp_mmu_w) 
                                                 & (IData)(vlSelf->__PVT__lsu_out_ack_i));
    vlSelf->__PVT__genblk1__DOT__pte_ppn_w = VL_EXTEND_II(32,22, 
                                                          (0x3fffffU 
                                                           & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 0xaU, 0x16U)));
    vlSelf->__PVT__genblk1__DOT__pte_flags_w = (0x3ffU 
                                                & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__resp_data_w, 0U, 0xaU));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__0(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__0\n"); );
    // Body
    vlSelf->__PVT__lsu_out_invalidate_o = ((~ (IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)) 
                                           & (IData)(vlSelf->__PVT__genblk1__DOT__lsu_out_invalidate_w));
    vlSelf->__PVT__lsu_out_writeback_o = ((~ (IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)) 
                                          & (IData)(vlSelf->__PVT__genblk1__DOT__lsu_out_writeback_w));
    vlSelf->__PVT__lsu_out_flush_o = ((~ (IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)) 
                                      & (IData)(vlSelf->__PVT__genblk1__DOT__lsu_out_flush_w));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__5(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_sequent__TOP__rv32im_top__core__u_mmu__5\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__mmu_accept_w = ((IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w) 
                                                 & (IData)(vlSelf->__PVT__lsu_out_accept_i));
    vlSelf->__PVT__genblk1__DOT__cpu_accept_w = ((~ (IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)) 
                                                 & (IData)(vlSelf->__PVT__lsu_out_accept_i));
    vlSelf->__PVT__lsu_in_error_o = ((((IData)(vlSelf->__PVT__lsu_out_error_i) 
                                       & (~ (IData)(vlSelf->__PVT__genblk1__DOT__resp_mmu_w))) 
                                      | (IData)(vlSelf->__PVT__genblk1__DOT__store_fault_q)) 
                                     | (IData)(vlSelf->__PVT__genblk1__DOT__load_fault_q));
    vlSelf->__PVT__lsu_out_req_tag_o = ((IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)
                                         ? 0x380U : (IData)(vlSelf->__PVT__genblk1__DOT__lsu_out_req_tag_w));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__1(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__1\n"); );
    // Body
    vlSelf->__PVT__fetch_out_flush_o = vlSelf->__PVT__fetch_in_flush_i;
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__2(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__2\n"); );
    // Body
    vlSelf->__PVT__fetch_out_pc_o = ((IData)(vlSelf->__PVT__genblk1__DOT__vm_i_enable_w)
                                      ? VL_CONCAT_III(32,20,12, 
                                                      (0xfffffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__itlb_entry_q, 0xcU, 0x14U)), 
                                                      (0xfffU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__fetch_in_pc_i, 0U, 0xcU)))
                                      : vlSelf->__PVT__fetch_in_pc_i);
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__3(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__3\n"); );
    // Body
    vlSelf->__PVT__fetch_in_valid_o = ((IData)(vlSelf->__PVT__fetch_out_valid_i) 
                                       | (IData)(vlSelf->__PVT__genblk1__DOT__pc_fault_q));
    vlSelf->__PVT__lsu_in_ack_o = ((((IData)(vlSelf->__PVT__lsu_out_ack_i) 
                                     & (~ (IData)(vlSelf->__PVT__genblk1__DOT__resp_mmu_w))) 
                                    | (IData)(vlSelf->__PVT__genblk1__DOT__store_fault_q)) 
                                   | (IData)(vlSelf->__PVT__genblk1__DOT__load_fault_q));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__4(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__4\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__store_w = ((IData)(vlSelf->__PVT__lsu_in_wr_i) 
                                            | (IData)(vlSelf->__PVT__genblk1__DOT__store_q));
    vlSelf->__PVT__genblk1__DOT__load_w = ((IData)(vlSelf->__PVT__lsu_in_rd_i) 
                                           | (IData)(vlSelf->__PVT__genblk1__DOT__load_q));
    vlSelf->__PVT__genblk1__DOT__lsu_addr_w = (((IData)(vlSelf->__PVT__genblk1__DOT__load_w) 
                                                | VL_REDOR_I((IData)(vlSelf->__PVT__genblk1__DOT__store_w)))
                                                ? vlSelf->__PVT__lsu_in_addr_i
                                                : vlSelf->__PVT__genblk1__DOT__lsu_in_addr_q);
    vlSelf->__PVT__genblk1__DOT__dtlb_hit_w = ((IData)(vlSelf->__PVT__genblk1__DOT__dtlb_valid_q) 
                                               & (vlSelf->__PVT__genblk1__DOT__dtlb_va_addr_q 
                                                  == 
                                                  (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__lsu_addr_w, 0xcU, 0x14U))));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__5(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__5\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__lsu_out_addr_w = ((IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w)
                                                    ? 
                                                   VL_CONCAT_III(32,20,12, 
                                                                 (0xfffffU 
                                                                  & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 0xcU, 0x14U)), 
                                                                 (0xfffU 
                                                                  & VL_SEL_IIII(32, vlSelf->__PVT__genblk1__DOT__lsu_addr_w, 0U, 0xcU)))
                                                    : vlSelf->__PVT__genblk1__DOT__lsu_addr_w);
    vlSelf->__PVT__genblk1__DOT__dtlb_miss_w = ((((IData)(vlSelf->__PVT__genblk1__DOT__load_w) 
                                                  | VL_REDOR_I((IData)(vlSelf->__PVT__genblk1__DOT__store_w))) 
                                                 & (IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w)) 
                                                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_hit_w)));
    vlSelf->__PVT__genblk1__DOT__store_fault_r = 0U;
    if ((((IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w) 
          & VL_REDOR_I((IData)(vlSelf->__PVT__genblk1__DOT__store_w))) 
         & (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_hit_w))) {
        vlSelf->__PVT__genblk1__DOT__store_fault_r 
            = (1U & ((IData)(vlSelf->__PVT__genblk1__DOT__supervisor_d_w)
                      ? ((VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 4U) 
                          & (~ (IData)(vlSelf->__PVT__sum_i))) 
                         | ((~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 1U)) 
                            | (~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 2U))))
                      : (((~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 1U)) 
                          | (~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 2U))) 
                         | (~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 4U)))));
    }
    vlSelf->__PVT__genblk1__DOT__load_fault_r = 0U;
    if ((((IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w) 
          & (IData)(vlSelf->__PVT__genblk1__DOT__load_w)) 
         & (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_hit_w))) {
        vlSelf->__PVT__genblk1__DOT__load_fault_r = 
            (1U & ((IData)(vlSelf->__PVT__genblk1__DOT__supervisor_d_w)
                    ? ((VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 4U) 
                        & (~ (IData)(vlSelf->__PVT__sum_i))) 
                       | (~ (VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 1U) 
                             | ((IData)(vlSelf->__PVT__mxr_i) 
                                & VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 3U)))))
                    : ((~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 1U)) 
                       | (~ VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__dtlb_entry_q, 4U)))));
    }
    vlSelf->__PVT__lsu_out_addr_o = ((IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)
                                      ? vlSelf->__PVT__genblk1__DOT__pte_addr_q
                                      : vlSelf->__PVT__genblk1__DOT__lsu_out_addr_w);
    vlSelf->__PVT__genblk1__DOT__lsu_out_wr_w = ((IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__genblk1__DOT__store_w) 
                                                  & VL_REPLICATE_IOI(1,
                                                                     ((IData)(vlSelf->__PVT__genblk1__DOT__dtlb_hit_w) 
                                                                      & (~ (IData)(vlSelf->__PVT__genblk1__DOT__store_fault_r))), 4U))
                                                  : (IData)(vlSelf->__PVT__lsu_in_wr_i));
    vlSelf->__PVT__genblk1__DOT__lsu_out_rd_w = ((IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__genblk1__DOT__load_w) 
                                                   & (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_hit_w)) 
                                                  & (~ (IData)(vlSelf->__PVT__genblk1__DOT__load_fault_r)))
                                                  : (IData)(vlSelf->__PVT__lsu_in_rd_i));
    vlSelf->__PVT__lsu_in_accept_o = (((((~ (IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w)) 
                                         | ((IData)(vlSelf->__PVT__genblk1__DOT__vm_d_enable_w) 
                                            & (IData)(vlSelf->__PVT__genblk1__DOT__dtlb_hit_w))) 
                                        & (IData)(vlSelf->__PVT__genblk1__DOT__cpu_accept_w)) 
                                       | (IData)(vlSelf->__PVT__genblk1__DOT__store_fault_r)) 
                                      | (IData)(vlSelf->__PVT__genblk1__DOT__load_fault_r));
    vlSelf->__PVT__lsu_out_wr_o = ((IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)
                                    ? 0U : (IData)(vlSelf->__PVT__genblk1__DOT__lsu_out_wr_w));
    vlSelf->__PVT__lsu_out_rd_o = ((IData)(vlSelf->__PVT__genblk1__DOT__src_mmu_w)
                                    ? (IData)(vlSelf->__PVT__genblk1__DOT__mem_req_q)
                                    : (IData)(vlSelf->__PVT__genblk1__DOT__lsu_out_rd_w));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__6(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__6\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__request_addr_w = ((IData)(vlSelf->__PVT__genblk1__DOT__idle_w)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__dtlb_miss_w)
                                                     ? vlSelf->__PVT__genblk1__DOT__lsu_addr_w
                                                     : vlSelf->__PVT__fetch_in_pc_i)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__genblk1__DOT__dtlb_req_q)
                                                     ? vlSelf->__PVT__genblk1__DOT__lsu_addr_w
                                                     : vlSelf->__PVT__fetch_in_pc_i));
}

VL_INLINE_OPT void Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__7(Vrv32im_top_riscv_mmu__MBffffffff_M0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32im_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv32im_top_riscv_mmu__MBffffffff_M0___nba_comb__TOP__rv32im_top__core__u_mmu__7\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__itlb_hit_w = (((IData)(vlSelf->__PVT__fetch_in_rd_i) 
                                                & (IData)(vlSelf->__PVT__genblk1__DOT__itlb_valid_q)) 
                                               & (vlSelf->__PVT__genblk1__DOT__itlb_va_addr_q 
                                                  == 
                                                  (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__fetch_in_pc_i, 0xcU, 0x14U))));
    vlSelf->__PVT__genblk1__DOT__itlb_miss_w = (((IData)(vlSelf->__PVT__fetch_in_rd_i) 
                                                 & (IData)(vlSelf->__PVT__genblk1__DOT__vm_i_enable_w)) 
                                                & (~ (IData)(vlSelf->__PVT__genblk1__DOT__itlb_hit_w)));
    vlSelf->__PVT__genblk1__DOT__pc_fault_r = 0U;
    if (((IData)(vlSelf->__PVT__genblk1__DOT__vm_i_enable_w) 
         & (IData)(vlSelf->__PVT__genblk1__DOT__itlb_hit_w))) {
        vlSelf->__PVT__genblk1__DOT__pc_fault_r = (1U 
                                                   & ((IData)(vlSelf->__PVT__genblk1__DOT__supervisor_i_w)
                                                       ? 
                                                      (VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__itlb_entry_q, 4U) 
                                                       | (~ 
                                                          VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__itlb_entry_q, 3U)))
                                                       : 
                                                      ((~ 
                                                        VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__itlb_entry_q, 3U)) 
                                                       | (~ 
                                                          VL_BITSEL_IIII(32, vlSelf->__PVT__genblk1__DOT__itlb_entry_q, 4U)))));
    }
    vlSelf->__PVT__fetch_out_rd_o = (((~ (IData)(vlSelf->__PVT__genblk1__DOT__vm_i_enable_w)) 
                                      & (IData)(vlSelf->__PVT__fetch_in_rd_i)) 
                                     | ((IData)(vlSelf->__PVT__genblk1__DOT__itlb_hit_w) 
                                        & (~ (IData)(vlSelf->__PVT__genblk1__DOT__pc_fault_r))));
    vlSelf->__PVT__fetch_in_accept_o = ((((~ (IData)(vlSelf->__PVT__genblk1__DOT__vm_i_enable_w)) 
                                          | ((IData)(vlSelf->__PVT__genblk1__DOT__vm_i_enable_w) 
                                             & (IData)(vlSelf->__PVT__genblk1__DOT__itlb_hit_w))) 
                                         & (IData)(vlSelf->__PVT__fetch_out_accept_i)) 
                                        | (IData)(vlSelf->__PVT__genblk1__DOT__pc_fault_r));
}
