// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vbiriscv_top__Syms.h"
#include "Vbiriscv_top_biriscv_trace_sim.h"

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__0(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__0\n"); );
    // Body
    vlSelf->__PVT__ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xfU, 5U));
    vlSelf->__PVT__rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U));
    vlSelf->__PVT__rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__1(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    CData/*31:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    CData/*31:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    CData/*31:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    CData/*31:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    CData/*31:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    CData/*31:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    CData/*31:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_86;
    CData/*31:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    CData/*31:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    CData/*31:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    CData/*31:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    CData/*31:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    CData/*31:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_106;
    CData/*31:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    CData/*31:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_118;
    CData/*31:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    CData/*31:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_122;
    CData/*31:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    CData/*31:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_126;
    CData/*31:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    CData/*31:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_130;
    CData/*31:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_134;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_140;
    CData/*31:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_142;
    CData/*31:0*/ __Vtemp_143;
    VlWide<3>/*95:0*/ __Vtemp_144;
    CData/*31:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_146;
    CData/*31:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_148;
    CData/*31:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_150;
    CData/*31:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_152;
    CData/*31:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_154;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_162;
    CData/*31:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_164;
    CData/*31:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_166;
    CData/*31:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_168;
    CData/*31:0*/ __Vtemp_169;
    VlWide<3>/*95:0*/ __Vtemp_170;
    CData/*31:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_172;
    CData/*31:0*/ __Vtemp_173;
    VlWide<3>/*95:0*/ __Vtemp_174;
    CData/*31:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    CData/*31:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_186;
    CData/*31:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_188;
    CData/*31:0*/ __Vtemp_189;
    VlWide<3>/*95:0*/ __Vtemp_190;
    CData/*31:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_192;
    CData/*31:0*/ __Vtemp_193;
    VlWide<3>/*95:0*/ __Vtemp_194;
    CData/*31:0*/ __Vtemp_195;
    VlWide<3>/*95:0*/ __Vtemp_196;
    CData/*31:0*/ __Vtemp_197;
    VlWide<3>/*95:0*/ __Vtemp_198;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_206;
    CData/*31:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_208;
    CData/*31:0*/ __Vtemp_209;
    VlWide<3>/*95:0*/ __Vtemp_210;
    CData/*31:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_212;
    CData/*31:0*/ __Vtemp_213;
    VlWide<3>/*95:0*/ __Vtemp_214;
    CData/*31:0*/ __Vtemp_215;
    VlWide<3>/*95:0*/ __Vtemp_216;
    CData/*31:0*/ __Vtemp_217;
    VlWide<3>/*95:0*/ __Vtemp_218;
    CData/*31:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_220;
    VlWide<3>/*95:0*/ __Vtemp_221;
    VlWide<3>/*95:0*/ __Vtemp_222;
    VlWide<3>/*95:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_225;
    VlWide<3>/*95:0*/ __Vtemp_226;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<3>/*95:0*/ __Vtemp_228;
    CData/*31:0*/ __Vtemp_229;
    VlWide<3>/*95:0*/ __Vtemp_230;
    CData/*31:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_232;
    CData/*31:0*/ __Vtemp_233;
    VlWide<3>/*95:0*/ __Vtemp_234;
    CData/*31:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    CData/*31:0*/ __Vtemp_237;
    VlWide<3>/*95:0*/ __Vtemp_238;
    CData/*31:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_240;
    CData/*31:0*/ __Vtemp_241;
    VlWide<3>/*95:0*/ __Vtemp_242;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<3>/*95:0*/ __Vtemp_244;
    VlWide<3>/*95:0*/ __Vtemp_245;
    VlWide<3>/*95:0*/ __Vtemp_246;
    VlWide<3>/*95:0*/ __Vtemp_247;
    VlWide<3>/*95:0*/ __Vtemp_248;
    VlWide<3>/*95:0*/ __Vtemp_249;
    VlWide<3>/*95:0*/ __Vtemp_250;
    CData/*31:0*/ __Vtemp_251;
    VlWide<3>/*95:0*/ __Vtemp_252;
    CData/*31:0*/ __Vtemp_253;
    VlWide<3>/*95:0*/ __Vtemp_254;
    CData/*31:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_256;
    CData/*31:0*/ __Vtemp_257;
    VlWide<3>/*95:0*/ __Vtemp_258;
    CData/*31:0*/ __Vtemp_259;
    VlWide<3>/*95:0*/ __Vtemp_260;
    CData/*31:0*/ __Vtemp_261;
    VlWide<3>/*95:0*/ __Vtemp_262;
    CData/*31:0*/ __Vtemp_263;
    VlWide<3>/*95:0*/ __Vtemp_264;
    VlWide<3>/*95:0*/ __Vtemp_265;
    VlWide<3>/*95:0*/ __Vtemp_266;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<3>/*95:0*/ __Vtemp_268;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_270;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_272;
    CData/*31:0*/ __Vtemp_273;
    VlWide<3>/*95:0*/ __Vtemp_274;
    CData/*31:0*/ __Vtemp_275;
    VlWide<3>/*95:0*/ __Vtemp_276;
    CData/*31:0*/ __Vtemp_277;
    VlWide<3>/*95:0*/ __Vtemp_278;
    CData/*31:0*/ __Vtemp_279;
    VlWide<3>/*95:0*/ __Vtemp_280;
    CData/*31:0*/ __Vtemp_281;
    VlWide<3>/*95:0*/ __Vtemp_282;
    CData/*31:0*/ __Vtemp_283;
    VlWide<3>/*95:0*/ __Vtemp_284;
    CData/*31:0*/ __Vtemp_285;
    VlWide<3>/*95:0*/ __Vtemp_286;
    VlWide<3>/*95:0*/ __Vtemp_287;
    VlWide<3>/*95:0*/ __Vtemp_288;
    VlWide<3>/*95:0*/ __Vtemp_289;
    VlWide<3>/*95:0*/ __Vtemp_290;
    VlWide<3>/*95:0*/ __Vtemp_291;
    VlWide<3>/*95:0*/ __Vtemp_292;
    VlWide<3>/*95:0*/ __Vtemp_293;
    VlWide<3>/*95:0*/ __Vtemp_294;
    CData/*31:0*/ __Vtemp_295;
    VlWide<3>/*95:0*/ __Vtemp_296;
    CData/*31:0*/ __Vtemp_297;
    VlWide<3>/*95:0*/ __Vtemp_298;
    CData/*31:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_300;
    CData/*31:0*/ __Vtemp_301;
    VlWide<3>/*95:0*/ __Vtemp_302;
    CData/*31:0*/ __Vtemp_303;
    VlWide<3>/*95:0*/ __Vtemp_304;
    CData/*31:0*/ __Vtemp_305;
    VlWide<3>/*95:0*/ __Vtemp_306;
    CData/*31:0*/ __Vtemp_307;
    VlWide<3>/*95:0*/ __Vtemp_308;
    VlWide<3>/*95:0*/ __Vtemp_309;
    VlWide<3>/*95:0*/ __Vtemp_310;
    VlWide<3>/*95:0*/ __Vtemp_311;
    VlWide<3>/*95:0*/ __Vtemp_312;
    VlWide<3>/*95:0*/ __Vtemp_313;
    VlWide<3>/*95:0*/ __Vtemp_314;
    VlWide<3>/*95:0*/ __Vtemp_315;
    VlWide<3>/*95:0*/ __Vtemp_316;
    CData/*31:0*/ __Vtemp_317;
    VlWide<3>/*95:0*/ __Vtemp_318;
    CData/*31:0*/ __Vtemp_319;
    VlWide<3>/*95:0*/ __Vtemp_320;
    CData/*31:0*/ __Vtemp_321;
    VlWide<3>/*95:0*/ __Vtemp_322;
    CData/*31:0*/ __Vtemp_323;
    VlWide<3>/*95:0*/ __Vtemp_324;
    CData/*31:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_326;
    CData/*31:0*/ __Vtemp_327;
    VlWide<3>/*95:0*/ __Vtemp_328;
    CData/*31:0*/ __Vtemp_329;
    VlWide<3>/*95:0*/ __Vtemp_330;
    VlWide<3>/*95:0*/ __Vtemp_331;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_333;
    VlWide<3>/*95:0*/ __Vtemp_334;
    VlWide<3>/*95:0*/ __Vtemp_335;
    VlWide<3>/*95:0*/ __Vtemp_336;
    VlWide<3>/*95:0*/ __Vtemp_337;
    VlWide<3>/*95:0*/ __Vtemp_338;
    CData/*31:0*/ __Vtemp_339;
    VlWide<3>/*95:0*/ __Vtemp_340;
    CData/*31:0*/ __Vtemp_341;
    VlWide<3>/*95:0*/ __Vtemp_342;
    CData/*31:0*/ __Vtemp_343;
    VlWide<3>/*95:0*/ __Vtemp_344;
    CData/*31:0*/ __Vtemp_345;
    VlWide<3>/*95:0*/ __Vtemp_346;
    CData/*31:0*/ __Vtemp_347;
    VlWide<3>/*95:0*/ __Vtemp_348;
    CData/*31:0*/ __Vtemp_349;
    VlWide<3>/*95:0*/ __Vtemp_350;
    CData/*31:0*/ __Vtemp_351;
    VlWide<3>/*95:0*/ __Vtemp_352;
    VlWide<3>/*95:0*/ __Vtemp_353;
    VlWide<3>/*95:0*/ __Vtemp_354;
    VlWide<3>/*95:0*/ __Vtemp_355;
    VlWide<3>/*95:0*/ __Vtemp_356;
    VlWide<3>/*95:0*/ __Vtemp_357;
    VlWide<3>/*95:0*/ __Vtemp_358;
    VlWide<3>/*95:0*/ __Vtemp_359;
    VlWide<3>/*95:0*/ __Vtemp_360;
    CData/*31:0*/ __Vtemp_361;
    VlWide<3>/*95:0*/ __Vtemp_362;
    CData/*31:0*/ __Vtemp_363;
    VlWide<3>/*95:0*/ __Vtemp_364;
    CData/*31:0*/ __Vtemp_365;
    VlWide<3>/*95:0*/ __Vtemp_366;
    CData/*31:0*/ __Vtemp_367;
    VlWide<3>/*95:0*/ __Vtemp_368;
    CData/*31:0*/ __Vtemp_369;
    VlWide<3>/*95:0*/ __Vtemp_370;
    CData/*31:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_372;
    CData/*31:0*/ __Vtemp_373;
    VlWide<3>/*95:0*/ __Vtemp_374;
    VlWide<3>/*95:0*/ __Vtemp_375;
    VlWide<3>/*95:0*/ __Vtemp_376;
    VlWide<3>/*95:0*/ __Vtemp_377;
    VlWide<3>/*95:0*/ __Vtemp_378;
    VlWide<3>/*95:0*/ __Vtemp_379;
    VlWide<3>/*95:0*/ __Vtemp_380;
    VlWide<3>/*95:0*/ __Vtemp_381;
    VlWide<3>/*95:0*/ __Vtemp_382;
    CData/*31:0*/ __Vtemp_383;
    VlWide<3>/*95:0*/ __Vtemp_384;
    CData/*31:0*/ __Vtemp_385;
    VlWide<3>/*95:0*/ __Vtemp_386;
    CData/*31:0*/ __Vtemp_387;
    VlWide<3>/*95:0*/ __Vtemp_388;
    CData/*31:0*/ __Vtemp_389;
    VlWide<3>/*95:0*/ __Vtemp_390;
    CData/*31:0*/ __Vtemp_391;
    VlWide<3>/*95:0*/ __Vtemp_392;
    CData/*31:0*/ __Vtemp_393;
    VlWide<3>/*95:0*/ __Vtemp_394;
    CData/*31:0*/ __Vtemp_395;
    VlWide<3>/*95:0*/ __Vtemp_396;
    VlWide<3>/*95:0*/ __Vtemp_397;
    VlWide<3>/*95:0*/ __Vtemp_398;
    VlWide<3>/*95:0*/ __Vtemp_399;
    VlWide<3>/*95:0*/ __Vtemp_400;
    VlWide<3>/*95:0*/ __Vtemp_401;
    VlWide<3>/*95:0*/ __Vtemp_402;
    VlWide<3>/*95:0*/ __Vtemp_403;
    VlWide<3>/*95:0*/ __Vtemp_404;
    CData/*31:0*/ __Vtemp_405;
    VlWide<3>/*95:0*/ __Vtemp_406;
    CData/*31:0*/ __Vtemp_407;
    VlWide<3>/*95:0*/ __Vtemp_408;
    CData/*31:0*/ __Vtemp_409;
    VlWide<3>/*95:0*/ __Vtemp_410;
    CData/*31:0*/ __Vtemp_411;
    VlWide<3>/*95:0*/ __Vtemp_412;
    CData/*31:0*/ __Vtemp_413;
    VlWide<3>/*95:0*/ __Vtemp_414;
    CData/*31:0*/ __Vtemp_415;
    VlWide<3>/*95:0*/ __Vtemp_416;
    CData/*31:0*/ __Vtemp_417;
    VlWide<3>/*95:0*/ __Vtemp_418;
    // Body
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
    vlSelf->__PVT__dbg_inst_pc = 0U;
    if (vlSelf->__PVT__valid_i) {
        vlSelf->__PVT__dbg_inst_pc = vlSelf->__PVT__pc_i;
        vlSelf->__Vfunc_get_regname_str__0__regnum 
            = vlSelf->__PVT__ra_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_1,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_2,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_3,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_4,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_5,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_6,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_7,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_8,0x00007432);
            __Vtemp_9 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_10, __Vtemp_9, __Vtemp_7, __Vtemp_8);
            __Vtemp_11 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_12, __Vtemp_11, __Vtemp_6, __Vtemp_10);
            __Vtemp_13 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_14, __Vtemp_13, __Vtemp_5, __Vtemp_12);
            __Vtemp_15 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_16, __Vtemp_15, __Vtemp_4, __Vtemp_14);
            __Vtemp_17 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_18, __Vtemp_17, __Vtemp_3, __Vtemp_16);
            __Vtemp_19 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_20, __Vtemp_19, __Vtemp_2, __Vtemp_18);
            __Vtemp_21 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_22, __Vtemp_21, __Vtemp_1, __Vtemp_20);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__0__Vfuncout, __Vtemp_22);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_23,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_24,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_25,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_26,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_27,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_28,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_29,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_30,0x00006135);
            __Vtemp_31 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_32, __Vtemp_31, __Vtemp_29, __Vtemp_30);
            __Vtemp_33 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_34, __Vtemp_33, __Vtemp_28, __Vtemp_32);
            __Vtemp_35 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_36, __Vtemp_35, __Vtemp_27, __Vtemp_34);
            __Vtemp_37 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_38, __Vtemp_37, __Vtemp_26, __Vtemp_36);
            __Vtemp_39 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_40, __Vtemp_39, __Vtemp_25, __Vtemp_38);
            __Vtemp_41 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_42, __Vtemp_41, __Vtemp_24, __Vtemp_40);
            __Vtemp_43 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_44, __Vtemp_43, __Vtemp_23, __Vtemp_42);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__0__Vfuncout, __Vtemp_44);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_45,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_46,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_47,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_48,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_49,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_50,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_51,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_52,0x00007337);
            __Vtemp_53 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_54, __Vtemp_53, __Vtemp_51, __Vtemp_52);
            __Vtemp_55 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_56, __Vtemp_55, __Vtemp_50, __Vtemp_54);
            __Vtemp_57 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_58, __Vtemp_57, __Vtemp_49, __Vtemp_56);
            __Vtemp_59 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_60, __Vtemp_59, __Vtemp_48, __Vtemp_58);
            __Vtemp_61 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_62, __Vtemp_61, __Vtemp_47, __Vtemp_60);
            __Vtemp_63 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_64, __Vtemp_63, __Vtemp_46, __Vtemp_62);
            __Vtemp_65 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_66, __Vtemp_65, __Vtemp_45, __Vtemp_64);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__0__Vfuncout, __Vtemp_66);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_67,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_68,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_69,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_70,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_71,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_72,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_73,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_74,0x00007436);
            __Vtemp_75 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_76, __Vtemp_75, __Vtemp_73, __Vtemp_74);
            __Vtemp_77 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_78, __Vtemp_77, __Vtemp_72, __Vtemp_76);
            __Vtemp_79 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_80, __Vtemp_79, __Vtemp_71, __Vtemp_78);
            __Vtemp_81 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_82, __Vtemp_81, __Vtemp_70, __Vtemp_80);
            __Vtemp_83 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_84, __Vtemp_83, __Vtemp_69, __Vtemp_82);
            __Vtemp_85 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_86, __Vtemp_85, __Vtemp_68, __Vtemp_84);
            __Vtemp_87 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__0__regnum));
            VL_COND_WIWW(80, __Vtemp_88, __Vtemp_87, __Vtemp_67, __Vtemp_86);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__0__Vfuncout, __Vtemp_88);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_ra, vlSelf->__Vfunc_get_regname_str__0__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__1__regnum 
            = vlSelf->__PVT__rb_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_89,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_90,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_91,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_92,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_93,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_94,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_95,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_96,0x00007432);
            __Vtemp_97 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_98, __Vtemp_97, __Vtemp_95, __Vtemp_96);
            __Vtemp_99 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_100, __Vtemp_99, __Vtemp_94, __Vtemp_98);
            __Vtemp_101 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_102, __Vtemp_101, __Vtemp_93, __Vtemp_100);
            __Vtemp_103 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_104, __Vtemp_103, __Vtemp_92, __Vtemp_102);
            __Vtemp_105 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_106, __Vtemp_105, __Vtemp_91, __Vtemp_104);
            __Vtemp_107 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_108, __Vtemp_107, __Vtemp_90, __Vtemp_106);
            __Vtemp_109 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_110, __Vtemp_109, __Vtemp_89, __Vtemp_108);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__1__Vfuncout, __Vtemp_110);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_111,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_112,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_113,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_114,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_115,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_116,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_117,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_118,0x00006135);
            __Vtemp_119 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_120, __Vtemp_119, __Vtemp_117, __Vtemp_118);
            __Vtemp_121 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_122, __Vtemp_121, __Vtemp_116, __Vtemp_120);
            __Vtemp_123 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_124, __Vtemp_123, __Vtemp_115, __Vtemp_122);
            __Vtemp_125 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_126, __Vtemp_125, __Vtemp_114, __Vtemp_124);
            __Vtemp_127 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_128, __Vtemp_127, __Vtemp_113, __Vtemp_126);
            __Vtemp_129 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_130, __Vtemp_129, __Vtemp_112, __Vtemp_128);
            __Vtemp_131 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_132, __Vtemp_131, __Vtemp_111, __Vtemp_130);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__1__Vfuncout, __Vtemp_132);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_133,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_134,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_135,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_136,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_137,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_138,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_139,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_140,0x00007337);
            __Vtemp_141 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_142, __Vtemp_141, __Vtemp_139, __Vtemp_140);
            __Vtemp_143 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_144, __Vtemp_143, __Vtemp_138, __Vtemp_142);
            __Vtemp_145 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_146, __Vtemp_145, __Vtemp_137, __Vtemp_144);
            __Vtemp_147 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_148, __Vtemp_147, __Vtemp_136, __Vtemp_146);
            __Vtemp_149 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_150, __Vtemp_149, __Vtemp_135, __Vtemp_148);
            __Vtemp_151 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_152, __Vtemp_151, __Vtemp_134, __Vtemp_150);
            __Vtemp_153 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_154, __Vtemp_153, __Vtemp_133, __Vtemp_152);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__1__Vfuncout, __Vtemp_154);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_155,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_156,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_157,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_158,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_159,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_160,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_161,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_162,0x00007436);
            __Vtemp_163 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_164, __Vtemp_163, __Vtemp_161, __Vtemp_162);
            __Vtemp_165 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_166, __Vtemp_165, __Vtemp_160, __Vtemp_164);
            __Vtemp_167 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_168, __Vtemp_167, __Vtemp_159, __Vtemp_166);
            __Vtemp_169 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_170, __Vtemp_169, __Vtemp_158, __Vtemp_168);
            __Vtemp_171 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_172, __Vtemp_171, __Vtemp_157, __Vtemp_170);
            __Vtemp_173 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_174, __Vtemp_173, __Vtemp_156, __Vtemp_172);
            __Vtemp_175 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__1__regnum));
            VL_COND_WIWW(80, __Vtemp_176, __Vtemp_175, __Vtemp_155, __Vtemp_174);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__1__Vfuncout, __Vtemp_176);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rb, vlSelf->__Vfunc_get_regname_str__1__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__2__regnum 
            = vlSelf->__PVT__rd_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_177,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_178,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_179,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_180,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_181,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_182,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_183,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_184,0x00007432);
            __Vtemp_185 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_186, __Vtemp_185, __Vtemp_183, __Vtemp_184);
            __Vtemp_187 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_188, __Vtemp_187, __Vtemp_182, __Vtemp_186);
            __Vtemp_189 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_190, __Vtemp_189, __Vtemp_181, __Vtemp_188);
            __Vtemp_191 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_192, __Vtemp_191, __Vtemp_180, __Vtemp_190);
            __Vtemp_193 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_194, __Vtemp_193, __Vtemp_179, __Vtemp_192);
            __Vtemp_195 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_196, __Vtemp_195, __Vtemp_178, __Vtemp_194);
            __Vtemp_197 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_198, __Vtemp_197, __Vtemp_177, __Vtemp_196);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__2__Vfuncout, __Vtemp_198);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_199,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_200,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_201,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_202,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_203,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_204,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_205,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_206,0x00006135);
            __Vtemp_207 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_208, __Vtemp_207, __Vtemp_205, __Vtemp_206);
            __Vtemp_209 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_210, __Vtemp_209, __Vtemp_204, __Vtemp_208);
            __Vtemp_211 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_212, __Vtemp_211, __Vtemp_203, __Vtemp_210);
            __Vtemp_213 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_214, __Vtemp_213, __Vtemp_202, __Vtemp_212);
            __Vtemp_215 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_216, __Vtemp_215, __Vtemp_201, __Vtemp_214);
            __Vtemp_217 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_218, __Vtemp_217, __Vtemp_200, __Vtemp_216);
            __Vtemp_219 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_220, __Vtemp_219, __Vtemp_199, __Vtemp_218);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__2__Vfuncout, __Vtemp_220);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_221,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_222,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_223,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_224,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_225,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_226,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_227,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_228,0x00007337);
            __Vtemp_229 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_230, __Vtemp_229, __Vtemp_227, __Vtemp_228);
            __Vtemp_231 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_232, __Vtemp_231, __Vtemp_226, __Vtemp_230);
            __Vtemp_233 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_234, __Vtemp_233, __Vtemp_225, __Vtemp_232);
            __Vtemp_235 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_236, __Vtemp_235, __Vtemp_224, __Vtemp_234);
            __Vtemp_237 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_238, __Vtemp_237, __Vtemp_223, __Vtemp_236);
            __Vtemp_239 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_240, __Vtemp_239, __Vtemp_222, __Vtemp_238);
            __Vtemp_241 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_242, __Vtemp_241, __Vtemp_221, __Vtemp_240);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__2__Vfuncout, __Vtemp_242);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_243,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_244,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_245,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_246,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_247,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_248,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_249,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_250,0x00007436);
            __Vtemp_251 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_252, __Vtemp_251, __Vtemp_249, __Vtemp_250);
            __Vtemp_253 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_254, __Vtemp_253, __Vtemp_248, __Vtemp_252);
            __Vtemp_255 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_256, __Vtemp_255, __Vtemp_247, __Vtemp_254);
            __Vtemp_257 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_258, __Vtemp_257, __Vtemp_246, __Vtemp_256);
            __Vtemp_259 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_260, __Vtemp_259, __Vtemp_245, __Vtemp_258);
            __Vtemp_261 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_262, __Vtemp_261, __Vtemp_244, __Vtemp_260);
            __Vtemp_263 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__2__regnum));
            VL_COND_WIWW(80, __Vtemp_264, __Vtemp_263, __Vtemp_243, __Vtemp_262);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__2__Vfuncout, __Vtemp_264);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rd, vlSelf->__Vfunc_get_regname_str__2__Vfuncout);
        if (((((((((0x7013U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                   | (0x13U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
               | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | (0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
             | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_265,0x616e6469);
            VL_CONST_W_1X(80,__Vtemp_266,0x61646469);
            VL_CONST_W_1X(80,__Vtemp_267,0x736c7469);
            VL_CONST_W_2X(80,__Vtemp_268,0x00000073,0x6c746975);
            VL_CONST_W_1X(80,__Vtemp_269,0x006f7269);
            VL_CONST_W_1X(80,__Vtemp_270,0x786f7269);
            VL_CONST_W_1X(80,__Vtemp_271,0x736c6c69);
            VL_CONST_W_1X(80,__Vtemp_272,0x73726c69);
            __Vtemp_273 = (0x1013U == (0xfc00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_274, __Vtemp_273, __Vtemp_271, __Vtemp_272);
            __Vtemp_275 = (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_276, __Vtemp_275, __Vtemp_270, __Vtemp_274);
            __Vtemp_277 = (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_278, __Vtemp_277, __Vtemp_269, __Vtemp_276);
            __Vtemp_279 = (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_280, __Vtemp_279, __Vtemp_268, __Vtemp_278);
            __Vtemp_281 = (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_282, __Vtemp_281, __Vtemp_267, __Vtemp_280);
            __Vtemp_283 = (0x13U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_284, __Vtemp_283, __Vtemp_266, __Vtemp_282);
            __Vtemp_285 = (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_286, __Vtemp_285, __Vtemp_265, __Vtemp_284);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_286);
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)) 
                          | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                         | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                        | (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x2033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x3033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_287,0x73726169);
            VL_CONST_W_1X(80,__Vtemp_288,0x006c7569);
            VL_CONST_W_2X(80,__Vtemp_289,0x00000061,0x75697063);
            VL_CONST_W_1X(80,__Vtemp_290,0x00616464);
            VL_CONST_W_1X(80,__Vtemp_291,0x00737562);
            VL_CONST_W_1X(80,__Vtemp_292,0x00736c74);
            VL_CONST_W_1X(80,__Vtemp_293,0x736c7475);
            VL_CONST_W_1X(80,__Vtemp_294,0x00786f72);
            __Vtemp_295 = (0x3033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_296, __Vtemp_295, __Vtemp_293, __Vtemp_294);
            __Vtemp_297 = (0x2033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_298, __Vtemp_297, __Vtemp_292, __Vtemp_296);
            __Vtemp_299 = (0x40000033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_300, __Vtemp_299, __Vtemp_291, __Vtemp_298);
            __Vtemp_301 = (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_302, __Vtemp_301, __Vtemp_290, __Vtemp_300);
            __Vtemp_303 = (0x17U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_304, __Vtemp_303, __Vtemp_289, __Vtemp_302);
            __Vtemp_305 = (0x37U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_306, __Vtemp_305, __Vtemp_288, __Vtemp_304);
            __Vtemp_307 = (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_308, __Vtemp_307, __Vtemp_287, __Vtemp_306);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_308);
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
                     | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x63U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_309,0x00006f72);
            VL_CONST_W_1X(80,__Vtemp_310,0x00616e64);
            VL_CONST_W_1X(80,__Vtemp_311,0x00736c6c);
            VL_CONST_W_1X(80,__Vtemp_312,0x0073726c);
            VL_CONST_W_1X(80,__Vtemp_313,0x00737261);
            VL_CONST_W_1X(80,__Vtemp_314,0x006a616c);
            VL_CONST_W_1X(80,__Vtemp_315,0x6a616c72);
            VL_CONST_W_1X(80,__Vtemp_316,0x00626571);
            __Vtemp_317 = (0x67U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_318, __Vtemp_317, __Vtemp_315, __Vtemp_316);
            __Vtemp_319 = (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_320, __Vtemp_319, __Vtemp_314, __Vtemp_318);
            __Vtemp_321 = (0x40005033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_322, __Vtemp_321, __Vtemp_313, __Vtemp_320);
            __Vtemp_323 = (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_324, __Vtemp_323, __Vtemp_312, __Vtemp_322);
            __Vtemp_325 = (0x1033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_326, __Vtemp_325, __Vtemp_311, __Vtemp_324);
            __Vtemp_327 = (0x7033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_328, __Vtemp_327, __Vtemp_310, __Vtemp_326);
            __Vtemp_329 = (0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_330, __Vtemp_329, __Vtemp_309, __Vtemp_328);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_330);
        } else if (((((((((0x1063U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (3U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_331,0x00626e65);
            VL_CONST_W_1X(80,__Vtemp_332,0x00626c74);
            VL_CONST_W_1X(80,__Vtemp_333,0x00626765);
            VL_CONST_W_1X(80,__Vtemp_334,0x626c7475);
            VL_CONST_W_1X(80,__Vtemp_335,0x62676575);
            VL_CONST_W_1X(80,__Vtemp_336,0x00006c62);
            VL_CONST_W_1X(80,__Vtemp_337,0x00006c68);
            VL_CONST_W_1X(80,__Vtemp_338,0x00006c77);
            __Vtemp_339 = (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_340, __Vtemp_339, __Vtemp_337, __Vtemp_338);
            __Vtemp_341 = (3U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_342, __Vtemp_341, __Vtemp_336, __Vtemp_340);
            __Vtemp_343 = (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_344, __Vtemp_343, __Vtemp_335, __Vtemp_342);
            __Vtemp_345 = (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_346, __Vtemp_345, __Vtemp_334, __Vtemp_344);
            __Vtemp_347 = (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_348, __Vtemp_347, __Vtemp_333, __Vtemp_346);
            __Vtemp_349 = (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_350, __Vtemp_349, __Vtemp_332, __Vtemp_348);
            __Vtemp_351 = (0x1063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_352, __Vtemp_351, __Vtemp_331, __Vtemp_350);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_352);
        } else if (((((((((0x4003U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x23U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x73U == vlSelf->__PVT__opcode_i)) 
                    | (0x100073U == vlSelf->__PVT__opcode_i))) {
            VL_CONST_W_1X(80,__Vtemp_353,0x006c6275);
            VL_CONST_W_1X(80,__Vtemp_354,0x006c6875);
            VL_CONST_W_1X(80,__Vtemp_355,0x006c7775);
            VL_CONST_W_1X(80,__Vtemp_356,0x00007362);
            VL_CONST_W_1X(80,__Vtemp_357,0x00007368);
            VL_CONST_W_1X(80,__Vtemp_358,0x00007377);
            VL_CONST_W_2X(80,__Vtemp_359,0x00000065,0x63616c6c);
            VL_CONST_W_2X(80,__Vtemp_360,0x00006562,0x7265616b);
            __Vtemp_361 = (0x73U == vlSelf->__PVT__opcode_i);
            VL_COND_WIWW(80, __Vtemp_362, __Vtemp_361, __Vtemp_359, __Vtemp_360);
            __Vtemp_363 = (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_364, __Vtemp_363, __Vtemp_358, __Vtemp_362);
            __Vtemp_365 = (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_366, __Vtemp_365, __Vtemp_357, __Vtemp_364);
            __Vtemp_367 = (0x23U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_368, __Vtemp_367, __Vtemp_356, __Vtemp_366);
            __Vtemp_369 = (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_370, __Vtemp_369, __Vtemp_355, __Vtemp_368);
            __Vtemp_371 = (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_372, __Vtemp_371, __Vtemp_354, __Vtemp_370);
            __Vtemp_373 = (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_374, __Vtemp_373, __Vtemp_353, __Vtemp_372);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_374);
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i)) 
                          | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_375,0x65726574);
            VL_CONST_W_2X(80,__Vtemp_376,0x00000063,0x73727277);
            VL_CONST_W_2X(80,__Vtemp_377,0x00000063,0x73727273);
            VL_CONST_W_2X(80,__Vtemp_378,0x00000063,0x73727263);
            VL_CONST_W_2X(80,__Vtemp_379,0x00006373,0x72727769);
            VL_CONST_W_2X(80,__Vtemp_380,0x00006373,0x72727369);
            VL_CONST_W_2X(80,__Vtemp_381,0x00006373,0x72726369);
            VL_CONST_W_1X(80,__Vtemp_382,0x006d756c);
            __Vtemp_383 = (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_384, __Vtemp_383, __Vtemp_381, __Vtemp_382);
            __Vtemp_385 = (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_386, __Vtemp_385, __Vtemp_380, __Vtemp_384);
            __Vtemp_387 = (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_388, __Vtemp_387, __Vtemp_379, __Vtemp_386);
            __Vtemp_389 = (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_390, __Vtemp_389, __Vtemp_378, __Vtemp_388);
            __Vtemp_391 = (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_392, __Vtemp_391, __Vtemp_377, __Vtemp_390);
            __Vtemp_393 = (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_394, __Vtemp_393, __Vtemp_376, __Vtemp_392);
            __Vtemp_395 = (0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_396, __Vtemp_395, __Vtemp_375, __Vtemp_394);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_396);
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                    | (0x100fU == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_397,0x6d756c68);
            VL_CONST_W_2X(80,__Vtemp_398,0x00006d75,0x6c687375);
            VL_CONST_W_2X(80,__Vtemp_399,0x0000006d,0x756c6875);
            VL_CONST_W_1X(80,__Vtemp_400,0x00646976);
            VL_CONST_W_1X(80,__Vtemp_401,0x64697675);
            VL_CONST_W_1X(80,__Vtemp_402,0x0072656d);
            VL_CONST_W_1X(80,__Vtemp_403,0x72656d75);
            VL_CONST_W_2X(80,__Vtemp_404,0x0066656e,0x63652e69);
            __Vtemp_405 = (0x2007033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_406, __Vtemp_405, __Vtemp_403, __Vtemp_404);
            __Vtemp_407 = (0x2006033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_408, __Vtemp_407, __Vtemp_402, __Vtemp_406);
            __Vtemp_409 = (0x2005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_410, __Vtemp_409, __Vtemp_401, __Vtemp_408);
            __Vtemp_411 = (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_412, __Vtemp_411, __Vtemp_400, __Vtemp_410);
            __Vtemp_413 = (0x2003033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_414, __Vtemp_413, __Vtemp_399, __Vtemp_412);
            __Vtemp_415 = (0x2002033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_416, __Vtemp_415, __Vtemp_398, __Vtemp_414);
            __Vtemp_417 = (0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_418, __Vtemp_417, __Vtemp_397, __Vtemp_416);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_418);
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->__PVT__opcode_i))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                       | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x40005013U == (0xfc00707fU 
                                         & vlSelf->__PVT__opcode_i)))) 
                  | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                 | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
               | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | ((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) 
             | (((0x23U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                 | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))))) {
            if (((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                           | (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else if ((((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                         | (0x5013U == (0xfc00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_EXTEND_II(32,5, 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U)));
            } else if ((0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x00007063);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = (vlSelf->__PVT__pc_i 
                                               + VL_CONCAT_III(32,12,20, 
                                                               (0xfffU 
                                                                & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0xcU)), 
                                                               VL_CONCAT_III(20,8,12, 
                                                                             (0xffU 
                                                                              & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 8U)), 
                                                                             VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x15U, 4U)), 0U))))));
                if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c);
                }
            } else if ((0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
                if (((1U == (IData)(vlSelf->__PVT__ra_idx_w)) 
                     & (0U == VL_CONCAT_III(32,20,12, 
                                            (0xfffffU 
                                             & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                            (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)))))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x00726574);
                } else if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_2X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c,0x20285229);
                }
            } else if (((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                            | (0x1003U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            VL_CONCAT_III(12,7,5, 
                                                                          (0x7fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 7U)), 
                                                                          (0x1fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U))));
            }
        }
    }
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__0\n"); );
    // Body
    vlSelf->__PVT__ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xfU, 5U));
    vlSelf->__PVT__rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U));
    vlSelf->__PVT__rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__1(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    CData/*31:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    CData/*31:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    CData/*31:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    CData/*31:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    CData/*31:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    CData/*31:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    CData/*31:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_86;
    CData/*31:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    CData/*31:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    CData/*31:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    CData/*31:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    CData/*31:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    CData/*31:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_106;
    CData/*31:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    CData/*31:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_118;
    CData/*31:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    CData/*31:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_122;
    CData/*31:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    CData/*31:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_126;
    CData/*31:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    CData/*31:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_130;
    CData/*31:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_134;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_140;
    CData/*31:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_142;
    CData/*31:0*/ __Vtemp_143;
    VlWide<3>/*95:0*/ __Vtemp_144;
    CData/*31:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_146;
    CData/*31:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_148;
    CData/*31:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_150;
    CData/*31:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_152;
    CData/*31:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_154;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_162;
    CData/*31:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_164;
    CData/*31:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_166;
    CData/*31:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_168;
    CData/*31:0*/ __Vtemp_169;
    VlWide<3>/*95:0*/ __Vtemp_170;
    CData/*31:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_172;
    CData/*31:0*/ __Vtemp_173;
    VlWide<3>/*95:0*/ __Vtemp_174;
    CData/*31:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    CData/*31:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_186;
    CData/*31:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_188;
    CData/*31:0*/ __Vtemp_189;
    VlWide<3>/*95:0*/ __Vtemp_190;
    CData/*31:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_192;
    CData/*31:0*/ __Vtemp_193;
    VlWide<3>/*95:0*/ __Vtemp_194;
    CData/*31:0*/ __Vtemp_195;
    VlWide<3>/*95:0*/ __Vtemp_196;
    CData/*31:0*/ __Vtemp_197;
    VlWide<3>/*95:0*/ __Vtemp_198;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_206;
    CData/*31:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_208;
    CData/*31:0*/ __Vtemp_209;
    VlWide<3>/*95:0*/ __Vtemp_210;
    CData/*31:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_212;
    CData/*31:0*/ __Vtemp_213;
    VlWide<3>/*95:0*/ __Vtemp_214;
    CData/*31:0*/ __Vtemp_215;
    VlWide<3>/*95:0*/ __Vtemp_216;
    CData/*31:0*/ __Vtemp_217;
    VlWide<3>/*95:0*/ __Vtemp_218;
    CData/*31:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_220;
    VlWide<3>/*95:0*/ __Vtemp_221;
    VlWide<3>/*95:0*/ __Vtemp_222;
    VlWide<3>/*95:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_225;
    VlWide<3>/*95:0*/ __Vtemp_226;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<3>/*95:0*/ __Vtemp_228;
    CData/*31:0*/ __Vtemp_229;
    VlWide<3>/*95:0*/ __Vtemp_230;
    CData/*31:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_232;
    CData/*31:0*/ __Vtemp_233;
    VlWide<3>/*95:0*/ __Vtemp_234;
    CData/*31:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    CData/*31:0*/ __Vtemp_237;
    VlWide<3>/*95:0*/ __Vtemp_238;
    CData/*31:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_240;
    CData/*31:0*/ __Vtemp_241;
    VlWide<3>/*95:0*/ __Vtemp_242;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<3>/*95:0*/ __Vtemp_244;
    VlWide<3>/*95:0*/ __Vtemp_245;
    VlWide<3>/*95:0*/ __Vtemp_246;
    VlWide<3>/*95:0*/ __Vtemp_247;
    VlWide<3>/*95:0*/ __Vtemp_248;
    VlWide<3>/*95:0*/ __Vtemp_249;
    VlWide<3>/*95:0*/ __Vtemp_250;
    CData/*31:0*/ __Vtemp_251;
    VlWide<3>/*95:0*/ __Vtemp_252;
    CData/*31:0*/ __Vtemp_253;
    VlWide<3>/*95:0*/ __Vtemp_254;
    CData/*31:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_256;
    CData/*31:0*/ __Vtemp_257;
    VlWide<3>/*95:0*/ __Vtemp_258;
    CData/*31:0*/ __Vtemp_259;
    VlWide<3>/*95:0*/ __Vtemp_260;
    CData/*31:0*/ __Vtemp_261;
    VlWide<3>/*95:0*/ __Vtemp_262;
    CData/*31:0*/ __Vtemp_263;
    VlWide<3>/*95:0*/ __Vtemp_264;
    VlWide<3>/*95:0*/ __Vtemp_265;
    VlWide<3>/*95:0*/ __Vtemp_266;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<3>/*95:0*/ __Vtemp_268;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_270;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_272;
    CData/*31:0*/ __Vtemp_273;
    VlWide<3>/*95:0*/ __Vtemp_274;
    CData/*31:0*/ __Vtemp_275;
    VlWide<3>/*95:0*/ __Vtemp_276;
    CData/*31:0*/ __Vtemp_277;
    VlWide<3>/*95:0*/ __Vtemp_278;
    CData/*31:0*/ __Vtemp_279;
    VlWide<3>/*95:0*/ __Vtemp_280;
    CData/*31:0*/ __Vtemp_281;
    VlWide<3>/*95:0*/ __Vtemp_282;
    CData/*31:0*/ __Vtemp_283;
    VlWide<3>/*95:0*/ __Vtemp_284;
    CData/*31:0*/ __Vtemp_285;
    VlWide<3>/*95:0*/ __Vtemp_286;
    VlWide<3>/*95:0*/ __Vtemp_287;
    VlWide<3>/*95:0*/ __Vtemp_288;
    VlWide<3>/*95:0*/ __Vtemp_289;
    VlWide<3>/*95:0*/ __Vtemp_290;
    VlWide<3>/*95:0*/ __Vtemp_291;
    VlWide<3>/*95:0*/ __Vtemp_292;
    VlWide<3>/*95:0*/ __Vtemp_293;
    VlWide<3>/*95:0*/ __Vtemp_294;
    CData/*31:0*/ __Vtemp_295;
    VlWide<3>/*95:0*/ __Vtemp_296;
    CData/*31:0*/ __Vtemp_297;
    VlWide<3>/*95:0*/ __Vtemp_298;
    CData/*31:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_300;
    CData/*31:0*/ __Vtemp_301;
    VlWide<3>/*95:0*/ __Vtemp_302;
    CData/*31:0*/ __Vtemp_303;
    VlWide<3>/*95:0*/ __Vtemp_304;
    CData/*31:0*/ __Vtemp_305;
    VlWide<3>/*95:0*/ __Vtemp_306;
    CData/*31:0*/ __Vtemp_307;
    VlWide<3>/*95:0*/ __Vtemp_308;
    VlWide<3>/*95:0*/ __Vtemp_309;
    VlWide<3>/*95:0*/ __Vtemp_310;
    VlWide<3>/*95:0*/ __Vtemp_311;
    VlWide<3>/*95:0*/ __Vtemp_312;
    VlWide<3>/*95:0*/ __Vtemp_313;
    VlWide<3>/*95:0*/ __Vtemp_314;
    VlWide<3>/*95:0*/ __Vtemp_315;
    VlWide<3>/*95:0*/ __Vtemp_316;
    CData/*31:0*/ __Vtemp_317;
    VlWide<3>/*95:0*/ __Vtemp_318;
    CData/*31:0*/ __Vtemp_319;
    VlWide<3>/*95:0*/ __Vtemp_320;
    CData/*31:0*/ __Vtemp_321;
    VlWide<3>/*95:0*/ __Vtemp_322;
    CData/*31:0*/ __Vtemp_323;
    VlWide<3>/*95:0*/ __Vtemp_324;
    CData/*31:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_326;
    CData/*31:0*/ __Vtemp_327;
    VlWide<3>/*95:0*/ __Vtemp_328;
    CData/*31:0*/ __Vtemp_329;
    VlWide<3>/*95:0*/ __Vtemp_330;
    VlWide<3>/*95:0*/ __Vtemp_331;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_333;
    VlWide<3>/*95:0*/ __Vtemp_334;
    VlWide<3>/*95:0*/ __Vtemp_335;
    VlWide<3>/*95:0*/ __Vtemp_336;
    VlWide<3>/*95:0*/ __Vtemp_337;
    VlWide<3>/*95:0*/ __Vtemp_338;
    CData/*31:0*/ __Vtemp_339;
    VlWide<3>/*95:0*/ __Vtemp_340;
    CData/*31:0*/ __Vtemp_341;
    VlWide<3>/*95:0*/ __Vtemp_342;
    CData/*31:0*/ __Vtemp_343;
    VlWide<3>/*95:0*/ __Vtemp_344;
    CData/*31:0*/ __Vtemp_345;
    VlWide<3>/*95:0*/ __Vtemp_346;
    CData/*31:0*/ __Vtemp_347;
    VlWide<3>/*95:0*/ __Vtemp_348;
    CData/*31:0*/ __Vtemp_349;
    VlWide<3>/*95:0*/ __Vtemp_350;
    CData/*31:0*/ __Vtemp_351;
    VlWide<3>/*95:0*/ __Vtemp_352;
    VlWide<3>/*95:0*/ __Vtemp_353;
    VlWide<3>/*95:0*/ __Vtemp_354;
    VlWide<3>/*95:0*/ __Vtemp_355;
    VlWide<3>/*95:0*/ __Vtemp_356;
    VlWide<3>/*95:0*/ __Vtemp_357;
    VlWide<3>/*95:0*/ __Vtemp_358;
    VlWide<3>/*95:0*/ __Vtemp_359;
    VlWide<3>/*95:0*/ __Vtemp_360;
    CData/*31:0*/ __Vtemp_361;
    VlWide<3>/*95:0*/ __Vtemp_362;
    CData/*31:0*/ __Vtemp_363;
    VlWide<3>/*95:0*/ __Vtemp_364;
    CData/*31:0*/ __Vtemp_365;
    VlWide<3>/*95:0*/ __Vtemp_366;
    CData/*31:0*/ __Vtemp_367;
    VlWide<3>/*95:0*/ __Vtemp_368;
    CData/*31:0*/ __Vtemp_369;
    VlWide<3>/*95:0*/ __Vtemp_370;
    CData/*31:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_372;
    CData/*31:0*/ __Vtemp_373;
    VlWide<3>/*95:0*/ __Vtemp_374;
    VlWide<3>/*95:0*/ __Vtemp_375;
    VlWide<3>/*95:0*/ __Vtemp_376;
    VlWide<3>/*95:0*/ __Vtemp_377;
    VlWide<3>/*95:0*/ __Vtemp_378;
    VlWide<3>/*95:0*/ __Vtemp_379;
    VlWide<3>/*95:0*/ __Vtemp_380;
    VlWide<3>/*95:0*/ __Vtemp_381;
    VlWide<3>/*95:0*/ __Vtemp_382;
    CData/*31:0*/ __Vtemp_383;
    VlWide<3>/*95:0*/ __Vtemp_384;
    CData/*31:0*/ __Vtemp_385;
    VlWide<3>/*95:0*/ __Vtemp_386;
    CData/*31:0*/ __Vtemp_387;
    VlWide<3>/*95:0*/ __Vtemp_388;
    CData/*31:0*/ __Vtemp_389;
    VlWide<3>/*95:0*/ __Vtemp_390;
    CData/*31:0*/ __Vtemp_391;
    VlWide<3>/*95:0*/ __Vtemp_392;
    CData/*31:0*/ __Vtemp_393;
    VlWide<3>/*95:0*/ __Vtemp_394;
    CData/*31:0*/ __Vtemp_395;
    VlWide<3>/*95:0*/ __Vtemp_396;
    VlWide<3>/*95:0*/ __Vtemp_397;
    VlWide<3>/*95:0*/ __Vtemp_398;
    VlWide<3>/*95:0*/ __Vtemp_399;
    VlWide<3>/*95:0*/ __Vtemp_400;
    VlWide<3>/*95:0*/ __Vtemp_401;
    VlWide<3>/*95:0*/ __Vtemp_402;
    VlWide<3>/*95:0*/ __Vtemp_403;
    VlWide<3>/*95:0*/ __Vtemp_404;
    CData/*31:0*/ __Vtemp_405;
    VlWide<3>/*95:0*/ __Vtemp_406;
    CData/*31:0*/ __Vtemp_407;
    VlWide<3>/*95:0*/ __Vtemp_408;
    CData/*31:0*/ __Vtemp_409;
    VlWide<3>/*95:0*/ __Vtemp_410;
    CData/*31:0*/ __Vtemp_411;
    VlWide<3>/*95:0*/ __Vtemp_412;
    CData/*31:0*/ __Vtemp_413;
    VlWide<3>/*95:0*/ __Vtemp_414;
    CData/*31:0*/ __Vtemp_415;
    VlWide<3>/*95:0*/ __Vtemp_416;
    CData/*31:0*/ __Vtemp_417;
    VlWide<3>/*95:0*/ __Vtemp_418;
    // Body
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
    vlSelf->__PVT__dbg_inst_pc = 0U;
    if (vlSelf->__PVT__valid_i) {
        vlSelf->__PVT__dbg_inst_pc = vlSelf->__PVT__pc_i;
        vlSelf->__Vfunc_get_regname_str__3__regnum 
            = vlSelf->__PVT__ra_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_1,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_2,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_3,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_4,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_5,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_6,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_7,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_8,0x00007432);
            __Vtemp_9 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_10, __Vtemp_9, __Vtemp_7, __Vtemp_8);
            __Vtemp_11 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_12, __Vtemp_11, __Vtemp_6, __Vtemp_10);
            __Vtemp_13 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_14, __Vtemp_13, __Vtemp_5, __Vtemp_12);
            __Vtemp_15 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_16, __Vtemp_15, __Vtemp_4, __Vtemp_14);
            __Vtemp_17 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_18, __Vtemp_17, __Vtemp_3, __Vtemp_16);
            __Vtemp_19 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_20, __Vtemp_19, __Vtemp_2, __Vtemp_18);
            __Vtemp_21 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_22, __Vtemp_21, __Vtemp_1, __Vtemp_20);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__3__Vfuncout, __Vtemp_22);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_23,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_24,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_25,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_26,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_27,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_28,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_29,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_30,0x00006135);
            __Vtemp_31 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_32, __Vtemp_31, __Vtemp_29, __Vtemp_30);
            __Vtemp_33 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_34, __Vtemp_33, __Vtemp_28, __Vtemp_32);
            __Vtemp_35 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_36, __Vtemp_35, __Vtemp_27, __Vtemp_34);
            __Vtemp_37 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_38, __Vtemp_37, __Vtemp_26, __Vtemp_36);
            __Vtemp_39 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_40, __Vtemp_39, __Vtemp_25, __Vtemp_38);
            __Vtemp_41 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_42, __Vtemp_41, __Vtemp_24, __Vtemp_40);
            __Vtemp_43 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_44, __Vtemp_43, __Vtemp_23, __Vtemp_42);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__3__Vfuncout, __Vtemp_44);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_45,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_46,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_47,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_48,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_49,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_50,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_51,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_52,0x00007337);
            __Vtemp_53 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_54, __Vtemp_53, __Vtemp_51, __Vtemp_52);
            __Vtemp_55 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_56, __Vtemp_55, __Vtemp_50, __Vtemp_54);
            __Vtemp_57 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_58, __Vtemp_57, __Vtemp_49, __Vtemp_56);
            __Vtemp_59 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_60, __Vtemp_59, __Vtemp_48, __Vtemp_58);
            __Vtemp_61 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_62, __Vtemp_61, __Vtemp_47, __Vtemp_60);
            __Vtemp_63 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_64, __Vtemp_63, __Vtemp_46, __Vtemp_62);
            __Vtemp_65 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_66, __Vtemp_65, __Vtemp_45, __Vtemp_64);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__3__Vfuncout, __Vtemp_66);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_67,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_68,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_69,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_70,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_71,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_72,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_73,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_74,0x00007436);
            __Vtemp_75 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_76, __Vtemp_75, __Vtemp_73, __Vtemp_74);
            __Vtemp_77 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_78, __Vtemp_77, __Vtemp_72, __Vtemp_76);
            __Vtemp_79 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_80, __Vtemp_79, __Vtemp_71, __Vtemp_78);
            __Vtemp_81 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_82, __Vtemp_81, __Vtemp_70, __Vtemp_80);
            __Vtemp_83 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_84, __Vtemp_83, __Vtemp_69, __Vtemp_82);
            __Vtemp_85 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_86, __Vtemp_85, __Vtemp_68, __Vtemp_84);
            __Vtemp_87 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__3__regnum));
            VL_COND_WIWW(80, __Vtemp_88, __Vtemp_87, __Vtemp_67, __Vtemp_86);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__3__Vfuncout, __Vtemp_88);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_ra, vlSelf->__Vfunc_get_regname_str__3__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__4__regnum 
            = vlSelf->__PVT__rb_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_89,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_90,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_91,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_92,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_93,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_94,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_95,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_96,0x00007432);
            __Vtemp_97 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_98, __Vtemp_97, __Vtemp_95, __Vtemp_96);
            __Vtemp_99 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_100, __Vtemp_99, __Vtemp_94, __Vtemp_98);
            __Vtemp_101 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_102, __Vtemp_101, __Vtemp_93, __Vtemp_100);
            __Vtemp_103 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_104, __Vtemp_103, __Vtemp_92, __Vtemp_102);
            __Vtemp_105 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_106, __Vtemp_105, __Vtemp_91, __Vtemp_104);
            __Vtemp_107 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_108, __Vtemp_107, __Vtemp_90, __Vtemp_106);
            __Vtemp_109 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_110, __Vtemp_109, __Vtemp_89, __Vtemp_108);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__4__Vfuncout, __Vtemp_110);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_111,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_112,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_113,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_114,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_115,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_116,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_117,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_118,0x00006135);
            __Vtemp_119 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_120, __Vtemp_119, __Vtemp_117, __Vtemp_118);
            __Vtemp_121 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_122, __Vtemp_121, __Vtemp_116, __Vtemp_120);
            __Vtemp_123 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_124, __Vtemp_123, __Vtemp_115, __Vtemp_122);
            __Vtemp_125 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_126, __Vtemp_125, __Vtemp_114, __Vtemp_124);
            __Vtemp_127 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_128, __Vtemp_127, __Vtemp_113, __Vtemp_126);
            __Vtemp_129 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_130, __Vtemp_129, __Vtemp_112, __Vtemp_128);
            __Vtemp_131 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_132, __Vtemp_131, __Vtemp_111, __Vtemp_130);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__4__Vfuncout, __Vtemp_132);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_133,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_134,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_135,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_136,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_137,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_138,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_139,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_140,0x00007337);
            __Vtemp_141 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_142, __Vtemp_141, __Vtemp_139, __Vtemp_140);
            __Vtemp_143 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_144, __Vtemp_143, __Vtemp_138, __Vtemp_142);
            __Vtemp_145 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_146, __Vtemp_145, __Vtemp_137, __Vtemp_144);
            __Vtemp_147 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_148, __Vtemp_147, __Vtemp_136, __Vtemp_146);
            __Vtemp_149 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_150, __Vtemp_149, __Vtemp_135, __Vtemp_148);
            __Vtemp_151 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_152, __Vtemp_151, __Vtemp_134, __Vtemp_150);
            __Vtemp_153 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_154, __Vtemp_153, __Vtemp_133, __Vtemp_152);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__4__Vfuncout, __Vtemp_154);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_155,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_156,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_157,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_158,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_159,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_160,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_161,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_162,0x00007436);
            __Vtemp_163 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_164, __Vtemp_163, __Vtemp_161, __Vtemp_162);
            __Vtemp_165 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_166, __Vtemp_165, __Vtemp_160, __Vtemp_164);
            __Vtemp_167 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_168, __Vtemp_167, __Vtemp_159, __Vtemp_166);
            __Vtemp_169 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_170, __Vtemp_169, __Vtemp_158, __Vtemp_168);
            __Vtemp_171 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_172, __Vtemp_171, __Vtemp_157, __Vtemp_170);
            __Vtemp_173 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_174, __Vtemp_173, __Vtemp_156, __Vtemp_172);
            __Vtemp_175 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__4__regnum));
            VL_COND_WIWW(80, __Vtemp_176, __Vtemp_175, __Vtemp_155, __Vtemp_174);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__4__Vfuncout, __Vtemp_176);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rb, vlSelf->__Vfunc_get_regname_str__4__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__5__regnum 
            = vlSelf->__PVT__rd_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_177,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_178,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_179,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_180,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_181,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_182,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_183,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_184,0x00007432);
            __Vtemp_185 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_186, __Vtemp_185, __Vtemp_183, __Vtemp_184);
            __Vtemp_187 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_188, __Vtemp_187, __Vtemp_182, __Vtemp_186);
            __Vtemp_189 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_190, __Vtemp_189, __Vtemp_181, __Vtemp_188);
            __Vtemp_191 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_192, __Vtemp_191, __Vtemp_180, __Vtemp_190);
            __Vtemp_193 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_194, __Vtemp_193, __Vtemp_179, __Vtemp_192);
            __Vtemp_195 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_196, __Vtemp_195, __Vtemp_178, __Vtemp_194);
            __Vtemp_197 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_198, __Vtemp_197, __Vtemp_177, __Vtemp_196);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__5__Vfuncout, __Vtemp_198);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_199,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_200,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_201,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_202,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_203,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_204,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_205,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_206,0x00006135);
            __Vtemp_207 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_208, __Vtemp_207, __Vtemp_205, __Vtemp_206);
            __Vtemp_209 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_210, __Vtemp_209, __Vtemp_204, __Vtemp_208);
            __Vtemp_211 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_212, __Vtemp_211, __Vtemp_203, __Vtemp_210);
            __Vtemp_213 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_214, __Vtemp_213, __Vtemp_202, __Vtemp_212);
            __Vtemp_215 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_216, __Vtemp_215, __Vtemp_201, __Vtemp_214);
            __Vtemp_217 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_218, __Vtemp_217, __Vtemp_200, __Vtemp_216);
            __Vtemp_219 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_220, __Vtemp_219, __Vtemp_199, __Vtemp_218);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__5__Vfuncout, __Vtemp_220);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_221,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_222,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_223,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_224,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_225,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_226,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_227,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_228,0x00007337);
            __Vtemp_229 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_230, __Vtemp_229, __Vtemp_227, __Vtemp_228);
            __Vtemp_231 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_232, __Vtemp_231, __Vtemp_226, __Vtemp_230);
            __Vtemp_233 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_234, __Vtemp_233, __Vtemp_225, __Vtemp_232);
            __Vtemp_235 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_236, __Vtemp_235, __Vtemp_224, __Vtemp_234);
            __Vtemp_237 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_238, __Vtemp_237, __Vtemp_223, __Vtemp_236);
            __Vtemp_239 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_240, __Vtemp_239, __Vtemp_222, __Vtemp_238);
            __Vtemp_241 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_242, __Vtemp_241, __Vtemp_221, __Vtemp_240);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__5__Vfuncout, __Vtemp_242);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_243,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_244,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_245,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_246,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_247,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_248,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_249,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_250,0x00007436);
            __Vtemp_251 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_252, __Vtemp_251, __Vtemp_249, __Vtemp_250);
            __Vtemp_253 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_254, __Vtemp_253, __Vtemp_248, __Vtemp_252);
            __Vtemp_255 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_256, __Vtemp_255, __Vtemp_247, __Vtemp_254);
            __Vtemp_257 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_258, __Vtemp_257, __Vtemp_246, __Vtemp_256);
            __Vtemp_259 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_260, __Vtemp_259, __Vtemp_245, __Vtemp_258);
            __Vtemp_261 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_262, __Vtemp_261, __Vtemp_244, __Vtemp_260);
            __Vtemp_263 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__5__regnum));
            VL_COND_WIWW(80, __Vtemp_264, __Vtemp_263, __Vtemp_243, __Vtemp_262);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__5__Vfuncout, __Vtemp_264);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rd, vlSelf->__Vfunc_get_regname_str__5__Vfuncout);
        if (((((((((0x7013U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                   | (0x13U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
               | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | (0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
             | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_265,0x616e6469);
            VL_CONST_W_1X(80,__Vtemp_266,0x61646469);
            VL_CONST_W_1X(80,__Vtemp_267,0x736c7469);
            VL_CONST_W_2X(80,__Vtemp_268,0x00000073,0x6c746975);
            VL_CONST_W_1X(80,__Vtemp_269,0x006f7269);
            VL_CONST_W_1X(80,__Vtemp_270,0x786f7269);
            VL_CONST_W_1X(80,__Vtemp_271,0x736c6c69);
            VL_CONST_W_1X(80,__Vtemp_272,0x73726c69);
            __Vtemp_273 = (0x1013U == (0xfc00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_274, __Vtemp_273, __Vtemp_271, __Vtemp_272);
            __Vtemp_275 = (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_276, __Vtemp_275, __Vtemp_270, __Vtemp_274);
            __Vtemp_277 = (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_278, __Vtemp_277, __Vtemp_269, __Vtemp_276);
            __Vtemp_279 = (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_280, __Vtemp_279, __Vtemp_268, __Vtemp_278);
            __Vtemp_281 = (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_282, __Vtemp_281, __Vtemp_267, __Vtemp_280);
            __Vtemp_283 = (0x13U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_284, __Vtemp_283, __Vtemp_266, __Vtemp_282);
            __Vtemp_285 = (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_286, __Vtemp_285, __Vtemp_265, __Vtemp_284);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_286);
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)) 
                          | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                         | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                        | (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x2033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x3033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_287,0x73726169);
            VL_CONST_W_1X(80,__Vtemp_288,0x006c7569);
            VL_CONST_W_2X(80,__Vtemp_289,0x00000061,0x75697063);
            VL_CONST_W_1X(80,__Vtemp_290,0x00616464);
            VL_CONST_W_1X(80,__Vtemp_291,0x00737562);
            VL_CONST_W_1X(80,__Vtemp_292,0x00736c74);
            VL_CONST_W_1X(80,__Vtemp_293,0x736c7475);
            VL_CONST_W_1X(80,__Vtemp_294,0x00786f72);
            __Vtemp_295 = (0x3033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_296, __Vtemp_295, __Vtemp_293, __Vtemp_294);
            __Vtemp_297 = (0x2033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_298, __Vtemp_297, __Vtemp_292, __Vtemp_296);
            __Vtemp_299 = (0x40000033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_300, __Vtemp_299, __Vtemp_291, __Vtemp_298);
            __Vtemp_301 = (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_302, __Vtemp_301, __Vtemp_290, __Vtemp_300);
            __Vtemp_303 = (0x17U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_304, __Vtemp_303, __Vtemp_289, __Vtemp_302);
            __Vtemp_305 = (0x37U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_306, __Vtemp_305, __Vtemp_288, __Vtemp_304);
            __Vtemp_307 = (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_308, __Vtemp_307, __Vtemp_287, __Vtemp_306);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_308);
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
                     | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x63U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_309,0x00006f72);
            VL_CONST_W_1X(80,__Vtemp_310,0x00616e64);
            VL_CONST_W_1X(80,__Vtemp_311,0x00736c6c);
            VL_CONST_W_1X(80,__Vtemp_312,0x0073726c);
            VL_CONST_W_1X(80,__Vtemp_313,0x00737261);
            VL_CONST_W_1X(80,__Vtemp_314,0x006a616c);
            VL_CONST_W_1X(80,__Vtemp_315,0x6a616c72);
            VL_CONST_W_1X(80,__Vtemp_316,0x00626571);
            __Vtemp_317 = (0x67U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_318, __Vtemp_317, __Vtemp_315, __Vtemp_316);
            __Vtemp_319 = (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_320, __Vtemp_319, __Vtemp_314, __Vtemp_318);
            __Vtemp_321 = (0x40005033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_322, __Vtemp_321, __Vtemp_313, __Vtemp_320);
            __Vtemp_323 = (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_324, __Vtemp_323, __Vtemp_312, __Vtemp_322);
            __Vtemp_325 = (0x1033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_326, __Vtemp_325, __Vtemp_311, __Vtemp_324);
            __Vtemp_327 = (0x7033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_328, __Vtemp_327, __Vtemp_310, __Vtemp_326);
            __Vtemp_329 = (0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_330, __Vtemp_329, __Vtemp_309, __Vtemp_328);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_330);
        } else if (((((((((0x1063U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (3U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_331,0x00626e65);
            VL_CONST_W_1X(80,__Vtemp_332,0x00626c74);
            VL_CONST_W_1X(80,__Vtemp_333,0x00626765);
            VL_CONST_W_1X(80,__Vtemp_334,0x626c7475);
            VL_CONST_W_1X(80,__Vtemp_335,0x62676575);
            VL_CONST_W_1X(80,__Vtemp_336,0x00006c62);
            VL_CONST_W_1X(80,__Vtemp_337,0x00006c68);
            VL_CONST_W_1X(80,__Vtemp_338,0x00006c77);
            __Vtemp_339 = (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_340, __Vtemp_339, __Vtemp_337, __Vtemp_338);
            __Vtemp_341 = (3U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_342, __Vtemp_341, __Vtemp_336, __Vtemp_340);
            __Vtemp_343 = (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_344, __Vtemp_343, __Vtemp_335, __Vtemp_342);
            __Vtemp_345 = (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_346, __Vtemp_345, __Vtemp_334, __Vtemp_344);
            __Vtemp_347 = (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_348, __Vtemp_347, __Vtemp_333, __Vtemp_346);
            __Vtemp_349 = (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_350, __Vtemp_349, __Vtemp_332, __Vtemp_348);
            __Vtemp_351 = (0x1063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_352, __Vtemp_351, __Vtemp_331, __Vtemp_350);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_352);
        } else if (((((((((0x4003U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x23U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x73U == vlSelf->__PVT__opcode_i)) 
                    | (0x100073U == vlSelf->__PVT__opcode_i))) {
            VL_CONST_W_1X(80,__Vtemp_353,0x006c6275);
            VL_CONST_W_1X(80,__Vtemp_354,0x006c6875);
            VL_CONST_W_1X(80,__Vtemp_355,0x006c7775);
            VL_CONST_W_1X(80,__Vtemp_356,0x00007362);
            VL_CONST_W_1X(80,__Vtemp_357,0x00007368);
            VL_CONST_W_1X(80,__Vtemp_358,0x00007377);
            VL_CONST_W_2X(80,__Vtemp_359,0x00000065,0x63616c6c);
            VL_CONST_W_2X(80,__Vtemp_360,0x00006562,0x7265616b);
            __Vtemp_361 = (0x73U == vlSelf->__PVT__opcode_i);
            VL_COND_WIWW(80, __Vtemp_362, __Vtemp_361, __Vtemp_359, __Vtemp_360);
            __Vtemp_363 = (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_364, __Vtemp_363, __Vtemp_358, __Vtemp_362);
            __Vtemp_365 = (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_366, __Vtemp_365, __Vtemp_357, __Vtemp_364);
            __Vtemp_367 = (0x23U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_368, __Vtemp_367, __Vtemp_356, __Vtemp_366);
            __Vtemp_369 = (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_370, __Vtemp_369, __Vtemp_355, __Vtemp_368);
            __Vtemp_371 = (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_372, __Vtemp_371, __Vtemp_354, __Vtemp_370);
            __Vtemp_373 = (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_374, __Vtemp_373, __Vtemp_353, __Vtemp_372);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_374);
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i)) 
                          | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_375,0x65726574);
            VL_CONST_W_2X(80,__Vtemp_376,0x00000063,0x73727277);
            VL_CONST_W_2X(80,__Vtemp_377,0x00000063,0x73727273);
            VL_CONST_W_2X(80,__Vtemp_378,0x00000063,0x73727263);
            VL_CONST_W_2X(80,__Vtemp_379,0x00006373,0x72727769);
            VL_CONST_W_2X(80,__Vtemp_380,0x00006373,0x72727369);
            VL_CONST_W_2X(80,__Vtemp_381,0x00006373,0x72726369);
            VL_CONST_W_1X(80,__Vtemp_382,0x006d756c);
            __Vtemp_383 = (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_384, __Vtemp_383, __Vtemp_381, __Vtemp_382);
            __Vtemp_385 = (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_386, __Vtemp_385, __Vtemp_380, __Vtemp_384);
            __Vtemp_387 = (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_388, __Vtemp_387, __Vtemp_379, __Vtemp_386);
            __Vtemp_389 = (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_390, __Vtemp_389, __Vtemp_378, __Vtemp_388);
            __Vtemp_391 = (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_392, __Vtemp_391, __Vtemp_377, __Vtemp_390);
            __Vtemp_393 = (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_394, __Vtemp_393, __Vtemp_376, __Vtemp_392);
            __Vtemp_395 = (0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_396, __Vtemp_395, __Vtemp_375, __Vtemp_394);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_396);
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                    | (0x100fU == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_397,0x6d756c68);
            VL_CONST_W_2X(80,__Vtemp_398,0x00006d75,0x6c687375);
            VL_CONST_W_2X(80,__Vtemp_399,0x0000006d,0x756c6875);
            VL_CONST_W_1X(80,__Vtemp_400,0x00646976);
            VL_CONST_W_1X(80,__Vtemp_401,0x64697675);
            VL_CONST_W_1X(80,__Vtemp_402,0x0072656d);
            VL_CONST_W_1X(80,__Vtemp_403,0x72656d75);
            VL_CONST_W_2X(80,__Vtemp_404,0x0066656e,0x63652e69);
            __Vtemp_405 = (0x2007033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_406, __Vtemp_405, __Vtemp_403, __Vtemp_404);
            __Vtemp_407 = (0x2006033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_408, __Vtemp_407, __Vtemp_402, __Vtemp_406);
            __Vtemp_409 = (0x2005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_410, __Vtemp_409, __Vtemp_401, __Vtemp_408);
            __Vtemp_411 = (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_412, __Vtemp_411, __Vtemp_400, __Vtemp_410);
            __Vtemp_413 = (0x2003033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_414, __Vtemp_413, __Vtemp_399, __Vtemp_412);
            __Vtemp_415 = (0x2002033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_416, __Vtemp_415, __Vtemp_398, __Vtemp_414);
            __Vtemp_417 = (0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_418, __Vtemp_417, __Vtemp_397, __Vtemp_416);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_418);
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->__PVT__opcode_i))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                       | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x40005013U == (0xfc00707fU 
                                         & vlSelf->__PVT__opcode_i)))) 
                  | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                 | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
               | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | ((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) 
             | (((0x23U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                 | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))))) {
            if (((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                           | (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else if ((((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                         | (0x5013U == (0xfc00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_EXTEND_II(32,5, 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U)));
            } else if ((0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x00007063);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = (vlSelf->__PVT__pc_i 
                                               + VL_CONCAT_III(32,12,20, 
                                                               (0xfffU 
                                                                & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0xcU)), 
                                                               VL_CONCAT_III(20,8,12, 
                                                                             (0xffU 
                                                                              & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 8U)), 
                                                                             VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x15U, 4U)), 0U))))));
                if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c);
                }
            } else if ((0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
                if (((1U == (IData)(vlSelf->__PVT__ra_idx_w)) 
                     & (0U == VL_CONCAT_III(32,20,12, 
                                            (0xfffffU 
                                             & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                            (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)))))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x00726574);
                } else if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_2X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c,0x20285229);
                }
            } else if (((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                            | (0x1003U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            VL_CONCAT_III(12,7,5, 
                                                                          (0x7fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 7U)), 
                                                                          (0x1fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U))));
            }
        }
    }
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__0(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__0\n"); );
    // Body
    vlSelf->__PVT__ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xfU, 5U));
    vlSelf->__PVT__rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U));
    vlSelf->__PVT__rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__1(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    CData/*31:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    CData/*31:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    CData/*31:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    CData/*31:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    CData/*31:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    CData/*31:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    CData/*31:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_86;
    CData/*31:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    CData/*31:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    CData/*31:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    CData/*31:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    CData/*31:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    CData/*31:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_106;
    CData/*31:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    CData/*31:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_118;
    CData/*31:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    CData/*31:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_122;
    CData/*31:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    CData/*31:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_126;
    CData/*31:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    CData/*31:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_130;
    CData/*31:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_134;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_140;
    CData/*31:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_142;
    CData/*31:0*/ __Vtemp_143;
    VlWide<3>/*95:0*/ __Vtemp_144;
    CData/*31:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_146;
    CData/*31:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_148;
    CData/*31:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_150;
    CData/*31:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_152;
    CData/*31:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_154;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_162;
    CData/*31:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_164;
    CData/*31:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_166;
    CData/*31:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_168;
    CData/*31:0*/ __Vtemp_169;
    VlWide<3>/*95:0*/ __Vtemp_170;
    CData/*31:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_172;
    CData/*31:0*/ __Vtemp_173;
    VlWide<3>/*95:0*/ __Vtemp_174;
    CData/*31:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    CData/*31:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_186;
    CData/*31:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_188;
    CData/*31:0*/ __Vtemp_189;
    VlWide<3>/*95:0*/ __Vtemp_190;
    CData/*31:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_192;
    CData/*31:0*/ __Vtemp_193;
    VlWide<3>/*95:0*/ __Vtemp_194;
    CData/*31:0*/ __Vtemp_195;
    VlWide<3>/*95:0*/ __Vtemp_196;
    CData/*31:0*/ __Vtemp_197;
    VlWide<3>/*95:0*/ __Vtemp_198;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_206;
    CData/*31:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_208;
    CData/*31:0*/ __Vtemp_209;
    VlWide<3>/*95:0*/ __Vtemp_210;
    CData/*31:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_212;
    CData/*31:0*/ __Vtemp_213;
    VlWide<3>/*95:0*/ __Vtemp_214;
    CData/*31:0*/ __Vtemp_215;
    VlWide<3>/*95:0*/ __Vtemp_216;
    CData/*31:0*/ __Vtemp_217;
    VlWide<3>/*95:0*/ __Vtemp_218;
    CData/*31:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_220;
    VlWide<3>/*95:0*/ __Vtemp_221;
    VlWide<3>/*95:0*/ __Vtemp_222;
    VlWide<3>/*95:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_225;
    VlWide<3>/*95:0*/ __Vtemp_226;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<3>/*95:0*/ __Vtemp_228;
    CData/*31:0*/ __Vtemp_229;
    VlWide<3>/*95:0*/ __Vtemp_230;
    CData/*31:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_232;
    CData/*31:0*/ __Vtemp_233;
    VlWide<3>/*95:0*/ __Vtemp_234;
    CData/*31:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    CData/*31:0*/ __Vtemp_237;
    VlWide<3>/*95:0*/ __Vtemp_238;
    CData/*31:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_240;
    CData/*31:0*/ __Vtemp_241;
    VlWide<3>/*95:0*/ __Vtemp_242;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<3>/*95:0*/ __Vtemp_244;
    VlWide<3>/*95:0*/ __Vtemp_245;
    VlWide<3>/*95:0*/ __Vtemp_246;
    VlWide<3>/*95:0*/ __Vtemp_247;
    VlWide<3>/*95:0*/ __Vtemp_248;
    VlWide<3>/*95:0*/ __Vtemp_249;
    VlWide<3>/*95:0*/ __Vtemp_250;
    CData/*31:0*/ __Vtemp_251;
    VlWide<3>/*95:0*/ __Vtemp_252;
    CData/*31:0*/ __Vtemp_253;
    VlWide<3>/*95:0*/ __Vtemp_254;
    CData/*31:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_256;
    CData/*31:0*/ __Vtemp_257;
    VlWide<3>/*95:0*/ __Vtemp_258;
    CData/*31:0*/ __Vtemp_259;
    VlWide<3>/*95:0*/ __Vtemp_260;
    CData/*31:0*/ __Vtemp_261;
    VlWide<3>/*95:0*/ __Vtemp_262;
    CData/*31:0*/ __Vtemp_263;
    VlWide<3>/*95:0*/ __Vtemp_264;
    VlWide<3>/*95:0*/ __Vtemp_265;
    VlWide<3>/*95:0*/ __Vtemp_266;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<3>/*95:0*/ __Vtemp_268;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_270;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_272;
    CData/*31:0*/ __Vtemp_273;
    VlWide<3>/*95:0*/ __Vtemp_274;
    CData/*31:0*/ __Vtemp_275;
    VlWide<3>/*95:0*/ __Vtemp_276;
    CData/*31:0*/ __Vtemp_277;
    VlWide<3>/*95:0*/ __Vtemp_278;
    CData/*31:0*/ __Vtemp_279;
    VlWide<3>/*95:0*/ __Vtemp_280;
    CData/*31:0*/ __Vtemp_281;
    VlWide<3>/*95:0*/ __Vtemp_282;
    CData/*31:0*/ __Vtemp_283;
    VlWide<3>/*95:0*/ __Vtemp_284;
    CData/*31:0*/ __Vtemp_285;
    VlWide<3>/*95:0*/ __Vtemp_286;
    VlWide<3>/*95:0*/ __Vtemp_287;
    VlWide<3>/*95:0*/ __Vtemp_288;
    VlWide<3>/*95:0*/ __Vtemp_289;
    VlWide<3>/*95:0*/ __Vtemp_290;
    VlWide<3>/*95:0*/ __Vtemp_291;
    VlWide<3>/*95:0*/ __Vtemp_292;
    VlWide<3>/*95:0*/ __Vtemp_293;
    VlWide<3>/*95:0*/ __Vtemp_294;
    CData/*31:0*/ __Vtemp_295;
    VlWide<3>/*95:0*/ __Vtemp_296;
    CData/*31:0*/ __Vtemp_297;
    VlWide<3>/*95:0*/ __Vtemp_298;
    CData/*31:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_300;
    CData/*31:0*/ __Vtemp_301;
    VlWide<3>/*95:0*/ __Vtemp_302;
    CData/*31:0*/ __Vtemp_303;
    VlWide<3>/*95:0*/ __Vtemp_304;
    CData/*31:0*/ __Vtemp_305;
    VlWide<3>/*95:0*/ __Vtemp_306;
    CData/*31:0*/ __Vtemp_307;
    VlWide<3>/*95:0*/ __Vtemp_308;
    VlWide<3>/*95:0*/ __Vtemp_309;
    VlWide<3>/*95:0*/ __Vtemp_310;
    VlWide<3>/*95:0*/ __Vtemp_311;
    VlWide<3>/*95:0*/ __Vtemp_312;
    VlWide<3>/*95:0*/ __Vtemp_313;
    VlWide<3>/*95:0*/ __Vtemp_314;
    VlWide<3>/*95:0*/ __Vtemp_315;
    VlWide<3>/*95:0*/ __Vtemp_316;
    CData/*31:0*/ __Vtemp_317;
    VlWide<3>/*95:0*/ __Vtemp_318;
    CData/*31:0*/ __Vtemp_319;
    VlWide<3>/*95:0*/ __Vtemp_320;
    CData/*31:0*/ __Vtemp_321;
    VlWide<3>/*95:0*/ __Vtemp_322;
    CData/*31:0*/ __Vtemp_323;
    VlWide<3>/*95:0*/ __Vtemp_324;
    CData/*31:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_326;
    CData/*31:0*/ __Vtemp_327;
    VlWide<3>/*95:0*/ __Vtemp_328;
    CData/*31:0*/ __Vtemp_329;
    VlWide<3>/*95:0*/ __Vtemp_330;
    VlWide<3>/*95:0*/ __Vtemp_331;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_333;
    VlWide<3>/*95:0*/ __Vtemp_334;
    VlWide<3>/*95:0*/ __Vtemp_335;
    VlWide<3>/*95:0*/ __Vtemp_336;
    VlWide<3>/*95:0*/ __Vtemp_337;
    VlWide<3>/*95:0*/ __Vtemp_338;
    CData/*31:0*/ __Vtemp_339;
    VlWide<3>/*95:0*/ __Vtemp_340;
    CData/*31:0*/ __Vtemp_341;
    VlWide<3>/*95:0*/ __Vtemp_342;
    CData/*31:0*/ __Vtemp_343;
    VlWide<3>/*95:0*/ __Vtemp_344;
    CData/*31:0*/ __Vtemp_345;
    VlWide<3>/*95:0*/ __Vtemp_346;
    CData/*31:0*/ __Vtemp_347;
    VlWide<3>/*95:0*/ __Vtemp_348;
    CData/*31:0*/ __Vtemp_349;
    VlWide<3>/*95:0*/ __Vtemp_350;
    CData/*31:0*/ __Vtemp_351;
    VlWide<3>/*95:0*/ __Vtemp_352;
    VlWide<3>/*95:0*/ __Vtemp_353;
    VlWide<3>/*95:0*/ __Vtemp_354;
    VlWide<3>/*95:0*/ __Vtemp_355;
    VlWide<3>/*95:0*/ __Vtemp_356;
    VlWide<3>/*95:0*/ __Vtemp_357;
    VlWide<3>/*95:0*/ __Vtemp_358;
    VlWide<3>/*95:0*/ __Vtemp_359;
    VlWide<3>/*95:0*/ __Vtemp_360;
    CData/*31:0*/ __Vtemp_361;
    VlWide<3>/*95:0*/ __Vtemp_362;
    CData/*31:0*/ __Vtemp_363;
    VlWide<3>/*95:0*/ __Vtemp_364;
    CData/*31:0*/ __Vtemp_365;
    VlWide<3>/*95:0*/ __Vtemp_366;
    CData/*31:0*/ __Vtemp_367;
    VlWide<3>/*95:0*/ __Vtemp_368;
    CData/*31:0*/ __Vtemp_369;
    VlWide<3>/*95:0*/ __Vtemp_370;
    CData/*31:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_372;
    CData/*31:0*/ __Vtemp_373;
    VlWide<3>/*95:0*/ __Vtemp_374;
    VlWide<3>/*95:0*/ __Vtemp_375;
    VlWide<3>/*95:0*/ __Vtemp_376;
    VlWide<3>/*95:0*/ __Vtemp_377;
    VlWide<3>/*95:0*/ __Vtemp_378;
    VlWide<3>/*95:0*/ __Vtemp_379;
    VlWide<3>/*95:0*/ __Vtemp_380;
    VlWide<3>/*95:0*/ __Vtemp_381;
    VlWide<3>/*95:0*/ __Vtemp_382;
    CData/*31:0*/ __Vtemp_383;
    VlWide<3>/*95:0*/ __Vtemp_384;
    CData/*31:0*/ __Vtemp_385;
    VlWide<3>/*95:0*/ __Vtemp_386;
    CData/*31:0*/ __Vtemp_387;
    VlWide<3>/*95:0*/ __Vtemp_388;
    CData/*31:0*/ __Vtemp_389;
    VlWide<3>/*95:0*/ __Vtemp_390;
    CData/*31:0*/ __Vtemp_391;
    VlWide<3>/*95:0*/ __Vtemp_392;
    CData/*31:0*/ __Vtemp_393;
    VlWide<3>/*95:0*/ __Vtemp_394;
    CData/*31:0*/ __Vtemp_395;
    VlWide<3>/*95:0*/ __Vtemp_396;
    VlWide<3>/*95:0*/ __Vtemp_397;
    VlWide<3>/*95:0*/ __Vtemp_398;
    VlWide<3>/*95:0*/ __Vtemp_399;
    VlWide<3>/*95:0*/ __Vtemp_400;
    VlWide<3>/*95:0*/ __Vtemp_401;
    VlWide<3>/*95:0*/ __Vtemp_402;
    VlWide<3>/*95:0*/ __Vtemp_403;
    VlWide<3>/*95:0*/ __Vtemp_404;
    CData/*31:0*/ __Vtemp_405;
    VlWide<3>/*95:0*/ __Vtemp_406;
    CData/*31:0*/ __Vtemp_407;
    VlWide<3>/*95:0*/ __Vtemp_408;
    CData/*31:0*/ __Vtemp_409;
    VlWide<3>/*95:0*/ __Vtemp_410;
    CData/*31:0*/ __Vtemp_411;
    VlWide<3>/*95:0*/ __Vtemp_412;
    CData/*31:0*/ __Vtemp_413;
    VlWide<3>/*95:0*/ __Vtemp_414;
    CData/*31:0*/ __Vtemp_415;
    VlWide<3>/*95:0*/ __Vtemp_416;
    CData/*31:0*/ __Vtemp_417;
    VlWide<3>/*95:0*/ __Vtemp_418;
    // Body
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
    vlSelf->__PVT__dbg_inst_pc = 0U;
    if (vlSelf->__PVT__valid_i) {
        vlSelf->__PVT__dbg_inst_pc = vlSelf->__PVT__pc_i;
        vlSelf->__Vfunc_get_regname_str__6__regnum 
            = vlSelf->__PVT__ra_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_1,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_2,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_3,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_4,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_5,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_6,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_7,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_8,0x00007432);
            __Vtemp_9 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_10, __Vtemp_9, __Vtemp_7, __Vtemp_8);
            __Vtemp_11 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_12, __Vtemp_11, __Vtemp_6, __Vtemp_10);
            __Vtemp_13 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_14, __Vtemp_13, __Vtemp_5, __Vtemp_12);
            __Vtemp_15 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_16, __Vtemp_15, __Vtemp_4, __Vtemp_14);
            __Vtemp_17 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_18, __Vtemp_17, __Vtemp_3, __Vtemp_16);
            __Vtemp_19 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_20, __Vtemp_19, __Vtemp_2, __Vtemp_18);
            __Vtemp_21 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_22, __Vtemp_21, __Vtemp_1, __Vtemp_20);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__6__Vfuncout, __Vtemp_22);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_23,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_24,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_25,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_26,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_27,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_28,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_29,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_30,0x00006135);
            __Vtemp_31 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_32, __Vtemp_31, __Vtemp_29, __Vtemp_30);
            __Vtemp_33 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_34, __Vtemp_33, __Vtemp_28, __Vtemp_32);
            __Vtemp_35 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_36, __Vtemp_35, __Vtemp_27, __Vtemp_34);
            __Vtemp_37 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_38, __Vtemp_37, __Vtemp_26, __Vtemp_36);
            __Vtemp_39 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_40, __Vtemp_39, __Vtemp_25, __Vtemp_38);
            __Vtemp_41 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_42, __Vtemp_41, __Vtemp_24, __Vtemp_40);
            __Vtemp_43 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_44, __Vtemp_43, __Vtemp_23, __Vtemp_42);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__6__Vfuncout, __Vtemp_44);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_45,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_46,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_47,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_48,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_49,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_50,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_51,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_52,0x00007337);
            __Vtemp_53 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_54, __Vtemp_53, __Vtemp_51, __Vtemp_52);
            __Vtemp_55 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_56, __Vtemp_55, __Vtemp_50, __Vtemp_54);
            __Vtemp_57 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_58, __Vtemp_57, __Vtemp_49, __Vtemp_56);
            __Vtemp_59 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_60, __Vtemp_59, __Vtemp_48, __Vtemp_58);
            __Vtemp_61 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_62, __Vtemp_61, __Vtemp_47, __Vtemp_60);
            __Vtemp_63 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_64, __Vtemp_63, __Vtemp_46, __Vtemp_62);
            __Vtemp_65 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_66, __Vtemp_65, __Vtemp_45, __Vtemp_64);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__6__Vfuncout, __Vtemp_66);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_67,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_68,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_69,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_70,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_71,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_72,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_73,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_74,0x00007436);
            __Vtemp_75 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_76, __Vtemp_75, __Vtemp_73, __Vtemp_74);
            __Vtemp_77 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_78, __Vtemp_77, __Vtemp_72, __Vtemp_76);
            __Vtemp_79 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_80, __Vtemp_79, __Vtemp_71, __Vtemp_78);
            __Vtemp_81 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_82, __Vtemp_81, __Vtemp_70, __Vtemp_80);
            __Vtemp_83 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_84, __Vtemp_83, __Vtemp_69, __Vtemp_82);
            __Vtemp_85 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_86, __Vtemp_85, __Vtemp_68, __Vtemp_84);
            __Vtemp_87 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__6__regnum));
            VL_COND_WIWW(80, __Vtemp_88, __Vtemp_87, __Vtemp_67, __Vtemp_86);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__6__Vfuncout, __Vtemp_88);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_ra, vlSelf->__Vfunc_get_regname_str__6__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__7__regnum 
            = vlSelf->__PVT__rb_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_89,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_90,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_91,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_92,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_93,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_94,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_95,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_96,0x00007432);
            __Vtemp_97 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_98, __Vtemp_97, __Vtemp_95, __Vtemp_96);
            __Vtemp_99 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_100, __Vtemp_99, __Vtemp_94, __Vtemp_98);
            __Vtemp_101 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_102, __Vtemp_101, __Vtemp_93, __Vtemp_100);
            __Vtemp_103 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_104, __Vtemp_103, __Vtemp_92, __Vtemp_102);
            __Vtemp_105 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_106, __Vtemp_105, __Vtemp_91, __Vtemp_104);
            __Vtemp_107 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_108, __Vtemp_107, __Vtemp_90, __Vtemp_106);
            __Vtemp_109 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_110, __Vtemp_109, __Vtemp_89, __Vtemp_108);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__7__Vfuncout, __Vtemp_110);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_111,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_112,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_113,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_114,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_115,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_116,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_117,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_118,0x00006135);
            __Vtemp_119 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_120, __Vtemp_119, __Vtemp_117, __Vtemp_118);
            __Vtemp_121 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_122, __Vtemp_121, __Vtemp_116, __Vtemp_120);
            __Vtemp_123 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_124, __Vtemp_123, __Vtemp_115, __Vtemp_122);
            __Vtemp_125 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_126, __Vtemp_125, __Vtemp_114, __Vtemp_124);
            __Vtemp_127 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_128, __Vtemp_127, __Vtemp_113, __Vtemp_126);
            __Vtemp_129 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_130, __Vtemp_129, __Vtemp_112, __Vtemp_128);
            __Vtemp_131 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_132, __Vtemp_131, __Vtemp_111, __Vtemp_130);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__7__Vfuncout, __Vtemp_132);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_133,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_134,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_135,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_136,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_137,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_138,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_139,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_140,0x00007337);
            __Vtemp_141 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_142, __Vtemp_141, __Vtemp_139, __Vtemp_140);
            __Vtemp_143 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_144, __Vtemp_143, __Vtemp_138, __Vtemp_142);
            __Vtemp_145 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_146, __Vtemp_145, __Vtemp_137, __Vtemp_144);
            __Vtemp_147 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_148, __Vtemp_147, __Vtemp_136, __Vtemp_146);
            __Vtemp_149 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_150, __Vtemp_149, __Vtemp_135, __Vtemp_148);
            __Vtemp_151 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_152, __Vtemp_151, __Vtemp_134, __Vtemp_150);
            __Vtemp_153 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_154, __Vtemp_153, __Vtemp_133, __Vtemp_152);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__7__Vfuncout, __Vtemp_154);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_155,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_156,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_157,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_158,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_159,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_160,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_161,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_162,0x00007436);
            __Vtemp_163 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_164, __Vtemp_163, __Vtemp_161, __Vtemp_162);
            __Vtemp_165 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_166, __Vtemp_165, __Vtemp_160, __Vtemp_164);
            __Vtemp_167 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_168, __Vtemp_167, __Vtemp_159, __Vtemp_166);
            __Vtemp_169 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_170, __Vtemp_169, __Vtemp_158, __Vtemp_168);
            __Vtemp_171 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_172, __Vtemp_171, __Vtemp_157, __Vtemp_170);
            __Vtemp_173 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_174, __Vtemp_173, __Vtemp_156, __Vtemp_172);
            __Vtemp_175 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__7__regnum));
            VL_COND_WIWW(80, __Vtemp_176, __Vtemp_175, __Vtemp_155, __Vtemp_174);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__7__Vfuncout, __Vtemp_176);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rb, vlSelf->__Vfunc_get_regname_str__7__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__8__regnum 
            = vlSelf->__PVT__rd_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_177,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_178,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_179,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_180,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_181,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_182,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_183,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_184,0x00007432);
            __Vtemp_185 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_186, __Vtemp_185, __Vtemp_183, __Vtemp_184);
            __Vtemp_187 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_188, __Vtemp_187, __Vtemp_182, __Vtemp_186);
            __Vtemp_189 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_190, __Vtemp_189, __Vtemp_181, __Vtemp_188);
            __Vtemp_191 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_192, __Vtemp_191, __Vtemp_180, __Vtemp_190);
            __Vtemp_193 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_194, __Vtemp_193, __Vtemp_179, __Vtemp_192);
            __Vtemp_195 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_196, __Vtemp_195, __Vtemp_178, __Vtemp_194);
            __Vtemp_197 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_198, __Vtemp_197, __Vtemp_177, __Vtemp_196);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__8__Vfuncout, __Vtemp_198);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_199,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_200,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_201,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_202,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_203,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_204,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_205,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_206,0x00006135);
            __Vtemp_207 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_208, __Vtemp_207, __Vtemp_205, __Vtemp_206);
            __Vtemp_209 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_210, __Vtemp_209, __Vtemp_204, __Vtemp_208);
            __Vtemp_211 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_212, __Vtemp_211, __Vtemp_203, __Vtemp_210);
            __Vtemp_213 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_214, __Vtemp_213, __Vtemp_202, __Vtemp_212);
            __Vtemp_215 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_216, __Vtemp_215, __Vtemp_201, __Vtemp_214);
            __Vtemp_217 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_218, __Vtemp_217, __Vtemp_200, __Vtemp_216);
            __Vtemp_219 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_220, __Vtemp_219, __Vtemp_199, __Vtemp_218);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__8__Vfuncout, __Vtemp_220);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_221,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_222,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_223,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_224,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_225,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_226,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_227,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_228,0x00007337);
            __Vtemp_229 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_230, __Vtemp_229, __Vtemp_227, __Vtemp_228);
            __Vtemp_231 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_232, __Vtemp_231, __Vtemp_226, __Vtemp_230);
            __Vtemp_233 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_234, __Vtemp_233, __Vtemp_225, __Vtemp_232);
            __Vtemp_235 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_236, __Vtemp_235, __Vtemp_224, __Vtemp_234);
            __Vtemp_237 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_238, __Vtemp_237, __Vtemp_223, __Vtemp_236);
            __Vtemp_239 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_240, __Vtemp_239, __Vtemp_222, __Vtemp_238);
            __Vtemp_241 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_242, __Vtemp_241, __Vtemp_221, __Vtemp_240);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__8__Vfuncout, __Vtemp_242);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_243,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_244,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_245,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_246,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_247,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_248,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_249,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_250,0x00007436);
            __Vtemp_251 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_252, __Vtemp_251, __Vtemp_249, __Vtemp_250);
            __Vtemp_253 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_254, __Vtemp_253, __Vtemp_248, __Vtemp_252);
            __Vtemp_255 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_256, __Vtemp_255, __Vtemp_247, __Vtemp_254);
            __Vtemp_257 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_258, __Vtemp_257, __Vtemp_246, __Vtemp_256);
            __Vtemp_259 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_260, __Vtemp_259, __Vtemp_245, __Vtemp_258);
            __Vtemp_261 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_262, __Vtemp_261, __Vtemp_244, __Vtemp_260);
            __Vtemp_263 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__8__regnum));
            VL_COND_WIWW(80, __Vtemp_264, __Vtemp_263, __Vtemp_243, __Vtemp_262);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__8__Vfuncout, __Vtemp_264);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rd, vlSelf->__Vfunc_get_regname_str__8__Vfuncout);
        if (((((((((0x7013U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                   | (0x13U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
               | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | (0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
             | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_265,0x616e6469);
            VL_CONST_W_1X(80,__Vtemp_266,0x61646469);
            VL_CONST_W_1X(80,__Vtemp_267,0x736c7469);
            VL_CONST_W_2X(80,__Vtemp_268,0x00000073,0x6c746975);
            VL_CONST_W_1X(80,__Vtemp_269,0x006f7269);
            VL_CONST_W_1X(80,__Vtemp_270,0x786f7269);
            VL_CONST_W_1X(80,__Vtemp_271,0x736c6c69);
            VL_CONST_W_1X(80,__Vtemp_272,0x73726c69);
            __Vtemp_273 = (0x1013U == (0xfc00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_274, __Vtemp_273, __Vtemp_271, __Vtemp_272);
            __Vtemp_275 = (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_276, __Vtemp_275, __Vtemp_270, __Vtemp_274);
            __Vtemp_277 = (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_278, __Vtemp_277, __Vtemp_269, __Vtemp_276);
            __Vtemp_279 = (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_280, __Vtemp_279, __Vtemp_268, __Vtemp_278);
            __Vtemp_281 = (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_282, __Vtemp_281, __Vtemp_267, __Vtemp_280);
            __Vtemp_283 = (0x13U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_284, __Vtemp_283, __Vtemp_266, __Vtemp_282);
            __Vtemp_285 = (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_286, __Vtemp_285, __Vtemp_265, __Vtemp_284);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_286);
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)) 
                          | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                         | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                        | (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x2033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x3033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_287,0x73726169);
            VL_CONST_W_1X(80,__Vtemp_288,0x006c7569);
            VL_CONST_W_2X(80,__Vtemp_289,0x00000061,0x75697063);
            VL_CONST_W_1X(80,__Vtemp_290,0x00616464);
            VL_CONST_W_1X(80,__Vtemp_291,0x00737562);
            VL_CONST_W_1X(80,__Vtemp_292,0x00736c74);
            VL_CONST_W_1X(80,__Vtemp_293,0x736c7475);
            VL_CONST_W_1X(80,__Vtemp_294,0x00786f72);
            __Vtemp_295 = (0x3033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_296, __Vtemp_295, __Vtemp_293, __Vtemp_294);
            __Vtemp_297 = (0x2033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_298, __Vtemp_297, __Vtemp_292, __Vtemp_296);
            __Vtemp_299 = (0x40000033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_300, __Vtemp_299, __Vtemp_291, __Vtemp_298);
            __Vtemp_301 = (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_302, __Vtemp_301, __Vtemp_290, __Vtemp_300);
            __Vtemp_303 = (0x17U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_304, __Vtemp_303, __Vtemp_289, __Vtemp_302);
            __Vtemp_305 = (0x37U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_306, __Vtemp_305, __Vtemp_288, __Vtemp_304);
            __Vtemp_307 = (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_308, __Vtemp_307, __Vtemp_287, __Vtemp_306);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_308);
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
                     | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x63U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_309,0x00006f72);
            VL_CONST_W_1X(80,__Vtemp_310,0x00616e64);
            VL_CONST_W_1X(80,__Vtemp_311,0x00736c6c);
            VL_CONST_W_1X(80,__Vtemp_312,0x0073726c);
            VL_CONST_W_1X(80,__Vtemp_313,0x00737261);
            VL_CONST_W_1X(80,__Vtemp_314,0x006a616c);
            VL_CONST_W_1X(80,__Vtemp_315,0x6a616c72);
            VL_CONST_W_1X(80,__Vtemp_316,0x00626571);
            __Vtemp_317 = (0x67U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_318, __Vtemp_317, __Vtemp_315, __Vtemp_316);
            __Vtemp_319 = (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_320, __Vtemp_319, __Vtemp_314, __Vtemp_318);
            __Vtemp_321 = (0x40005033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_322, __Vtemp_321, __Vtemp_313, __Vtemp_320);
            __Vtemp_323 = (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_324, __Vtemp_323, __Vtemp_312, __Vtemp_322);
            __Vtemp_325 = (0x1033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_326, __Vtemp_325, __Vtemp_311, __Vtemp_324);
            __Vtemp_327 = (0x7033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_328, __Vtemp_327, __Vtemp_310, __Vtemp_326);
            __Vtemp_329 = (0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_330, __Vtemp_329, __Vtemp_309, __Vtemp_328);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_330);
        } else if (((((((((0x1063U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (3U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_331,0x00626e65);
            VL_CONST_W_1X(80,__Vtemp_332,0x00626c74);
            VL_CONST_W_1X(80,__Vtemp_333,0x00626765);
            VL_CONST_W_1X(80,__Vtemp_334,0x626c7475);
            VL_CONST_W_1X(80,__Vtemp_335,0x62676575);
            VL_CONST_W_1X(80,__Vtemp_336,0x00006c62);
            VL_CONST_W_1X(80,__Vtemp_337,0x00006c68);
            VL_CONST_W_1X(80,__Vtemp_338,0x00006c77);
            __Vtemp_339 = (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_340, __Vtemp_339, __Vtemp_337, __Vtemp_338);
            __Vtemp_341 = (3U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_342, __Vtemp_341, __Vtemp_336, __Vtemp_340);
            __Vtemp_343 = (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_344, __Vtemp_343, __Vtemp_335, __Vtemp_342);
            __Vtemp_345 = (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_346, __Vtemp_345, __Vtemp_334, __Vtemp_344);
            __Vtemp_347 = (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_348, __Vtemp_347, __Vtemp_333, __Vtemp_346);
            __Vtemp_349 = (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_350, __Vtemp_349, __Vtemp_332, __Vtemp_348);
            __Vtemp_351 = (0x1063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_352, __Vtemp_351, __Vtemp_331, __Vtemp_350);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_352);
        } else if (((((((((0x4003U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x23U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x73U == vlSelf->__PVT__opcode_i)) 
                    | (0x100073U == vlSelf->__PVT__opcode_i))) {
            VL_CONST_W_1X(80,__Vtemp_353,0x006c6275);
            VL_CONST_W_1X(80,__Vtemp_354,0x006c6875);
            VL_CONST_W_1X(80,__Vtemp_355,0x006c7775);
            VL_CONST_W_1X(80,__Vtemp_356,0x00007362);
            VL_CONST_W_1X(80,__Vtemp_357,0x00007368);
            VL_CONST_W_1X(80,__Vtemp_358,0x00007377);
            VL_CONST_W_2X(80,__Vtemp_359,0x00000065,0x63616c6c);
            VL_CONST_W_2X(80,__Vtemp_360,0x00006562,0x7265616b);
            __Vtemp_361 = (0x73U == vlSelf->__PVT__opcode_i);
            VL_COND_WIWW(80, __Vtemp_362, __Vtemp_361, __Vtemp_359, __Vtemp_360);
            __Vtemp_363 = (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_364, __Vtemp_363, __Vtemp_358, __Vtemp_362);
            __Vtemp_365 = (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_366, __Vtemp_365, __Vtemp_357, __Vtemp_364);
            __Vtemp_367 = (0x23U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_368, __Vtemp_367, __Vtemp_356, __Vtemp_366);
            __Vtemp_369 = (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_370, __Vtemp_369, __Vtemp_355, __Vtemp_368);
            __Vtemp_371 = (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_372, __Vtemp_371, __Vtemp_354, __Vtemp_370);
            __Vtemp_373 = (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_374, __Vtemp_373, __Vtemp_353, __Vtemp_372);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_374);
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i)) 
                          | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_375,0x65726574);
            VL_CONST_W_2X(80,__Vtemp_376,0x00000063,0x73727277);
            VL_CONST_W_2X(80,__Vtemp_377,0x00000063,0x73727273);
            VL_CONST_W_2X(80,__Vtemp_378,0x00000063,0x73727263);
            VL_CONST_W_2X(80,__Vtemp_379,0x00006373,0x72727769);
            VL_CONST_W_2X(80,__Vtemp_380,0x00006373,0x72727369);
            VL_CONST_W_2X(80,__Vtemp_381,0x00006373,0x72726369);
            VL_CONST_W_1X(80,__Vtemp_382,0x006d756c);
            __Vtemp_383 = (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_384, __Vtemp_383, __Vtemp_381, __Vtemp_382);
            __Vtemp_385 = (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_386, __Vtemp_385, __Vtemp_380, __Vtemp_384);
            __Vtemp_387 = (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_388, __Vtemp_387, __Vtemp_379, __Vtemp_386);
            __Vtemp_389 = (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_390, __Vtemp_389, __Vtemp_378, __Vtemp_388);
            __Vtemp_391 = (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_392, __Vtemp_391, __Vtemp_377, __Vtemp_390);
            __Vtemp_393 = (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_394, __Vtemp_393, __Vtemp_376, __Vtemp_392);
            __Vtemp_395 = (0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_396, __Vtemp_395, __Vtemp_375, __Vtemp_394);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_396);
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                    | (0x100fU == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_397,0x6d756c68);
            VL_CONST_W_2X(80,__Vtemp_398,0x00006d75,0x6c687375);
            VL_CONST_W_2X(80,__Vtemp_399,0x0000006d,0x756c6875);
            VL_CONST_W_1X(80,__Vtemp_400,0x00646976);
            VL_CONST_W_1X(80,__Vtemp_401,0x64697675);
            VL_CONST_W_1X(80,__Vtemp_402,0x0072656d);
            VL_CONST_W_1X(80,__Vtemp_403,0x72656d75);
            VL_CONST_W_2X(80,__Vtemp_404,0x0066656e,0x63652e69);
            __Vtemp_405 = (0x2007033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_406, __Vtemp_405, __Vtemp_403, __Vtemp_404);
            __Vtemp_407 = (0x2006033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_408, __Vtemp_407, __Vtemp_402, __Vtemp_406);
            __Vtemp_409 = (0x2005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_410, __Vtemp_409, __Vtemp_401, __Vtemp_408);
            __Vtemp_411 = (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_412, __Vtemp_411, __Vtemp_400, __Vtemp_410);
            __Vtemp_413 = (0x2003033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_414, __Vtemp_413, __Vtemp_399, __Vtemp_412);
            __Vtemp_415 = (0x2002033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_416, __Vtemp_415, __Vtemp_398, __Vtemp_414);
            __Vtemp_417 = (0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_418, __Vtemp_417, __Vtemp_397, __Vtemp_416);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_418);
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->__PVT__opcode_i))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                       | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x40005013U == (0xfc00707fU 
                                         & vlSelf->__PVT__opcode_i)))) 
                  | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                 | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
               | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | ((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) 
             | (((0x23U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                 | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))))) {
            if (((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                           | (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else if ((((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                         | (0x5013U == (0xfc00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_EXTEND_II(32,5, 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U)));
            } else if ((0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x00007063);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = (vlSelf->__PVT__pc_i 
                                               + VL_CONCAT_III(32,12,20, 
                                                               (0xfffU 
                                                                & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0xcU)), 
                                                               VL_CONCAT_III(20,8,12, 
                                                                             (0xffU 
                                                                              & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 8U)), 
                                                                             VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x15U, 4U)), 0U))))));
                if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c);
                }
            } else if ((0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
                if (((1U == (IData)(vlSelf->__PVT__ra_idx_w)) 
                     & (0U == VL_CONCAT_III(32,20,12, 
                                            (0xfffffU 
                                             & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                            (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)))))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x00726574);
                } else if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_2X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c,0x20285229);
                }
            } else if (((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                            | (0x1003U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            VL_CONCAT_III(12,7,5, 
                                                                          (0x7fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 7U)), 
                                                                          (0x1fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U))));
            }
        }
    }
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__0\n"); );
    // Body
    vlSelf->__PVT__ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xfU, 5U));
    vlSelf->__PVT__rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U));
    vlSelf->__PVT__rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__1(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    CData/*31:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    CData/*31:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    CData/*31:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    CData/*31:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    CData/*31:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    CData/*31:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    CData/*31:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_86;
    CData/*31:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    CData/*31:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    CData/*31:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    CData/*31:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    CData/*31:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    CData/*31:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_106;
    CData/*31:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    CData/*31:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_118;
    CData/*31:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    CData/*31:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_122;
    CData/*31:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    CData/*31:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_126;
    CData/*31:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    CData/*31:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_130;
    CData/*31:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_134;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_140;
    CData/*31:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_142;
    CData/*31:0*/ __Vtemp_143;
    VlWide<3>/*95:0*/ __Vtemp_144;
    CData/*31:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_146;
    CData/*31:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_148;
    CData/*31:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_150;
    CData/*31:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_152;
    CData/*31:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_154;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_162;
    CData/*31:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_164;
    CData/*31:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_166;
    CData/*31:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_168;
    CData/*31:0*/ __Vtemp_169;
    VlWide<3>/*95:0*/ __Vtemp_170;
    CData/*31:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_172;
    CData/*31:0*/ __Vtemp_173;
    VlWide<3>/*95:0*/ __Vtemp_174;
    CData/*31:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    CData/*31:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_186;
    CData/*31:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_188;
    CData/*31:0*/ __Vtemp_189;
    VlWide<3>/*95:0*/ __Vtemp_190;
    CData/*31:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_192;
    CData/*31:0*/ __Vtemp_193;
    VlWide<3>/*95:0*/ __Vtemp_194;
    CData/*31:0*/ __Vtemp_195;
    VlWide<3>/*95:0*/ __Vtemp_196;
    CData/*31:0*/ __Vtemp_197;
    VlWide<3>/*95:0*/ __Vtemp_198;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_206;
    CData/*31:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_208;
    CData/*31:0*/ __Vtemp_209;
    VlWide<3>/*95:0*/ __Vtemp_210;
    CData/*31:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_212;
    CData/*31:0*/ __Vtemp_213;
    VlWide<3>/*95:0*/ __Vtemp_214;
    CData/*31:0*/ __Vtemp_215;
    VlWide<3>/*95:0*/ __Vtemp_216;
    CData/*31:0*/ __Vtemp_217;
    VlWide<3>/*95:0*/ __Vtemp_218;
    CData/*31:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_220;
    VlWide<3>/*95:0*/ __Vtemp_221;
    VlWide<3>/*95:0*/ __Vtemp_222;
    VlWide<3>/*95:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_225;
    VlWide<3>/*95:0*/ __Vtemp_226;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<3>/*95:0*/ __Vtemp_228;
    CData/*31:0*/ __Vtemp_229;
    VlWide<3>/*95:0*/ __Vtemp_230;
    CData/*31:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_232;
    CData/*31:0*/ __Vtemp_233;
    VlWide<3>/*95:0*/ __Vtemp_234;
    CData/*31:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    CData/*31:0*/ __Vtemp_237;
    VlWide<3>/*95:0*/ __Vtemp_238;
    CData/*31:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_240;
    CData/*31:0*/ __Vtemp_241;
    VlWide<3>/*95:0*/ __Vtemp_242;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<3>/*95:0*/ __Vtemp_244;
    VlWide<3>/*95:0*/ __Vtemp_245;
    VlWide<3>/*95:0*/ __Vtemp_246;
    VlWide<3>/*95:0*/ __Vtemp_247;
    VlWide<3>/*95:0*/ __Vtemp_248;
    VlWide<3>/*95:0*/ __Vtemp_249;
    VlWide<3>/*95:0*/ __Vtemp_250;
    CData/*31:0*/ __Vtemp_251;
    VlWide<3>/*95:0*/ __Vtemp_252;
    CData/*31:0*/ __Vtemp_253;
    VlWide<3>/*95:0*/ __Vtemp_254;
    CData/*31:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_256;
    CData/*31:0*/ __Vtemp_257;
    VlWide<3>/*95:0*/ __Vtemp_258;
    CData/*31:0*/ __Vtemp_259;
    VlWide<3>/*95:0*/ __Vtemp_260;
    CData/*31:0*/ __Vtemp_261;
    VlWide<3>/*95:0*/ __Vtemp_262;
    CData/*31:0*/ __Vtemp_263;
    VlWide<3>/*95:0*/ __Vtemp_264;
    VlWide<3>/*95:0*/ __Vtemp_265;
    VlWide<3>/*95:0*/ __Vtemp_266;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<3>/*95:0*/ __Vtemp_268;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_270;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_272;
    CData/*31:0*/ __Vtemp_273;
    VlWide<3>/*95:0*/ __Vtemp_274;
    CData/*31:0*/ __Vtemp_275;
    VlWide<3>/*95:0*/ __Vtemp_276;
    CData/*31:0*/ __Vtemp_277;
    VlWide<3>/*95:0*/ __Vtemp_278;
    CData/*31:0*/ __Vtemp_279;
    VlWide<3>/*95:0*/ __Vtemp_280;
    CData/*31:0*/ __Vtemp_281;
    VlWide<3>/*95:0*/ __Vtemp_282;
    CData/*31:0*/ __Vtemp_283;
    VlWide<3>/*95:0*/ __Vtemp_284;
    CData/*31:0*/ __Vtemp_285;
    VlWide<3>/*95:0*/ __Vtemp_286;
    VlWide<3>/*95:0*/ __Vtemp_287;
    VlWide<3>/*95:0*/ __Vtemp_288;
    VlWide<3>/*95:0*/ __Vtemp_289;
    VlWide<3>/*95:0*/ __Vtemp_290;
    VlWide<3>/*95:0*/ __Vtemp_291;
    VlWide<3>/*95:0*/ __Vtemp_292;
    VlWide<3>/*95:0*/ __Vtemp_293;
    VlWide<3>/*95:0*/ __Vtemp_294;
    CData/*31:0*/ __Vtemp_295;
    VlWide<3>/*95:0*/ __Vtemp_296;
    CData/*31:0*/ __Vtemp_297;
    VlWide<3>/*95:0*/ __Vtemp_298;
    CData/*31:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_300;
    CData/*31:0*/ __Vtemp_301;
    VlWide<3>/*95:0*/ __Vtemp_302;
    CData/*31:0*/ __Vtemp_303;
    VlWide<3>/*95:0*/ __Vtemp_304;
    CData/*31:0*/ __Vtemp_305;
    VlWide<3>/*95:0*/ __Vtemp_306;
    CData/*31:0*/ __Vtemp_307;
    VlWide<3>/*95:0*/ __Vtemp_308;
    VlWide<3>/*95:0*/ __Vtemp_309;
    VlWide<3>/*95:0*/ __Vtemp_310;
    VlWide<3>/*95:0*/ __Vtemp_311;
    VlWide<3>/*95:0*/ __Vtemp_312;
    VlWide<3>/*95:0*/ __Vtemp_313;
    VlWide<3>/*95:0*/ __Vtemp_314;
    VlWide<3>/*95:0*/ __Vtemp_315;
    VlWide<3>/*95:0*/ __Vtemp_316;
    CData/*31:0*/ __Vtemp_317;
    VlWide<3>/*95:0*/ __Vtemp_318;
    CData/*31:0*/ __Vtemp_319;
    VlWide<3>/*95:0*/ __Vtemp_320;
    CData/*31:0*/ __Vtemp_321;
    VlWide<3>/*95:0*/ __Vtemp_322;
    CData/*31:0*/ __Vtemp_323;
    VlWide<3>/*95:0*/ __Vtemp_324;
    CData/*31:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_326;
    CData/*31:0*/ __Vtemp_327;
    VlWide<3>/*95:0*/ __Vtemp_328;
    CData/*31:0*/ __Vtemp_329;
    VlWide<3>/*95:0*/ __Vtemp_330;
    VlWide<3>/*95:0*/ __Vtemp_331;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_333;
    VlWide<3>/*95:0*/ __Vtemp_334;
    VlWide<3>/*95:0*/ __Vtemp_335;
    VlWide<3>/*95:0*/ __Vtemp_336;
    VlWide<3>/*95:0*/ __Vtemp_337;
    VlWide<3>/*95:0*/ __Vtemp_338;
    CData/*31:0*/ __Vtemp_339;
    VlWide<3>/*95:0*/ __Vtemp_340;
    CData/*31:0*/ __Vtemp_341;
    VlWide<3>/*95:0*/ __Vtemp_342;
    CData/*31:0*/ __Vtemp_343;
    VlWide<3>/*95:0*/ __Vtemp_344;
    CData/*31:0*/ __Vtemp_345;
    VlWide<3>/*95:0*/ __Vtemp_346;
    CData/*31:0*/ __Vtemp_347;
    VlWide<3>/*95:0*/ __Vtemp_348;
    CData/*31:0*/ __Vtemp_349;
    VlWide<3>/*95:0*/ __Vtemp_350;
    CData/*31:0*/ __Vtemp_351;
    VlWide<3>/*95:0*/ __Vtemp_352;
    VlWide<3>/*95:0*/ __Vtemp_353;
    VlWide<3>/*95:0*/ __Vtemp_354;
    VlWide<3>/*95:0*/ __Vtemp_355;
    VlWide<3>/*95:0*/ __Vtemp_356;
    VlWide<3>/*95:0*/ __Vtemp_357;
    VlWide<3>/*95:0*/ __Vtemp_358;
    VlWide<3>/*95:0*/ __Vtemp_359;
    VlWide<3>/*95:0*/ __Vtemp_360;
    CData/*31:0*/ __Vtemp_361;
    VlWide<3>/*95:0*/ __Vtemp_362;
    CData/*31:0*/ __Vtemp_363;
    VlWide<3>/*95:0*/ __Vtemp_364;
    CData/*31:0*/ __Vtemp_365;
    VlWide<3>/*95:0*/ __Vtemp_366;
    CData/*31:0*/ __Vtemp_367;
    VlWide<3>/*95:0*/ __Vtemp_368;
    CData/*31:0*/ __Vtemp_369;
    VlWide<3>/*95:0*/ __Vtemp_370;
    CData/*31:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_372;
    CData/*31:0*/ __Vtemp_373;
    VlWide<3>/*95:0*/ __Vtemp_374;
    VlWide<3>/*95:0*/ __Vtemp_375;
    VlWide<3>/*95:0*/ __Vtemp_376;
    VlWide<3>/*95:0*/ __Vtemp_377;
    VlWide<3>/*95:0*/ __Vtemp_378;
    VlWide<3>/*95:0*/ __Vtemp_379;
    VlWide<3>/*95:0*/ __Vtemp_380;
    VlWide<3>/*95:0*/ __Vtemp_381;
    VlWide<3>/*95:0*/ __Vtemp_382;
    CData/*31:0*/ __Vtemp_383;
    VlWide<3>/*95:0*/ __Vtemp_384;
    CData/*31:0*/ __Vtemp_385;
    VlWide<3>/*95:0*/ __Vtemp_386;
    CData/*31:0*/ __Vtemp_387;
    VlWide<3>/*95:0*/ __Vtemp_388;
    CData/*31:0*/ __Vtemp_389;
    VlWide<3>/*95:0*/ __Vtemp_390;
    CData/*31:0*/ __Vtemp_391;
    VlWide<3>/*95:0*/ __Vtemp_392;
    CData/*31:0*/ __Vtemp_393;
    VlWide<3>/*95:0*/ __Vtemp_394;
    CData/*31:0*/ __Vtemp_395;
    VlWide<3>/*95:0*/ __Vtemp_396;
    VlWide<3>/*95:0*/ __Vtemp_397;
    VlWide<3>/*95:0*/ __Vtemp_398;
    VlWide<3>/*95:0*/ __Vtemp_399;
    VlWide<3>/*95:0*/ __Vtemp_400;
    VlWide<3>/*95:0*/ __Vtemp_401;
    VlWide<3>/*95:0*/ __Vtemp_402;
    VlWide<3>/*95:0*/ __Vtemp_403;
    VlWide<3>/*95:0*/ __Vtemp_404;
    CData/*31:0*/ __Vtemp_405;
    VlWide<3>/*95:0*/ __Vtemp_406;
    CData/*31:0*/ __Vtemp_407;
    VlWide<3>/*95:0*/ __Vtemp_408;
    CData/*31:0*/ __Vtemp_409;
    VlWide<3>/*95:0*/ __Vtemp_410;
    CData/*31:0*/ __Vtemp_411;
    VlWide<3>/*95:0*/ __Vtemp_412;
    CData/*31:0*/ __Vtemp_413;
    VlWide<3>/*95:0*/ __Vtemp_414;
    CData/*31:0*/ __Vtemp_415;
    VlWide<3>/*95:0*/ __Vtemp_416;
    CData/*31:0*/ __Vtemp_417;
    VlWide<3>/*95:0*/ __Vtemp_418;
    // Body
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
    vlSelf->__PVT__dbg_inst_pc = 0U;
    if (vlSelf->__PVT__valid_i) {
        vlSelf->__PVT__dbg_inst_pc = vlSelf->__PVT__pc_i;
        vlSelf->__Vfunc_get_regname_str__9__regnum 
            = vlSelf->__PVT__ra_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_1,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_2,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_3,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_4,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_5,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_6,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_7,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_8,0x00007432);
            __Vtemp_9 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_10, __Vtemp_9, __Vtemp_7, __Vtemp_8);
            __Vtemp_11 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_12, __Vtemp_11, __Vtemp_6, __Vtemp_10);
            __Vtemp_13 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_14, __Vtemp_13, __Vtemp_5, __Vtemp_12);
            __Vtemp_15 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_16, __Vtemp_15, __Vtemp_4, __Vtemp_14);
            __Vtemp_17 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_18, __Vtemp_17, __Vtemp_3, __Vtemp_16);
            __Vtemp_19 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_20, __Vtemp_19, __Vtemp_2, __Vtemp_18);
            __Vtemp_21 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_22, __Vtemp_21, __Vtemp_1, __Vtemp_20);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__9__Vfuncout, __Vtemp_22);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_23,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_24,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_25,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_26,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_27,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_28,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_29,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_30,0x00006135);
            __Vtemp_31 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_32, __Vtemp_31, __Vtemp_29, __Vtemp_30);
            __Vtemp_33 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_34, __Vtemp_33, __Vtemp_28, __Vtemp_32);
            __Vtemp_35 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_36, __Vtemp_35, __Vtemp_27, __Vtemp_34);
            __Vtemp_37 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_38, __Vtemp_37, __Vtemp_26, __Vtemp_36);
            __Vtemp_39 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_40, __Vtemp_39, __Vtemp_25, __Vtemp_38);
            __Vtemp_41 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_42, __Vtemp_41, __Vtemp_24, __Vtemp_40);
            __Vtemp_43 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_44, __Vtemp_43, __Vtemp_23, __Vtemp_42);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__9__Vfuncout, __Vtemp_44);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_45,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_46,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_47,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_48,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_49,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_50,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_51,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_52,0x00007337);
            __Vtemp_53 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_54, __Vtemp_53, __Vtemp_51, __Vtemp_52);
            __Vtemp_55 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_56, __Vtemp_55, __Vtemp_50, __Vtemp_54);
            __Vtemp_57 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_58, __Vtemp_57, __Vtemp_49, __Vtemp_56);
            __Vtemp_59 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_60, __Vtemp_59, __Vtemp_48, __Vtemp_58);
            __Vtemp_61 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_62, __Vtemp_61, __Vtemp_47, __Vtemp_60);
            __Vtemp_63 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_64, __Vtemp_63, __Vtemp_46, __Vtemp_62);
            __Vtemp_65 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_66, __Vtemp_65, __Vtemp_45, __Vtemp_64);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__9__Vfuncout, __Vtemp_66);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_67,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_68,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_69,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_70,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_71,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_72,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_73,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_74,0x00007436);
            __Vtemp_75 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_76, __Vtemp_75, __Vtemp_73, __Vtemp_74);
            __Vtemp_77 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_78, __Vtemp_77, __Vtemp_72, __Vtemp_76);
            __Vtemp_79 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_80, __Vtemp_79, __Vtemp_71, __Vtemp_78);
            __Vtemp_81 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_82, __Vtemp_81, __Vtemp_70, __Vtemp_80);
            __Vtemp_83 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_84, __Vtemp_83, __Vtemp_69, __Vtemp_82);
            __Vtemp_85 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_86, __Vtemp_85, __Vtemp_68, __Vtemp_84);
            __Vtemp_87 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__9__regnum));
            VL_COND_WIWW(80, __Vtemp_88, __Vtemp_87, __Vtemp_67, __Vtemp_86);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__9__Vfuncout, __Vtemp_88);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_ra, vlSelf->__Vfunc_get_regname_str__9__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__10__regnum 
            = vlSelf->__PVT__rb_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_89,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_90,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_91,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_92,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_93,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_94,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_95,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_96,0x00007432);
            __Vtemp_97 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_98, __Vtemp_97, __Vtemp_95, __Vtemp_96);
            __Vtemp_99 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_100, __Vtemp_99, __Vtemp_94, __Vtemp_98);
            __Vtemp_101 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_102, __Vtemp_101, __Vtemp_93, __Vtemp_100);
            __Vtemp_103 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_104, __Vtemp_103, __Vtemp_92, __Vtemp_102);
            __Vtemp_105 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_106, __Vtemp_105, __Vtemp_91, __Vtemp_104);
            __Vtemp_107 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_108, __Vtemp_107, __Vtemp_90, __Vtemp_106);
            __Vtemp_109 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_110, __Vtemp_109, __Vtemp_89, __Vtemp_108);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__10__Vfuncout, __Vtemp_110);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_111,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_112,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_113,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_114,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_115,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_116,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_117,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_118,0x00006135);
            __Vtemp_119 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_120, __Vtemp_119, __Vtemp_117, __Vtemp_118);
            __Vtemp_121 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_122, __Vtemp_121, __Vtemp_116, __Vtemp_120);
            __Vtemp_123 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_124, __Vtemp_123, __Vtemp_115, __Vtemp_122);
            __Vtemp_125 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_126, __Vtemp_125, __Vtemp_114, __Vtemp_124);
            __Vtemp_127 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_128, __Vtemp_127, __Vtemp_113, __Vtemp_126);
            __Vtemp_129 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_130, __Vtemp_129, __Vtemp_112, __Vtemp_128);
            __Vtemp_131 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_132, __Vtemp_131, __Vtemp_111, __Vtemp_130);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__10__Vfuncout, __Vtemp_132);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_133,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_134,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_135,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_136,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_137,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_138,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_139,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_140,0x00007337);
            __Vtemp_141 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_142, __Vtemp_141, __Vtemp_139, __Vtemp_140);
            __Vtemp_143 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_144, __Vtemp_143, __Vtemp_138, __Vtemp_142);
            __Vtemp_145 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_146, __Vtemp_145, __Vtemp_137, __Vtemp_144);
            __Vtemp_147 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_148, __Vtemp_147, __Vtemp_136, __Vtemp_146);
            __Vtemp_149 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_150, __Vtemp_149, __Vtemp_135, __Vtemp_148);
            __Vtemp_151 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_152, __Vtemp_151, __Vtemp_134, __Vtemp_150);
            __Vtemp_153 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_154, __Vtemp_153, __Vtemp_133, __Vtemp_152);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__10__Vfuncout, __Vtemp_154);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_155,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_156,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_157,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_158,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_159,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_160,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_161,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_162,0x00007436);
            __Vtemp_163 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_164, __Vtemp_163, __Vtemp_161, __Vtemp_162);
            __Vtemp_165 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_166, __Vtemp_165, __Vtemp_160, __Vtemp_164);
            __Vtemp_167 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_168, __Vtemp_167, __Vtemp_159, __Vtemp_166);
            __Vtemp_169 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_170, __Vtemp_169, __Vtemp_158, __Vtemp_168);
            __Vtemp_171 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_172, __Vtemp_171, __Vtemp_157, __Vtemp_170);
            __Vtemp_173 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_174, __Vtemp_173, __Vtemp_156, __Vtemp_172);
            __Vtemp_175 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__10__regnum));
            VL_COND_WIWW(80, __Vtemp_176, __Vtemp_175, __Vtemp_155, __Vtemp_174);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__10__Vfuncout, __Vtemp_176);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rb, vlSelf->__Vfunc_get_regname_str__10__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__11__regnum 
            = vlSelf->__PVT__rd_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_177,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_178,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_179,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_180,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_181,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_182,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_183,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_184,0x00007432);
            __Vtemp_185 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_186, __Vtemp_185, __Vtemp_183, __Vtemp_184);
            __Vtemp_187 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_188, __Vtemp_187, __Vtemp_182, __Vtemp_186);
            __Vtemp_189 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_190, __Vtemp_189, __Vtemp_181, __Vtemp_188);
            __Vtemp_191 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_192, __Vtemp_191, __Vtemp_180, __Vtemp_190);
            __Vtemp_193 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_194, __Vtemp_193, __Vtemp_179, __Vtemp_192);
            __Vtemp_195 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_196, __Vtemp_195, __Vtemp_178, __Vtemp_194);
            __Vtemp_197 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_198, __Vtemp_197, __Vtemp_177, __Vtemp_196);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__11__Vfuncout, __Vtemp_198);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_199,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_200,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_201,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_202,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_203,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_204,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_205,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_206,0x00006135);
            __Vtemp_207 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_208, __Vtemp_207, __Vtemp_205, __Vtemp_206);
            __Vtemp_209 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_210, __Vtemp_209, __Vtemp_204, __Vtemp_208);
            __Vtemp_211 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_212, __Vtemp_211, __Vtemp_203, __Vtemp_210);
            __Vtemp_213 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_214, __Vtemp_213, __Vtemp_202, __Vtemp_212);
            __Vtemp_215 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_216, __Vtemp_215, __Vtemp_201, __Vtemp_214);
            __Vtemp_217 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_218, __Vtemp_217, __Vtemp_200, __Vtemp_216);
            __Vtemp_219 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_220, __Vtemp_219, __Vtemp_199, __Vtemp_218);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__11__Vfuncout, __Vtemp_220);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_221,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_222,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_223,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_224,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_225,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_226,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_227,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_228,0x00007337);
            __Vtemp_229 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_230, __Vtemp_229, __Vtemp_227, __Vtemp_228);
            __Vtemp_231 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_232, __Vtemp_231, __Vtemp_226, __Vtemp_230);
            __Vtemp_233 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_234, __Vtemp_233, __Vtemp_225, __Vtemp_232);
            __Vtemp_235 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_236, __Vtemp_235, __Vtemp_224, __Vtemp_234);
            __Vtemp_237 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_238, __Vtemp_237, __Vtemp_223, __Vtemp_236);
            __Vtemp_239 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_240, __Vtemp_239, __Vtemp_222, __Vtemp_238);
            __Vtemp_241 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_242, __Vtemp_241, __Vtemp_221, __Vtemp_240);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__11__Vfuncout, __Vtemp_242);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_243,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_244,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_245,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_246,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_247,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_248,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_249,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_250,0x00007436);
            __Vtemp_251 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_252, __Vtemp_251, __Vtemp_249, __Vtemp_250);
            __Vtemp_253 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_254, __Vtemp_253, __Vtemp_248, __Vtemp_252);
            __Vtemp_255 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_256, __Vtemp_255, __Vtemp_247, __Vtemp_254);
            __Vtemp_257 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_258, __Vtemp_257, __Vtemp_246, __Vtemp_256);
            __Vtemp_259 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_260, __Vtemp_259, __Vtemp_245, __Vtemp_258);
            __Vtemp_261 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_262, __Vtemp_261, __Vtemp_244, __Vtemp_260);
            __Vtemp_263 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__11__regnum));
            VL_COND_WIWW(80, __Vtemp_264, __Vtemp_263, __Vtemp_243, __Vtemp_262);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__11__Vfuncout, __Vtemp_264);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rd, vlSelf->__Vfunc_get_regname_str__11__Vfuncout);
        if (((((((((0x7013U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                   | (0x13U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
               | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | (0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
             | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_265,0x616e6469);
            VL_CONST_W_1X(80,__Vtemp_266,0x61646469);
            VL_CONST_W_1X(80,__Vtemp_267,0x736c7469);
            VL_CONST_W_2X(80,__Vtemp_268,0x00000073,0x6c746975);
            VL_CONST_W_1X(80,__Vtemp_269,0x006f7269);
            VL_CONST_W_1X(80,__Vtemp_270,0x786f7269);
            VL_CONST_W_1X(80,__Vtemp_271,0x736c6c69);
            VL_CONST_W_1X(80,__Vtemp_272,0x73726c69);
            __Vtemp_273 = (0x1013U == (0xfc00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_274, __Vtemp_273, __Vtemp_271, __Vtemp_272);
            __Vtemp_275 = (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_276, __Vtemp_275, __Vtemp_270, __Vtemp_274);
            __Vtemp_277 = (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_278, __Vtemp_277, __Vtemp_269, __Vtemp_276);
            __Vtemp_279 = (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_280, __Vtemp_279, __Vtemp_268, __Vtemp_278);
            __Vtemp_281 = (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_282, __Vtemp_281, __Vtemp_267, __Vtemp_280);
            __Vtemp_283 = (0x13U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_284, __Vtemp_283, __Vtemp_266, __Vtemp_282);
            __Vtemp_285 = (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_286, __Vtemp_285, __Vtemp_265, __Vtemp_284);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_286);
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)) 
                          | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                         | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                        | (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x2033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x3033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_287,0x73726169);
            VL_CONST_W_1X(80,__Vtemp_288,0x006c7569);
            VL_CONST_W_2X(80,__Vtemp_289,0x00000061,0x75697063);
            VL_CONST_W_1X(80,__Vtemp_290,0x00616464);
            VL_CONST_W_1X(80,__Vtemp_291,0x00737562);
            VL_CONST_W_1X(80,__Vtemp_292,0x00736c74);
            VL_CONST_W_1X(80,__Vtemp_293,0x736c7475);
            VL_CONST_W_1X(80,__Vtemp_294,0x00786f72);
            __Vtemp_295 = (0x3033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_296, __Vtemp_295, __Vtemp_293, __Vtemp_294);
            __Vtemp_297 = (0x2033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_298, __Vtemp_297, __Vtemp_292, __Vtemp_296);
            __Vtemp_299 = (0x40000033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_300, __Vtemp_299, __Vtemp_291, __Vtemp_298);
            __Vtemp_301 = (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_302, __Vtemp_301, __Vtemp_290, __Vtemp_300);
            __Vtemp_303 = (0x17U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_304, __Vtemp_303, __Vtemp_289, __Vtemp_302);
            __Vtemp_305 = (0x37U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_306, __Vtemp_305, __Vtemp_288, __Vtemp_304);
            __Vtemp_307 = (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_308, __Vtemp_307, __Vtemp_287, __Vtemp_306);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_308);
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
                     | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x63U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_309,0x00006f72);
            VL_CONST_W_1X(80,__Vtemp_310,0x00616e64);
            VL_CONST_W_1X(80,__Vtemp_311,0x00736c6c);
            VL_CONST_W_1X(80,__Vtemp_312,0x0073726c);
            VL_CONST_W_1X(80,__Vtemp_313,0x00737261);
            VL_CONST_W_1X(80,__Vtemp_314,0x006a616c);
            VL_CONST_W_1X(80,__Vtemp_315,0x6a616c72);
            VL_CONST_W_1X(80,__Vtemp_316,0x00626571);
            __Vtemp_317 = (0x67U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_318, __Vtemp_317, __Vtemp_315, __Vtemp_316);
            __Vtemp_319 = (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_320, __Vtemp_319, __Vtemp_314, __Vtemp_318);
            __Vtemp_321 = (0x40005033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_322, __Vtemp_321, __Vtemp_313, __Vtemp_320);
            __Vtemp_323 = (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_324, __Vtemp_323, __Vtemp_312, __Vtemp_322);
            __Vtemp_325 = (0x1033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_326, __Vtemp_325, __Vtemp_311, __Vtemp_324);
            __Vtemp_327 = (0x7033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_328, __Vtemp_327, __Vtemp_310, __Vtemp_326);
            __Vtemp_329 = (0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_330, __Vtemp_329, __Vtemp_309, __Vtemp_328);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_330);
        } else if (((((((((0x1063U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (3U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_331,0x00626e65);
            VL_CONST_W_1X(80,__Vtemp_332,0x00626c74);
            VL_CONST_W_1X(80,__Vtemp_333,0x00626765);
            VL_CONST_W_1X(80,__Vtemp_334,0x626c7475);
            VL_CONST_W_1X(80,__Vtemp_335,0x62676575);
            VL_CONST_W_1X(80,__Vtemp_336,0x00006c62);
            VL_CONST_W_1X(80,__Vtemp_337,0x00006c68);
            VL_CONST_W_1X(80,__Vtemp_338,0x00006c77);
            __Vtemp_339 = (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_340, __Vtemp_339, __Vtemp_337, __Vtemp_338);
            __Vtemp_341 = (3U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_342, __Vtemp_341, __Vtemp_336, __Vtemp_340);
            __Vtemp_343 = (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_344, __Vtemp_343, __Vtemp_335, __Vtemp_342);
            __Vtemp_345 = (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_346, __Vtemp_345, __Vtemp_334, __Vtemp_344);
            __Vtemp_347 = (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_348, __Vtemp_347, __Vtemp_333, __Vtemp_346);
            __Vtemp_349 = (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_350, __Vtemp_349, __Vtemp_332, __Vtemp_348);
            __Vtemp_351 = (0x1063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_352, __Vtemp_351, __Vtemp_331, __Vtemp_350);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_352);
        } else if (((((((((0x4003U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x23U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x73U == vlSelf->__PVT__opcode_i)) 
                    | (0x100073U == vlSelf->__PVT__opcode_i))) {
            VL_CONST_W_1X(80,__Vtemp_353,0x006c6275);
            VL_CONST_W_1X(80,__Vtemp_354,0x006c6875);
            VL_CONST_W_1X(80,__Vtemp_355,0x006c7775);
            VL_CONST_W_1X(80,__Vtemp_356,0x00007362);
            VL_CONST_W_1X(80,__Vtemp_357,0x00007368);
            VL_CONST_W_1X(80,__Vtemp_358,0x00007377);
            VL_CONST_W_2X(80,__Vtemp_359,0x00000065,0x63616c6c);
            VL_CONST_W_2X(80,__Vtemp_360,0x00006562,0x7265616b);
            __Vtemp_361 = (0x73U == vlSelf->__PVT__opcode_i);
            VL_COND_WIWW(80, __Vtemp_362, __Vtemp_361, __Vtemp_359, __Vtemp_360);
            __Vtemp_363 = (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_364, __Vtemp_363, __Vtemp_358, __Vtemp_362);
            __Vtemp_365 = (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_366, __Vtemp_365, __Vtemp_357, __Vtemp_364);
            __Vtemp_367 = (0x23U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_368, __Vtemp_367, __Vtemp_356, __Vtemp_366);
            __Vtemp_369 = (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_370, __Vtemp_369, __Vtemp_355, __Vtemp_368);
            __Vtemp_371 = (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_372, __Vtemp_371, __Vtemp_354, __Vtemp_370);
            __Vtemp_373 = (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_374, __Vtemp_373, __Vtemp_353, __Vtemp_372);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_374);
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i)) 
                          | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_375,0x65726574);
            VL_CONST_W_2X(80,__Vtemp_376,0x00000063,0x73727277);
            VL_CONST_W_2X(80,__Vtemp_377,0x00000063,0x73727273);
            VL_CONST_W_2X(80,__Vtemp_378,0x00000063,0x73727263);
            VL_CONST_W_2X(80,__Vtemp_379,0x00006373,0x72727769);
            VL_CONST_W_2X(80,__Vtemp_380,0x00006373,0x72727369);
            VL_CONST_W_2X(80,__Vtemp_381,0x00006373,0x72726369);
            VL_CONST_W_1X(80,__Vtemp_382,0x006d756c);
            __Vtemp_383 = (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_384, __Vtemp_383, __Vtemp_381, __Vtemp_382);
            __Vtemp_385 = (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_386, __Vtemp_385, __Vtemp_380, __Vtemp_384);
            __Vtemp_387 = (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_388, __Vtemp_387, __Vtemp_379, __Vtemp_386);
            __Vtemp_389 = (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_390, __Vtemp_389, __Vtemp_378, __Vtemp_388);
            __Vtemp_391 = (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_392, __Vtemp_391, __Vtemp_377, __Vtemp_390);
            __Vtemp_393 = (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_394, __Vtemp_393, __Vtemp_376, __Vtemp_392);
            __Vtemp_395 = (0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_396, __Vtemp_395, __Vtemp_375, __Vtemp_394);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_396);
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                    | (0x100fU == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_397,0x6d756c68);
            VL_CONST_W_2X(80,__Vtemp_398,0x00006d75,0x6c687375);
            VL_CONST_W_2X(80,__Vtemp_399,0x0000006d,0x756c6875);
            VL_CONST_W_1X(80,__Vtemp_400,0x00646976);
            VL_CONST_W_1X(80,__Vtemp_401,0x64697675);
            VL_CONST_W_1X(80,__Vtemp_402,0x0072656d);
            VL_CONST_W_1X(80,__Vtemp_403,0x72656d75);
            VL_CONST_W_2X(80,__Vtemp_404,0x0066656e,0x63652e69);
            __Vtemp_405 = (0x2007033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_406, __Vtemp_405, __Vtemp_403, __Vtemp_404);
            __Vtemp_407 = (0x2006033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_408, __Vtemp_407, __Vtemp_402, __Vtemp_406);
            __Vtemp_409 = (0x2005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_410, __Vtemp_409, __Vtemp_401, __Vtemp_408);
            __Vtemp_411 = (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_412, __Vtemp_411, __Vtemp_400, __Vtemp_410);
            __Vtemp_413 = (0x2003033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_414, __Vtemp_413, __Vtemp_399, __Vtemp_412);
            __Vtemp_415 = (0x2002033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_416, __Vtemp_415, __Vtemp_398, __Vtemp_414);
            __Vtemp_417 = (0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_418, __Vtemp_417, __Vtemp_397, __Vtemp_416);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_418);
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->__PVT__opcode_i))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                       | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x40005013U == (0xfc00707fU 
                                         & vlSelf->__PVT__opcode_i)))) 
                  | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                 | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
               | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | ((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) 
             | (((0x23U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                 | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))))) {
            if (((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                           | (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else if ((((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                         | (0x5013U == (0xfc00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_EXTEND_II(32,5, 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U)));
            } else if ((0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x00007063);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = (vlSelf->__PVT__pc_i 
                                               + VL_CONCAT_III(32,12,20, 
                                                               (0xfffU 
                                                                & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0xcU)), 
                                                               VL_CONCAT_III(20,8,12, 
                                                                             (0xffU 
                                                                              & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 8U)), 
                                                                             VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x15U, 4U)), 0U))))));
                if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c);
                }
            } else if ((0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
                if (((1U == (IData)(vlSelf->__PVT__ra_idx_w)) 
                     & (0U == VL_CONCAT_III(32,20,12, 
                                            (0xfffffU 
                                             & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                            (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)))))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x00726574);
                } else if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_2X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c,0x20285229);
                }
            } else if (((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                            | (0x1003U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            VL_CONCAT_III(12,7,5, 
                                                                          (0x7fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 7U)), 
                                                                          (0x1fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U))));
            }
        }
    }
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__0\n"); );
    // Body
    vlSelf->__PVT__ra_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xfU, 5U));
    vlSelf->__PVT__rb_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U));
    vlSelf->__PVT__rd_idx_w = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U));
}

