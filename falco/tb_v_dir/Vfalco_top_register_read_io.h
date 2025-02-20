// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_REGISTER_READ_IO_H_
#define VERILATED_VFALCO_TOP_REGISTER_READ_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_register_read_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__alu_bc_csr_pack_valid;
    CData/*0:0*/ __PVT__alu_muldiv_pack_valid;
    CData/*0:0*/ __PVT__mem_issue_pack_valid;
    CData/*0:0*/ __Vdly__alu_bc_csr_pack_valid;
    CData/*0:0*/ __Vdly__alu_muldiv_pack_valid;
    CData/*0:0*/ __Vdly__mem_issue_pack_valid;
    VlWide<9>/*267:0*/ __PVT__alu_bc_csr_pack;
    VlWide<6>/*160:0*/ __PVT__alu_muldiv_pack;
    VlWide<6>/*185:0*/ __PVT__mem_issue_pack;
    VlWide<9>/*267:0*/ __Vdly__alu_bc_csr_pack;
    VlWide<6>/*160:0*/ __Vdly__alu_muldiv_pack;
    VlWide<6>/*185:0*/ __Vdly__mem_issue_pack;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_register_read_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_register_read_io();
    VL_UNCOPYABLE(Vfalco_top_register_read_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_register_read_io* obj);

#endif  // guard
