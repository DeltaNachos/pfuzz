// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_AQUILA_TOP_H_
#define VERILATED_VAQUILA_TOP_AQUILA_TOP_H_  // guard

#include "verilated.h"
class Vaquila_top_aquila_mem_model;
class Vaquila_top_core_top;


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_aquila_top final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_top_core_top* __PVT__core;
    Vaquila_top_aquila_mem_model* __PVT__memory_modelling_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __PVT__stall;
    CData/*0:0*/ __PVT__code_ready;
    CData/*0:0*/ __PVT__data_ready;
    CData/*0:0*/ __PVT__data_addr_ext;
    CData/*0:0*/ __PVT__ext_irq;
    CData/*0:0*/ __PVT__tmr_irq;
    CData/*0:0*/ __PVT__sft_irq;
    CData/*0:0*/ __PVT__code_req;
    CData/*0:0*/ __PVT__data_rw;
    CData/*3:0*/ __PVT__data_byte_enable;
    CData/*0:0*/ __PVT__data_req;
    CData/*0:0*/ __PVT__data_is_amo;
    CData/*4:0*/ __PVT__data_amo_type;
    CData/*0:0*/ __PVT__cache_flush;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __Vdly__reset;
    IData/*31:0*/ __PVT__init_pc_addr;
    IData/*31:0*/ __PVT__code;
    IData/*31:0*/ __PVT__data_core_in;
    IData/*31:0*/ __PVT__code_addr;
    IData/*31:0*/ __PVT__data_core_out;
    IData/*31:0*/ __PVT__data_addr;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_aquila_top(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_aquila_top();
    VL_UNCOPYABLE(Vaquila_top_aquila_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
