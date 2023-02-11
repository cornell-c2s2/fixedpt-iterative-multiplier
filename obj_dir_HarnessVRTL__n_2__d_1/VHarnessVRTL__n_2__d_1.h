// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHARNESSVRTL__N_2__D_1_H_
#define _VHARNESSVRTL__N_2__D_1_H_  // guard

#include "verilated.h"

//==========

class VHarnessVRTL__n_2__d_1__Syms;
class VHarnessVRTL__n_2__d_1_VerilatedVcd;


//----------

VL_MODULE(VHarnessVRTL__n_2__d_1) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(recv_msg,3,0);
    VL_OUT8(recv_rdy,0,0);
    VL_IN8(recv_val,0,0);
    VL_OUT8(send_msg,1,0);
    VL_IN8(send_rdy,0,0);
    VL_OUT8(send_val,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry;
    CData/*0:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add;
    CData/*0:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait;
    CData/*1:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state;
    CData/*1:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state;
    CData/*0:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter;
    CData/*0:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset;
    CData/*2:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in;
    CData/*2:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_in;
    CData/*2:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry;
    CData/*3:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp;
    CData/*2:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout;
    CData/*2:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout;
    CData/*2:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout;
    CData/*1:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a;
    CData/*1:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out;
    CData/*0:0*/ HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel;
    CData/*4:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*5:0*/ __Vtablechg2[8];
    static CData/*1:0*/ __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[32];
    static CData/*0:0*/ __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[8];
    static CData/*0:0*/ __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[8];
    static CData/*0:0*/ __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[8];
    static CData/*0:0*/ __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[8];
    static CData/*0:0*/ __Vtable2_recv_rdy[8];
    static CData/*0:0*/ __Vtable2_send_val[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VHarnessVRTL__n_2__d_1__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHarnessVRTL__n_2__d_1);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VHarnessVRTL__n_2__d_1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHarnessVRTL__n_2__d_1();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHarnessVRTL__n_2__d_1__Syms* symsp, bool first);
  private:
    static QData _change_request(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
