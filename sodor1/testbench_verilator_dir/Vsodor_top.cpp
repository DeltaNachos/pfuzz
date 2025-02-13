// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsodor_top.h"
#include "Vsodor_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vsodor_top::Vsodor_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsodor_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , __PVT__sodor_top{vlSymsp->TOP.__PVT__sodor_top}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsodor_top::Vsodor_top(const char* _vcname__)
    : Vsodor_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsodor_top::~Vsodor_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsodor_top___024root___eval_debug_assertions(Vsodor_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsodor_top___024root___eval_static(Vsodor_top___024root* vlSelf);
void Vsodor_top___024root___eval_initial(Vsodor_top___024root* vlSelf);
void Vsodor_top___024root___eval_settle(Vsodor_top___024root* vlSelf);
void Vsodor_top___024root___eval(Vsodor_top___024root* vlSelf);

void Vsodor_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsodor_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsodor_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsodor_top___024root___eval_static(&(vlSymsp->TOP));
        Vsodor_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsodor_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsodor_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsodor_top::eventsPending() { return false; }

uint64_t Vsodor_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsodor_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsodor_top___024root___eval_final(Vsodor_top___024root* vlSelf);

VL_ATTR_COLD void Vsodor_top::final() {
    Vsodor_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsodor_top::hierName() const { return vlSymsp->name(); }
const char* Vsodor_top::modelName() const { return "Vsodor_top"; }
unsigned Vsodor_top::threads() const { return 1; }
void Vsodor_top::prepareClone() const { contextp()->prepareClone(); }
void Vsodor_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsodor_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsodor_top___024root__trace_init_top(Vsodor_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsodor_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsodor_top___024root*>(voidSelf);
    Vsodor_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsodor_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsodor_top___024root__trace_register(Vsodor_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsodor_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsodor_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsodor_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
