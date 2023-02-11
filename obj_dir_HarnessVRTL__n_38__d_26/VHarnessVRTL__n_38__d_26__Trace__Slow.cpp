// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHarnessVRTL__n_38__d_26__Syms.h"


//======================

void VHarnessVRTL__n_38__d_26::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VHarnessVRTL__n_38__d_26::traceInit, &VHarnessVRTL__n_38__d_26::traceFull, &VHarnessVRTL__n_38__d_26::traceChg, this);
}
void VHarnessVRTL__n_38__d_26::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VHarnessVRTL__n_38__d_26* t = (VHarnessVRTL__n_38__d_26*)userthis;
    VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VHarnessVRTL__n_38__d_26::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHarnessVRTL__n_38__d_26* t = (VHarnessVRTL__n_38__d_26*)userthis;
    VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VHarnessVRTL__n_38__d_26::traceInitThis(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VHarnessVRTL__n_38__d_26::traceFullThis(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VHarnessVRTL__n_38__d_26::traceInitThis__1(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+313,"clk", false,-1, 0,0);
        vcdp->declBus(c+321,"reset", false,-1, 0,0);
        vcdp->declArray(c+329,"recv_msg", false,-1, 75,0);
        vcdp->declBus(c+353,"recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+361,"recv_val", false,-1, 0,0);
        vcdp->declQuad(c+369,"send_msg", false,-1, 37,0);
        vcdp->declBus(c+385,"send_rdy", false,-1, 0,0);
        vcdp->declBus(c+393,"send_val", false,-1, 0,0);
        vcdp->declBus(c+313,"HarnessVRTL__n_38__d_26 clk", false,-1, 0,0);
        vcdp->declBus(c+321,"HarnessVRTL__n_38__d_26 reset", false,-1, 0,0);
        vcdp->declArray(c+329,"HarnessVRTL__n_38__d_26 recv_msg", false,-1, 75,0);
        vcdp->declBus(c+353,"HarnessVRTL__n_38__d_26 recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+361,"HarnessVRTL__n_38__d_26 recv_val", false,-1, 0,0);
        vcdp->declQuad(c+369,"HarnessVRTL__n_38__d_26 send_msg", false,-1, 37,0);
        vcdp->declBus(c+385,"HarnessVRTL__n_38__d_26 send_rdy", false,-1, 0,0);
        vcdp->declBus(c+393,"HarnessVRTL__n_38__d_26 send_val", false,-1, 0,0);
        vcdp->declBus(c+481,"HarnessVRTL__n_38__d_26 v n", false,-1, 31,0);
        vcdp->declBus(c+489,"HarnessVRTL__n_38__d_26 v d", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v clk", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_38__d_26 v reset", false,-1);
        vcdp->declBit(c+361,"HarnessVRTL__n_38__d_26 v recv_val", false,-1);
        vcdp->declBit(c+353,"HarnessVRTL__n_38__d_26 v recv_rdy", false,-1);
        vcdp->declArray(c+329,"HarnessVRTL__n_38__d_26 v recv_msg", false,-1, 75,0);
        vcdp->declBit(c+393,"HarnessVRTL__n_38__d_26 v send_val", false,-1);
        vcdp->declBit(c+385,"HarnessVRTL__n_38__d_26 v send_rdy", false,-1);
        vcdp->declQuad(c+369,"HarnessVRTL__n_38__d_26 v send_msg", false,-1, 37,0);
        vcdp->declBus(c+481,"HarnessVRTL__n_38__d_26 v mult n", false,-1, 31,0);
        vcdp->declBus(c+489,"HarnessVRTL__n_38__d_26 v mult d", false,-1, 31,0);
        vcdp->declBus(c+497,"HarnessVRTL__n_38__d_26 v mult sign", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v mult clk", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_38__d_26 v mult reset", false,-1);
        vcdp->declBit(c+361,"HarnessVRTL__n_38__d_26 v mult recv_val", false,-1);
        vcdp->declBit(c+385,"HarnessVRTL__n_38__d_26 v mult send_rdy", false,-1);
        vcdp->declQuad(c+401,"HarnessVRTL__n_38__d_26 v mult a", false,-1, 37,0);
        vcdp->declQuad(c+417,"HarnessVRTL__n_38__d_26 v mult b", false,-1, 37,0);
        vcdp->declQuad(c+369,"HarnessVRTL__n_38__d_26 v mult c", false,-1, 37,0);
        vcdp->declBit(c+393,"HarnessVRTL__n_38__d_26 v mult send_val", false,-1);
        vcdp->declBit(c+353,"HarnessVRTL__n_38__d_26 v mult recv_rdy", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_38__d_26 v mult do_carry", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_38__d_26 v mult do_add", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_38__d_26 v mult in_wait", false,-1);
        vcdp->declBus(c+481,"HarnessVRTL__n_38__d_26 v mult control n", false,-1, 31,0);
        vcdp->declBus(c+489,"HarnessVRTL__n_38__d_26 v mult control d", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v mult control clk", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_38__d_26 v mult control reset", false,-1);
        vcdp->declBit(c+361,"HarnessVRTL__n_38__d_26 v mult control recv_val", false,-1);
        vcdp->declBit(c+353,"HarnessVRTL__n_38__d_26 v mult control recv_rdy", false,-1);
        vcdp->declBit(c+393,"HarnessVRTL__n_38__d_26 v mult control send_val", false,-1);
        vcdp->declBit(c+385,"HarnessVRTL__n_38__d_26 v mult control send_rdy", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_38__d_26 v mult control in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_38__d_26 v mult control do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_38__d_26 v mult control do_carry", false,-1);
        vcdp->declBus(c+505,"HarnessVRTL__n_38__d_26 v mult control IDLE", false,-1, 1,0);
        vcdp->declBus(c+513,"HarnessVRTL__n_38__d_26 v mult control CALC", false,-1, 1,0);
        vcdp->declBus(c+521,"HarnessVRTL__n_38__d_26 v mult control DONE", false,-1, 1,0);
        vcdp->declBus(c+185,"HarnessVRTL__n_38__d_26 v mult control state", false,-1, 1,0);
        vcdp->declBus(c+433,"HarnessVRTL__n_38__d_26 v mult control next_state", false,-1, 1,0);
        vcdp->declBus(c+193,"HarnessVRTL__n_38__d_26 v mult control counter", false,-1, 5,0);
        vcdp->declBit(c+25,"HarnessVRTL__n_38__d_26 v mult control counter_reset", false,-1);
        vcdp->declBus(c+481,"HarnessVRTL__n_38__d_26 v mult datapath n", false,-1, 31,0);
        vcdp->declBus(c+489,"HarnessVRTL__n_38__d_26 v mult datapath d", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v mult datapath clk", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_38__d_26 v mult datapath reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_38__d_26 v mult datapath in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_38__d_26 v mult datapath do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_38__d_26 v mult datapath do_carry", false,-1);
        vcdp->declQuad(c+169,"HarnessVRTL__n_38__d_26 v mult datapath a", false,-1, 63,0);
        vcdp->declQuad(c+417,"HarnessVRTL__n_38__d_26 v mult datapath b", false,-1, 37,0);
        vcdp->declQuad(c+369,"HarnessVRTL__n_38__d_26 v mult datapath c", false,-1, 37,0);
        vcdp->declQuad(c+33,"HarnessVRTL__n_38__d_26 v mult datapath acc_in", false,-1, 63,0);
        vcdp->declQuad(c+201,"HarnessVRTL__n_38__d_26 v mult datapath acc_out", false,-1, 63,0);
        vcdp->declQuad(c+217,"HarnessVRTL__n_38__d_26 v mult datapath a_const_out", false,-1, 63,0);
        vcdp->declQuad(c+153,"HarnessVRTL__n_38__d_26 v mult datapath a_in", false,-1, 63,0);
        vcdp->declQuad(c+233,"HarnessVRTL__n_38__d_26 v mult datapath a_out", false,-1, 63,0);
        vcdp->declQuad(c+441,"HarnessVRTL__n_38__d_26 v mult datapath b_in", false,-1, 63,0);
        vcdp->declQuad(c+249,"HarnessVRTL__n_38__d_26 v mult datapath b_out", false,-1, 63,0);
        vcdp->declQuad(c+49,"HarnessVRTL__n_38__d_26 v mult datapath add_tmp", false,-1, 63,0);
        vcdp->declQuad(c+529,"HarnessVRTL__n_38__d_26 v mult datapath carry", false,-1, 63,0);
        vcdp->declArray(c+65,"HarnessVRTL__n_38__d_26 v mult datapath carry_tmp", false,-1, 75,0);
        vcdp->declArray(c+89,"HarnessVRTL__n_38__d_26 v mult datapath carry_tmp2", false,-1, 75,0);
        vcdp->declBus(c+545,"HarnessVRTL__n_38__d_26 v mult datapath acc_reg N", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v mult datapath acc_reg clk", false,-1);
        vcdp->declBit(c+457,"HarnessVRTL__n_38__d_26 v mult datapath acc_reg reset", false,-1);
        vcdp->declBit(c+553,"HarnessVRTL__n_38__d_26 v mult datapath acc_reg w", false,-1);
        vcdp->declQuad(c+33,"HarnessVRTL__n_38__d_26 v mult datapath acc_reg d", false,-1, 63,0);
        vcdp->declQuad(c+201,"HarnessVRTL__n_38__d_26 v mult datapath acc_reg q", false,-1, 63,0);
        vcdp->declQuad(c+201,"HarnessVRTL__n_38__d_26 v mult datapath acc_reg regout", false,-1, 63,0);
        vcdp->declBus(c+545,"HarnessVRTL__n_38__d_26 v mult datapath a_const_reg N", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v mult datapath a_const_reg clk", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_38__d_26 v mult datapath a_const_reg reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_38__d_26 v mult datapath a_const_reg w", false,-1);
        vcdp->declQuad(c+169,"HarnessVRTL__n_38__d_26 v mult datapath a_const_reg d", false,-1, 63,0);
        vcdp->declQuad(c+217,"HarnessVRTL__n_38__d_26 v mult datapath a_const_reg q", false,-1, 63,0);
        vcdp->declQuad(c+217,"HarnessVRTL__n_38__d_26 v mult datapath a_const_reg regout", false,-1, 63,0);
        vcdp->declBus(c+545,"HarnessVRTL__n_38__d_26 v mult datapath a_reg N", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v mult datapath a_reg clk", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_38__d_26 v mult datapath a_reg reset", false,-1);
        vcdp->declBit(c+553,"HarnessVRTL__n_38__d_26 v mult datapath a_reg w", false,-1);
        vcdp->declQuad(c+153,"HarnessVRTL__n_38__d_26 v mult datapath a_reg d", false,-1, 63,0);
        vcdp->declQuad(c+233,"HarnessVRTL__n_38__d_26 v mult datapath a_reg q", false,-1, 63,0);
        vcdp->declQuad(c+233,"HarnessVRTL__n_38__d_26 v mult datapath a_reg regout", false,-1, 63,0);
        vcdp->declBus(c+481,"HarnessVRTL__n_38__d_26 v mult datapath b_reg N", false,-1, 31,0);
        vcdp->declBit(c+313,"HarnessVRTL__n_38__d_26 v mult datapath b_reg clk", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_38__d_26 v mult datapath b_reg reset", false,-1);
        vcdp->declBit(c+553,"HarnessVRTL__n_38__d_26 v mult datapath b_reg w", false,-1);
        vcdp->declQuad(c+465,"HarnessVRTL__n_38__d_26 v mult datapath b_reg d", false,-1, 37,0);
        vcdp->declQuad(c+265,"HarnessVRTL__n_38__d_26 v mult datapath b_reg q", false,-1, 37,0);
        vcdp->declQuad(c+265,"HarnessVRTL__n_38__d_26 v mult datapath b_reg regout", false,-1, 37,0);
        vcdp->declBus(c+545,"HarnessVRTL__n_38__d_26 v mult datapath a_sel p_nbits", false,-1, 31,0);
        vcdp->declQuad(c+281,"HarnessVRTL__n_38__d_26 v mult datapath a_sel in0", false,-1, 63,0);
        vcdp->declQuad(c+169,"HarnessVRTL__n_38__d_26 v mult datapath a_sel in1", false,-1, 63,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_38__d_26 v mult datapath a_sel sel", false,-1);
        vcdp->declQuad(c+153,"HarnessVRTL__n_38__d_26 v mult datapath a_sel out", false,-1, 63,0);
        vcdp->declBus(c+481,"HarnessVRTL__n_38__d_26 v mult datapath b_sel p_nbits", false,-1, 31,0);
        vcdp->declQuad(c+297,"HarnessVRTL__n_38__d_26 v mult datapath b_sel in0", false,-1, 37,0);
        vcdp->declQuad(c+417,"HarnessVRTL__n_38__d_26 v mult datapath b_sel in1", false,-1, 37,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_38__d_26 v mult datapath b_sel sel", false,-1);
        vcdp->declQuad(c+465,"HarnessVRTL__n_38__d_26 v mult datapath b_sel out", false,-1, 37,0);
        vcdp->declBus(c+545,"HarnessVRTL__n_38__d_26 v mult datapath carry_sel p_nbits", false,-1, 31,0);
        vcdp->declQuad(c+233,"HarnessVRTL__n_38__d_26 v mult datapath carry_sel in0", false,-1, 63,0);
        vcdp->declQuad(c+113,"HarnessVRTL__n_38__d_26 v mult datapath carry_sel in1", false,-1, 63,0);
        vcdp->declBit(c+1,"HarnessVRTL__n_38__d_26 v mult datapath carry_sel sel", false,-1);
        vcdp->declQuad(c+49,"HarnessVRTL__n_38__d_26 v mult datapath carry_sel out", false,-1, 63,0);
        vcdp->declBus(c+545,"HarnessVRTL__n_38__d_26 v mult datapath add_sel p_nbits", false,-1, 31,0);
        vcdp->declQuad(c+201,"HarnessVRTL__n_38__d_26 v mult datapath add_sel in0", false,-1, 63,0);
        vcdp->declQuad(c+129,"HarnessVRTL__n_38__d_26 v mult datapath add_sel in1", false,-1, 63,0);
        vcdp->declBit(c+145,"HarnessVRTL__n_38__d_26 v mult datapath add_sel sel", false,-1);
        vcdp->declQuad(c+33,"HarnessVRTL__n_38__d_26 v mult datapath add_sel out", false,-1, 63,0);
    }
}

void VHarnessVRTL__n_38__d_26::traceFullThis__1(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp15[3];
    WData/*95:0*/ __Vtemp16[3];
    WData/*95:0*/ __Vtemp17[3];
    WData/*95:0*/ __Vtemp20[3];
    WData/*95:0*/ __Vtemp21[3];
    WData/*95:0*/ __Vtemp22[3];
    WData/*95:0*/ __Vtemp25[3];
    WData/*95:0*/ __Vtemp26[3];
    WData/*95:0*/ __Vtemp27[3];
    WData/*95:0*/ __Vtemp28[3];
    WData/*95:0*/ __Vtemp30[3];
    WData/*95:0*/ __Vtemp31[3];
    WData/*95:0*/ __Vtemp32[3];
    WData/*95:0*/ __Vtemp35[3];
    WData/*95:0*/ __Vtemp36[3];
    WData/*95:0*/ __Vtemp37[3];
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry));
        vcdp->fullBit(c+9,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_add));
        vcdp->fullBit(c+17,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait));
        vcdp->fullBit(c+25,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__counter_reset));
        VL_SHIFTL_WWI(76,76,32, __Vtemp15, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp16, __Vtemp15, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp17, __Vtemp16, 0x25U);
        vcdp->fullQuad(c+33,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                               ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                   ? (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                      + ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                          ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                              ? (((QData)((IData)(
                                                                  __Vtemp17[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp17[0U])))
                                              : VL_ULL(0))
                                          : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))
                                   : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)),64);
        VL_SHIFTL_WWI(76,76,32, __Vtemp20, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp21, __Vtemp20, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp22, __Vtemp21, 0x25U);
        vcdp->fullQuad(c+49,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                               ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                   ? (((QData)((IData)(
                                                       __Vtemp22[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp22[0U])))
                                   : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)),64);
        vcdp->fullArray(c+65,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp),76);
        VL_SHIFTL_WWI(76,76,32, __Vtemp25, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp26, __Vtemp25, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp27, __Vtemp26, 0x25U);
        __Vtemp28[0U] = __Vtemp27[0U];
        __Vtemp28[1U] = __Vtemp27[1U];
        __Vtemp28[2U] = (0xfffU & __Vtemp27[2U]);
        vcdp->fullArray(c+89,(__Vtemp28),76);
        VL_SHIFTL_WWI(76,76,32, __Vtemp30, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp31, __Vtemp30, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp32, __Vtemp31, 0x25U);
        vcdp->fullQuad(c+113,((((QData)((IData)(__Vtemp32[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp32[0U])))),64);
        VL_SHIFTL_WWI(76,76,32, __Vtemp35, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp36, __Vtemp35, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp37, __Vtemp36, 0x25U);
        vcdp->fullQuad(c+129,((vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                               + ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                       ? (((QData)((IData)(
                                                           __Vtemp37[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp37[0U])))
                                       : VL_ULL(0))
                                   : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))),64);
        vcdp->fullBit(c+145,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel));
        vcdp->fullQuad(c+153,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                    ? vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a
                                    : VL_ULL(0)) : 
                               (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                << 1U))),64);
        vcdp->fullQuad(c+169,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a),64);
        vcdp->fullBus(c+185,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__state),2);
        vcdp->fullBus(c+193,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__counter),6);
        vcdp->fullQuad(c+201,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout),64);
        vcdp->fullQuad(c+217,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout),64);
        vcdp->fullQuad(c+233,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout),64);
        vcdp->fullQuad(c+249,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),64);
        vcdp->fullQuad(c+265,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),38);
        vcdp->fullQuad(c+281,((vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                               << 1U)),64);
        vcdp->fullQuad(c+297,((VL_ULL(0x3fffffffff) 
                               & (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
                                  >> 1U))),38);
        vcdp->fullBit(c+313,(vlTOPp->clk));
        vcdp->fullBit(c+321,(vlTOPp->reset));
        vcdp->fullArray(c+329,(vlTOPp->recv_msg),76);
        vcdp->fullBit(c+353,(vlTOPp->recv_rdy));
        vcdp->fullBit(c+361,(vlTOPp->recv_val));
        vcdp->fullQuad(c+369,(vlTOPp->send_msg),38);
        vcdp->fullBit(c+385,(vlTOPp->send_rdy));
        vcdp->fullBit(c+393,(vlTOPp->send_val));
        vcdp->fullQuad(c+401,((VL_ULL(0x3fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->recv_msg[2U])) 
                                   << 0x1aU) | ((QData)((IData)(
                                                                vlTOPp->recv_msg[1U])) 
                                                >> 6U)))),38);
        vcdp->fullQuad(c+417,((VL_ULL(0x3fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->recv_msg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->recv_msg[0U]))))),38);
        vcdp->fullBus(c+433,(((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__state))
                               ? ((IData)(vlTOPp->recv_val)
                                   ? 1U : 0U) : ((1U 
                                                  == (IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__state))
                                                  ? 
                                                 ((0x25U 
                                                   == (IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__counter))
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__state))
                                                   ? 
                                                  ((IData)(vlTOPp->send_rdy)
                                                    ? 0U
                                                    : 2U)
                                                   : 0U)))),2);
        vcdp->fullQuad(c+441,((VL_ULL(0x3fffffffff) 
                               & ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                       ? (((QData)((IData)(
                                                           vlTOPp->recv_msg[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->recv_msg[0U])))
                                       : VL_ULL(0))
                                   : (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
                                      >> 1U)))),64);
        vcdp->fullBit(c+457,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait) 
                              | (IData)(vlTOPp->reset))));
        vcdp->fullQuad(c+465,((VL_ULL(0x3fffffffff) 
                               & ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                       ? (((QData)((IData)(
                                                           vlTOPp->recv_msg[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->recv_msg[0U])))
                                       : VL_ULL(0))
                                   : (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
                                      >> 1U)))),38);
        vcdp->fullBus(c+481,(0x26U),32);
        vcdp->fullBus(c+489,(0x1aU),32);
        vcdp->fullBus(c+497,(1U),32);
        vcdp->fullBus(c+505,(0U),2);
        vcdp->fullBus(c+513,(1U),2);
        vcdp->fullBus(c+521,(2U),2);
        vcdp->fullQuad(c+529,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry),64);
        vcdp->fullBus(c+545,(0x40U),32);
        vcdp->fullBit(c+553,(1U));
    }
}
