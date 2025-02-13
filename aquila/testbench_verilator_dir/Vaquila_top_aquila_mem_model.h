// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_top.h for the primary calling header

#ifndef VERILATED_VAQUILA_TOP_AQUILA_MEM_MODEL_H_
#define VERILATED_VAQUILA_TOP_AQUILA_MEM_MODEL_H_  // guard

#include "verilated.h"


class Vaquila_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaquila_top_aquila_mem_model final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__code_req_i,0,0);
    VL_IN8(__PVT__data_rw_i,0,0);
    VL_IN8(__PVT__data_byte_enable_i,3,0);
    VL_IN8(__PVT__data_req_i,0,0);
    VL_IN8(__PVT__data_is_amo_i,0,0);
    VL_IN8(__PVT__data_amo_type_i,4,0);
    VL_IN8(__PVT__cache_flush_i,0,0);
    VL_OUT8(__PVT__stall_o,0,0);
    VL_OUT8(__PVT__code_ready_o,0,0);
    VL_OUT8(__PVT__data_ready_o,0,0);
    VL_OUT8(__PVT__data_addr_ext_o,0,0);
    VL_OUT8(__PVT__ext_irq_o,0,0);
    VL_OUT8(__PVT__tmr_irq_o,0,0);
    VL_OUT8(__PVT__sft_irq_o,0,0);
    CData/*0:0*/ __Vdly__code_ready_o;
    CData/*0:0*/ __Vdly__data_ready_o;
    CData/*0:0*/ __Vdly__stall_o;
    CData/*0:0*/ __Vdly__data_addr_ext_o;
    CData/*0:0*/ __Vdly__ext_irq_o;
    CData/*0:0*/ __Vdly__tmr_irq_o;
    CData/*0:0*/ __Vdly__sft_irq_o;
    VL_IN(__PVT__code_addr_i,31,0);
    VL_IN(__PVT__data_i,31,0);
    VL_IN(__PVT__data_addr_i,31,0);
    VL_OUT(__PVT__init_pc_addr_o,31,0);
    VL_OUT(__PVT__code_o,31,0);
    VL_OUT(__PVT__data_o,31,0);
    IData/*31:0*/ __PVT__file_handle;
    IData/*31:0*/ __PVT__imem_read__Vstatic__mem_rdata;
    IData/*31:0*/ __PVT__imem_read__Vstatic__generated_instruction;
    IData/*31:0*/ __PVT__dmem_read__Vstatic__mem_rdata;
    IData/*31:0*/ __PVT__dmem_write__Vstatic__m_addr;
    IData/*31:0*/ __Vfunc_imem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_imem_read__0__m_addr;
    IData/*31:0*/ __Vfunc_instruction_generator__1__Vfuncout;
    IData/*31:0*/ __Vtask_dmem_write__2__mem_addr;
    IData/*31:0*/ __Vtask_dmem_write__2__wdata;
    IData/*31:0*/ __Vfunc_dmem_read__3__Vfuncout;
    IData/*31:0*/ __Vfunc_dmem_read__3__m_addr;
    IData/*31:0*/ __Vdly__init_pc_addr_o;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__dmem;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__imem;

    // INTERNAL VARIABLES
    Vaquila_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_top_aquila_mem_model(Vaquila_top__Syms* symsp, const char* v__name);
    ~Vaquila_top_aquila_mem_model();
    VL_UNCOPYABLE(Vaquila_top_aquila_mem_model);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