VL_ATTR_COLD void Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__1(Vbiriscv_top_biriscv_trace_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbiriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_top_biriscv_trace_sim___stl_sequent__TOP__biriscv_top__u_core__u_issue__u_pipe0_dec0_verif__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    CData/*31:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    CData/*31:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    CData/*31:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    CData/*31:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    CData/*31:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    CData/*31:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    CData/*31:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_86;
    CData/*31:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    CData/*31:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    CData/*31:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    CData/*31:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    CData/*31:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    CData/*31:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_106;
    CData/*31:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    CData/*31:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_118;
    CData/*31:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    CData/*31:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_122;
    CData/*31:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    CData/*31:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_126;
    CData/*31:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    CData/*31:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_130;
    CData/*31:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_134;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_140;
    CData/*31:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_142;
    CData/*31:0*/ __Vtemp_143;
    VlWide<3>/*95:0*/ __Vtemp_144;
    CData/*31:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_146;
    CData/*31:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_148;
    CData/*31:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_150;
    CData/*31:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_152;
    CData/*31:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_154;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_162;
    CData/*31:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_164;
    CData/*31:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_166;
    CData/*31:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_168;
    CData/*31:0*/ __Vtemp_169;
    VlWide<3>/*95:0*/ __Vtemp_170;
    CData/*31:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_172;
    CData/*31:0*/ __Vtemp_173;
    VlWide<3>/*95:0*/ __Vtemp_174;
    CData/*31:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    CData/*31:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_186;
    CData/*31:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_188;
    CData/*31:0*/ __Vtemp_189;
    VlWide<3>/*95:0*/ __Vtemp_190;
    CData/*31:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_192;
    CData/*31:0*/ __Vtemp_193;
    VlWide<3>/*95:0*/ __Vtemp_194;
    CData/*31:0*/ __Vtemp_195;
    VlWide<3>/*95:0*/ __Vtemp_196;
    CData/*31:0*/ __Vtemp_197;
    VlWide<3>/*95:0*/ __Vtemp_198;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_206;
    CData/*31:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_208;
    CData/*31:0*/ __Vtemp_209;
    VlWide<3>/*95:0*/ __Vtemp_210;
    CData/*31:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_212;
    CData/*31:0*/ __Vtemp_213;
    VlWide<3>/*95:0*/ __Vtemp_214;
    CData/*31:0*/ __Vtemp_215;
    VlWide<3>/*95:0*/ __Vtemp_216;
    CData/*31:0*/ __Vtemp_217;
    VlWide<3>/*95:0*/ __Vtemp_218;
    CData/*31:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_220;
    VlWide<3>/*95:0*/ __Vtemp_221;
    VlWide<3>/*95:0*/ __Vtemp_222;
    VlWide<3>/*95:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_225;
    VlWide<3>/*95:0*/ __Vtemp_226;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<3>/*95:0*/ __Vtemp_228;
    CData/*31:0*/ __Vtemp_229;
    VlWide<3>/*95:0*/ __Vtemp_230;
    CData/*31:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_232;
    CData/*31:0*/ __Vtemp_233;
    VlWide<3>/*95:0*/ __Vtemp_234;
    CData/*31:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    CData/*31:0*/ __Vtemp_237;
    VlWide<3>/*95:0*/ __Vtemp_238;
    CData/*31:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_240;
    CData/*31:0*/ __Vtemp_241;
    VlWide<3>/*95:0*/ __Vtemp_242;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<3>/*95:0*/ __Vtemp_244;
    VlWide<3>/*95:0*/ __Vtemp_245;
    VlWide<3>/*95:0*/ __Vtemp_246;
    VlWide<3>/*95:0*/ __Vtemp_247;
    VlWide<3>/*95:0*/ __Vtemp_248;
    VlWide<3>/*95:0*/ __Vtemp_249;
    VlWide<3>/*95:0*/ __Vtemp_250;
    CData/*31:0*/ __Vtemp_251;
    VlWide<3>/*95:0*/ __Vtemp_252;
    CData/*31:0*/ __Vtemp_253;
    VlWide<3>/*95:0*/ __Vtemp_254;
    CData/*31:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_256;
    CData/*31:0*/ __Vtemp_257;
    VlWide<3>/*95:0*/ __Vtemp_258;
    CData/*31:0*/ __Vtemp_259;
    VlWide<3>/*95:0*/ __Vtemp_260;
    CData/*31:0*/ __Vtemp_261;
    VlWide<3>/*95:0*/ __Vtemp_262;
    CData/*31:0*/ __Vtemp_263;
    VlWide<3>/*95:0*/ __Vtemp_264;
    VlWide<3>/*95:0*/ __Vtemp_265;
    VlWide<3>/*95:0*/ __Vtemp_266;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<3>/*95:0*/ __Vtemp_268;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_270;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_272;
    CData/*31:0*/ __Vtemp_273;
    VlWide<3>/*95:0*/ __Vtemp_274;
    CData/*31:0*/ __Vtemp_275;
    VlWide<3>/*95:0*/ __Vtemp_276;
    CData/*31:0*/ __Vtemp_277;
    VlWide<3>/*95:0*/ __Vtemp_278;
    CData/*31:0*/ __Vtemp_279;
    VlWide<3>/*95:0*/ __Vtemp_280;
    CData/*31:0*/ __Vtemp_281;
    VlWide<3>/*95:0*/ __Vtemp_282;
    CData/*31:0*/ __Vtemp_283;
    VlWide<3>/*95:0*/ __Vtemp_284;
    CData/*31:0*/ __Vtemp_285;
    VlWide<3>/*95:0*/ __Vtemp_286;
    VlWide<3>/*95:0*/ __Vtemp_287;
    VlWide<3>/*95:0*/ __Vtemp_288;
    VlWide<3>/*95:0*/ __Vtemp_289;
    VlWide<3>/*95:0*/ __Vtemp_290;
    VlWide<3>/*95:0*/ __Vtemp_291;
    VlWide<3>/*95:0*/ __Vtemp_292;
    VlWide<3>/*95:0*/ __Vtemp_293;
    VlWide<3>/*95:0*/ __Vtemp_294;
    CData/*31:0*/ __Vtemp_295;
    VlWide<3>/*95:0*/ __Vtemp_296;
    CData/*31:0*/ __Vtemp_297;
    VlWide<3>/*95:0*/ __Vtemp_298;
    CData/*31:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_300;
    CData/*31:0*/ __Vtemp_301;
    VlWide<3>/*95:0*/ __Vtemp_302;
    CData/*31:0*/ __Vtemp_303;
    VlWide<3>/*95:0*/ __Vtemp_304;
    CData/*31:0*/ __Vtemp_305;
    VlWide<3>/*95:0*/ __Vtemp_306;
    CData/*31:0*/ __Vtemp_307;
    VlWide<3>/*95:0*/ __Vtemp_308;
    VlWide<3>/*95:0*/ __Vtemp_309;
    VlWide<3>/*95:0*/ __Vtemp_310;
    VlWide<3>/*95:0*/ __Vtemp_311;
    VlWide<3>/*95:0*/ __Vtemp_312;
    VlWide<3>/*95:0*/ __Vtemp_313;
    VlWide<3>/*95:0*/ __Vtemp_314;
    VlWide<3>/*95:0*/ __Vtemp_315;
    VlWide<3>/*95:0*/ __Vtemp_316;
    CData/*31:0*/ __Vtemp_317;
    VlWide<3>/*95:0*/ __Vtemp_318;
    CData/*31:0*/ __Vtemp_319;
    VlWide<3>/*95:0*/ __Vtemp_320;
    CData/*31:0*/ __Vtemp_321;
    VlWide<3>/*95:0*/ __Vtemp_322;
    CData/*31:0*/ __Vtemp_323;
    VlWide<3>/*95:0*/ __Vtemp_324;
    CData/*31:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_326;
    CData/*31:0*/ __Vtemp_327;
    VlWide<3>/*95:0*/ __Vtemp_328;
    CData/*31:0*/ __Vtemp_329;
    VlWide<3>/*95:0*/ __Vtemp_330;
    VlWide<3>/*95:0*/ __Vtemp_331;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_333;
    VlWide<3>/*95:0*/ __Vtemp_334;
    VlWide<3>/*95:0*/ __Vtemp_335;
    VlWide<3>/*95:0*/ __Vtemp_336;
    VlWide<3>/*95:0*/ __Vtemp_337;
    VlWide<3>/*95:0*/ __Vtemp_338;
    CData/*31:0*/ __Vtemp_339;
    VlWide<3>/*95:0*/ __Vtemp_340;
    CData/*31:0*/ __Vtemp_341;
    VlWide<3>/*95:0*/ __Vtemp_342;
    CData/*31:0*/ __Vtemp_343;
    VlWide<3>/*95:0*/ __Vtemp_344;
    CData/*31:0*/ __Vtemp_345;
    VlWide<3>/*95:0*/ __Vtemp_346;
    CData/*31:0*/ __Vtemp_347;
    VlWide<3>/*95:0*/ __Vtemp_348;
    CData/*31:0*/ __Vtemp_349;
    VlWide<3>/*95:0*/ __Vtemp_350;
    CData/*31:0*/ __Vtemp_351;
    VlWide<3>/*95:0*/ __Vtemp_352;
    VlWide<3>/*95:0*/ __Vtemp_353;
    VlWide<3>/*95:0*/ __Vtemp_354;
    VlWide<3>/*95:0*/ __Vtemp_355;
    VlWide<3>/*95:0*/ __Vtemp_356;
    VlWide<3>/*95:0*/ __Vtemp_357;
    VlWide<3>/*95:0*/ __Vtemp_358;
    VlWide<3>/*95:0*/ __Vtemp_359;
    VlWide<3>/*95:0*/ __Vtemp_360;
    CData/*31:0*/ __Vtemp_361;
    VlWide<3>/*95:0*/ __Vtemp_362;
    CData/*31:0*/ __Vtemp_363;
    VlWide<3>/*95:0*/ __Vtemp_364;
    CData/*31:0*/ __Vtemp_365;
    VlWide<3>/*95:0*/ __Vtemp_366;
    CData/*31:0*/ __Vtemp_367;
    VlWide<3>/*95:0*/ __Vtemp_368;
    CData/*31:0*/ __Vtemp_369;
    VlWide<3>/*95:0*/ __Vtemp_370;
    CData/*31:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_372;
    CData/*31:0*/ __Vtemp_373;
    VlWide<3>/*95:0*/ __Vtemp_374;
    VlWide<3>/*95:0*/ __Vtemp_375;
    VlWide<3>/*95:0*/ __Vtemp_376;
    VlWide<3>/*95:0*/ __Vtemp_377;
    VlWide<3>/*95:0*/ __Vtemp_378;
    VlWide<3>/*95:0*/ __Vtemp_379;
    VlWide<3>/*95:0*/ __Vtemp_380;
    VlWide<3>/*95:0*/ __Vtemp_381;
    VlWide<3>/*95:0*/ __Vtemp_382;
    CData/*31:0*/ __Vtemp_383;
    VlWide<3>/*95:0*/ __Vtemp_384;
    CData/*31:0*/ __Vtemp_385;
    VlWide<3>/*95:0*/ __Vtemp_386;
    CData/*31:0*/ __Vtemp_387;
    VlWide<3>/*95:0*/ __Vtemp_388;
    CData/*31:0*/ __Vtemp_389;
    VlWide<3>/*95:0*/ __Vtemp_390;
    CData/*31:0*/ __Vtemp_391;
    VlWide<3>/*95:0*/ __Vtemp_392;
    CData/*31:0*/ __Vtemp_393;
    VlWide<3>/*95:0*/ __Vtemp_394;
    CData/*31:0*/ __Vtemp_395;
    VlWide<3>/*95:0*/ __Vtemp_396;
    VlWide<3>/*95:0*/ __Vtemp_397;
    VlWide<3>/*95:0*/ __Vtemp_398;
    VlWide<3>/*95:0*/ __Vtemp_399;
    VlWide<3>/*95:0*/ __Vtemp_400;
    VlWide<3>/*95:0*/ __Vtemp_401;
    VlWide<3>/*95:0*/ __Vtemp_402;
    VlWide<3>/*95:0*/ __Vtemp_403;
    VlWide<3>/*95:0*/ __Vtemp_404;
    CData/*31:0*/ __Vtemp_405;
    VlWide<3>/*95:0*/ __Vtemp_406;
    CData/*31:0*/ __Vtemp_407;
    VlWide<3>/*95:0*/ __Vtemp_408;
    CData/*31:0*/ __Vtemp_409;
    VlWide<3>/*95:0*/ __Vtemp_410;
    CData/*31:0*/ __Vtemp_411;
    VlWide<3>/*95:0*/ __Vtemp_412;
    CData/*31:0*/ __Vtemp_413;
    VlWide<3>/*95:0*/ __Vtemp_414;
    CData/*31:0*/ __Vtemp_415;
    VlWide<3>/*95:0*/ __Vtemp_416;
    CData/*31:0*/ __Vtemp_417;
    VlWide<3>/*95:0*/ __Vtemp_418;
    // Body
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
    vlSelf->__PVT__dbg_inst_pc = 0U;
    if (vlSelf->__PVT__valid_i) {
        vlSelf->__PVT__dbg_inst_pc = vlSelf->__PVT__pc_i;
        vlSelf->__Vfunc_get_regname_str__12__regnum 
            = vlSelf->__PVT__ra_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_1,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_2,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_3,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_4,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_5,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_6,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_7,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_8,0x00007432);
            __Vtemp_9 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_10, __Vtemp_9, __Vtemp_7, __Vtemp_8);
            __Vtemp_11 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_12, __Vtemp_11, __Vtemp_6, __Vtemp_10);
            __Vtemp_13 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_14, __Vtemp_13, __Vtemp_5, __Vtemp_12);
            __Vtemp_15 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_16, __Vtemp_15, __Vtemp_4, __Vtemp_14);
            __Vtemp_17 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_18, __Vtemp_17, __Vtemp_3, __Vtemp_16);
            __Vtemp_19 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_20, __Vtemp_19, __Vtemp_2, __Vtemp_18);
            __Vtemp_21 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_22, __Vtemp_21, __Vtemp_1, __Vtemp_20);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__12__Vfuncout, __Vtemp_22);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_23,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_24,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_25,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_26,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_27,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_28,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_29,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_30,0x00006135);
            __Vtemp_31 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_32, __Vtemp_31, __Vtemp_29, __Vtemp_30);
            __Vtemp_33 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_34, __Vtemp_33, __Vtemp_28, __Vtemp_32);
            __Vtemp_35 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_36, __Vtemp_35, __Vtemp_27, __Vtemp_34);
            __Vtemp_37 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_38, __Vtemp_37, __Vtemp_26, __Vtemp_36);
            __Vtemp_39 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_40, __Vtemp_39, __Vtemp_25, __Vtemp_38);
            __Vtemp_41 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_42, __Vtemp_41, __Vtemp_24, __Vtemp_40);
            __Vtemp_43 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_44, __Vtemp_43, __Vtemp_23, __Vtemp_42);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__12__Vfuncout, __Vtemp_44);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_45,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_46,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_47,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_48,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_49,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_50,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_51,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_52,0x00007337);
            __Vtemp_53 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_54, __Vtemp_53, __Vtemp_51, __Vtemp_52);
            __Vtemp_55 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_56, __Vtemp_55, __Vtemp_50, __Vtemp_54);
            __Vtemp_57 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_58, __Vtemp_57, __Vtemp_49, __Vtemp_56);
            __Vtemp_59 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_60, __Vtemp_59, __Vtemp_48, __Vtemp_58);
            __Vtemp_61 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_62, __Vtemp_61, __Vtemp_47, __Vtemp_60);
            __Vtemp_63 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_64, __Vtemp_63, __Vtemp_46, __Vtemp_62);
            __Vtemp_65 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_66, __Vtemp_65, __Vtemp_45, __Vtemp_64);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__12__Vfuncout, __Vtemp_66);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_67,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_68,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_69,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_70,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_71,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_72,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_73,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_74,0x00007436);
            __Vtemp_75 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_76, __Vtemp_75, __Vtemp_73, __Vtemp_74);
            __Vtemp_77 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_78, __Vtemp_77, __Vtemp_72, __Vtemp_76);
            __Vtemp_79 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_80, __Vtemp_79, __Vtemp_71, __Vtemp_78);
            __Vtemp_81 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_82, __Vtemp_81, __Vtemp_70, __Vtemp_80);
            __Vtemp_83 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_84, __Vtemp_83, __Vtemp_69, __Vtemp_82);
            __Vtemp_85 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_86, __Vtemp_85, __Vtemp_68, __Vtemp_84);
            __Vtemp_87 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__12__regnum));
            VL_COND_WIWW(80, __Vtemp_88, __Vtemp_87, __Vtemp_67, __Vtemp_86);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__12__Vfuncout, __Vtemp_88);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_ra, vlSelf->__Vfunc_get_regname_str__12__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__13__regnum 
            = vlSelf->__PVT__rb_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_89,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_90,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_91,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_92,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_93,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_94,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_95,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_96,0x00007432);
            __Vtemp_97 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_98, __Vtemp_97, __Vtemp_95, __Vtemp_96);
            __Vtemp_99 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_100, __Vtemp_99, __Vtemp_94, __Vtemp_98);
            __Vtemp_101 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_102, __Vtemp_101, __Vtemp_93, __Vtemp_100);
            __Vtemp_103 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_104, __Vtemp_103, __Vtemp_92, __Vtemp_102);
            __Vtemp_105 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_106, __Vtemp_105, __Vtemp_91, __Vtemp_104);
            __Vtemp_107 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_108, __Vtemp_107, __Vtemp_90, __Vtemp_106);
            __Vtemp_109 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_110, __Vtemp_109, __Vtemp_89, __Vtemp_108);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__13__Vfuncout, __Vtemp_110);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_111,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_112,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_113,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_114,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_115,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_116,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_117,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_118,0x00006135);
            __Vtemp_119 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_120, __Vtemp_119, __Vtemp_117, __Vtemp_118);
            __Vtemp_121 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_122, __Vtemp_121, __Vtemp_116, __Vtemp_120);
            __Vtemp_123 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_124, __Vtemp_123, __Vtemp_115, __Vtemp_122);
            __Vtemp_125 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_126, __Vtemp_125, __Vtemp_114, __Vtemp_124);
            __Vtemp_127 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_128, __Vtemp_127, __Vtemp_113, __Vtemp_126);
            __Vtemp_129 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_130, __Vtemp_129, __Vtemp_112, __Vtemp_128);
            __Vtemp_131 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_132, __Vtemp_131, __Vtemp_111, __Vtemp_130);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__13__Vfuncout, __Vtemp_132);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_133,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_134,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_135,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_136,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_137,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_138,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_139,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_140,0x00007337);
            __Vtemp_141 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_142, __Vtemp_141, __Vtemp_139, __Vtemp_140);
            __Vtemp_143 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_144, __Vtemp_143, __Vtemp_138, __Vtemp_142);
            __Vtemp_145 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_146, __Vtemp_145, __Vtemp_137, __Vtemp_144);
            __Vtemp_147 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_148, __Vtemp_147, __Vtemp_136, __Vtemp_146);
            __Vtemp_149 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_150, __Vtemp_149, __Vtemp_135, __Vtemp_148);
            __Vtemp_151 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_152, __Vtemp_151, __Vtemp_134, __Vtemp_150);
            __Vtemp_153 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_154, __Vtemp_153, __Vtemp_133, __Vtemp_152);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__13__Vfuncout, __Vtemp_154);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_155,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_156,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_157,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_158,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_159,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_160,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_161,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_162,0x00007436);
            __Vtemp_163 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_164, __Vtemp_163, __Vtemp_161, __Vtemp_162);
            __Vtemp_165 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_166, __Vtemp_165, __Vtemp_160, __Vtemp_164);
            __Vtemp_167 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_168, __Vtemp_167, __Vtemp_159, __Vtemp_166);
            __Vtemp_169 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_170, __Vtemp_169, __Vtemp_158, __Vtemp_168);
            __Vtemp_171 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_172, __Vtemp_171, __Vtemp_157, __Vtemp_170);
            __Vtemp_173 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_174, __Vtemp_173, __Vtemp_156, __Vtemp_172);
            __Vtemp_175 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__13__regnum));
            VL_COND_WIWW(80, __Vtemp_176, __Vtemp_175, __Vtemp_155, __Vtemp_174);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__13__Vfuncout, __Vtemp_176);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rb, vlSelf->__Vfunc_get_regname_str__13__Vfuncout);
        vlSelf->__Vfunc_get_regname_str__14__regnum 
            = vlSelf->__PVT__rd_idx_w;
        if (((((((((0U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)) 
                   | (1U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                  | (2U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                 | (3U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                | (4U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
               | (5U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
              | (6U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
             | (7U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_177,0x7a65726f);
            VL_CONST_W_1X(80,__Vtemp_178,0x00007261);
            VL_CONST_W_1X(80,__Vtemp_179,0x00007370);
            VL_CONST_W_1X(80,__Vtemp_180,0x00006770);
            VL_CONST_W_1X(80,__Vtemp_181,0x00007470);
            VL_CONST_W_1X(80,__Vtemp_182,0x00007430);
            VL_CONST_W_1X(80,__Vtemp_183,0x00007431);
            VL_CONST_W_1X(80,__Vtemp_184,0x00007432);
            __Vtemp_185 = (6U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_186, __Vtemp_185, __Vtemp_183, __Vtemp_184);
            __Vtemp_187 = (5U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_188, __Vtemp_187, __Vtemp_182, __Vtemp_186);
            __Vtemp_189 = (4U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_190, __Vtemp_189, __Vtemp_181, __Vtemp_188);
            __Vtemp_191 = (3U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_192, __Vtemp_191, __Vtemp_180, __Vtemp_190);
            __Vtemp_193 = (2U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_194, __Vtemp_193, __Vtemp_179, __Vtemp_192);
            __Vtemp_195 = (1U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_196, __Vtemp_195, __Vtemp_178, __Vtemp_194);
            __Vtemp_197 = (0U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_198, __Vtemp_197, __Vtemp_177, __Vtemp_196);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__14__Vfuncout, __Vtemp_198);
        } else if (((((((((8U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)) 
                          | (9U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                         | (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                        | (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                       | (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                      | (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                     | (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                    | (0xfU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_199,0x00007330);
            VL_CONST_W_1X(80,__Vtemp_200,0x00007331);
            VL_CONST_W_1X(80,__Vtemp_201,0x00006130);
            VL_CONST_W_1X(80,__Vtemp_202,0x00006131);
            VL_CONST_W_1X(80,__Vtemp_203,0x00006132);
            VL_CONST_W_1X(80,__Vtemp_204,0x00006133);
            VL_CONST_W_1X(80,__Vtemp_205,0x00006134);
            VL_CONST_W_1X(80,__Vtemp_206,0x00006135);
            __Vtemp_207 = (0xeU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_208, __Vtemp_207, __Vtemp_205, __Vtemp_206);
            __Vtemp_209 = (0xdU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_210, __Vtemp_209, __Vtemp_204, __Vtemp_208);
            __Vtemp_211 = (0xcU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_212, __Vtemp_211, __Vtemp_203, __Vtemp_210);
            __Vtemp_213 = (0xbU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_214, __Vtemp_213, __Vtemp_202, __Vtemp_212);
            __Vtemp_215 = (0xaU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_216, __Vtemp_215, __Vtemp_201, __Vtemp_214);
            __Vtemp_217 = (9U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_218, __Vtemp_217, __Vtemp_200, __Vtemp_216);
            __Vtemp_219 = (8U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_220, __Vtemp_219, __Vtemp_199, __Vtemp_218);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__14__Vfuncout, __Vtemp_220);
        } else if (((((((((0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)) 
                          | (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                         | (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                        | (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                       | (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                      | (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                     | (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                    | (0x17U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_221,0x00006136);
            VL_CONST_W_1X(80,__Vtemp_222,0x00006137);
            VL_CONST_W_1X(80,__Vtemp_223,0x00007332);
            VL_CONST_W_1X(80,__Vtemp_224,0x00007333);
            VL_CONST_W_1X(80,__Vtemp_225,0x00007334);
            VL_CONST_W_1X(80,__Vtemp_226,0x00007335);
            VL_CONST_W_1X(80,__Vtemp_227,0x00007336);
            VL_CONST_W_1X(80,__Vtemp_228,0x00007337);
            __Vtemp_229 = (0x16U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_230, __Vtemp_229, __Vtemp_227, __Vtemp_228);
            __Vtemp_231 = (0x15U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_232, __Vtemp_231, __Vtemp_226, __Vtemp_230);
            __Vtemp_233 = (0x14U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_234, __Vtemp_233, __Vtemp_225, __Vtemp_232);
            __Vtemp_235 = (0x13U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_236, __Vtemp_235, __Vtemp_224, __Vtemp_234);
            __Vtemp_237 = (0x12U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_238, __Vtemp_237, __Vtemp_223, __Vtemp_236);
            __Vtemp_239 = (0x11U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_240, __Vtemp_239, __Vtemp_222, __Vtemp_238);
            __Vtemp_241 = (0x10U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_242, __Vtemp_241, __Vtemp_221, __Vtemp_240);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__14__Vfuncout, __Vtemp_242);
        } else if (((((((((0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)) 
                          | (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                         | (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                        | (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                       | (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                      | (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                     | (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum))) 
                    | (0x1fU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum)))) {
            VL_CONST_W_1X(80,__Vtemp_243,0x00007338);
            VL_CONST_W_1X(80,__Vtemp_244,0x00007339);
            VL_CONST_W_1X(80,__Vtemp_245,0x00733130);
            VL_CONST_W_1X(80,__Vtemp_246,0x00733131);
            VL_CONST_W_1X(80,__Vtemp_247,0x00007433);
            VL_CONST_W_1X(80,__Vtemp_248,0x00007434);
            VL_CONST_W_1X(80,__Vtemp_249,0x00007435);
            VL_CONST_W_1X(80,__Vtemp_250,0x00007436);
            __Vtemp_251 = (0x1eU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_252, __Vtemp_251, __Vtemp_249, __Vtemp_250);
            __Vtemp_253 = (0x1dU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_254, __Vtemp_253, __Vtemp_248, __Vtemp_252);
            __Vtemp_255 = (0x1cU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_256, __Vtemp_255, __Vtemp_247, __Vtemp_254);
            __Vtemp_257 = (0x1bU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_258, __Vtemp_257, __Vtemp_246, __Vtemp_256);
            __Vtemp_259 = (0x1aU == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_260, __Vtemp_259, __Vtemp_245, __Vtemp_258);
            __Vtemp_261 = (0x19U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_262, __Vtemp_261, __Vtemp_244, __Vtemp_260);
            __Vtemp_263 = (0x18U == (IData)(vlSelf->__Vfunc_get_regname_str__14__regnum));
            VL_COND_WIWW(80, __Vtemp_264, __Vtemp_263, __Vtemp_243, __Vtemp_262);
            VL_ASSIGN_W(80,vlSelf->__Vfunc_get_regname_str__14__Vfuncout, __Vtemp_264);
        }
        VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_rd, vlSelf->__Vfunc_get_regname_str__14__Vfuncout);
        if (((((((((0x7013U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                   | (0x13U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
               | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | (0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
             | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_265,0x616e6469);
            VL_CONST_W_1X(80,__Vtemp_266,0x61646469);
            VL_CONST_W_1X(80,__Vtemp_267,0x736c7469);
            VL_CONST_W_2X(80,__Vtemp_268,0x00000073,0x6c746975);
            VL_CONST_W_1X(80,__Vtemp_269,0x006f7269);
            VL_CONST_W_1X(80,__Vtemp_270,0x786f7269);
            VL_CONST_W_1X(80,__Vtemp_271,0x736c6c69);
            VL_CONST_W_1X(80,__Vtemp_272,0x73726c69);
            __Vtemp_273 = (0x1013U == (0xfc00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_274, __Vtemp_273, __Vtemp_271, __Vtemp_272);
            __Vtemp_275 = (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_276, __Vtemp_275, __Vtemp_270, __Vtemp_274);
            __Vtemp_277 = (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_278, __Vtemp_277, __Vtemp_269, __Vtemp_276);
            __Vtemp_279 = (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_280, __Vtemp_279, __Vtemp_268, __Vtemp_278);
            __Vtemp_281 = (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_282, __Vtemp_281, __Vtemp_267, __Vtemp_280);
            __Vtemp_283 = (0x13U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_284, __Vtemp_283, __Vtemp_266, __Vtemp_282);
            __Vtemp_285 = (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_286, __Vtemp_285, __Vtemp_265, __Vtemp_284);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_286);
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)) 
                          | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                         | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                        | (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x2033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x3033U == (0xfe00707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_287,0x73726169);
            VL_CONST_W_1X(80,__Vtemp_288,0x006c7569);
            VL_CONST_W_2X(80,__Vtemp_289,0x00000061,0x75697063);
            VL_CONST_W_1X(80,__Vtemp_290,0x00616464);
            VL_CONST_W_1X(80,__Vtemp_291,0x00737562);
            VL_CONST_W_1X(80,__Vtemp_292,0x00736c74);
            VL_CONST_W_1X(80,__Vtemp_293,0x736c7475);
            VL_CONST_W_1X(80,__Vtemp_294,0x00786f72);
            __Vtemp_295 = (0x3033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_296, __Vtemp_295, __Vtemp_293, __Vtemp_294);
            __Vtemp_297 = (0x2033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_298, __Vtemp_297, __Vtemp_292, __Vtemp_296);
            __Vtemp_299 = (0x40000033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_300, __Vtemp_299, __Vtemp_291, __Vtemp_298);
            __Vtemp_301 = (0x33U == (0xfe00707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_302, __Vtemp_301, __Vtemp_290, __Vtemp_300);
            __Vtemp_303 = (0x17U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_304, __Vtemp_303, __Vtemp_289, __Vtemp_302);
            __Vtemp_305 = (0x37U == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_306, __Vtemp_305, __Vtemp_288, __Vtemp_304);
            __Vtemp_307 = (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_308, __Vtemp_307, __Vtemp_287, __Vtemp_306);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_308);
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                      | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
                     | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x63U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_309,0x00006f72);
            VL_CONST_W_1X(80,__Vtemp_310,0x00616e64);
            VL_CONST_W_1X(80,__Vtemp_311,0x00736c6c);
            VL_CONST_W_1X(80,__Vtemp_312,0x0073726c);
            VL_CONST_W_1X(80,__Vtemp_313,0x00737261);
            VL_CONST_W_1X(80,__Vtemp_314,0x006a616c);
            VL_CONST_W_1X(80,__Vtemp_315,0x6a616c72);
            VL_CONST_W_1X(80,__Vtemp_316,0x00626571);
            __Vtemp_317 = (0x67U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_318, __Vtemp_317, __Vtemp_315, __Vtemp_316);
            __Vtemp_319 = (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_320, __Vtemp_319, __Vtemp_314, __Vtemp_318);
            __Vtemp_321 = (0x40005033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_322, __Vtemp_321, __Vtemp_313, __Vtemp_320);
            __Vtemp_323 = (0x5033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_324, __Vtemp_323, __Vtemp_312, __Vtemp_322);
            __Vtemp_325 = (0x1033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_326, __Vtemp_325, __Vtemp_311, __Vtemp_324);
            __Vtemp_327 = (0x7033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_328, __Vtemp_327, __Vtemp_310, __Vtemp_326);
            __Vtemp_329 = (0x6033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_330, __Vtemp_329, __Vtemp_309, __Vtemp_328);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_330);
        } else if (((((((((0x1063U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (3U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_331,0x00626e65);
            VL_CONST_W_1X(80,__Vtemp_332,0x00626c74);
            VL_CONST_W_1X(80,__Vtemp_333,0x00626765);
            VL_CONST_W_1X(80,__Vtemp_334,0x626c7475);
            VL_CONST_W_1X(80,__Vtemp_335,0x62676575);
            VL_CONST_W_1X(80,__Vtemp_336,0x00006c62);
            VL_CONST_W_1X(80,__Vtemp_337,0x00006c68);
            VL_CONST_W_1X(80,__Vtemp_338,0x00006c77);
            __Vtemp_339 = (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_340, __Vtemp_339, __Vtemp_337, __Vtemp_338);
            __Vtemp_341 = (3U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_342, __Vtemp_341, __Vtemp_336, __Vtemp_340);
            __Vtemp_343 = (0x7063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_344, __Vtemp_343, __Vtemp_335, __Vtemp_342);
            __Vtemp_345 = (0x6063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_346, __Vtemp_345, __Vtemp_334, __Vtemp_344);
            __Vtemp_347 = (0x5063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_348, __Vtemp_347, __Vtemp_333, __Vtemp_346);
            __Vtemp_349 = (0x4063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_350, __Vtemp_349, __Vtemp_332, __Vtemp_348);
            __Vtemp_351 = (0x1063U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_352, __Vtemp_351, __Vtemp_331, __Vtemp_350);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_352);
        } else if (((((((((0x4003U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                          | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x23U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x73U == vlSelf->__PVT__opcode_i)) 
                    | (0x100073U == vlSelf->__PVT__opcode_i))) {
            VL_CONST_W_1X(80,__Vtemp_353,0x006c6275);
            VL_CONST_W_1X(80,__Vtemp_354,0x006c6875);
            VL_CONST_W_1X(80,__Vtemp_355,0x006c7775);
            VL_CONST_W_1X(80,__Vtemp_356,0x00007362);
            VL_CONST_W_1X(80,__Vtemp_357,0x00007368);
            VL_CONST_W_1X(80,__Vtemp_358,0x00007377);
            VL_CONST_W_2X(80,__Vtemp_359,0x00000065,0x63616c6c);
            VL_CONST_W_2X(80,__Vtemp_360,0x00006562,0x7265616b);
            __Vtemp_361 = (0x73U == vlSelf->__PVT__opcode_i);
            VL_COND_WIWW(80, __Vtemp_362, __Vtemp_361, __Vtemp_359, __Vtemp_360);
            __Vtemp_363 = (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_364, __Vtemp_363, __Vtemp_358, __Vtemp_362);
            __Vtemp_365 = (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_366, __Vtemp_365, __Vtemp_357, __Vtemp_364);
            __Vtemp_367 = (0x23U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_368, __Vtemp_367, __Vtemp_356, __Vtemp_366);
            __Vtemp_369 = (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_370, __Vtemp_369, __Vtemp_355, __Vtemp_368);
            __Vtemp_371 = (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_372, __Vtemp_371, __Vtemp_354, __Vtemp_370);
            __Vtemp_373 = (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_374, __Vtemp_373, __Vtemp_353, __Vtemp_372);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_374);
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i)) 
                          | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_375,0x65726574);
            VL_CONST_W_2X(80,__Vtemp_376,0x00000063,0x73727277);
            VL_CONST_W_2X(80,__Vtemp_377,0x00000063,0x73727273);
            VL_CONST_W_2X(80,__Vtemp_378,0x00000063,0x73727263);
            VL_CONST_W_2X(80,__Vtemp_379,0x00006373,0x72727769);
            VL_CONST_W_2X(80,__Vtemp_380,0x00006373,0x72727369);
            VL_CONST_W_2X(80,__Vtemp_381,0x00006373,0x72726369);
            VL_CONST_W_1X(80,__Vtemp_382,0x006d756c);
            __Vtemp_383 = (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_384, __Vtemp_383, __Vtemp_381, __Vtemp_382);
            __Vtemp_385 = (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_386, __Vtemp_385, __Vtemp_380, __Vtemp_384);
            __Vtemp_387 = (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_388, __Vtemp_387, __Vtemp_379, __Vtemp_386);
            __Vtemp_389 = (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_390, __Vtemp_389, __Vtemp_378, __Vtemp_388);
            __Vtemp_391 = (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_392, __Vtemp_391, __Vtemp_377, __Vtemp_390);
            __Vtemp_393 = (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_394, __Vtemp_393, __Vtemp_376, __Vtemp_392);
            __Vtemp_395 = (0x200073U == (0xcfffffffU 
                                         & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_396, __Vtemp_395, __Vtemp_375, __Vtemp_394);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_396);
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelf->__PVT__opcode_i))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelf->__PVT__opcode_i))) 
                    | (0x100fU == (0x707fU & vlSelf->__PVT__opcode_i)))) {
            VL_CONST_W_1X(80,__Vtemp_397,0x6d756c68);
            VL_CONST_W_2X(80,__Vtemp_398,0x00006d75,0x6c687375);
            VL_CONST_W_2X(80,__Vtemp_399,0x0000006d,0x756c6875);
            VL_CONST_W_1X(80,__Vtemp_400,0x00646976);
            VL_CONST_W_1X(80,__Vtemp_401,0x64697675);
            VL_CONST_W_1X(80,__Vtemp_402,0x0072656d);
            VL_CONST_W_1X(80,__Vtemp_403,0x72656d75);
            VL_CONST_W_2X(80,__Vtemp_404,0x0066656e,0x63652e69);
            __Vtemp_405 = (0x2007033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_406, __Vtemp_405, __Vtemp_403, __Vtemp_404);
            __Vtemp_407 = (0x2006033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_408, __Vtemp_407, __Vtemp_402, __Vtemp_406);
            __Vtemp_409 = (0x2005033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_410, __Vtemp_409, __Vtemp_401, __Vtemp_408);
            __Vtemp_411 = (0x2004033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_412, __Vtemp_411, __Vtemp_400, __Vtemp_410);
            __Vtemp_413 = (0x2003033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_414, __Vtemp_413, __Vtemp_399, __Vtemp_412);
            __Vtemp_415 = (0x2002033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_416, __Vtemp_415, __Vtemp_398, __Vtemp_414);
            __Vtemp_417 = (0x2001033U == (0xfe00707fU 
                                          & vlSelf->__PVT__opcode_i));
            VL_COND_WIWW(80, __Vtemp_418, __Vtemp_417, __Vtemp_397, __Vtemp_416);
            VL_ASSIGN_W(80,vlSelf->__PVT__dbg_inst_str, __Vtemp_418);
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->__PVT__opcode_i))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->__PVT__opcode_i))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                       | (0x5013U == (0xfc00707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x40005013U == (0xfc00707fU 
                                         & vlSelf->__PVT__opcode_i)))) 
                  | (0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                 | (0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) 
                | (0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) 
               | (0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) 
              | ((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                     | (0x1003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) 
             | (((0x23U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                 | (0x1023U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                | (0x2023U == (0x707fU & vlSelf->__PVT__opcode_i))))) {
            if (((((((((((((0x13U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                           | (0x7013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x2013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x3013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                       | (0x4013U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                      | (0x1073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                     | (0x2073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                    | (0x3073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                   | (0x5073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                  | (0x6073U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                 | (0x7073U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else if ((((0x1013U == (0xfc00707fU & vlSelf->__PVT__opcode_i)) 
                         | (0x5013U == (0xfc00707fU 
                                        & vlSelf->__PVT__opcode_i))) 
                        | (0x40005013U == (0xfc00707fU 
                                           & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_EXTEND_II(32,5, 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 5U)));
            } else if ((0x37U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x17U == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x00007063);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 0x14U)), 0U);
            } else if ((0x6fU == (0x7fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_ra,0x0000002d);
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = (vlSelf->__PVT__pc_i 
                                               + VL_CONCAT_III(32,12,20, 
                                                               (0xfffU 
                                                                & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0xcU)), 
                                                               VL_CONCAT_III(20,8,12, 
                                                                             (0xffU 
                                                                              & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0xcU, 8U)), 
                                                                             VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U)), 
                                                                                VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x15U, 4U)), 0U))))));
                if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c);
                }
            } else if ((0x67U == (0x707fU & vlSelf->__PVT__opcode_i))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
                if (((1U == (IData)(vlSelf->__PVT__ra_idx_w)) 
                     & (0U == VL_CONCAT_III(32,20,12, 
                                            (0xfffffU 
                                             & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                            (0xfffU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)))))) {
                    VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_str,0x00726574);
                } else if ((1U == (IData)(vlSelf->__PVT__rd_idx_w))) {
                    VL_CONST_W_2X(80,vlSelf->__PVT__dbg_inst_str,0x63616c6c,0x20285229);
                }
            } else if (((((((3U == (0x707fU & vlSelf->__PVT__opcode_i)) 
                            | (0x1003U == (0x707fU 
                                           & vlSelf->__PVT__opcode_i))) 
                           | (0x2003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                          | (0x4003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                         | (0x5003U == (0x707fU & vlSelf->__PVT__opcode_i))) 
                        | (0x6003U == (0x707fU & vlSelf->__PVT__opcode_i)))) {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rb,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            (0xfffU 
                                                             & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x14U, 0xcU)));
            } else {
                VL_CONST_W_1X(80,vlSelf->__PVT__dbg_inst_rd,0x0000002d);
                vlSelf->__PVT__dbg_inst_imm = VL_CONCAT_III(32,20,12, 
                                                            (0xfffffU 
                                                             & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__opcode_i, 0x1fU)), 0x14U)), 
                                                            VL_CONCAT_III(12,7,5, 
                                                                          (0x7fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 0x19U, 7U)), 
                                                                          (0x1fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__opcode_i, 7U, 5U))));
            }
        }
    }
}
