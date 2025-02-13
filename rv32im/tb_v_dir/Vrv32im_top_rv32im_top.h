// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32im_top.h for the primary calling header

#ifndef VERILATED_VRV32IM_TOP_RV32IM_TOP_H_
#define VERILATED_VRV32IM_TOP_RV32IM_TOP_H_  // guard

#include "verilated.h"
class Vrv32im_top_riscv_core__pi1;
class Vrv32im_top_rv32im_mem_model;


class Vrv32im_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv32im_top_rv32im_top final : public VerilatedModule {
  public:
    // CELLS
    Vrv32im_top_riscv_core__pi1* core;
    Vrv32im_top_rv32im_mem_model* __PVT__memory_modelling_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __PVT__dcache_accept_w;
    CData/*0:0*/ __PVT__dcache_ack_w;
    CData/*0:0*/ __PVT__dcache_error_w;
    CData/*0:0*/ __PVT__icache_accept_w;
    CData/*0:0*/ __PVT__icache_valid_w;
    CData/*0:0*/ __PVT__icache_error_w;
    CData/*0:0*/ __PVT__intr_i;
    CData/*0:0*/ __PVT__cpu_id_i;
    CData/*0:0*/ __PVT__dcache_rd_w;
    CData/*3:0*/ __PVT__dcache_wr_w;
    CData/*0:0*/ __PVT__dcache_cacheable_w;
    CData/*0:0*/ __PVT__dcache_invalidate_w;
    CData/*0:0*/ __PVT__dcache_writeback_w;
    CData/*0:0*/ __PVT__dcache_flush_w;
    CData/*0:0*/ __PVT__icache_rd_w;
    CData/*0:0*/ __PVT__icache_flush_w;
    CData/*0:0*/ __PVT__icache_invalidate_w;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __Vdly__reset;
    SData/*10:0*/ __PVT__dcache_resp_tag_w;
    SData/*10:0*/ __PVT__dcache_req_tag_w;
    IData/*31:0*/ __PVT__dcache_data_rd_w;
    IData/*31:0*/ __PVT__icache_inst_w;
    IData/*31:0*/ __PVT__reset_vector_i;
    IData/*31:0*/ __PVT__dcache_addr_w;
    IData/*31:0*/ __PVT__dcache_data_wr_w;
    IData/*31:0*/ __PVT__icache_pc_w;

    // INTERNAL VARIABLES
    Vrv32im_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32im_top_rv32im_top(Vrv32im_top__Syms* symsp, const char* v__name);
    ~Vrv32im_top_rv32im_top();
    VL_UNCOPYABLE(Vrv32im_top_rv32im_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
