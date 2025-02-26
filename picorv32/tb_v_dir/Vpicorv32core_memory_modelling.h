// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpicorv32core.h for the primary calling header

#ifndef VERILATED_VPICORV32CORE_MEMORY_MODELLING_H_
#define VERILATED_VPICORV32CORE_MEMORY_MODELLING_H_  // guard

#include "verilated.h"


class Vpicorv32core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpicorv32core_memory_modelling final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__mem_la_wstrb,3,0);
    VL_IN8(__PVT__mem_la_read,0,0);
    VL_IN8(__PVT__mem_la_write,0,0);
    VL_IN8(__PVT__mem_instr,0,0);
    VL_IN8(__PVT__mem_valid,0,0);
    VL_OUT8(__PVT__mem_ready,0,0);
    CData/*3:0*/ __Vtask_mem_write__2__write_strobe;
    CData/*0:0*/ __Vdly__mem_ready;
    VL_IN(__PVT__mem_la_wdata,31,0);
    VL_IN(__PVT__mem_la_addr,31,0);
    VL_OUT(__PVT__mem_rdata,31,0);
    IData/*31:0*/ __PVT__file_handle;
    IData/*31:0*/ __PVT__mem_read__Vstatic__mem_rdata;
    IData/*31:0*/ __PVT__mem_write__Vstatic__m_addr;
    IData/*31:0*/ __Vfunc_mem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_mem_read__0__m_addr;
    IData/*31:0*/ __Vfunc_instruction_generator__1__Vfuncout;
    IData/*31:0*/ __Vtask_mem_write__2__mem_addr;
    IData/*31:0*/ __Vtask_mem_write__2__wdata;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__current_db;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__initial_db;

    // INTERNAL VARIABLES
    Vpicorv32core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpicorv32core_memory_modelling(Vpicorv32core__Syms* symsp, const char* v__name);
    ~Vpicorv32core_memory_modelling();
    VL_UNCOPYABLE(Vpicorv32core_memory_modelling);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
