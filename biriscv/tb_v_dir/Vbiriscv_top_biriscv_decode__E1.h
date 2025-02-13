// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_DECODE__E1_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_DECODE__E1_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_decoder;
class Vbiriscv_top_fetch_fifo;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_decode__E1 final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_biriscv_decoder* __PVT__genblk1__DOT__u_dec0;
    Vbiriscv_top_biriscv_decoder* __PVT__genblk1__DOT__u_dec1;
    Vbiriscv_top_fetch_fifo* __PVT__genblk1__DOT__u_fifo;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__fetch_in_valid_i,0,0);
        VL_IN8(__PVT__fetch_in_pred_branch_i,1,0);
        VL_IN8(__PVT__fetch_in_fault_fetch_i,0,0);
        VL_IN8(__PVT__fetch_in_fault_page_i,0,0);
        VL_IN8(__PVT__fetch_out0_accept_i,0,0);
        VL_IN8(__PVT__fetch_out1_accept_i,0,0);
        VL_IN8(__PVT__branch_request_i,0,0);
        VL_IN8(__PVT__branch_priv_i,1,0);
        VL_OUT8(__PVT__fetch_in_accept_o,0,0);
        VL_OUT8(__PVT__fetch_out0_valid_o,0,0);
        VL_OUT8(__PVT__fetch_out0_fault_fetch_o,0,0);
        VL_OUT8(__PVT__fetch_out0_fault_page_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_exec_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_lsu_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_branch_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_mul_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_div_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_csr_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_rd_valid_o,0,0);
        VL_OUT8(__PVT__fetch_out0_instr_invalid_o,0,0);
        VL_OUT8(__PVT__fetch_out1_valid_o,0,0);
        VL_OUT8(__PVT__fetch_out1_fault_fetch_o,0,0);
        VL_OUT8(__PVT__fetch_out1_fault_page_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_exec_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_lsu_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_branch_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_mul_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_div_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_csr_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_rd_valid_o,0,0);
        VL_OUT8(__PVT__fetch_out1_instr_invalid_o,0,0);
        CData/*0:0*/ __PVT__enable_muldiv_w;
        CData/*0:0*/ __PVT__genblk1__DOT__fetch_in_fault_page_w;
        CData/*0:0*/ __PVT__genblk1__DOT__fetch_in_fault_fetch_w;
        CData/*1:0*/ __PVT__genblk1__DOT__fetch_in_pred_branch_w;
        CData/*0:0*/ __PVT__genblk1__DOT__fetch_in_valid_w;
        CData/*7:0*/ __PVT__genblk1__DOT__info0_in_w;
        CData/*7:0*/ __PVT__genblk1__DOT__info1_in_w;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__rd_valid_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__csr_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__div_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__mul_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__branch_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__lsu_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__exec_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec0__invalid_o;
        CData/*0:0*/ __Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__rd_valid_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__csr_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__div_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__mul_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__branch_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__lsu_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__exec_o;
        CData/*0:0*/ __Vcellout__genblk1__DOT__u_dec1__invalid_o;
        CData/*0:0*/ __Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i;
        SData/*9:0*/ __PVT__genblk1__DOT__info0_out_w;
        SData/*9:0*/ __PVT__genblk1__DOT__info1_out_w;
        SData/*9:0*/ __Vcellout__genblk1__DOT__u_fifo__info1_out_o;
        SData/*9:0*/ __Vcellout__genblk1__DOT__u_fifo__info0_out_o;
        SData/*9:0*/ __Vcellinp__genblk1__DOT__u_fifo__info1_in_i;
        SData/*9:0*/ __Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
    };
    struct {
        VL_IN(__PVT__fetch_in_pc_i,31,0);
        VL_IN(__PVT__branch_pc_i,31,0);
        VL_OUT(__PVT__fetch_out0_instr_o,31,0);
        VL_OUT(__PVT__fetch_out0_pc_o,31,0);
        VL_OUT(__PVT__fetch_out1_instr_o,31,0);
        VL_OUT(__PVT__fetch_out1_pc_o,31,0);
        IData/*31:0*/ __PVT__genblk1__DOT__fetch_in_pc_w;
        VlWide<4>/*100:0*/ __PVT__genblk1__DOT__fetch_buffer_q;
        IData/*31:0*/ __Vcellinp__genblk1__DOT__u_dec0__opcode_i;
        IData/*31:0*/ __Vcellinp__genblk1__DOT__u_dec1__opcode_i;
        VlWide<4>/*100:0*/ __Vdly__genblk1__DOT__fetch_buffer_q;
        VL_IN64(__PVT__fetch_in_instr_i,63,0);
        QData/*63:0*/ __PVT__genblk1__DOT__fetch_in_instr_raw_w;
        QData/*63:0*/ __PVT__genblk1__DOT__fetch_in_instr_w;
    };

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_decode__E1(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_decode__E1();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_decode__E1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
