// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_STORE_BUFFER_IO_H_
#define VERILATED_VFALCO_TOP_STORE_BUFFER_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_store_buffer_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__instr_valid;
    CData/*0:0*/ __PVT__store_allocate;
    CData/*3:0*/ __PVT__store_allocate_mask;
    CData/*5:0*/ __PVT__store_allocate_rob_tag;
    CData/*0:0*/ __PVT__store_non_idempotent_region;
    CData/*0:0*/ __PVT__sb_load_forward_hit;
    CData/*3:0*/ __PVT__sb_load_forward_mask;
    CData/*3:0*/ __PVT__sb_load_find_mask;
    CData/*0:0*/ __PVT__non_idempotent_instr_exists;
    IData/*31:0*/ __PVT__store_allocate_addr;
    IData/*31:0*/ __PVT__store_allocate_data;
    IData/*31:0*/ __PVT__sb_load_forward_data;
    IData/*31:0*/ __PVT__sb_load_find_addr;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_store_buffer_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_store_buffer_io();
    VL_UNCOPYABLE(Vfalco_top_store_buffer_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_store_buffer_io* obj);

#endif  // guard
