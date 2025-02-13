// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RISCV_DECODE__E1_H_
#define VERILATED_VRV32IM_TOP_RISCV_DECODE__E1_H_  // guard

#include "verilated.h"
class Vrv32im_top_riscv_decoder;


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_riscv_decode__E1 final : public VerilatedModule {
  public:
    // CELLS
    Vrv32im_top_riscv_decoder* __PVT__genblk1__DOT__u_dec;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__fetch_in_valid_i,0,0);
    VL_IN8(__PVT__fetch_in_fault_fetch_i,0,0);
    VL_IN8(__PVT__fetch_in_fault_page_i,0,0);
    VL_IN8(__PVT__fetch_out_accept_i,0,0);
    VL_IN8(__PVT__squash_decode_i,0,0);
    VL_OUT8(__PVT__fetch_in_accept_o,0,0);
    VL_OUT8(__PVT__fetch_out_valid_o,0,0);
    VL_OUT8(__PVT__fetch_out_fault_fetch_o,0,0);
    VL_OUT8(__PVT__fetch_out_fault_page_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_exec_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_lsu_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_branch_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_mul_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_div_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_csr_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_rd_valid_o,0,0);
    VL_OUT8(__PVT__fetch_out_instr_invalid_o,0,0);
    CData/*0:0*/ __PVT__enable_muldiv_w;
    CData/*0:0*/ __Vcellinp__genblk1__DOT__u_dec__fetch_fault_i;
    VL_IN(__PVT__fetch_in_instr_i,31,0);
    VL_IN(__PVT__fetch_in_pc_i,31,0);
    VL_OUT(__PVT__fetch_out_instr_o,31,0);
    VL_OUT(__PVT__fetch_out_pc_o,31,0);
    IData/*31:0*/ __PVT__genblk1__DOT__fetch_in_instr_w;
    VlWide<3>/*66:0*/ __PVT__genblk1__DOT__buffer_q;
    VlWide<3>/*66:0*/ __Vdly__genblk1__DOT__buffer_q;

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_riscv_decode__E1(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_riscv_decode__E1();
    VL_UNCOPYABLE(Vrv32im_top_riscv_decode__E1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
