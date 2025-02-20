// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfalco_top.h for the primary calling header

#ifndef VERILATED_VFALCO_TOP_PIPELINE_CONTROL_RECOVERY_IO_H_
#define VERILATED_VFALCO_TOP_PIPELINE_CONTROL_RECOVERY_IO_H_  // guard

#include "verilated.h"


class Vfalco_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfalco_top_pipeline_control_recovery_io final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__icache_miss;
    CData/*0:0*/ __PVT__pc_stall;
    CData/*0:0*/ __PVT__IF_flush;
    CData/*0:0*/ __PVT__IF_stall;
    CData/*0:0*/ __PVT__ID_flush;
    CData/*0:0*/ __PVT__ID_stall;
    CData/*0:0*/ __PVT__RNDS_flush;
    CData/*0:0*/ __PVT__RNDS_stall;
    CData/*0:0*/ __PVT__freelist_empty;
    CData/*0:0*/ __PVT__int_iq_full;
    CData/*0:0*/ __PVT__mem_iq_full;
    CData/*0:0*/ __PVT__rob_full;
    CData/*0:0*/ __PVT__csr_stall;
    CData/*0:0*/ __PVT__icache_miss_stall_branch;
    CData/*0:0*/ __PVT__control_flow_stall;
    CData/*0:0*/ __PVT__load_wake_up_predict_failed;
    CData/*0:0*/ __PVT__load_wake_up_failed_stall;
    CData/*0:0*/ __PVT__load_depend_replay;
    CData/*0:0*/ __PVT__replay_muldiv_stall;
    CData/*0:0*/ __PVT__replay_failed_to_issue_muldiv;
    CData/*0:0*/ __PVT__bp_PrSuccess;
    CData/*0:0*/ __PVT__bp_PrMiss;
    CData/*0:0*/ __PVT__memory_store_stall;
    CData/*0:0*/ __PVT__MEM_IQ_stall;
    CData/*0:0*/ __PVT__INT_IQ_stall;
    CData/*0:0*/ __PVT__AGU_stall;
    CData/*0:0*/ __PVT__LSU_stall;
    CData/*0:0*/ __PVT__SDA_full;
    CData/*0:0*/ __PVT__LDA_full;
    CData/*0:0*/ __PVT__load_wait_stall;
    CData/*0:0*/ __PVT__store_set_violation;
    CData/*0:0*/ __PVT__MA_stall;
    CData/*0:0*/ __PVT__LSU_non_idempotent_lock;
    CData/*0:0*/ __PVT__rr_mem_stall;
    CData/*0:0*/ __PVT__wait_for_non_idempotent;
    CData/*0:0*/ __PVT__commit_stall;
    CData/*5:0*/ __PVT__flush_rob_tag_0;
    CData/*5:0*/ __PVT__flush_rob_tag_1;
    CData/*0:0*/ __PVT__flush_rob_tag_0_valid;
    CData/*0:0*/ __PVT__flush_rob_tag_1_valid;
    CData/*0:0*/ __PVT__recovery_start;
    CData/*0:0*/ __PVT__recovery_flush;
    CData/*0:0*/ __PVT__recovery_stall;
    CData/*0:0*/ __PVT__recovery_procedure;
    CData/*0:0*/ __PVT__recovery_rollback;
    CData/*0:0*/ __PVT__ROB_recovery_finished;
    CData/*0:0*/ __PVT__load_store_violation;
    CData/*5:0*/ __PVT__load_store_violation_tag;
    CData/*0:0*/ __Vdly__bp_PrSuccess;
    CData/*0:0*/ __Vdly__bp_PrMiss;
    SData/*14:0*/ __PVT__recovery_flush_BCAST;

    // INTERNAL VARIABLES
    Vfalco_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfalco_top_pipeline_control_recovery_io(Vfalco_top__Syms* symsp, const char* v__name);
    ~Vfalco_top_pipeline_control_recovery_io();
    VL_UNCOPYABLE(Vfalco_top_pipeline_control_recovery_io);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfalco_top_pipeline_control_recovery_io* obj);

#endif  // guard
