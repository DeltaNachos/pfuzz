// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_LOAD_STORE_UNIT_IO_H_
#define VERILATED_VFALCO_TOP_LOAD_STORE_UNIT_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_load_store_unit_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ __PVT__cur_lsu_rob_tag;
    CData/*6:0*/ __PVT__LSU_commit;
    CData/*6:0*/ __PVT__BCAST_load;
    CData/*0:0*/ __PVT__store_set_violation;
    CData/*0:0*/ __PVT__device_violation;
    CData/*5:0*/ __PVT__store_set_rob_tag;
    CData/*7:0*/ __PVT__violation_load_id;
    CData/*7:0*/ __PVT__violation_store_id;
    CData/*6:0*/ __Vdly__BCAST_load;
    CData/*6:0*/ __Vdly__LSU_commit;
    SData/*9:0*/ __PVT__violation_bhsr;
    SData/*10:0*/ violation_load_pc;
    SData/*10:0*/ violation_store_pc;
    IData/*31:0*/ __PVT__violation_pc;
    QData/*60:0*/ __PVT__lsu_pack;
    QData/*60:0*/ __Vdly__lsu_pack;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_load_store_unit_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_load_store_unit_io();
    VL_UNCOPYABLE(Vfalco_top_load_store_unit_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_load_store_unit_io* obj);

#endif  // guard
