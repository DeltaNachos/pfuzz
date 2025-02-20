// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfalco_top.h for the primary calling header

#include "Vfalco_top__pch.h"
#include "Vfalco_top__Syms.h"
#include "Vfalco_top_mem_access.h"

VL_INLINE_OPT void Vfalco_top_mem_access___ico_sequent__TOP__falco_top__core__MemAccess__0(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___ico_sequent__TOP__falco_top__core__MemAccess__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        VL_ASSIGNSEL_QI(39,32,0U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.load_data);
        VL_ASSIGNBIT_QI(0x26U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.__PVT__load_data_valid);
    } else {
        VL_ASSIGNSEL_QI(39,32,0U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.load_data);
        VL_ASSIGNBIT_QI(0x26U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.__PVT__load_data_valid);
    }
}

VL_INLINE_OPT void Vfalco_top_mem_access___ico_comb__TOP__falco_top__core__MemAccess__0(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___ico_comb__TOP__falco_top__core__MemAccess__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_access_stall = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
}

VL_INLINE_OPT void Vfalco_top_mem_access___act_sequent__TOP__falco_top__core__MemAccess__0(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___act_sequent__TOP__falco_top__core__MemAccess__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_primitive_data = ((IData)(vlSelfRef.__PVT__mem_access_stall_delay)
                                             ? vlSelfRef.__PVT__load_data_delay
                                             : ((IData)(vlSelfRef.__PVT__load_forward_data_valid_reg)
                                                 ? 
                                                (((((((((1U 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg)) 
                                                        | (3U 
                                                           == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                       | (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                      | (2U 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                     | (4U 
                                                        == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                    | (0xcU 
                                                       == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                   | (8U 
                                                      == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                  | (5U 
                                                     == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg)))
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                   ? 
                                                  VL_CONCAT_III(32,24,8, 
                                                                (0xffffffU 
                                                                 & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 0x18U)), 
                                                                (0xffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                    ? 
                                                   VL_CONCAT_III(32,16,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 0x10U)), 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 0x10U)))
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                     ? vlSelfRef.__PVT__load_forward_data_reg
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                      ? 
                                                     VL_CONCAT_III(32,16,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 0x10U)), 
                                                                   VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U))))
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                       ? 
                                                      VL_CONCAT_III(32,8,24, 
                                                                    (0xffU 
                                                                     & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                    VL_CONCAT_III(24,8,16, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 8U)), 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x10U))))
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                        ? 
                                                       VL_CONCAT_III(32,16,16, 
                                                                     (0xffffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 0x10U)), 
                                                                     (0xffffU 
                                                                      & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x10U)))
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                         ? 
                                                        VL_CONCAT_III(32,8,24, 
                                                                      (0xffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                      (0xffffffU 
                                                                       & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x18U)))
                                                         : 
                                                        VL_CONCAT_III(32,16,16, 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 8U))), 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U)))))))))))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                   ? 
                                                  VL_CONCAT_III(32,8,24, 
                                                                (0xffU 
                                                                 & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                VL_CONCAT_III(24,16,8, 
                                                                              (0xffffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 0x10U)), 
                                                                              (0xffU 
                                                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U))))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                    ? 
                                                   VL_CONCAT_III(32,8,24, 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                 (0xffffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 0x18U)))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                     ? 
                                                    VL_CONCAT_III(32,8,24, 
                                                                  (0xffU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                  VL_CONCAT_III(24,16,8, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 0x10U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U))))
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                      ? 
                                                     VL_CONCAT_III(32,16,16, 
                                                                   VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 8U))), 
                                                                   VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U))))
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                       ? 
                                                      VL_CONCAT_III(32,8,24, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                    VL_CONCAT_III(24,8,16, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 8U)), 
                                                                                (0xffffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 0x10U))))
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                        ? 
                                                       VL_CONCAT_III(32,16,16, 
                                                                     (0xffffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 0x10U)), 
                                                                     VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U))))
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                         ? 
                                                        VL_CONCAT_III(32,24,8, 
                                                                      (0xffffffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 0x18U)), 
                                                                      (0xffU 
                                                                       & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U)))
                                                         : 0U))))))))
                                                 : 
                                                VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x20U)));
    vlSelfRef.__PVT__load_alignment_data = ((0U == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                             ? vlSelfRef.__PVT__load_primitive_data
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                                 ? 
                                                VL_CONCAT_III(32,8,24, 
                                                              (0xffU 
                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0U, 8U)), 
                                                              (0xffffffU 
                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 8U, 0x18U)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                                  ? 
                                                 VL_CONCAT_III(32,16,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0U, 0x10U)), 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0x10U, 0x10U)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                                   ? 
                                                  VL_CONCAT_III(32,24,8, 
                                                                (0xffffffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0U, 0x18U)), 
                                                                (0xffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0x18U, 8U)))
                                                   : vlSelfRef.__PVT__load_primitive_data))));
    if ((0U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = ((IData)(vlSelfRef.__PVT__mem_load_ext_sel_reg)
                                ? VL_EXTEND_II(32,8, 
                                               (0xffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 8U)))
                                : VL_CONCAT_III(32,24,8, 
                                                (0xffffffU 
                                                 & VL_REPLICATE_IOI(1,
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 7U)), 0x18U)), 
                                                (0xffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 8U))));
    } else if ((1U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = ((IData)(vlSelfRef.__PVT__mem_load_ext_sel_reg)
                                ? VL_EXTEND_II(32,16, 
                                               (0xffffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 0x10U)))
                                : VL_CONCAT_III(32,16,16, 
                                                (0xffffU 
                                                 & VL_REPLICATE_IOI(1,
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0xfU)), 0x10U)), 
                                                (0xffffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 0x10U))));
    } else if ((2U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = vlSelfRef.__PVT__load_alignment_data;
    } else if ((3U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = 0U;
    }
    if (vlSelfRef.__PVT__rst) {
        VL_ASSIGNSEL_QI(39,32,0U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.load_data);
        VL_ASSIGNBIT_QI(0x26U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.__PVT__load_data_valid);
    } else {
        VL_ASSIGNSEL_QI(39,32,0U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.load_data);
        VL_ASSIGNBIT_QI(0x26U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.__PVT__load_data_valid);
    }
}

VL_INLINE_OPT void Vfalco_top_mem_access___act_comb__TOP__falco_top__core__MemAccess__0(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___act_comb__TOP__falco_top__core__MemAccess__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_access_stall = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
}

VL_INLINE_OPT void Vfalco_top_mem_access___nba_sequent__TOP__falco_top__core__MemAccess__0(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___nba_sequent__TOP__falco_top__core__MemAccess__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__load_data_valid = vlSelfRef.__PVT__load_data_valid;
    vlSelfRef.__Vdly__load_data_delay = vlSelfRef.__PVT__load_data_delay;
    vlSelfRef.__Vdly__load_byte_sel_reg = vlSelfRef.__PVT__load_byte_sel_reg;
    vlSelfRef.__Vdly__load_rob_tag_reg = vlSelfRef.__PVT__load_rob_tag_reg;
    vlSelfRef.__Vdly__mem_load_ext_sel_reg = vlSelfRef.__PVT__mem_load_ext_sel_reg;
    vlSelfRef.__Vdly__load_mem_input_sel_reg = vlSelfRef.__PVT__load_mem_input_sel_reg;
    vlSelfRef.__Vdly__load_addr_alignment_reg = vlSelfRef.__PVT__load_addr_alignment_reg;
    vlSelfRef.__Vdly__load_forward_data_reg = vlSelfRef.__PVT__load_forward_data_reg;
    vlSelfRef.__Vdly__load_forward_data_valid_reg = vlSelfRef.__PVT__load_forward_data_valid_reg;
    vlSelfRef.__Vdly__load_forward_hit_mask_reg = vlSelfRef.__PVT__load_forward_hit_mask_reg;
    vlSelfRef.__Vdly__load_data_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                               & ((IData)(vlSelfRef.__PVT__mem_access_stall)
                                                   ? (IData)(vlSelfRef.__PVT__load_data_valid)
                                                   : 
                                                  ((VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x3bU) 
                                                    | VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x3aU)) 
                                                   & VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x3cU)))));
    vlSelfRef.__Vdly__load_data_delay = ((IData)(vlSelfRef.__PVT__rst)
                                          ? 0U : ((IData)(vlSelfRef.__PVT__mem_access_stall_delay)
                                                   ? vlSelfRef.__PVT__load_data_delay
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__load_forward_data_valid_reg)
                                                    ? vlSelfRef.__PVT__load_primitive_data
                                                    : 
                                                   VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x20U))));
    if (vlSelfRef.__PVT__rst) {
        vlSelfRef.__Vdly__load_forward_data_reg = 0U;
        vlSelfRef.__Vdly__load_addr_alignment_reg = 0U;
        vlSelfRef.__Vdly__mem_load_ext_sel_reg = 0U;
        vlSelfRef.__Vdly__load_mem_input_sel_reg = 3U;
        vlSelfRef.__Vdly__load_byte_sel_reg = 0U;
        vlSelfRef.__Vdly__load_forward_data_valid_reg = 0U;
        vlSelfRef.__Vdly__load_rob_tag_reg = 0U;
    } else if (vlSelfRef.__PVT__mem_access_stall) {
        vlSelfRef.__Vdly__load_forward_data_reg = vlSelfRef.__PVT__load_forward_data_reg;
        vlSelfRef.__Vdly__load_addr_alignment_reg = vlSelfRef.__PVT__load_addr_alignment_reg;
        vlSelfRef.__Vdly__mem_load_ext_sel_reg = vlSelfRef.__PVT__mem_load_ext_sel_reg;
        vlSelfRef.__Vdly__load_mem_input_sel_reg = vlSelfRef.__PVT__load_mem_input_sel_reg;
        vlSelfRef.__Vdly__load_byte_sel_reg = vlSelfRef.__PVT__load_byte_sel_reg;
        vlSelfRef.__Vdly__load_forward_data_valid_reg 
            = vlSelfRef.__PVT__load_forward_data_valid_reg;
        vlSelfRef.__Vdly__load_rob_tag_reg = vlSelfRef.__PVT__load_rob_tag_reg;
    } else {
        vlSelfRef.__Vdly__load_forward_data_reg = VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x1aU, 0x20U);
        vlSelfRef.__Vdly__load_forward_hit_mask_reg 
            = (0xfU & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x16U, 4U));
        vlSelfRef.__Vdly__load_addr_alignment_reg = 
            (3U & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x14U, 2U));
        vlSelfRef.__Vdly__mem_load_ext_sel_reg = (1U 
                                                  & VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0xdU));
        vlSelfRef.__Vdly__load_mem_input_sel_reg = 
            (3U & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0xeU, 2U));
        vlSelfRef.__Vdly__load_byte_sel_reg = (0xfU 
                                               & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x10U, 4U));
        vlSelfRef.__Vdly__load_forward_data_valid_reg 
            = (1U & VL_BITSEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 0x3bU));
        vlSelfRef.__Vdly__load_rob_tag_reg = (0x3fU 
                                              & VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 1U, 6U));
    }
    vlSelfRef.__PVT__load_data_delay = vlSelfRef.__Vdly__load_data_delay;
    vlSelfRef.__Vdly__mem_access_stall_delay = vlSelfRef.__PVT__mem_access_stall_delay;
    vlSelfRef.__PVT__load_byte_sel_reg = vlSelfRef.__Vdly__load_byte_sel_reg;
    vlSelfRef.__PVT__mem_load_ext_sel_reg = vlSelfRef.__Vdly__mem_load_ext_sel_reg;
    vlSelfRef.__PVT__load_mem_input_sel_reg = vlSelfRef.__Vdly__load_mem_input_sel_reg;
    vlSelfRef.__PVT__load_addr_alignment_reg = vlSelfRef.__Vdly__load_addr_alignment_reg;
    vlSelfRef.__PVT__load_forward_data_reg = vlSelfRef.__Vdly__load_forward_data_reg;
    vlSelfRef.__PVT__load_forward_data_valid_reg = vlSelfRef.__Vdly__load_forward_data_valid_reg;
    vlSelfRef.__PVT__load_forward_hit_mask_reg = vlSelfRef.__Vdly__load_forward_hit_mask_reg;
    vlSelfRef.__Vdly__mem_access_stall_delay = ((~ (IData)(vlSelfRef.__PVT__rst)) 
                                                & (IData)(vlSelfRef.__PVT__mem_access_stall));
    vlSelfRef.__PVT__mem_access_stall_delay = vlSelfRef.__Vdly__mem_access_stall_delay;
    vlSelfRef.__PVT__load_primitive_data = ((IData)(vlSelfRef.__PVT__mem_access_stall_delay)
                                             ? vlSelfRef.__PVT__load_data_delay
                                             : ((IData)(vlSelfRef.__PVT__load_forward_data_valid_reg)
                                                 ? 
                                                (((((((((1U 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg)) 
                                                        | (3U 
                                                           == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                       | (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                      | (2U 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                     | (4U 
                                                        == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                    | (0xcU 
                                                       == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                   | (8U 
                                                      == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))) 
                                                  | (5U 
                                                     == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg)))
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                   ? 
                                                  VL_CONCAT_III(32,24,8, 
                                                                (0xffffffU 
                                                                 & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 0x18U)), 
                                                                (0xffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                    ? 
                                                   VL_CONCAT_III(32,16,16, 
                                                                 (0xffffU 
                                                                  & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 0x10U)), 
                                                                 (0xffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 0x10U)))
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                     ? vlSelfRef.__PVT__load_forward_data_reg
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                      ? 
                                                     VL_CONCAT_III(32,16,16, 
                                                                   (0xffffU 
                                                                    & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 0x10U)), 
                                                                   VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U))))
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                       ? 
                                                      VL_CONCAT_III(32,8,24, 
                                                                    (0xffU 
                                                                     & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                    VL_CONCAT_III(24,8,16, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 8U)), 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x10U))))
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                        ? 
                                                       VL_CONCAT_III(32,16,16, 
                                                                     (0xffffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 0x10U)), 
                                                                     (0xffffU 
                                                                      & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x10U)))
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                         ? 
                                                        VL_CONCAT_III(32,8,24, 
                                                                      (0xffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                      (0xffffffU 
                                                                       & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x18U)))
                                                         : 
                                                        VL_CONCAT_III(32,16,16, 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 8U))), 
                                                                      VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U)))))))))))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                   ? 
                                                  VL_CONCAT_III(32,8,24, 
                                                                (0xffU 
                                                                 & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                VL_CONCAT_III(24,16,8, 
                                                                              (0xffffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 0x10U)), 
                                                                              (0xffU 
                                                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U))))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                    ? 
                                                   VL_CONCAT_III(32,8,24, 
                                                                 (0xffU 
                                                                  & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x18U, 8U)), 
                                                                 (0xffffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 0x18U)))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                     ? 
                                                    VL_CONCAT_III(32,8,24, 
                                                                  (0xffU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                  VL_CONCAT_III(24,16,8, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 0x10U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U))))
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                      ? 
                                                     VL_CONCAT_III(32,16,16, 
                                                                   VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 8U))), 
                                                                   VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U))))
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                       ? 
                                                      VL_CONCAT_III(32,8,24, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x18U, 8U)), 
                                                                    VL_CONCAT_III(24,8,16, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0x10U, 8U)), 
                                                                                (0xffffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 0x10U))))
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                        ? 
                                                       VL_CONCAT_III(32,16,16, 
                                                                     (0xffffU 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0x10U, 0x10U)), 
                                                                     VL_CONCAT_III(16,8,8, 
                                                                                (0xffU 
                                                                                & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 8U, 8U)), 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 0U, 8U))))
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelfRef.__PVT__load_forward_hit_mask_reg))
                                                         ? 
                                                        VL_CONCAT_III(32,24,8, 
                                                                      (0xffffffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__load_forward_data_reg, 8U, 0x18U)), 
                                                                      (0xffU 
                                                                       & VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 8U)))
                                                         : 0U))))))))
                                                 : 
                                                VL_SEL_IQII(34, vlSelfRef.__PVT__load_data_resp, 0U, 0x20U)));
    vlSelfRef.__PVT__load_alignment_data = ((0U == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                             ? vlSelfRef.__PVT__load_primitive_data
                                             : ((1U 
                                                 == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                                 ? 
                                                VL_CONCAT_III(32,8,24, 
                                                              (0xffU 
                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0U, 8U)), 
                                                              (0xffffffU 
                                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 8U, 0x18U)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                                  ? 
                                                 VL_CONCAT_III(32,16,16, 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0U, 0x10U)), 
                                                               (0xffffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0x10U, 0x10U)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__load_addr_alignment_reg))
                                                   ? 
                                                  VL_CONCAT_III(32,24,8, 
                                                                (0xffffffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0U, 0x18U)), 
                                                                (0xffU 
                                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_primitive_data, 0x18U, 8U)))
                                                   : vlSelfRef.__PVT__load_primitive_data))));
    if ((0U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = ((IData)(vlSelfRef.__PVT__mem_load_ext_sel_reg)
                                ? VL_EXTEND_II(32,8, 
                                               (0xffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 8U)))
                                : VL_CONCAT_III(32,24,8, 
                                                (0xffffffU 
                                                 & VL_REPLICATE_IOI(1,
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 7U)), 0x18U)), 
                                                (0xffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 8U))));
    } else if ((1U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = ((IData)(vlSelfRef.__PVT__mem_load_ext_sel_reg)
                                ? VL_EXTEND_II(32,16, 
                                               (0xffffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 0x10U)))
                                : VL_CONCAT_III(32,16,16, 
                                                (0xffffU 
                                                 & VL_REPLICATE_IOI(1,
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0xfU)), 0x10U)), 
                                                (0xffffU 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__load_alignment_data, 0U, 0x10U))));
    } else if ((2U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = vlSelfRef.__PVT__load_alignment_data;
    } else if ((3U == (IData)(vlSelfRef.__PVT__load_mem_input_sel_reg))) {
        vlSelfRef.load_data = 0U;
    }
}

