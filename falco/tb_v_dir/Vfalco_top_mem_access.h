// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_MEM_ACCESS_H_
#define VERILATED_VFALCO_TOP_MEM_ACCESS_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_mem_access final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*0:0*/ __PVT__load_data_valid;
    CData/*0:0*/ __PVT__mem_access_stall;
    CData/*0:0*/ __PVT__mem_access_stall_delay;
    CData/*0:0*/ __PVT__load_forward_data_valid_reg;
    CData/*3:0*/ __PVT__load_forward_hit_mask_reg;
    CData/*1:0*/ __PVT__load_addr_alignment_reg;
    CData/*0:0*/ __PVT__mem_load_ext_sel_reg;
    CData/*1:0*/ __PVT__load_mem_input_sel_reg;
    CData/*3:0*/ __PVT__load_byte_sel_reg;
    CData/*5:0*/ __PVT__load_rob_tag_reg;
    CData/*0:0*/ __Vdly__mem_access_stall_delay;
    CData/*1:0*/ __Vdly__load_addr_alignment_reg;
    CData/*0:0*/ __Vdly__mem_load_ext_sel_reg;
    CData/*1:0*/ __Vdly__load_mem_input_sel_reg;
    CData/*3:0*/ __Vdly__load_byte_sel_reg;
    CData/*0:0*/ __Vdly__load_forward_data_valid_reg;
    CData/*5:0*/ __Vdly__load_rob_tag_reg;
    CData/*3:0*/ __Vdly__load_forward_hit_mask_reg;
    CData/*0:0*/ __Vdly__load_data_valid;
    IData/*31:0*/ __PVT__load_forward_data_reg;
    IData/*31:0*/ __PVT__load_primitive_data;
    IData/*31:0*/ __PVT__load_alignment_data;
    IData/*31:0*/ load_data;
    IData/*31:0*/ __PVT__load_data_delay;
    IData/*31:0*/ __Vdly__load_forward_data_reg;
    IData/*31:0*/ __Vdly__load_data_delay;
    VL_IN64(__PVT__load_data_resp,33,0);

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_mem_access(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_mem_access();
    VL_UNCOPYABLE(Vfalco_top_mem_access);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
