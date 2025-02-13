// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_TOP_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_TOP_H_  // guard

#include "verilated.h"
class Vbiriscv_top_biriscv_mem_model;
class Vbiriscv_top_riscv_core__SC1_SD1_E1;


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_top final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_top_riscv_core__SC1_SD1_E1* u_core;
    Vbiriscv_top_biriscv_mem_model* __PVT__memory_modelling_inst;

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
    IData/*31:0*/ __PVT__reset_vector_i;
    IData/*31:0*/ __PVT__cpu_id_w;
    IData/*31:0*/ __PVT__dcache_addr_w;
    IData/*31:0*/ __PVT__dcache_data_wr_w;
    IData/*31:0*/ __PVT__icache_pc_w;
    QData/*63:0*/ __PVT__icache_inst_w;

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_top(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_top();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
