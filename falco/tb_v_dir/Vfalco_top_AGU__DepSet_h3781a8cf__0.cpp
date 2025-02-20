// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top_AGU.h"
#include "Vfalco_top__Syms.h"

VL_INLINE_OPT void Vfalco_top_AGU___ico_sequent__TOP__falco_top__core__address_generate_unit__0(Vfalco_top_AGU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_AGU___ico_sequent__TOP__falco_top__core__address_generate_unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent 
        = ((VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2aU) 
            & (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid)) 
           & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__non_idempotent_instr_exists));
    vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__1__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__1__prf_register_data 
        = VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x3cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__1__rs_addr = 
        (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x30U, 6U));
    vlSelfRef.__Vfunc_bypass_network__1__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__1__prf_register_data)))));
    vlSelfRef.__PVT__rs2_data = vlSelfRef.__Vfunc_bypass_network__1__Vfuncout;
    vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__0__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__0__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__0__prf_register_data 
        = VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x5cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__0__rs_addr = 
        (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x36U, 6U));
    vlSelfRef.__Vfunc_bypass_network__0__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__0__prf_register_data)))));
    vlSelfRef.__PVT__rs1_data = vlSelfRef.__Vfunc_bypass_network__0__Vfuncout;
    vlSelfRef.__PVT__unalign_store_data = vlSelfRef.__PVT__rs2_data;
    vlSelfRef.__PVT__access_addr = (VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x9aU, 0x20U) 
                                    + vlSelfRef.__PVT__rs1_data);
    vlSelfRef.__PVT__non_idempotent_region = (0xcU 
                                              == (0xfU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0x1cU, 4U)));
    if ((0U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_EXTEND_II(32,8, 
                                                       (0xffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U)));
            vlSelfRef.__PVT__byte_sel = 1U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((1U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_EXTEND_II(32,16, 
                                                       (0xffffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 0x10U)));
            vlSelfRef.__PVT__byte_sel = 3U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((2U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = vlSelfRef.__PVT__unalign_store_data;
            vlSelfRef.__PVT__byte_sel = 0xfU;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((1U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,24,8, 
                                                        VL_EXTEND_II(24,8, 
                                                                     (0xffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U))), 0U);
            vlSelfRef.__PVT__byte_sel = 2U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((2U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,16,16, 
                                                        VL_EXTEND_II(16,8, 
                                                                     (0xffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U))), 0U);
            vlSelfRef.__PVT__byte_sel = 4U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((1U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 0x10U)), 0U);
            vlSelfRef.__PVT__byte_sel = 0xcU;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((3U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,8,24, 
                                                        (0xffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U)), 0U);
            vlSelfRef.__PVT__byte_sel = 8U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else {
        vlSelfRef.__PVT__store_data = 0U;
        vlSelfRef.__PVT__byte_sel = 0U;
        vlSelfRef.__PVT__memory_align_exception = 0U;
    }
}

VL_INLINE_OPT void Vfalco_top_AGU___act_sequent__TOP__falco_top__core__address_generate_unit__0(Vfalco_top_AGU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_AGU___act_sequent__TOP__falco_top__core__address_generate_unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__1__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__1__prf_register_data 
        = VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x3cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__1__rs_addr = 
        (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x30U, 6U));
    vlSelfRef.__Vfunc_bypass_network__1__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__1__prf_register_data)))));
    vlSelfRef.__PVT__rs2_data = vlSelfRef.__Vfunc_bypass_network__1__Vfuncout;
    vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__0__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__0__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__0__prf_register_data 
        = VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x5cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__0__rs_addr = 
        (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x36U, 6U));
    vlSelfRef.__Vfunc_bypass_network__0__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__0__prf_register_data)))));
    vlSelfRef.__PVT__rs1_data = vlSelfRef.__Vfunc_bypass_network__0__Vfuncout;
    vlSelfRef.__PVT__unalign_store_data = vlSelfRef.__PVT__rs2_data;
    vlSelfRef.__PVT__access_addr = (VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x9aU, 0x20U) 
                                    + vlSelfRef.__PVT__rs1_data);
    vlSelfRef.__PVT__non_idempotent_region = (0xcU 
                                              == (0xfU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0x1cU, 4U)));
    if ((0U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_EXTEND_II(32,8, 
                                                       (0xffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U)));
            vlSelfRef.__PVT__byte_sel = 1U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((1U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_EXTEND_II(32,16, 
                                                       (0xffffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 0x10U)));
            vlSelfRef.__PVT__byte_sel = 3U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((2U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = vlSelfRef.__PVT__unalign_store_data;
            vlSelfRef.__PVT__byte_sel = 0xfU;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((1U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,24,8, 
                                                        VL_EXTEND_II(24,8, 
                                                                     (0xffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U))), 0U);
            vlSelfRef.__PVT__byte_sel = 2U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((2U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,16,16, 
                                                        VL_EXTEND_II(16,8, 
                                                                     (0xffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U))), 0U);
            vlSelfRef.__PVT__byte_sel = 4U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((1U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 0x10U)), 0U);
            vlSelfRef.__PVT__byte_sel = 0xcU;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((3U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,8,24, 
                                                        (0xffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U)), 0U);
            vlSelfRef.__PVT__byte_sel = 8U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else {
        vlSelfRef.__PVT__store_data = 0U;
        vlSelfRef.__PVT__byte_sel = 0U;
        vlSelfRef.__PVT__memory_align_exception = 0U;
    }
}

VL_INLINE_OPT void Vfalco_top_AGU___nba_sequent__TOP__falco_top__core__address_generate_unit__0(Vfalco_top_AGU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_AGU___nba_sequent__TOP__falco_top__core__address_generate_unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__instr_valid = 0U;
        VL_CONST_W_1X(147,vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack,0x00000000);
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__memory_align_exception = 0U;
    } else if (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__AGU_stall))) {
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__instr_valid 
            = (1U & VL_BITSEL_IIII(32, (([&]() {
                            vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag 
                                = (0x3fU & VL_SEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2bU, 6U));
                            vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush 
                                = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_flush_BCAST;
                            vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout 
                                = (VL_BITSEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 0U) 
                                   & ((((0x3fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                        >= (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag)) 
                                       ^ ((0x3fU & 
                                           VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 3U, 6U)) 
                                          >= (0x3fU 
                                              & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))) 
                                      ^ ((IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__rob_tag) 
                                         >= (0x3fU 
                                             & VL_SEL_IIII(15, (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__branch_recovery_flush), 9U, 6U)))));
                        }(), (IData)(vlSelfRef.__Vfunc_IsBrROBKill__2__Vfuncout))
                                         ? 0U : VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid))), 0U));
        VL_ASSIGN_W(147,vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack);
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__memory_align_exception 
            = vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__memory_align_exception;
    } else if (((IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_predict_failed) 
                | (IData)(vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__load_wake_up_failed_stall))) {
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__instr_valid = 0U;
        VL_CONST_W_1X(147,vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack,0x00000000);
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__memory_align_exception = 0U;
    } else {
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__instr_valid 
            = vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack_valid;
        VL_ASSIGNSEL_WI(147,20,0x7fU, vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack, 
                        VL_CONCAT_III(20,11,9, (0x7ffU 
                                                & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x8fU, 0xbU)), 
                                      VL_CONCAT_III(9,8,1, 
                                                    (0xffU 
                                                     & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x87U, 8U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x86U)))));
        VL_ASSIGNSEL_WQ(147,34,0x3dU, vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack, 
                        VL_CONCAT_QII(34,32,2, vlSelfRef.__PVT__access_addr, 
                                      VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x85U)), 
                                                    (1U 
                                                     & VL_BITSEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x84U)))));
        VL_ASSIGNSEL_WI(147,32,0x5fU, vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack, vlSelfRef.__PVT__store_data);
        VL_ASSIGNSEL_WI(147,12,0x31U, vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack, 
                        VL_CONCAT_III(12,4,8, (IData)(vlSelfRef.__PVT__byte_sel), 
                                      VL_CONCAT_III(8,2,6, 
                                                    (3U 
                                                     & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)), 
                                                    (0x3fU 
                                                     & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x7cU, 6U)))));
        VL_ASSIGNSEL_WI(147,17,0x20U, vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack, 
                        VL_CONCAT_III(17,6,11, (0x3fU 
                                                & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x2aU, 6U)), 
                                      VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__non_idempotent_region), 
                                                    (0x3ffU 
                                                     & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x20U, 0xaU)))));
        VL_ASSIGNSEL_WI(147,32,0U, vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__agu_pack, 
                        VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0U, 0x20U));
        vlSymsp->TOP__falco_top__core__agu_io_inst.__Vdly__memory_align_exception 
            = vlSelfRef.__PVT__memory_align_exception;
    }
}

