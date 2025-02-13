// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_DatPath.h"
#include "Vsodor_top__Syms.h"

VL_INLINE_OPT void Vsodor_top_DatPath___ico_sequent__TOP__sodor_top__sodor_core__d__0(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___ico_sequent__TOP__sodor_top__sodor_core__d__0\n"); );
    // Body
    vlSelf->__PVT__csr_clock = vlSelf->__PVT__clock;
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__clock 
        = vlSelf->__PVT__csr_clock;
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__0(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__0\n"); );
    // Body
    vlSelf->__Vdlyvset__regfile__v0 = 0U;
    vlSelf->__Vdlyvset__regfile__v1 = 0U;
    vlSelf->__Vdly__pc_reg = vlSelf->__PVT__pc_reg;
    if (((IData)(vlSelf->__PVT__regfile_MPORT_en) & (IData)(vlSelf->__PVT__regfile_MPORT_mask))) {
        vlSelf->__Vdlyvval__regfile__v0 = vlSelf->__PVT__regfile_MPORT_data;
        vlSelf->__Vdlyvset__regfile__v0 = 1U;
        vlSelf->__Vdlyvdim0__regfile__v0 = vlSelf->__PVT__regfile_MPORT_addr;
    }
    if (((IData)(vlSelf->__PVT__regfile_MPORT_2_en) 
         & (IData)(vlSelf->__PVT__regfile_MPORT_2_mask))) {
        vlSelf->__Vdlyvval__regfile__v1 = vlSelf->__PVT__regfile_MPORT_2_data;
        vlSelf->__Vdlyvset__regfile__v1 = 1U;
        vlSelf->__Vdlyvdim0__regfile__v1 = vlSelf->__PVT__regfile_MPORT_2_addr;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_reg = 0x80000000U;
    } else if (vlSelf->__PVT___T_10) {
        vlSelf->__Vdly__pc_reg = ((IData)(vlSelf->__PVT___T)
                                   ? vlSelf->__PVT__pc_plus4
                                   : ((IData)(vlSelf->__PVT___T_1)
                                       ? vlSelf->__PVT__br_target
                                       : vlSelf->__PVT___T_7));
    }
    vlSelf->__PVT__pc_reg = vlSelf->__Vdly__pc_reg;
    if (vlSelf->__Vdlyvset__regfile__v0) {
        vlSelf->__PVT__regfile[vlSelf->__Vdlyvdim0__regfile__v0] 
            = vlSelf->__Vdlyvval__regfile__v0;
    }
    if (vlSelf->__Vdlyvset__regfile__v1) {
        vlSelf->__PVT__regfile[vlSelf->__Vdlyvdim0__regfile__v1] 
            = vlSelf->__Vdlyvval__regfile__v1;
    }
    vlSelf->__PVT__io_imem_req_bits_addr = vlSelf->__PVT__pc_reg;
    vlSelf->__PVT__csr_io_pc = vlSelf->__PVT__pc_reg;
    vlSelf->__PVT__pc_plus4 = ((IData)(4U) + vlSelf->__PVT__pc_reg);
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_pc 
        = vlSelf->__PVT__csr_io_pc;
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__1(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__1\n"); );
    // Body
    vlSelf->__PVT__csr_io_status_mpie = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_mpie;
    vlSelf->__PVT__csr_io_status_mie = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_status_mie;
    vlSelf->__PVT__csr_io_time = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_time;
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__2(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__2\n"); );
    // Body
    vlSelf->__PVT__csr_reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__reset 
        = vlSelf->__PVT__csr_reset;
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__3(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__3\n"); );
    // Body
    vlSelf->__PVT__regfile_MPORT_addr = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 7U, 5U));
    vlSelf->__PVT__imm_b = VL_CONCAT_III(12,1,11, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x1fU)), 
                                         VL_CONCAT_III(11,1,10, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 7U)), 
                                                       VL_CONCAT_III(10,6,4, 
                                                                     (0x3fU 
                                                                      & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x19U, 6U)), 
                                                                     (0xfU 
                                                                      & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 8U, 4U)))));
    vlSelf->__PVT__imm_j = VL_CONCAT_III(20,1,19, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x1fU)), 
                                         VL_CONCAT_III(19,8,11, 
                                                       (0xffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0xcU, 8U)), 
                                                       VL_CONCAT_III(11,1,10, 
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x14U)), 
                                                                     (0x3ffU 
                                                                      & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x15U, 0xaU)))));
    vlSelf->__PVT__rs2_addr = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x14U, 5U));
    vlSelf->__PVT__regfile_MPORT_4_addr = (0x1fU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x14U, 5U));
    vlSelf->__PVT__imm_u = (0xfffffU & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0xcU, 0x14U));
    vlSelf->__PVT__regfile_MPORT_3_addr = (0x1fU & 
                                           VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0xfU, 5U));
    vlSelf->__PVT__wb_addr = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 7U, 5U));
    vlSelf->__PVT__imm_i = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x14U, 0xcU));
    vlSelf->__PVT__rs1_addr = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0xfU, 5U));
    vlSelf->__PVT__csr_io_decode_csr = (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x14U, 0xcU));
    vlSelf->__PVT__io_dat_inst = vlSelf->__PVT__io_imem_resp_bits_data;
    vlSelf->__PVT___T_38 = ((1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__imm_b), 0xbU))
                             ? 0x7ffffU : 0U);
    vlSelf->__PVT___T_42 = ((1U & VL_BITSEL_IIII(20, vlSelf->__PVT__imm_j, 0x13U))
                             ? 0x7ffU : 0U);
    vlSelf->__PVT__imm_u_sext = VL_CONCAT_III(32,20,12, vlSelf->__PVT__imm_u, 0U);
    vlSelf->__PVT___T_14 = (0U != (IData)(vlSelf->__PVT__wb_addr));
    vlSelf->__PVT__imm_s = VL_CONCAT_III(12,7,5, (0x7fU 
                                                  & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x19U, 7U)), (IData)(vlSelf->__PVT__wb_addr));
    vlSelf->__PVT___T_32 = ((1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__imm_i), 0xbU))
                             ? 0xfffffU : 0U);
    vlSelf->__PVT__imm_z = VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__rs1_addr));
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_decode_csr 
        = vlSelf->__PVT__csr_io_decode_csr;
    vlSelf->__PVT__imm_b_sext = VL_CONCAT_III(32,19,13, vlSelf->__PVT___T_38, 
                                              VL_CONCAT_III(13,1,12, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x1fU)), 
                                                            VL_CONCAT_III(12,1,11, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 7U)), 
                                                                          VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 8U, 4U)), 0U)))));
    vlSelf->__PVT__imm_j_sext = VL_CONCAT_III(32,11,21, (IData)(vlSelf->__PVT___T_42), 
                                              VL_CONCAT_III(21,1,20, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x1fU)), 
                                                            VL_CONCAT_III(20,8,12, 
                                                                          (0xffU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0xcU, 8U)), 
                                                                          VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x14U)), 
                                                                                VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x15U, 0xaU)), 0U)))));
    vlSelf->__PVT___T_35 = ((1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__imm_s), 0xbU))
                             ? 0xfffffU : 0U);
    vlSelf->__PVT__imm_i_sext = VL_CONCAT_III(32,20,12, vlSelf->__PVT___T_32, (IData)(vlSelf->__PVT__imm_i));
    vlSelf->__PVT__imm_s_sext = VL_CONCAT_III(32,20,12, vlSelf->__PVT___T_35, 
                                              VL_CONCAT_III(12,7,5, 
                                                            (0x7fU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__io_imem_resp_bits_data, 0x19U, 7U)), (IData)(vlSelf->__PVT__wb_addr)));
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__4(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__4\n"); );
    // Body
    vlSelf->__PVT__csr_io_exception = vlSelf->__PVT__io_ctl_exception;
    vlSelf->__PVT___T_48 = (0U == (IData)(vlSelf->__PVT__io_ctl_op2_sel));
    vlSelf->__PVT___T_49 = (3U == (IData)(vlSelf->__PVT__io_ctl_op2_sel));
    vlSelf->__PVT___T_50 = (1U == (IData)(vlSelf->__PVT__io_ctl_op2_sel));
    vlSelf->__PVT___T_51 = (2U == (IData)(vlSelf->__PVT__io_ctl_op2_sel));
    vlSelf->__PVT___T_43 = (0U == (IData)(vlSelf->__PVT__io_ctl_op1_sel));
    vlSelf->__PVT___T_44 = (1U == (IData)(vlSelf->__PVT__io_ctl_op1_sel));
    vlSelf->__PVT___T_45 = (2U == (IData)(vlSelf->__PVT__io_ctl_op1_sel));
    vlSelf->__PVT___T_10 = (1U & (~ (IData)(vlSelf->__PVT__io_ctl_stall)));
    vlSelf->__PVT__csr_io_retire = (1U & (~ ((IData)(vlSelf->__PVT__io_ctl_stall) 
                                             | (IData)(vlSelf->__PVT__io_ctl_exception))));
    vlSelf->__PVT___T_103 = (0U == (IData)(vlSelf->__PVT__io_ctl_wb_sel));
    vlSelf->__PVT___T_104 = (1U == (IData)(vlSelf->__PVT__io_ctl_wb_sel));
    vlSelf->__PVT___T_105 = (2U == (IData)(vlSelf->__PVT__io_ctl_wb_sel));
    vlSelf->__PVT___T_106 = (3U == (IData)(vlSelf->__PVT__io_ctl_wb_sel));
    vlSelf->__PVT___T_55 = (1U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_58 = (2U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_61 = (6U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_63 = (7U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_65 = (8U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_67 = (9U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_71 = (0xaU == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_73 = (3U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_76 = (5U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_80 = (4U == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT___T_82 = (0xbU == (IData)(vlSelf->__PVT__io_ctl_alu_fun));
    vlSelf->__PVT__wb_wen = ((IData)(vlSelf->__PVT__io_ctl_rf_wen) 
                             & (~ (IData)(vlSelf->__PVT__io_ctl_exception)));
    vlSelf->__PVT__csr_io_rw_cmd = vlSelf->__PVT__io_ctl_csr_cmd;
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_exception 
        = vlSelf->__PVT__csr_io_exception;
    vlSelf->__PVT___T_52 = ((IData)(vlSelf->__PVT___T_51)
                             ? vlSelf->__PVT__imm_s_sext
                             : 0U);
    vlSelf->__PVT___T_46 = ((IData)(vlSelf->__PVT___T_45)
                             ? vlSelf->__PVT__imm_z
                             : 0U);
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_retire 
        = vlSelf->__PVT__csr_io_retire;
    vlSelf->__PVT__regfile_MPORT_en = ((IData)(vlSelf->__PVT__wb_wen) 
                                       & (IData)(vlSelf->__PVT___T_14));
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_rw_cmd 
        = vlSelf->__PVT__csr_io_rw_cmd;
    vlSelf->__PVT___T_53 = ((IData)(vlSelf->__PVT___T_50)
                             ? vlSelf->__PVT__imm_i_sext
                             : vlSelf->__PVT___T_52);
    vlSelf->__PVT___T_47 = ((IData)(vlSelf->__PVT___T_44)
                             ? vlSelf->__PVT__imm_u_sext
                             : vlSelf->__PVT___T_46);
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__5(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_sequent__TOP__sodor_top__sodor_core__d__5\n"); );
    // Body
    vlSelf->__PVT__csr_io_eret = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_eret;
    vlSelf->__PVT__io_dat_csr_eret = vlSelf->__PVT__csr_io_eret;
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__0(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__0\n"); );
    // Body
    vlSelf->__PVT__regfile_MPORT_4_data = vlSelf->__PVT__regfile
        [vlSelf->__PVT__regfile_MPORT_4_addr];
    vlSelf->__PVT__regfile_MPORT_3_data = vlSelf->__PVT__regfile
        [vlSelf->__PVT__regfile_MPORT_3_addr];
    vlSelf->__PVT__br_target = (vlSelf->__PVT__pc_reg 
                                + vlSelf->__PVT__imm_b_sext);
    vlSelf->__PVT__jmp_target = (vlSelf->__PVT__pc_reg 
                                 + vlSelf->__PVT__imm_j_sext);
    vlSelf->__PVT___T_54 = ((IData)(vlSelf->__PVT___T_49)
                             ? vlSelf->__PVT__pc_reg
                             : vlSelf->__PVT___T_53);
    vlSelf->__PVT__io_dmem_req_bits_data = ((0U != (IData)(vlSelf->__PVT__rs2_addr))
                                             ? vlSelf->__PVT__regfile_MPORT_4_data
                                             : 0U);
    vlSelf->__PVT___T_113 = ((0U != (IData)(vlSelf->__PVT__rs2_addr))
                              ? vlSelf->__PVT__regfile_MPORT_4_data
                              : 0U);
    vlSelf->__PVT__rs2_data = ((0U != (IData)(vlSelf->__PVT__rs2_addr))
                                ? vlSelf->__PVT__regfile_MPORT_4_data
                                : 0U);
    vlSelf->__PVT___T_112 = ((0U != (IData)(vlSelf->__PVT__rs1_addr))
                              ? vlSelf->__PVT__regfile_MPORT_3_data
                              : 0U);
    vlSelf->__PVT__rs1_data = ((0U != (IData)(vlSelf->__PVT__rs1_addr))
                                ? vlSelf->__PVT__regfile_MPORT_3_data
                                : 0U);
    vlSelf->__PVT___T_69 = ((IData)(vlSelf->__PVT___T_48)
                             ? vlSelf->__PVT__rs2_data
                             : vlSelf->__PVT___T_54);
    vlSelf->__PVT__alu_op2 = ((IData)(vlSelf->__PVT___T_48)
                               ? vlSelf->__PVT__rs2_data
                               : vlSelf->__PVT___T_54);
    vlSelf->__PVT__io_dat_br_lt = VL_LTS_III(32, vlSelf->__PVT___T_112, vlSelf->__PVT___T_113);
    vlSelf->__PVT__jump_reg_target = (vlSelf->__PVT__rs1_data 
                                      + vlSelf->__PVT__imm_i_sext);
    vlSelf->__PVT__io_dat_br_eq = (vlSelf->__PVT__rs1_data 
                                   == vlSelf->__PVT__rs2_data);
    vlSelf->__PVT__io_dat_br_ltu = (vlSelf->__PVT__rs1_data 
                                    < vlSelf->__PVT__rs2_data);
    vlSelf->__PVT___T_68 = ((IData)(vlSelf->__PVT___T_43)
                             ? vlSelf->__PVT__rs1_data
                             : vlSelf->__PVT___T_47);
    vlSelf->__PVT__alu_op1 = ((IData)(vlSelf->__PVT___T_43)
                               ? vlSelf->__PVT__rs1_data
                               : vlSelf->__PVT___T_47);
    vlSelf->__PVT__alu_shamt = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__alu_op2, 0U, 5U));
    vlSelf->__PVT___T_70 = VL_LTS_III(32, vlSelf->__PVT___T_68, vlSelf->__PVT___T_69);
    vlSelf->__PVT___T_57 = (vlSelf->__PVT__alu_op1 
                            + vlSelf->__PVT__alu_op2);
    vlSelf->__PVT___T_60 = (vlSelf->__PVT__alu_op1 
                            - vlSelf->__PVT__alu_op2);
    vlSelf->__PVT___T_62 = (vlSelf->__PVT__alu_op1 
                            & vlSelf->__PVT__alu_op2);
    vlSelf->__PVT___T_64 = (vlSelf->__PVT__alu_op1 
                            | vlSelf->__PVT__alu_op2);
    vlSelf->__PVT___T_66 = (vlSelf->__PVT__alu_op1 
                            ^ vlSelf->__PVT__alu_op2);
    vlSelf->__PVT___T_72 = (vlSelf->__PVT__alu_op1 
                            < vlSelf->__PVT__alu_op2);
    vlSelf->__PVT___GEN_11 = VL_EXTEND_QI(63,32, vlSelf->__PVT__alu_op1);
    vlSelf->__PVT___T_83 = ((IData)(vlSelf->__PVT___T_82)
                             ? vlSelf->__PVT__alu_op1
                             : 0U);
    vlSelf->__PVT___T_79 = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT___T_68, (IData)(vlSelf->__PVT__alu_shamt));
    vlSelf->__PVT___T_81 = (vlSelf->__PVT__alu_op1 
                            >> (IData)(vlSelf->__PVT__alu_shamt));
    vlSelf->__PVT___T_74 = (0x7fffffffffffffffULL & 
                            (vlSelf->__PVT___GEN_11 
                             << (IData)(vlSelf->__PVT__alu_shamt)));
    vlSelf->__PVT___T_84 = ((IData)(vlSelf->__PVT___T_80)
                             ? vlSelf->__PVT___T_81
                             : vlSelf->__PVT___T_83);
    vlSelf->__PVT___T_85 = ((IData)(vlSelf->__PVT___T_76)
                             ? vlSelf->__PVT___T_79
                             : vlSelf->__PVT___T_84);
    vlSelf->__PVT___T_86 = ((IData)(vlSelf->__PVT___T_73)
                             ? VL_SEL_IQII(63, vlSelf->__PVT___T_74, 0U, 0x20U)
                             : vlSelf->__PVT___T_85);
    vlSelf->__PVT___T_87 = ((IData)(vlSelf->__PVT___T_71)
                             ? VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT___T_72))
                             : vlSelf->__PVT___T_86);
    vlSelf->__PVT___T_88 = ((IData)(vlSelf->__PVT___T_67)
                             ? VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT___T_70))
                             : vlSelf->__PVT___T_87);
    vlSelf->__PVT___T_89 = ((IData)(vlSelf->__PVT___T_65)
                             ? vlSelf->__PVT___T_66
                             : vlSelf->__PVT___T_88);
    vlSelf->__PVT___T_90 = ((IData)(vlSelf->__PVT___T_63)
                             ? vlSelf->__PVT___T_64
                             : vlSelf->__PVT___T_89);
    vlSelf->__PVT___T_91 = ((IData)(vlSelf->__PVT___T_61)
                             ? vlSelf->__PVT___T_62
                             : vlSelf->__PVT___T_90);
    vlSelf->__PVT___T_92 = ((IData)(vlSelf->__PVT___T_58)
                             ? vlSelf->__PVT___T_60
                             : vlSelf->__PVT___T_91);
    vlSelf->__PVT__io_dmem_req_bits_addr = ((IData)(vlSelf->__PVT___T_55)
                                             ? vlSelf->__PVT___T_57
                                             : vlSelf->__PVT___T_92);
    vlSelf->__PVT__alu_out = ((IData)(vlSelf->__PVT___T_55)
                               ? vlSelf->__PVT___T_57
                               : vlSelf->__PVT___T_92);
    vlSelf->__PVT__csr_io_rw_wdata = ((IData)(vlSelf->__PVT___T_55)
                                       ? vlSelf->__PVT___T_57
                                       : vlSelf->__PVT___T_92);
    vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_rw_wdata 
        = vlSelf->__PVT__csr_io_rw_wdata;
}

VL_INLINE_OPT void Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__2(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___nba_comb__TOP__sodor_top__sodor_core__d__2\n"); );
    // Body
    vlSelf->__PVT__csr_io_evec = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_evec;
    vlSelf->__PVT__csr_io_rw_rdata = vlSymsp->TOP__sodor_top__sodor_core__d__csr.__PVT__io_rw_rdata;
    vlSelf->__PVT__exception_target = vlSelf->__PVT__csr_io_evec;
}
