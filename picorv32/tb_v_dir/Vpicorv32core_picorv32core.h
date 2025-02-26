// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpicorv32core.h for the primary calling header

#ifndef VERILATED_VPICORV32CORE_PICORV32CORE_H_
#define VERILATED_VPICORV32CORE_PICORV32CORE_H_  // guard

#include "verilated.h"
class Vpicorv32core_memory_modelling;
class Vpicorv32core_picorv32;


class Vpicorv32core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpicorv32core_picorv32core final : public VerilatedModule {
  public:
    // CELLS
    Vpicorv32core_picorv32* __PVT__picorv32_core;
    Vpicorv32core_memory_modelling* __PVT__memory_modelling_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __PVT__mem_valid;
    CData/*0:0*/ __PVT__mem_instr;
    CData/*0:0*/ __PVT__mem_ready;
    CData/*3:0*/ __PVT__mem_wstrb;
    CData/*0:0*/ __PVT__mem_la_read;
    CData/*0:0*/ __PVT__mem_la_write;
    CData/*3:0*/ __PVT__mem_la_wstrb;
    CData/*0:0*/ __PVT__resetn;
    CData/*0:0*/ __Vdly__resetn;
    IData/*31:0*/ __PVT__mem_addr;
    IData/*31:0*/ __PVT__mem_wdata;
    IData/*31:0*/ __PVT__mem_rdata;
    IData/*31:0*/ __PVT__mem_la_addr;
    IData/*31:0*/ __PVT__mem_la_wdata;

    // INTERNAL VARIABLES
    Vpicorv32core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpicorv32core_picorv32core(Vpicorv32core__Syms* symsp, const char* v__name);
    ~Vpicorv32core_picorv32core();
    VL_UNCOPYABLE(Vpicorv32core_picorv32core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
