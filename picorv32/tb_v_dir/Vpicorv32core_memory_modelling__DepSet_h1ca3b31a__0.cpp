// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32core.h for the primary calling header

#include "Vpicorv32core__pch.h"
#include "Vpicorv32core__Syms.h"
#include "Vpicorv32core_memory_modelling.h"

extern "C" svBitVecVal instruction_generator();

VL_INLINE_OPT void Vpicorv32core_memory_modelling____Vdpiimwrap_instruction_generator_TOP__picorv32core__memory_modelling_inst(IData/*31:0*/ &instruction_generator__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32core_memory_modelling____Vdpiimwrap_instruction_generator_TOP__picorv32core__memory_modelling_inst\n"); );
    // Body
    svBitVecVal instruction_generator__Vfuncrtn__Vcvt[1];
    instruction_generator__Vfuncrtn__Vcvt[0] = instruction_generator();
    instruction_generator__Vfuncrtn = VL_SET_I_SVBV(instruction_generator__Vfuncrtn__Vcvt);
}
