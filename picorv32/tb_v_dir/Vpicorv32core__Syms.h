// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPICORV32CORE__SYMS_H_
#define VERILATED_VPICORV32CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpicorv32core.h"

// INCLUDE MODULE CLASSES
#include "Vpicorv32core___024root.h"
#include "Vpicorv32core_picorv32core.h"
#include "Vpicorv32core_memory_modelling.h"
#include "Vpicorv32core_picorv32.h"
#include "Vpicorv32core_picorv32_regs.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpicorv32core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpicorv32core* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpicorv32core___024root        TOP;
    Vpicorv32core_picorv32core     TOP__picorv32core;
    Vpicorv32core_memory_modelling TOP__picorv32core__memory_modelling_inst;
    Vpicorv32core_picorv32         TOP__picorv32core__picorv32_core;
    Vpicorv32core_picorv32_regs    TOP__picorv32core__picorv32_core__cpuregs;

    // CONSTRUCTORS
    Vpicorv32core__Syms(VerilatedContext* contextp, const char* namep, Vpicorv32core* modelp);
    ~Vpicorv32core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