VL_INLINE_OPT void Vfalco_top_AGU___nba_comb__TOP__falco_top__core__address_generate_unit__0(Vfalco_top_AGU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_AGU___nba_comb__TOP__falco_top__core__address_generate_unit__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__wait_for_non_idempotent 
        = ((VL_BITSEL_IWII(147, vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__agu_pack, 0x2aU) 
            & (IData)(vlSymsp->TOP__falco_top__core__agu_io_inst.__PVT__instr_valid)) 
           & (IData)(vlSymsp->TOP__falco_top__core__sdb_io_inst.__PVT__non_idempotent_instr_exists));
}

VL_INLINE_OPT void Vfalco_top_AGU___nba_comb__TOP__falco_top__core__address_generate_unit__1(Vfalco_top_AGU* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_AGU___nba_comb__TOP__falco_top__core__address_generate_unit__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__1__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__1__prf_register_data 
        = VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x3cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__1__rs_addr = 
        (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x30U, 6U));
    vlSelfRef.__Vfunc_bypass_network__1__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__1__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__1__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__1__prf_register_data)))));
    vlSelfRef.__PVT__rs2_data = vlSelfRef.__Vfunc_bypass_network__1__Vfuncout;
    vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__muldiv_wb;
    vlSelfRef.__Vfunc_bypass_network__0__alu1_wb = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu1_wb;
    vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb 
        = vlSymsp->TOP__falco_top__core__exe_stage_io_inst.__PVT__alu_csr_bc_wb;
    vlSelfRef.__Vfunc_bypass_network__0__mem_wb = vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb;
    vlSelfRef.__Vfunc_bypass_network__0__prf_register_data 
        = VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x5cU, 0x20U);
    vlSelfRef.__Vfunc_bypass_network__0__rs_addr = 
        (0x3fU & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x36U, 6U));
    vlSelfRef.__Vfunc_bypass_network__0__Vfuncout = 
        ((0U == (IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr))
          ? 0U : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                    == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x20U, 6U))) 
                   & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0x26U))
                   ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu_csr_wb, 0U, 0x20U)
                   : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                        == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x20U, 6U))) 
                       & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0x26U))
                       ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__alu1_wb, 0U, 0x20U)
                       : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                            == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x20U, 6U))) 
                           & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0x26U))
                           ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__muldiv_wb, 0U, 0x20U)
                           : ((((IData)(vlSelfRef.__Vfunc_bypass_network__0__rs_addr) 
                                == (0x3fU & VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0x20U, 6U))) 
                               & VL_BITSEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0x26U))
                               ? VL_SEL_IQII(39, vlSelfRef.__Vfunc_bypass_network__0__mem_wb, 0U, 0x20U)
                               : vlSelfRef.__Vfunc_bypass_network__0__prf_register_data)))));
    vlSelfRef.__PVT__rs1_data = vlSelfRef.__Vfunc_bypass_network__0__Vfuncout;
    vlSelfRef.__PVT__unalign_store_data = vlSelfRef.__PVT__rs2_data;
    vlSelfRef.__PVT__access_addr = (VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x9aU, 0x20U) 
                                    + vlSelfRef.__PVT__rs1_data);
    vlSelfRef.__PVT__non_idempotent_region = (0xcU 
                                              == (0xfU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0x1cU, 4U)));
    if ((0U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_EXTEND_II(32,8, 
                                                       (0xffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U)));
            vlSelfRef.__PVT__byte_sel = 1U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((1U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_EXTEND_II(32,16, 
                                                       (0xffffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 0x10U)));
            vlSelfRef.__PVT__byte_sel = 3U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((2U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = vlSelfRef.__PVT__unalign_store_data;
            vlSelfRef.__PVT__byte_sel = 0xfU;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((1U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,24,8, 
                                                        VL_EXTEND_II(24,8, 
                                                                     (0xffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U))), 0U);
            vlSelfRef.__PVT__byte_sel = 2U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((2U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,16,16, 
                                                        VL_EXTEND_II(16,8, 
                                                                     (0xffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U))), 0U);
            vlSelfRef.__PVT__byte_sel = 4U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else if ((1U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 0x10U)), 0U);
            vlSelfRef.__PVT__byte_sel = 0xcU;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else if ((3U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__access_addr, 0U, 2U)))) {
        if ((0U == (3U & VL_SEL_IWII(186, vlSymsp->TOP__falco_top__core__register_read_io_inst.__PVT__mem_issue_pack, 0x82U, 2U)))) {
            vlSelfRef.__PVT__store_data = VL_CONCAT_III(32,8,24, 
                                                        (0xffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__unalign_store_data, 0U, 8U)), 0U);
            vlSelfRef.__PVT__byte_sel = 8U;
            vlSelfRef.__PVT__memory_align_exception = 0U;
        } else {
            vlSelfRef.__PVT__store_data = 0U;
            vlSelfRef.__PVT__byte_sel = 0U;
            vlSelfRef.__PVT__memory_align_exception = 1U;
        }
    } else {
        vlSelfRef.__PVT__store_data = 0U;
        vlSelfRef.__PVT__byte_sel = 0U;
        vlSelfRef.__PVT__memory_align_exception = 0U;
    }
}
