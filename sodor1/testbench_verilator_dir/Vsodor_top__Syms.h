// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSODOR_TOP__SYMS_H_
#define VERILATED_VSODOR_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsodor_top.h"

// INCLUDE MODULE CLASSES
#include "Vsodor_top___024root.h"
#include "Vsodor_top_sodor_top.h"
#include "Vsodor_top_Core.h"
#include "Vsodor_top_sodor_mem_model.h"
#include "Vsodor_top_CtlPath.h"
#include "Vsodor_top_DatPath.h"
#include "Vsodor_top_CSRFile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsodor_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsodor_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsodor_top___024root           TOP;
    Vsodor_top_sodor_top           TOP__sodor_top;
    Vsodor_top_sodor_mem_model     TOP__sodor_top__memory_modelling_inst;
    Vsodor_top_Core                TOP__sodor_top__sodor_core;
    Vsodor_top_CtlPath             TOP__sodor_top__sodor_core__c;
    Vsodor_top_DatPath             TOP__sodor_top__sodor_core__d;
    Vsodor_top_CSRFile             TOP__sodor_top__sodor_core__d__csr;

    // SCOPE NAMES
    VerilatedScope __Vscope_sodor_top__sodor_core__d__csr;

    // CONSTRUCTORS
    Vsodor_top__Syms(VerilatedContext* contextp, const char* namep, Vsodor_top* modelp);
    ~Vsodor_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