VL_INLINE_OPT void Vfalco_top_mem_access___nba_sequent__TOP__falco_top__core__MemAccess__1(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___nba_sequent__TOP__falco_top__core__MemAccess__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(39,6,0x20U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__Vdly__load_wb, 
                    (0x3fU & ((IData)(vlSelfRef.__PVT__rst)
                               ? 0U : ((IData)(vlSelfRef.__PVT__mem_access_stall)
                                        ? VL_SEL_IQII(39, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, 0x20U, 6U)
                                        : VL_SEL_IQII(61, vlSymsp->TOP__falco_top__core__lsu_io_inst.__PVT__lsu_pack, 7U, 6U)))));
    vlSymsp->TOP__falco_top__core__mem_access_io_inst.__Vdly__load_commit 
        = ((IData)(vlSelfRef.__PVT__rst) ? 0U : VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__load_data_valid), (IData)(vlSelfRef.__PVT__load_rob_tag_reg)));
    vlSelfRef.__PVT__load_rob_tag_reg = vlSelfRef.__Vdly__load_rob_tag_reg;
    vlSelfRef.__PVT__load_data_valid = vlSelfRef.__Vdly__load_data_valid;
}

VL_INLINE_OPT void Vfalco_top_mem_access___nba_comb__TOP__falco_top__core__MemAccess__0(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___nba_comb__TOP__falco_top__core__MemAccess__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__rst) {
        VL_ASSIGNSEL_QI(39,32,0U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.load_data);
        VL_ASSIGNBIT_QI(0x26U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.__PVT__load_data_valid);
    } else {
        VL_ASSIGNSEL_QI(39,32,0U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.load_data);
        VL_ASSIGNBIT_QI(0x26U, vlSymsp->TOP__falco_top__core__mem_access_io_inst.__PVT__load_wb, vlSelfRef.__PVT__load_data_valid);
    }
}

VL_INLINE_OPT void Vfalco_top_mem_access___nba_comb__TOP__falco_top__core__MemAccess__1(Vfalco_top_mem_access* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfalco_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfalco_top_mem_access___nba_comb__TOP__falco_top__core__MemAccess__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_access_stall = vlSymsp->TOP__falco_top__core__pipe_ctrl_io_inst.__PVT__recovery_stall;
}
