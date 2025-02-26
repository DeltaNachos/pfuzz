// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpicorv32core__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpicorv32core::Vpicorv32core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpicorv32core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , __PVT__picorv32core{vlSymsp->TOP.__PVT__picorv32core}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpicorv32core::Vpicorv32core(const char* _vcname__)
    : Vpicorv32core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpicorv32core::~Vpicorv32core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpicorv32core___024root___eval_debug_assertions(Vpicorv32core___024root* vlSelf);
#endif  // VL_DEBUG
void Vpicorv32core___024root___eval_static(Vpicorv32core___024root* vlSelf);
void Vpicorv32core___024root___eval_initial(Vpicorv32core___024root* vlSelf);
void Vpicorv32core___024root___eval_settle(Vpicorv32core___024root* vlSelf);
void Vpicorv32core___024root___eval(Vpicorv32core___024root* vlSelf);

void Vpicorv32core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpicorv32core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpicorv32core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpicorv32core___024root___eval_static(&(vlSymsp->TOP));
        Vpicorv32core___024root___eval_initial(&(vlSymsp->TOP));
        Vpicorv32core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpicorv32core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpicorv32core::eventsPending() { return false; }

uint64_t Vpicorv32core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpicorv32core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpicorv32core___024root___eval_final(Vpicorv32core___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32core::final() {
    Vpicorv32core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpicorv32core::hierName() const { return vlSymsp->name(); }
const char* Vpicorv32core::modelName() const { return "Vpicorv32core"; }
unsigned Vpicorv32core::threads() const { return 1; }
void Vpicorv32core::prepareClone() const { contextp()->prepareClone(); }
void Vpicorv32core::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpicorv32core::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpicorv32core___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpicorv32core___024root__trace_init_top(Vpicorv32core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpicorv32core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32core___024root*>(voidSelf);
    Vpicorv32core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpicorv32core___024root__trace_decl_types(tracep);
    Vpicorv32core___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpicorv32core___024root__trace_register(Vpicorv32core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpicorv32core::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpicorv32core::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpicorv32core___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
