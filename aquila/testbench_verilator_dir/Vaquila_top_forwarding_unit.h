// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_FORWARDING_UNIT_H_
#define VERILATED_VAQUILA_TOP_FORWARDING_UNIT_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_forwarding_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__rs1_addr_i,4,0);
    VL_IN8(__PVT__rs2_addr_i,4,0);
    VL_IN8(__PVT__exe_rd_addr_i,4,0);
    VL_IN8(__PVT__exe_regfile_we_i,0,0);
    VL_IN8(__PVT__exe_regfile_input_sel_i,2,0);
    VL_IN8(__PVT__exe_csr_we_i,0,0);
    VL_IN8(__PVT__wbk_rd_addr_i,4,0);
    VL_IN8(__PVT__wbk_regfile_we_i,0,0);
    VL_IN8(__PVT__wbk_csr_we_i,0,0);
    CData/*0:0*/ __PVT__is_rs1_rd_EXE_MEM_same;
    CData/*0:0*/ __PVT__is_rs2_rd_EXE_MEM_same;
    CData/*0:0*/ __PVT__is_csr_addr_EXE_MEM_same;
    CData/*0:0*/ __PVT__is_rs1_rd_MEM_WB_same;
    CData/*0:0*/ __PVT__is_rs2_rd_MEM_WB_same;
    CData/*0:0*/ __PVT__is_csr_addr_MEM_WB_same;
    CData/*0:0*/ __PVT__is_rd_EXE_MEM_not_zero;
    CData/*0:0*/ __PVT__is_rd_MEM_WB_not_zero;
    CData/*0:0*/ __PVT__rs1_EXE_MEM_fwd;
    CData/*0:0*/ __PVT__rs2_EXE_MEM_fwd;
    CData/*0:0*/ __PVT__csr_EXE_MEM_fwd;
    CData/*0:0*/ __PVT__rs1_MEM_WB_fwd;
    CData/*0:0*/ __PVT__rs2_MEM_WB_fwd;
    CData/*0:0*/ __PVT__csr_MEM_WB_fwd;
    VL_IN16(__PVT__csr_addr_i,11,0);
    VL_IN16(__PVT__exe_csr_addr_i,11,0);
    VL_IN16(__PVT__wbk_csr_addr_i,11,0);
    VL_IN(__PVT__rs1_data_i,31,0);
    VL_IN(__PVT__rs2_data_i,31,0);
    VL_IN(__PVT__csr_data_i,31,0);
    VL_IN(__PVT__exe_p_data_i,31,0);
    VL_IN(__PVT__exe_csr_data_i,31,0);
    VL_IN(__PVT__wbk_rd_data_i,31,0);
    VL_IN(__PVT__wbk_csr_data_i,31,0);
    VL_OUT(__PVT__rs1_o,31,0);
    VL_OUT(__PVT__rs2_o,31,0);
    VL_OUT(__PVT__csr_data_o,31,0);
    IData/*31:0*/ __PVT__correct_rs1_data;
    IData/*31:0*/ __PVT__correct_rs2_data;
    IData/*31:0*/ __PVT__correct_csr_data;
    IData/*31:0*/ __PVT__correct_fwd_src2;
    IData/*31:0*/ __PVT__correct_fwd_src1;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_forwarding_unit(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_forwarding_unit();
    VL_UNCOPYABLE(Vaquila_top_forwarding_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
