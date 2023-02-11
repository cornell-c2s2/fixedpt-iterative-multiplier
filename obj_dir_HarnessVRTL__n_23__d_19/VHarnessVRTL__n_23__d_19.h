// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHARNESSVRTL__N_23__D_19_H_
#define _VHARNESSVRTL__N_23__D_19_H_  // guard

#include "verilated.h"

//==========

class VHarnessVRTL__n_23__d_19__Syms;
class VHarnessVRTL__n_23__d_19_VerilatedVcd;


//----------

VL_MODULE(VHarnessVRTL__n_23__d_19) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(recv_rdy,0,0);
    VL_IN8(recv_val,0,0);
    VL_IN8(send_rdy,0,0);
    VL_OUT8(send_val,0,0);
    VL_OUT(send_msg,22,0);
    VL_IN64(recv_msg,45,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry;
    CData/*0:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_add;
    CData/*0:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait;
    CData/*1:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__state;
    CData/*1:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__next_state;
    CData/*4:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__counter;
    CData/*0:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__counter_reset;
    IData/*22:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout;
    QData/*41:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in;
    QData/*41:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_in;
    QData/*41:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry;
    QData/*45:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp;
    QData/*41:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout;
    QData/*41:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout;
    QData/*41:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*22:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*41:0*/ HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VHarnessVRTL__n_23__d_19__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHarnessVRTL__n_23__d_19);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VHarnessVRTL__n_23__d_19(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHarnessVRTL__n_23__d_19();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHarnessVRTL__n_23__d_19__Syms* symsp, bool first);
  private:
    static QData _change_request(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
