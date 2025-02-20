// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_LOAD_BUFFER_IO_H_
#define VERILATED_VFALCO_TOP_LOAD_BUFFER_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_load_buffer_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__instr_valid;
    CData/*0:0*/ __PVT__load_allocate;
    CData/*3:0*/ __PVT__load_allocate_mask;
    CData/*5:0*/ __PVT__load_allocate_rob_tag;
    CData/*7:0*/ __PVT__load_store_set_id;
    CData/*7:0*/ __PVT__violation_load_id;
    CData/*0:0*/ __PVT__store_instruction;
    CData/*5:0*/ __PVT__store_rob_tag;
    CData/*0:0*/ __PVT__violation_detect;
    SData/*10:0*/ __PVT__load_store_set_pc;
    SData/*10:0*/ __PVT__violation_load_pc;
    IData/*31:0*/ __PVT__load_allocate_addr;
    IData/*31:0*/ __PVT__store_addr;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_load_buffer_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_load_buffer_io();
    VL_UNCOPYABLE(Vfalco_top_load_buffer_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_load_buffer_io* obj);

#endif  // guard
