// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_PICKER8_1_H_
#define VERILATED_VFALCO_TOP_PICKER8_1_H_  // guard

#include "verilated.h"
class Vfalco_top_Picker2_1;


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_Picker8_1 final : public VerilatedModule {
  public:
    // CELLS
    Vfalco_top_Picker2_1* __PVT__l3_picker;
    Vfalco_top_Picker2_1* __PVT__gen_Picker_l1__BRA__0__KET____DOT__l1_picker;
    Vfalco_top_Picker2_1* __PVT__gen_Picker_l1__BRA__2__KET____DOT__l1_picker;
    Vfalco_top_Picker2_1* __PVT__gen_Picker_l1__BRA__4__KET____DOT__l1_picker;
    Vfalco_top_Picker2_1* __PVT__gen_Picker_l1__BRA__6__KET____DOT__l1_picker;
    Vfalco_top_Picker2_1* __PVT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker;
    Vfalco_top_Picker2_1* __PVT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker;

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__out_id,2,0);
    VL_OUT8(__PVT__out_valid,0,0);
    CData/*0:0*/ __Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_valid;
    CData/*3:0*/ __Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_age;
    CData/*2:0*/ __Vcellout__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__out_id;
    CData/*0:0*/ __Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_valid;
    CData/*3:0*/ __Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_age;
    CData/*2:0*/ __Vcellout__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__out_id;
    CData/*0:0*/ __Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_valid;
    CData/*3:0*/ __Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_age;
    CData/*2:0*/ __Vcellout__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__out_id;
    CData/*0:0*/ __Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_valid;
    CData/*3:0*/ __Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_age;
    CData/*2:0*/ __Vcellout__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__out_id;
    CData/*0:0*/ __Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_valid;
    CData/*3:0*/ __Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_age;
    CData/*2:0*/ __Vcellout__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__out_id;
    CData/*0:0*/ __Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_valid;
    CData/*3:0*/ __Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_age;
    CData/*2:0*/ __Vcellout__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__out_id;
    IData/*31:0*/ __PVT__i;
    VL_IN8(__PVT__in_age[8],3,0);
    VL_IN8(__PVT__in_valid[8],0,0);
    VlUnpacked<CData/*2:0*/, 8> __PVT__id;
    VlUnpacked<CData/*3:0*/, 4> __PVT__l1_age;
    VlUnpacked<CData/*2:0*/, 4> __PVT__l1_id;
    VlUnpacked<CData/*0:0*/, 4> __PVT__l1_valid;
    VlUnpacked<CData/*3:0*/, 2> __PVT__l2_age;
    VlUnpacked<CData/*2:0*/, 2> __PVT__l2_id;
    VlUnpacked<CData/*0:0*/, 2> __PVT__l2_valid;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__l3_picker__in_valid;
    VlUnpacked<CData/*3:0*/, 2> __Vcellinp__l3_picker__in_age;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__l3_picker__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid;
    VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid;
    VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid;
    VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid;
    VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_valid;
    VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_age;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_id;
    VlUnpacked<CData/*0:0*/, 2> __Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_valid;
    VlUnpacked<CData/*3:0*/, 2> __Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_age;
    VlUnpacked<CData/*2:0*/, 2> __Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_id;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_Picker8_1(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_Picker8_1();
    VL_UNCOPYABLE(Vfalco_top_Picker8_1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
