// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_LOAD_BUFFER_H_
#define VERILATED_VFALCO_TOP_LOAD_BUFFER_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_load_buffer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        CData/*0:0*/ __PVT__alloc_ptr_valid;
        CData/*3:0*/ alloc_ptr;
        CData/*0:0*/ __PVT__allocate_new_entry;
        CData/*5:0*/ __PVT__next_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__0__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__0__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__1__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__1__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__2__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__2__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__3__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__3__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__4__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__4__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__5__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__5__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__6__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__6__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__7__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__7__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__8__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__8__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__9__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__9__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__10__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__10__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__11__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__11__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__12__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__12__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__13__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__13__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__14__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__14__rob_tag;
        CData/*0:0*/ __Vfunc_IsBrROBKill__15__Vfuncout;
        CData/*5:0*/ __Vfunc_IsBrROBKill__15__rob_tag;
        CData/*0:0*/ __VdlyVal__LDB_valid__v0;
        CData/*0:0*/ __VdlySet__LDB_valid__v0;
        CData/*0:0*/ __VdlyVal__LDB_valid__v1;
        CData/*0:0*/ __VdlySet__LDB_valid__v1;
        CData/*0:0*/ __VdlyVal__LDB_valid__v2;
        CData/*0:0*/ __VdlySet__LDB_valid__v2;
        CData/*0:0*/ __VdlyVal__LDB_valid__v3;
        CData/*0:0*/ __VdlySet__LDB_valid__v3;
        CData/*0:0*/ __VdlyVal__LDB_valid__v4;
        CData/*0:0*/ __VdlySet__LDB_valid__v4;
        CData/*0:0*/ __VdlyVal__LDB_valid__v5;
        CData/*0:0*/ __VdlySet__LDB_valid__v5;
        CData/*0:0*/ __VdlyVal__LDB_valid__v6;
        CData/*0:0*/ __VdlySet__LDB_valid__v6;
        CData/*0:0*/ __VdlyVal__LDB_valid__v7;
        CData/*0:0*/ __VdlySet__LDB_valid__v7;
        CData/*0:0*/ __VdlyVal__LDB_valid__v8;
        CData/*0:0*/ __VdlySet__LDB_valid__v8;
        CData/*0:0*/ __VdlyVal__LDB_valid__v9;
        CData/*0:0*/ __VdlySet__LDB_valid__v9;
        CData/*0:0*/ __VdlyVal__LDB_valid__v10;
        CData/*0:0*/ __VdlySet__LDB_valid__v10;
        CData/*0:0*/ __VdlyVal__LDB_valid__v11;
        CData/*0:0*/ __VdlySet__LDB_valid__v11;
        CData/*0:0*/ __VdlyVal__LDB_valid__v12;
        CData/*0:0*/ __VdlySet__LDB_valid__v12;
    };
    struct {
        CData/*0:0*/ __VdlyVal__LDB_valid__v13;
        CData/*0:0*/ __VdlySet__LDB_valid__v13;
        CData/*0:0*/ __VdlyVal__LDB_valid__v14;
        CData/*0:0*/ __VdlySet__LDB_valid__v14;
        CData/*0:0*/ __VdlyVal__LDB_valid__v15;
        CData/*0:0*/ __VdlySet__LDB_valid__v15;
        CData/*0:0*/ __VdlySet__LDB_addr__v0;
        CData/*0:0*/ __VdlySet__LDB_addr__v1;
        CData/*0:0*/ __VdlySet__LDB_addr__v2;
        CData/*0:0*/ __VdlySet__LDB_addr__v3;
        CData/*0:0*/ __VdlySet__LDB_addr__v4;
        CData/*0:0*/ __VdlySet__LDB_addr__v5;
        CData/*0:0*/ __VdlySet__LDB_addr__v6;
        CData/*0:0*/ __VdlySet__LDB_addr__v7;
        CData/*0:0*/ __VdlySet__LDB_addr__v8;
        CData/*0:0*/ __VdlySet__LDB_addr__v9;
        CData/*0:0*/ __VdlySet__LDB_addr__v10;
        CData/*0:0*/ __VdlySet__LDB_addr__v11;
        CData/*0:0*/ __VdlySet__LDB_addr__v12;
        CData/*0:0*/ __VdlySet__LDB_addr__v13;
        CData/*0:0*/ __VdlySet__LDB_addr__v14;
        CData/*0:0*/ __VdlySet__LDB_addr__v15;
        CData/*3:0*/ __VdlyVal__LDB_mask__v0;
        CData/*0:0*/ __VdlySet__LDB_mask__v0;
        CData/*3:0*/ __VdlyVal__LDB_mask__v1;
        CData/*0:0*/ __VdlySet__LDB_mask__v1;
        CData/*3:0*/ __VdlyVal__LDB_mask__v2;
        CData/*0:0*/ __VdlySet__LDB_mask__v2;
        CData/*3:0*/ __VdlyVal__LDB_mask__v3;
        CData/*0:0*/ __VdlySet__LDB_mask__v3;
        CData/*3:0*/ __VdlyVal__LDB_mask__v4;
        CData/*0:0*/ __VdlySet__LDB_mask__v4;
        CData/*3:0*/ __VdlyVal__LDB_mask__v5;
        CData/*0:0*/ __VdlySet__LDB_mask__v5;
        CData/*3:0*/ __VdlyVal__LDB_mask__v6;
        CData/*0:0*/ __VdlySet__LDB_mask__v6;
        CData/*3:0*/ __VdlyVal__LDB_mask__v7;
        CData/*0:0*/ __VdlySet__LDB_mask__v7;
        CData/*3:0*/ __VdlyVal__LDB_mask__v8;
        CData/*0:0*/ __VdlySet__LDB_mask__v8;
        CData/*3:0*/ __VdlyVal__LDB_mask__v9;
        CData/*0:0*/ __VdlySet__LDB_mask__v9;
        CData/*3:0*/ __VdlyVal__LDB_mask__v10;
        CData/*0:0*/ __VdlySet__LDB_mask__v10;
        CData/*3:0*/ __VdlyVal__LDB_mask__v11;
        CData/*0:0*/ __VdlySet__LDB_mask__v11;
        CData/*3:0*/ __VdlyVal__LDB_mask__v12;
        CData/*0:0*/ __VdlySet__LDB_mask__v12;
        CData/*3:0*/ __VdlyVal__LDB_mask__v13;
        CData/*0:0*/ __VdlySet__LDB_mask__v13;
        CData/*3:0*/ __VdlyVal__LDB_mask__v14;
        CData/*0:0*/ __VdlySet__LDB_mask__v14;
        CData/*3:0*/ __VdlyVal__LDB_mask__v15;
        CData/*0:0*/ __VdlySet__LDB_mask__v15;
        CData/*5:0*/ __VdlyVal__LDB_tag__v0;
        CData/*0:0*/ __VdlySet__LDB_tag__v0;
        CData/*5:0*/ __VdlyVal__LDB_tag__v1;
        CData/*0:0*/ __VdlySet__LDB_tag__v1;
        CData/*5:0*/ __VdlyVal__LDB_tag__v2;
        CData/*0:0*/ __VdlySet__LDB_tag__v2;
        CData/*5:0*/ __VdlyVal__LDB_tag__v3;
        CData/*0:0*/ __VdlySet__LDB_tag__v3;
        CData/*5:0*/ __VdlyVal__LDB_tag__v4;
        CData/*0:0*/ __VdlySet__LDB_tag__v4;
    };
    struct {
        CData/*5:0*/ __VdlyVal__LDB_tag__v5;
        CData/*0:0*/ __VdlySet__LDB_tag__v5;
        CData/*5:0*/ __VdlyVal__LDB_tag__v6;
        CData/*0:0*/ __VdlySet__LDB_tag__v6;
        CData/*5:0*/ __VdlyVal__LDB_tag__v7;
        CData/*0:0*/ __VdlySet__LDB_tag__v7;
        CData/*5:0*/ __VdlyVal__LDB_tag__v8;
        CData/*0:0*/ __VdlySet__LDB_tag__v8;
        CData/*5:0*/ __VdlyVal__LDB_tag__v9;
        CData/*0:0*/ __VdlySet__LDB_tag__v9;
        CData/*5:0*/ __VdlyVal__LDB_tag__v10;
        CData/*0:0*/ __VdlySet__LDB_tag__v10;
        CData/*5:0*/ __VdlyVal__LDB_tag__v11;
        CData/*0:0*/ __VdlySet__LDB_tag__v11;
        CData/*5:0*/ __VdlyVal__LDB_tag__v12;
        CData/*0:0*/ __VdlySet__LDB_tag__v12;
        CData/*5:0*/ __VdlyVal__LDB_tag__v13;
        CData/*0:0*/ __VdlySet__LDB_tag__v13;
        CData/*5:0*/ __VdlyVal__LDB_tag__v14;
        CData/*0:0*/ __VdlySet__LDB_tag__v14;
        CData/*5:0*/ __VdlyVal__LDB_tag__v15;
        CData/*0:0*/ __VdlySet__LDB_tag__v15;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v0;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v1;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v2;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v3;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v4;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v5;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v6;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v7;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v8;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v9;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v10;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v11;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v12;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v13;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v14;
        CData/*0:0*/ __VdlySet__LDB_store_set_pc__v15;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v0;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v0;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v1;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v1;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v2;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v2;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v3;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v3;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v4;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v4;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v5;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v5;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v6;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v6;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v7;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v7;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v8;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v8;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v9;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v9;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v10;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v10;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v11;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v11;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v12;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v12;
    };
    struct {
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v13;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v13;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v14;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v14;
        CData/*7:0*/ __VdlyVal__LDB_store_set_id__v15;
        CData/*0:0*/ __VdlySet__LDB_store_set_id__v15;
        SData/*15:0*/ __PVT__compare_all;
        SData/*14:0*/ __Vfunc_IsBrROBKill__0__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__1__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__2__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__3__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__4__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__5__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__6__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__7__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__8__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__9__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__10__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__11__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__12__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__13__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__14__branch_recovery_flush;
        SData/*14:0*/ __Vfunc_IsBrROBKill__15__branch_recovery_flush;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v0;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v1;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v2;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v3;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v4;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v5;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v6;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v7;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v8;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v9;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v10;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v11;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v12;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v13;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v14;
        SData/*10:0*/ __VdlyVal__LDB_store_set_pc__v15;
        IData/*31:0*/ __VdlyVal__LDB_addr__v0;
        IData/*31:0*/ __VdlyVal__LDB_addr__v1;
        IData/*31:0*/ __VdlyVal__LDB_addr__v2;
        IData/*31:0*/ __VdlyVal__LDB_addr__v3;
        IData/*31:0*/ __VdlyVal__LDB_addr__v4;
        IData/*31:0*/ __VdlyVal__LDB_addr__v5;
        IData/*31:0*/ __VdlyVal__LDB_addr__v6;
        IData/*31:0*/ __VdlyVal__LDB_addr__v7;
        IData/*31:0*/ __VdlyVal__LDB_addr__v8;
        IData/*31:0*/ __VdlyVal__LDB_addr__v9;
        IData/*31:0*/ __VdlyVal__LDB_addr__v10;
        IData/*31:0*/ __VdlyVal__LDB_addr__v11;
        IData/*31:0*/ __VdlyVal__LDB_addr__v12;
        IData/*31:0*/ __VdlyVal__LDB_addr__v13;
        IData/*31:0*/ __VdlyVal__LDB_addr__v14;
        IData/*31:0*/ __VdlyVal__LDB_addr__v15;
        VlUnpacked<IData/*31:0*/, 16> LDB_addr;
        VlUnpacked<CData/*3:0*/, 16> LDB_mask;
        VlUnpacked<CData/*0:0*/, 16> LDB_valid;
        VlUnpacked<CData/*5:0*/, 16> LDB_tag;
        VlUnpacked<SData/*10:0*/, 16> LDB_store_set_pc;
        VlUnpacked<CData/*7:0*/, 16> LDB_store_set_id;
        VlUnpacked<CData/*0:0*/, 16> __PVT__compare_address;
        VlUnpacked<CData/*0:0*/, 16> __PVT__compare_rob_tag;
    };

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_load_buffer(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_load_buffer();
    VL_UNCOPYABLE(Vfalco_top_load_buffer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
