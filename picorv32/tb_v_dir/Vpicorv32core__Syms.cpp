// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core.h"
#include "Vpicorv32core___024root.h"
#include "Vpicorv32core_picorv32core.h"
#include "Vpicorv32core_memory_modelling.h"
#include "Vpicorv32core_picorv32.h"
#include "Vpicorv32core_picorv32_regs.h"

// FUNCTIONS
Vpicorv32core__Syms::~Vpicorv32core__Syms()
{
}

Vpicorv32core__Syms::Vpicorv32core__Syms(VerilatedContext* contextp, const char* namep, Vpicorv32core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__picorv32core{this, Verilated::catName(namep, "picorv32core")}
    , TOP__picorv32core__memory_modelling_inst{this, Verilated::catName(namep, "picorv32core.memory_modelling_inst")}
    , TOP__picorv32core__picorv32_core{this, Verilated::catName(namep, "picorv32core.picorv32_core")}
    , TOP__picorv32core__picorv32_core__cpuregs{this, Verilated::catName(namep, "picorv32core.picorv32_core.cpuregs")}
{
        // Check resources
        Verilated::stackCheck(24);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__picorv32core = &TOP__picorv32core;
    TOP__picorv32core.__PVT__memory_modelling_inst = &TOP__picorv32core__memory_modelling_inst;
    TOP__picorv32core.__PVT__picorv32_core = &TOP__picorv32core__picorv32_core;
    TOP__picorv32core__picorv32_core.__PVT__cpuregs = &TOP__picorv32core__picorv32_core__cpuregs;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__picorv32core.__Vconfigure(true);
    TOP__picorv32core__memory_modelling_inst.__Vconfigure(true);
    TOP__picorv32core__picorv32_core.__Vconfigure(true);
    TOP__picorv32core__picorv32_core__cpuregs.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
