// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsodor_top.h for the primary calling header

#ifndef VERILATED_VSODOR_TOP_DATPATH_H_
#define VERILATED_VSODOR_TOP_DATPATH_H_  // guard

#include "verilated.h"
class Vsodor_top_CSRFile;


class Vsodor_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsodor_top_DatPath final : public VerilatedModule {
  public:
    // CELLS
    Vsodor_top_CSRFile* __PVT__csr;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_ddpath_addr,4,0);
        VL_IN8(__PVT__io_ctl_stall,0,0);
        VL_IN8(__PVT__io_ctl_pc_sel,2,0);
        VL_IN8(__PVT__io_ctl_op1_sel,1,0);
        VL_IN8(__PVT__io_ctl_op2_sel,1,0);
        VL_IN8(__PVT__io_ctl_alu_fun,3,0);
        VL_IN8(__PVT__io_ctl_wb_sel,1,0);
        VL_IN8(__PVT__io_ctl_rf_wen,0,0);
        VL_IN8(__PVT__io_ctl_csr_cmd,2,0);
        VL_IN8(__PVT__io_ctl_exception,0,0);
        VL_OUT8(__PVT__io_dat_br_eq,0,0);
        VL_OUT8(__PVT__io_dat_br_lt,0,0);
        VL_OUT8(__PVT__io_dat_br_ltu,0,0);
        VL_OUT8(__PVT__io_dat_csr_eret,0,0);
        CData/*4:0*/ __PVT__regfile_MPORT_1_addr;
        CData/*4:0*/ __PVT__regfile_MPORT_3_addr;
        CData/*4:0*/ __PVT__regfile_MPORT_4_addr;
        CData/*4:0*/ __PVT__regfile_MPORT_addr;
        CData/*0:0*/ __PVT__regfile_MPORT_mask;
        CData/*0:0*/ __PVT__regfile_MPORT_en;
        CData/*4:0*/ __PVT__regfile_MPORT_2_addr;
        CData/*0:0*/ __PVT__regfile_MPORT_2_mask;
        CData/*0:0*/ __PVT__regfile_MPORT_2_en;
        CData/*0:0*/ __PVT__csr_clock;
        CData/*0:0*/ __PVT__csr_reset;
        CData/*2:0*/ __PVT__csr_io_rw_cmd;
        CData/*0:0*/ __PVT__csr_io_eret;
        CData/*0:0*/ __PVT__csr_io_status_debug;
        CData/*1:0*/ __PVT__csr_io_status_prv;
        CData/*0:0*/ __PVT__csr_io_status_sd;
        CData/*7:0*/ __PVT__csr_io_status_zero1;
        CData/*0:0*/ __PVT__csr_io_status_tsr;
        CData/*0:0*/ __PVT__csr_io_status_tw;
        CData/*0:0*/ __PVT__csr_io_status_tvm;
        CData/*0:0*/ __PVT__csr_io_status_mxr;
        CData/*0:0*/ __PVT__csr_io_status_sum;
        CData/*0:0*/ __PVT__csr_io_status_mprv;
        CData/*1:0*/ __PVT__csr_io_status_xs;
        CData/*1:0*/ __PVT__csr_io_status_fs;
        CData/*1:0*/ __PVT__csr_io_status_mpp;
        CData/*1:0*/ __PVT__csr_io_status_hpp;
        CData/*0:0*/ __PVT__csr_io_status_spp;
        CData/*0:0*/ __PVT__csr_io_status_mpie;
        CData/*0:0*/ __PVT__csr_io_status_hpie;
        CData/*0:0*/ __PVT__csr_io_status_spie;
        CData/*0:0*/ __PVT__csr_io_status_upie;
        CData/*0:0*/ __PVT__csr_io_status_mie;
        CData/*0:0*/ __PVT__csr_io_status_hie;
        CData/*0:0*/ __PVT__csr_io_status_sie;
        CData/*0:0*/ __PVT__csr_io_status_uie;
        CData/*0:0*/ __PVT__csr_io_exception;
        CData/*0:0*/ __PVT__csr_io_retire;
        CData/*0:0*/ __PVT___T;
        CData/*0:0*/ __PVT___T_1;
        CData/*0:0*/ __PVT___T_2;
        CData/*0:0*/ __PVT___T_3;
        CData/*0:0*/ __PVT___T_4;
        CData/*4:0*/ __PVT__rs1_addr;
        CData/*0:0*/ __PVT___T_10;
        CData/*4:0*/ __PVT__rs2_addr;
        CData/*4:0*/ __PVT__wb_addr;
        CData/*0:0*/ __PVT__wb_wen;
    };
    struct {
        CData/*0:0*/ __PVT___T_14;
        CData/*0:0*/ __PVT___T_103;
        CData/*0:0*/ __PVT___T_55;
        CData/*0:0*/ __PVT___T_43;
        CData/*0:0*/ __PVT___T_44;
        CData/*0:0*/ __PVT___T_45;
        CData/*0:0*/ __PVT___T_48;
        CData/*0:0*/ __PVT___T_49;
        CData/*0:0*/ __PVT___T_50;
        CData/*0:0*/ __PVT___T_51;
        CData/*0:0*/ __PVT___T_58;
        CData/*0:0*/ __PVT___T_61;
        CData/*0:0*/ __PVT___T_63;
        CData/*0:0*/ __PVT___T_65;
        CData/*0:0*/ __PVT___T_67;
        CData/*0:0*/ __PVT___T_70;
        CData/*0:0*/ __PVT___T_71;
        CData/*0:0*/ __PVT___T_72;
        CData/*0:0*/ __PVT___T_73;
        CData/*4:0*/ __PVT__alu_shamt;
        CData/*0:0*/ __PVT___T_76;
        CData/*0:0*/ __PVT___T_80;
        CData/*0:0*/ __PVT___T_82;
        CData/*0:0*/ __PVT___T_104;
        CData/*0:0*/ __PVT___T_105;
        CData/*0:0*/ __PVT___T_106;
        CData/*7:0*/ __PVT___T_119;
        CData/*7:0*/ __PVT___T_121;
        CData/*7:0*/ __PVT___T_123;
        CData/*4:0*/ __Vdlyvdim0__regfile__v0;
        CData/*0:0*/ __Vdlyvset__regfile__v0;
        CData/*4:0*/ __Vdlyvdim0__regfile__v1;
        CData/*0:0*/ __Vdlyvset__regfile__v1;
        SData/*11:0*/ __PVT__csr_io_decode_csr;
        SData/*11:0*/ __PVT__imm_i;
        SData/*10:0*/ __PVT___T_42;
        SData/*11:0*/ __PVT__imm_b;
        SData/*11:0*/ __PVT__imm_s;
        VL_IN(__PVT__io_ddpath_wdata,31,0);
        VL_OUT(__PVT__io_ddpath_rdata,31,0);
        VL_OUT(__PVT__io_imem_req_bits_addr,31,0);
        VL_IN(__PVT__io_imem_resp_bits_data,31,0);
        VL_OUT(__PVT__io_dmem_req_bits_addr,31,0);
        VL_OUT(__PVT__io_dmem_req_bits_data,31,0);
        VL_IN(__PVT__io_dmem_resp_bits_data,31,0);
        VL_OUT(__PVT__io_dat_inst,31,0);
        IData/*31:0*/ __PVT__regfile_MPORT_1_data;
        IData/*31:0*/ __PVT__regfile_MPORT_3_data;
        IData/*31:0*/ __PVT__regfile_MPORT_4_data;
        IData/*31:0*/ __PVT__regfile_MPORT_data;
        IData/*31:0*/ __PVT__regfile_MPORT_2_data;
        IData/*31:0*/ __PVT__csr_io_rw_rdata;
        IData/*31:0*/ __PVT__csr_io_rw_wdata;
        IData/*31:0*/ __PVT__csr_io_evec;
        IData/*31:0*/ __PVT__csr_io_pc;
        IData/*31:0*/ __PVT__csr_io_time;
        IData/*31:0*/ __PVT__exception_target;
        IData/*31:0*/ __PVT__pc_reg;
        IData/*31:0*/ __PVT__pc_plus4;
        IData/*31:0*/ __PVT___T_5;
        IData/*31:0*/ __PVT__rs1_data;
        IData/*19:0*/ __PVT___T_32;
        IData/*31:0*/ __PVT__imm_i_sext;
        IData/*31:0*/ __PVT__jump_reg_target;
    };
    struct {
        IData/*31:0*/ __PVT___T_6;
        IData/*19:0*/ __PVT__imm_j;
        IData/*31:0*/ __PVT__imm_j_sext;
        IData/*31:0*/ __PVT__jmp_target;
        IData/*31:0*/ __PVT___T_7;
        IData/*18:0*/ __PVT___T_38;
        IData/*31:0*/ __PVT__imm_b_sext;
        IData/*31:0*/ __PVT__br_target;
        IData/*19:0*/ __PVT__imm_u;
        IData/*31:0*/ __PVT__imm_u_sext;
        IData/*31:0*/ __PVT__imm_z;
        IData/*31:0*/ __PVT___T_46;
        IData/*31:0*/ __PVT___T_47;
        IData/*31:0*/ __PVT__alu_op1;
        IData/*31:0*/ __PVT__rs2_data;
        IData/*19:0*/ __PVT___T_35;
        IData/*31:0*/ __PVT__imm_s_sext;
        IData/*31:0*/ __PVT___T_52;
        IData/*31:0*/ __PVT___T_53;
        IData/*31:0*/ __PVT___T_54;
        IData/*31:0*/ __PVT__alu_op2;
        IData/*31:0*/ __PVT___T_57;
        IData/*31:0*/ __PVT___T_60;
        IData/*31:0*/ __PVT___T_62;
        IData/*31:0*/ __PVT___T_64;
        IData/*31:0*/ __PVT___T_66;
        IData/*31:0*/ __PVT___T_68;
        IData/*31:0*/ __PVT___T_69;
        IData/*31:0*/ __PVT___T_79;
        IData/*31:0*/ __PVT___T_81;
        IData/*31:0*/ __PVT___T_83;
        IData/*31:0*/ __PVT___T_84;
        IData/*31:0*/ __PVT___T_85;
        IData/*31:0*/ __PVT___T_86;
        IData/*31:0*/ __PVT___T_87;
        IData/*31:0*/ __PVT___T_88;
        IData/*31:0*/ __PVT___T_89;
        IData/*31:0*/ __PVT___T_90;
        IData/*31:0*/ __PVT___T_91;
        IData/*31:0*/ __PVT___T_92;
        IData/*31:0*/ __PVT__alu_out;
        IData/*31:0*/ __PVT___T_107;
        IData/*31:0*/ __PVT___T_108;
        IData/*31:0*/ __PVT___T_109;
        IData/*31:0*/ __PVT__wb_data;
        IData/*31:0*/ __PVT___T_112;
        IData/*31:0*/ __PVT___T_113;
        IData/*31:0*/ __Vdlyvval__regfile__v0;
        IData/*31:0*/ __Vdlyvval__regfile__v1;
        IData/*31:0*/ __Vdly__pc_reg;
        QData/*62:0*/ __PVT___GEN_11;
        QData/*62:0*/ __PVT___T_74;
        VlUnpacked<IData/*31:0*/, 32> __PVT__regfile;
    };

    // INTERNAL VARIABLES
    Vsodor_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsodor_top_DatPath(Vsodor_top__Syms* symsp, const char* v__name);
    ~Vsodor_top_DatPath();
    VL_UNCOPYABLE(Vsodor_top_DatPath);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
