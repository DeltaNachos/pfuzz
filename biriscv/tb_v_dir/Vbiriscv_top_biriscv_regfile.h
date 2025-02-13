// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_TOP_BIRISCV_REGFILE_H_
#define VERILATED_VBIRISCV_TOP_BIRISCV_REGFILE_H_  // guard

#include "verilated.h"


class Vbiriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_top_biriscv_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__rd0_i,4,0);
        VL_IN8(__PVT__rd1_i,4,0);
        VL_IN8(__PVT__ra0_i,4,0);
        VL_IN8(__PVT__rb0_i,4,0);
        VL_IN8(__PVT__ra1_i,4,0);
        VL_IN8(__PVT__rb1_i,4,0);
        VL_IN(__PVT__rd0_value_i,31,0);
        VL_IN(__PVT__rd1_value_i,31,0);
        VL_OUT(__PVT__ra0_value_o,31,0);
        VL_OUT(__PVT__rb0_value_o,31,0);
        VL_OUT(__PVT__ra1_value_o,31,0);
        VL_OUT(__PVT__rb1_value_o,31,0);
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r1_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r2_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r3_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r4_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r5_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r6_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r7_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r8_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r9_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r10_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r11_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r12_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r13_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r14_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r15_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r16_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r17_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r18_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r19_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r20_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r21_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r22_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r23_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r24_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r25_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r26_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r27_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r28_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r29_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r30_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r31_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__x0_zero_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x1_ra_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x2_sp_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x3_gp_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x4_tp_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x5_t0_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x6_t1_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x7_t2_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x8_s0_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x9_s1_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x10_a0_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x11_a1_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x12_a2_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x13_a3_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x14_a4_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x15_a5_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x16_a6_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x17_a7_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x18_s2_w;
    };
    struct {
        IData/*31:0*/ __PVT__REGFILE__DOT__x19_s3_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x20_s4_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x21_s5_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x22_s6_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x23_s7_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x24_s8_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x25_s9_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x26_s10_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x27_s11_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x28_t3_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x29_t4_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x30_t5_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__x31_t6_w;
        IData/*31:0*/ __PVT__REGFILE__DOT__ra0_value_r;
        IData/*31:0*/ __PVT__REGFILE__DOT__rb0_value_r;
        IData/*31:0*/ __PVT__REGFILE__DOT__ra1_value_r;
        IData/*31:0*/ __PVT__REGFILE__DOT__rb1_value_r;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r1_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r2_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r3_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r4_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r5_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r6_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r7_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r8_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r9_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r10_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r11_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r12_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r13_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r14_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r15_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r16_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r17_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r18_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r19_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r20_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r21_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r22_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r23_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r24_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r25_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r26_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r27_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r28_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r29_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r30_q;
        IData/*31:0*/ __Vdly__REGFILE__DOT__reg_r31_q;
    };

    // INTERNAL VARIABLES
    Vbiriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_top_biriscv_regfile(Vbiriscv_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_top_biriscv_regfile();
    VL_UNCOPYABLE(Vbiriscv_top_biriscv_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t REGFILE__DOT__get_register(uint32_t r);
    bool REGFILE__DOT__set_register(uint32_t r, uint32_t value);
};


#endif  // guard
