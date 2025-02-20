// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_CSR_IO_H_
#define VERILATED_VFALCO_TOP_CSR_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_csr_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__csr_we_i;
    CData/*0:0*/ __PVT__sys_jump_i;
    CData/*1:0*/ __PVT__sys_jump_csr_addr_i;
    CData/*0:0*/ __PVT__sys_jump_o;
    CData/*1:0*/ __PVT__privilege_level_o;
    CData/*0:0*/ __PVT__xcpt_valid_i;
    CData/*3:0*/ __PVT__xcpt_cause_i;
    CData/*0:0*/ __PVT__exe_stall;
    CData/*0:0*/ __PVT__exe_is_branch;
    CData/*0:0*/ __PVT__exe_misspredict;
    CData/*6:0*/ __PVT__recovery_distance;
    CData/*0:0*/ __PVT__start_recovery;
    CData/*0:0*/ __PVT__recovery_procedure;
    CData/*0:0*/ __Vdly__csr_we_i;
    SData/*11:0*/ __PVT__csr_raddr_i;
    SData/*11:0*/ __PVT__csr_waddr_i;
    SData/*11:0*/ __Vdly__csr_waddr_i;
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __PVT__csr_data_o;
    IData/*31:0*/ __PVT__csr_wdata_i;
    IData/*31:0*/ __PVT__sys_jump_csr_data_o;
    IData/*31:0*/ __PVT__xcpt_tval_i;
    IData/*31:0*/ __PVT__start_recovery_tag;
    IData/*31:0*/ __Vdly__csr_wdata_i;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_csr_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_csr_io();
    VL_UNCOPYABLE(Vfalco_top_csr_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_csr_io* obj);

#endif  // guard
