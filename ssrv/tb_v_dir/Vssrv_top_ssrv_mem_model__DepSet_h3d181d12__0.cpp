// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vssrv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vssrv_top__Syms.h"
#include "Vssrv_top__Syms.h"
#include "Vssrv_top_ssrv_mem_model.h"

extern "C" svBitVecVal instruction_generator();

VL_INLINE_OPT void Vssrv_top_ssrv_mem_model____Vdpiimwrap_instruction_generator_TOP__ssrv_top__memory_modelling_inst(IData/*31:0*/ &instruction_generator__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vssrv_top_ssrv_mem_model____Vdpiimwrap_instruction_generator_TOP__ssrv_top__memory_modelling_inst\n"); );
    // Body
    svBitVecVal instruction_generator__Vfuncrtn__Vcvt[1];
    instruction_generator__Vfuncrtn__Vcvt[0] = instruction_generator();
    instruction_generator__Vfuncrtn = VL_SET_I_SVBV(instruction_generator__Vfuncrtn__Vcvt);
}
