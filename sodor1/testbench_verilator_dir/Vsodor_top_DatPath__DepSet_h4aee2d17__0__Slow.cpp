// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsodor_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsodor_top__Syms.h"
#include "Vsodor_top_DatPath.h"

VL_ATTR_COLD void Vsodor_top_DatPath___eval_initial__TOP__sodor_top__sodor_core__d(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___eval_initial__TOP__sodor_top__sodor_core__d\n"); );
    // Body
    vlSelf->__PVT__regfile_MPORT_mask = 1U;
    vlSelf->__PVT__regfile_MPORT_2_mask = 1U;
    vlSelf->__PVT__regfile_MPORT_2_en = 1U;
}

VL_ATTR_COLD void Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__6(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___stl_sequent__TOP__sodor_top__sodor_core__d__6\n"); );
    // Body
    vlSelf->__PVT___T = (0U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_1 = (1U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_2 = (2U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_3 = (3U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_119 = ((1U == (IData)(vlSelf->__PVT__io_ctl_pc_sel))
                              ? 0x42U : 0x3fU);
    vlSelf->__PVT___T_4 = (4U == (IData)(vlSelf->__PVT__io_ctl_pc_sel));
    vlSelf->__PVT___T_121 = ((2U == (IData)(vlSelf->__PVT__io_ctl_pc_sel))
                              ? 0x4aU : (IData)(vlSelf->__PVT___T_119));
    vlSelf->__PVT___T_5 = ((IData)(vlSelf->__PVT___T_4)
                            ? vlSelf->__PVT__exception_target
                            : vlSelf->__PVT__pc_plus4);
    vlSelf->__PVT___T_123 = ((3U == (IData)(vlSelf->__PVT__io_ctl_pc_sel))
                              ? 0x52U : (IData)(vlSelf->__PVT___T_121));
    vlSelf->__PVT___T_6 = ((IData)(vlSelf->__PVT___T_3)
                            ? vlSelf->__PVT__jump_reg_target
                            : vlSelf->__PVT___T_5);
    vlSelf->__PVT___T_7 = ((IData)(vlSelf->__PVT___T_2)
                            ? vlSelf->__PVT__jmp_target
                            : vlSelf->__PVT___T_6);
}

VL_ATTR_COLD void Vsodor_top_DatPath___ctor_var_reset(Vsodor_top_DatPath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsodor_top_DatPath___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_ddpath_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_ddpath_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_ddpath_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_imem_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_imem_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_dmem_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_dmem_req_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_dmem_resp_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_ctl_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_ctl_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_ctl_op1_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_ctl_op2_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_ctl_alu_fun = VL_RAND_RESET_I(4);
    vlSelf->__PVT__io_ctl_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_ctl_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_ctl_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_ctl_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_dat_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_dat_br_eq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_dat_br_lt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_dat_br_ltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_dat_csr_eret = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__regfile_MPORT_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__regfile_MPORT_1_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__regfile_MPORT_3_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__regfile_MPORT_3_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__regfile_MPORT_4_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__regfile_MPORT_4_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__regfile_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__regfile_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__regfile_MPORT_mask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__regfile_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__regfile_MPORT_2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__regfile_MPORT_2_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__regfile_MPORT_2_mask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__regfile_MPORT_2_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_rw_cmd = VL_RAND_RESET_I(3);
    vlSelf->__PVT__csr_io_rw_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_io_rw_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_io_eret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_decode_csr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_io_status_debug = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_prv = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_io_status_sd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_zero1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__csr_io_status_tsr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_tw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_tvm = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_mxr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_sum = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_mprv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_xs = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_io_status_fs = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_io_status_mpp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_io_status_hpp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_io_status_spp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_mpie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_hpie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_spie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_upie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_mie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_hie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_sie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_status_uie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_evec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_io_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_retire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_io_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_io_time = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exception_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT___T_32 = VL_RAND_RESET_I(20);
    vlSelf->__PVT__imm_i_sext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__jump_reg_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm_j = VL_RAND_RESET_I(20);
    vlSelf->__PVT___T_42 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__imm_j_sext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__jmp_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm_b = VL_RAND_RESET_I(12);
    vlSelf->__PVT___T_38 = VL_RAND_RESET_I(19);
    vlSelf->__PVT__imm_b_sext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wb_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wb_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_103 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_55 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_43 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_44 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imm_u = VL_RAND_RESET_I(20);
    vlSelf->__PVT__imm_u_sext = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_45 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imm_z = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_46 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_47 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_48 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_49 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_50 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->__PVT___T_35 = VL_RAND_RESET_I(20);
    vlSelf->__PVT__imm_s_sext = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_52 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_53 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_54 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_57 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_58 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_60 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_61 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_62 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_63 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_64 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_65 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_66 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_67 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_68 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_69 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_70 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_71 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_72 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_73 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_shamt = VL_RAND_RESET_I(5);
    vlSelf->__PVT___GEN_11 = VL_RAND_RESET_Q(63);
    vlSelf->__PVT___T_74 = VL_RAND_RESET_Q(63);
    vlSelf->__PVT___T_76 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_79 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_80 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_81 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_82 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_83 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_84 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_85 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_86 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_87 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_88 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_89 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_90 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_91 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_92 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_104 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_105 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_106 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_107 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_108 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_109 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_112 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_113 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_119 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___T_121 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___T_123 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__regfile__v0 = 0;
    vlSelf->__Vdlyvval__regfile__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__regfile__v0 = 0;
    vlSelf->__Vdlyvdim0__regfile__v1 = 0;
    vlSelf->__Vdlyvval__regfile__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__regfile__v1 = 0;
    vlSelf->__Vdly__pc_reg = VL_RAND_RESET_I(32);
}
