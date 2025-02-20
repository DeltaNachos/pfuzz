// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_EMPTY_ENTRY_FINDER8_H_
#define VERILATED_VFALCO_TOP_EMPTY_ENTRY_FINDER8_H_  // guard

#include "verilated.h"
class Vfalco_top_emptry_entry_finder2;
class Vfalco_top_emptry_entry_finder4;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_empty_entry_finder8 final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_emptry_entry_finder4* __PVT__l3_finder_4;
    Vfalco_top_emptry_entry_finder2* __PVT__l1_finder__BRA__0__KET____DOT__l2_finder_2;
    Vfalco_top_emptry_entry_finder2* __PVT__l1_finder__BRA__2__KET____DOT__l2_finder_2;
    Vfalco_top_emptry_entry_finder2* __PVT__l1_finder__BRA__4__KET____DOT__l2_finder_2;
    Vfalco_top_emptry_entry_finder2* __PVT__l1_finder__BRA__6__KET____DOT__l2_finder_2;
    Vfalco_top_emptry_entry_finder4* __PVT__l2_finder__BRA__0__KET____DOT__l2_finder_4;
    Vfalco_top_emptry_entry_finder4* __PVT__l2_finder__BRA__2__KET____DOT__l2_finder_4;

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__out_id_0,2,0);
    VL_OUT8(__PVT__out_id_1,2,0);
    VL_OUT8(__PVT__out_alloc_valid_0,0,0);
    VL_OUT8(__PVT__out_alloc_valid_1,0,0);
    CData/*0:0*/ __Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ __Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__0__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ __Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ __Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__2__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ __Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ __Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__4__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ __Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_1;
    CData/*0:0*/ __Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_alloc_valid_0;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_1;
    CData/*2:0*/ __Vcellout__l1_finder__BRA__6__KET____DOT__l2_finder_2__out_id_0;
    CData/*0:0*/ __Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_1;
    CData/*0:0*/ __Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_alloc_valid_0;
    CData/*2:0*/ __Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_1;
    CData/*2:0*/ __Vcellout__l2_finder__BRA__0__KET____DOT__l2_finder_4__out_id_0;
    CData/*0:0*/ __Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_1;
    CData/*0:0*/ __Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_alloc_valid_0;
    CData/*2:0*/ __Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_1;
    CData/*2:0*/ __Vcellout__l2_finder__BRA__2__KET____DOT__l2_finder_4__out_id_0;
    VL_IN8(__PVT__in_id[8],2,0);
    VL_IN8(__PVT__in_alloc_valid[8],0,0);
    VlUnpacked<CData/*2:0*/, 4> __PVT__l1_out_id_0;
    VlUnpacked<CData/*2:0*/, 4> __PVT__l1_out_id_1;
    VlUnpacked<CData/*0:0*/, 4> __PVT__l1_out_valid_0;
    VlUnpacked<CData/*0:0*/, 4> __PVT__l1_out_valid_1;
    VlUnpacked<CData/*2:0*/, 2> __PVT__l2_out_id_0;
    VlUnpacked<CData/*2:0*/, 2> __PVT__l2_out_id_1;
    VlUnpacked<CData/*0:0*/, 2> __PVT__l2_out_valid_0;
    VlUnpacked<CData/*0:0*/, 2> __PVT__l2_out_valid_1;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_empty_entry_finder8(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_empty_entry_finder8();
    VL_UNCOPYABLE(Vfalco_top_empty_entry_finder8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
