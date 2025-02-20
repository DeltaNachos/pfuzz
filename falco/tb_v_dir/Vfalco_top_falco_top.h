// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_FALCO_TOP_H_
#define VERILATED_VFALCO_TOP_FALCO_TOP_H_  // guard

#include "verilated.h"
class Vfalco_top_core_top;
class Vfalco_top_falco_mem_model;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_falco_top final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_core_top* core;
    Vfalco_top_falco_mem_model* __PVT__memory_modelling_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __PVT__load_dmem_stall;
    CData/*1:0*/ __PVT__load_hit_resp;
    CData/*1:0*/ __PVT__store_resp;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __Vdly__reset;
    IData/*31:0*/ __PVT__init_pc;
    VlWide<3>/*64:0*/ __PVT__instruction_req;
    VlWide<3>/*66:0*/ __PVT__instruction_resp;
    QData/*33:0*/ __PVT__load_ck_hit_req;
    QData/*32:0*/ __PVT__load_data_req;
    QData/*33:0*/ __PVT__load_data_resp;
    VlWide<3>/*68:0*/ __PVT__store_req;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_falco_top(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_falco_top();
    VL_UNCOPYABLE(Vfalco_top_falco_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
