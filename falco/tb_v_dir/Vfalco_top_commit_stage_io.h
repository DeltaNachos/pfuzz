// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_COMMIT_STAGE_IO_H_
#define VERILATED_VFALCO_TOP_COMMIT_STAGE_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_commit_stage_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ __PVT__cur_commit_rob_tag;
    CData/*5:0*/ __PVT__recovery_old_prf_0;
    CData/*4:0*/ __PVT__recovery_arf_0;
    CData/*0:0*/ __PVT__recovery_arf_map_0_valid;
    CData/*5:0*/ __PVT__recovery_old_prf_1;
    CData/*4:0*/ __PVT__recovery_arf_1;
    CData/*0:0*/ __PVT__recovery_arf_map_1_valid;
    CData/*5:0*/ __PVT__recycle_freelist_prf_0;
    CData/*5:0*/ __PVT__recycle_freelist_prf_1;
    CData/*0:0*/ __PVT__recycle_freelist_0_valid;
    CData/*0:0*/ __PVT__recycle_freelist_1_valid;
    CData/*0:0*/ __PVT__store_commit_0_valid;
    CData/*0:0*/ __PVT__store_commit_1_valid;
    CData/*0:0*/ __PVT__store_flush_0_valid;
    CData/*0:0*/ __PVT__store_flush_1_valid;
    CData/*0:0*/ __PVT__commit_instr0;
    CData/*0:0*/ __PVT__commit_instr1;
    CData/*0:0*/ __PVT__branch_miss_first;
    CData/*0:0*/ __Vdly__store_flush_0_valid;
    CData/*0:0*/ __Vdly__store_flush_1_valid;
    IData/*23:0*/ __PVT__committed_update;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_commit_stage_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_commit_stage_io();
    VL_UNCOPYABLE(Vfalco_top_commit_stage_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_commit_stage_io* obj);

#endif  // guard
