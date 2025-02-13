// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAQUILA_TOP__SYMS_H_
#define VERILATED_VAQUILA_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaquila_top.h"

// INCLUDE MODULE CLASSES
#include "Vaquila_top___024root.h"
#include "Vaquila_top_aquila_top.h"
#include "Vaquila_top_core_top.h"
#include "Vaquila_top_aquila_mem_model.h"
#include "Vaquila_top_csr_file.h"
#include "Vaquila_top_pipeline_control.h"
#include "Vaquila_top_forwarding_unit.h"
#include "Vaquila_top_bpu.h"
#include "Vaquila_top_reg_file.h"
#include "Vaquila_top_program_counter.h"
#include "Vaquila_top_fetch.h"
#include "Vaquila_top_decode.h"
#include "Vaquila_top_execute.h"
#include "Vaquila_top_memory.h"
#include "Vaquila_top_writeback.h"
#include "Vaquila_top_alu.h"
#include "Vaquila_top_muldiv.h"
#include "Vaquila_top_bcu.h"
#include "Vaquila_top_distri_ram__E40.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vaquila_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaquila_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaquila_top___024root          TOP;
    Vaquila_top_aquila_top         TOP__aquila_top;
    Vaquila_top_core_top           TOP__aquila_top__core;
    Vaquila_top_bpu                TOP__aquila_top__core__Branch_Prediction_Unit;
    Vaquila_top_distri_ram__E40    TOP__aquila_top__core__Branch_Prediction_Unit__bpu_pc_history;
    Vaquila_top_csr_file           TOP__aquila_top__core__CSR;
    Vaquila_top_decode             TOP__aquila_top__core__Decode;
    Vaquila_top_execute            TOP__aquila_top__core__Execute;
    Vaquila_top_alu                TOP__aquila_top__core__Execute__ALU;
    Vaquila_top_bcu                TOP__aquila_top__core__Execute__BCU;
    Vaquila_top_muldiv             TOP__aquila_top__core__Execute__MulDiv;
    Vaquila_top_fetch              TOP__aquila_top__core__Fetch;
    Vaquila_top_forwarding_unit    TOP__aquila_top__core__Forwarding_Unit;
    Vaquila_top_memory             TOP__aquila_top__core__Memory;
    Vaquila_top_pipeline_control   TOP__aquila_top__core__Pipeline_Control;
    Vaquila_top_program_counter    TOP__aquila_top__core__Program_Counter;
    Vaquila_top_reg_file           TOP__aquila_top__core__Register_File;
    Vaquila_top_writeback          TOP__aquila_top__core__Writeback;
    Vaquila_top_aquila_mem_model   TOP__aquila_top__memory_modelling_inst;

    // CONSTRUCTORS
    Vaquila_top__Syms(VerilatedContext* contextp, const char* namep, Vaquila_top* modelp);
    ~Vaquila_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
