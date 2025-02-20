// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_COMBINE_DATA_UNIT_H_
#define VERILATED_VFALCO_TOP_COMBINE_DATA_UNIT_H_  // guard

#include "verilated.h"
class Vfalco_top_Latest_Picker_2_1;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_combine_data_unit final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__0__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__2__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__4__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__6__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__8__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__10__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__12__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l1__BRA__14__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l2__BRA__0__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l2__BRA__2__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l2__BRA__4__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l2__BRA__6__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l3__BRA__0__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l3__BRA__2__KET____DOT__picker;
    Vfalco_top_Latest_Picker_2_1* __PVT__gen_matcher_l4__BRA__0__KET____DOT__picker;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__push_head,3,0);
        VL_OUT8(__PVT__hit,0,0);
        VL_OUT8(__PVT__hit_index,3,0);
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__0__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__2__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__4__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__4__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__6__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__6__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__8__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__8__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__10__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__10__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__12__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__12__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l1__BRA__14__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l1__BRA__14__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l2__BRA__0__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l2__BRA__2__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l2__BRA__2__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l2__BRA__4__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l2__BRA__4__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l2__BRA__6__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l2__BRA__6__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l3__BRA__0__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l3__BRA__0__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l3__BRA__2__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l3__BRA__2__KET____DOT__picker__hit;
        CData/*3:0*/ __Vcellout__gen_matcher_l4__BRA__0__KET____DOT__picker__hit_index;
        CData/*0:0*/ __Vcellout__gen_matcher_l4__BRA__0__KET____DOT__picker__hit;
        IData/*31:0*/ __PVT__i;
        VL_IN8(__PVT__match[16],0,0);
        VlUnpacked<CData/*3:0*/, 16> __PVT__id;
        VlUnpacked<CData/*0:0*/, 8> __PVT__l1_hit;
        VlUnpacked<CData/*3:0*/, 8> __PVT__l1_hit_index;
        VlUnpacked<CData/*0:0*/, 4> __PVT__l2_hit;
        VlUnpacked<CData/*3:0*/, 4> __PVT__l2_hit_index;
        VlUnpacked<CData/*0:0*/, 2> __PVT__l3_hit;
        VlUnpacked<CData/*3:0*/, 2> __PVT__l3_hit_index;
        VlUnpacked<CData/*0:0*/, 1> __PVT__l4_hit;
        VlUnpacked<CData/*3:0*/, 1> __PVT__l4_hit_index;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__4__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__4__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__6__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__6__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__8__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__8__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__10__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__10__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__12__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__12__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__14__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l1__BRA__14__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__2__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__2__KET____DOT__picker__match;
    };
    struct {
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__4__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__4__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__6__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l2__BRA__6__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l3__BRA__0__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l3__BRA__0__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l3__BRA__2__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l3__BRA__2__KET____DOT__picker__match;
        VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_matcher_l4__BRA__0__KET____DOT__picker__index;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_matcher_l4__BRA__0__KET____DOT__picker__match;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_combine_data_unit(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_combine_data_unit();
    VL_UNCOPYABLE(Vfalco_top_combine_data_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
