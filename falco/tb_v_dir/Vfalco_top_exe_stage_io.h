// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_EXE_STAGE_IO_H_
#define VERILATED_VFALCO_TOP_EXE_STAGE_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_exe_stage_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ __PVT__exe_ALU_1;
    CData/*6:0*/ __PVT__exe_muldiv;
    CData/*7:0*/ __PVT__exe_alu_csr_bc;
    CData/*6:0*/ __PVT__BCAST_alu_csr_bc;
    CData/*6:0*/ __PVT__BCAST_ALU_1;
    CData/*6:0*/ __PVT__BCAST_muldiv;
    CData/*7:0*/ __Vdly__exe_alu_csr_bc;
    CData/*6:0*/ __Vdly__BCAST_alu_csr_bc;
    CData/*6:0*/ __Vdly__exe_ALU_1;
    CData/*6:0*/ __Vdly__exe_muldiv;
    CData/*6:0*/ __Vdly__BCAST_ALU_1;
    CData/*6:0*/ __Vdly__BCAST_muldiv;
    QData/*38:0*/ __PVT__alu_csr_bc_wb;
    QData/*38:0*/ __PVT__alu1_wb;
    QData/*38:0*/ __PVT__muldiv_wb;
    VlWide<3>/*76:0*/ __PVT__branch_result;
    QData/*38:0*/ __Vdly__alu_csr_bc_wb;
    VlWide<3>/*76:0*/ __Vdly__branch_result;
    QData/*38:0*/ __Vdly__alu1_wb;
    QData/*38:0*/ __Vdly__muldiv_wb;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_exe_stage_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_exe_stage_io();
    VL_UNCOPYABLE(Vfalco_top_exe_stage_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_exe_stage_io* obj);

#endif  // guard
