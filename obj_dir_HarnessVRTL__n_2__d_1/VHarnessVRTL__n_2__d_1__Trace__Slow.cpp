// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHarnessVRTL__n_2__d_1__Syms.h"


//======================

void VHarnessVRTL__n_2__d_1::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VHarnessVRTL__n_2__d_1::traceInit, &VHarnessVRTL__n_2__d_1::traceFull, &VHarnessVRTL__n_2__d_1::traceChg, this);
}
void VHarnessVRTL__n_2__d_1::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VHarnessVRTL__n_2__d_1* t = (VHarnessVRTL__n_2__d_1*)userthis;
    VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VHarnessVRTL__n_2__d_1::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHarnessVRTL__n_2__d_1* t = (VHarnessVRTL__n_2__d_1*)userthis;
    VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VHarnessVRTL__n_2__d_1::traceInitThis(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VHarnessVRTL__n_2__d_1::traceFullThis(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VHarnessVRTL__n_2__d_1::traceInitThis__1(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+185,"clk", false,-1, 0,0);
        vcdp->declBus(c+193,"reset", false,-1, 0,0);
        vcdp->declBus(c+201,"recv_msg", false,-1, 3,0);
        vcdp->declBus(c+209,"recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+217,"recv_val", false,-1, 0,0);
        vcdp->declBus(c+225,"send_msg", false,-1, 1,0);
        vcdp->declBus(c+233,"send_rdy", false,-1, 0,0);
        vcdp->declBus(c+241,"send_val", false,-1, 0,0);
        vcdp->declBus(c+185,"HarnessVRTL__n_2__d_1 clk", false,-1, 0,0);
        vcdp->declBus(c+193,"HarnessVRTL__n_2__d_1 reset", false,-1, 0,0);
        vcdp->declBus(c+201,"HarnessVRTL__n_2__d_1 recv_msg", false,-1, 3,0);
        vcdp->declBus(c+209,"HarnessVRTL__n_2__d_1 recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+217,"HarnessVRTL__n_2__d_1 recv_val", false,-1, 0,0);
        vcdp->declBus(c+225,"HarnessVRTL__n_2__d_1 send_msg", false,-1, 1,0);
        vcdp->declBus(c+233,"HarnessVRTL__n_2__d_1 send_rdy", false,-1, 0,0);
        vcdp->declBus(c+241,"HarnessVRTL__n_2__d_1 send_val", false,-1, 0,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_2__d_1 v n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_2__d_1 v d", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_2__d_1 v reset", false,-1);
        vcdp->declBit(c+217,"HarnessVRTL__n_2__d_1 v recv_val", false,-1);
        vcdp->declBit(c+209,"HarnessVRTL__n_2__d_1 v recv_rdy", false,-1);
        vcdp->declBus(c+201,"HarnessVRTL__n_2__d_1 v recv_msg", false,-1, 3,0);
        vcdp->declBit(c+241,"HarnessVRTL__n_2__d_1 v send_val", false,-1);
        vcdp->declBit(c+233,"HarnessVRTL__n_2__d_1 v send_rdy", false,-1);
        vcdp->declBus(c+225,"HarnessVRTL__n_2__d_1 v send_msg", false,-1, 1,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_2__d_1 v mult n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_2__d_1 v mult d", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_2__d_1 v mult sign", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v mult clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_2__d_1 v mult reset", false,-1);
        vcdp->declBit(c+217,"HarnessVRTL__n_2__d_1 v mult recv_val", false,-1);
        vcdp->declBit(c+233,"HarnessVRTL__n_2__d_1 v mult send_rdy", false,-1);
        vcdp->declBus(c+249,"HarnessVRTL__n_2__d_1 v mult a", false,-1, 1,0);
        vcdp->declBus(c+257,"HarnessVRTL__n_2__d_1 v mult b", false,-1, 1,0);
        vcdp->declBus(c+225,"HarnessVRTL__n_2__d_1 v mult c", false,-1, 1,0);
        vcdp->declBit(c+241,"HarnessVRTL__n_2__d_1 v mult send_val", false,-1);
        vcdp->declBit(c+209,"HarnessVRTL__n_2__d_1 v mult recv_rdy", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_2__d_1 v mult do_carry", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_2__d_1 v mult do_add", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_2__d_1 v mult in_wait", false,-1);
        vcdp->declBus(c+289,"HarnessVRTL__n_2__d_1 v mult control n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_2__d_1 v mult control d", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v mult control clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_2__d_1 v mult control reset", false,-1);
        vcdp->declBit(c+217,"HarnessVRTL__n_2__d_1 v mult control recv_val", false,-1);
        vcdp->declBit(c+209,"HarnessVRTL__n_2__d_1 v mult control recv_rdy", false,-1);
        vcdp->declBit(c+241,"HarnessVRTL__n_2__d_1 v mult control send_val", false,-1);
        vcdp->declBit(c+233,"HarnessVRTL__n_2__d_1 v mult control send_rdy", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_2__d_1 v mult control in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_2__d_1 v mult control do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_2__d_1 v mult control do_carry", false,-1);
        vcdp->declBus(c+305,"HarnessVRTL__n_2__d_1 v mult control IDLE", false,-1, 1,0);
        vcdp->declBus(c+313,"HarnessVRTL__n_2__d_1 v mult control CALC", false,-1, 1,0);
        vcdp->declBus(c+321,"HarnessVRTL__n_2__d_1 v mult control DONE", false,-1, 1,0);
        vcdp->declBus(c+113,"HarnessVRTL__n_2__d_1 v mult control state", false,-1, 1,0);
        vcdp->declBus(c+97,"HarnessVRTL__n_2__d_1 v mult control next_state", false,-1, 1,0);
        vcdp->declBus(c+121,"HarnessVRTL__n_2__d_1 v mult control counter", false,-1, 0,0);
        vcdp->declBit(c+25,"HarnessVRTL__n_2__d_1 v mult control counter_reset", false,-1);
        vcdp->declBus(c+289,"HarnessVRTL__n_2__d_1 v mult datapath n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_2__d_1 v mult datapath d", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v mult datapath clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_2__d_1 v mult datapath reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_2__d_1 v mult datapath in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_2__d_1 v mult datapath do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_2__d_1 v mult datapath do_carry", false,-1);
        vcdp->declBus(c+105,"HarnessVRTL__n_2__d_1 v mult datapath a", false,-1, 2,0);
        vcdp->declBus(c+257,"HarnessVRTL__n_2__d_1 v mult datapath b", false,-1, 1,0);
        vcdp->declBus(c+225,"HarnessVRTL__n_2__d_1 v mult datapath c", false,-1, 1,0);
        vcdp->declBus(c+33,"HarnessVRTL__n_2__d_1 v mult datapath acc_in", false,-1, 2,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_2__d_1 v mult datapath acc_out", false,-1, 2,0);
        vcdp->declBus(c+137,"HarnessVRTL__n_2__d_1 v mult datapath a_const_out", false,-1, 2,0);
        vcdp->declBus(c+89,"HarnessVRTL__n_2__d_1 v mult datapath a_in", false,-1, 2,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_2__d_1 v mult datapath a_out", false,-1, 2,0);
        vcdp->declBus(c+265,"HarnessVRTL__n_2__d_1 v mult datapath b_in", false,-1, 2,0);
        vcdp->declBus(c+153,"HarnessVRTL__n_2__d_1 v mult datapath b_out", false,-1, 2,0);
        vcdp->declBus(c+41,"HarnessVRTL__n_2__d_1 v mult datapath add_tmp", false,-1, 2,0);
        vcdp->declBus(c+329,"HarnessVRTL__n_2__d_1 v mult datapath carry", false,-1, 2,0);
        vcdp->declBus(c+49,"HarnessVRTL__n_2__d_1 v mult datapath carry_tmp", false,-1, 3,0);
        vcdp->declBus(c+57,"HarnessVRTL__n_2__d_1 v mult datapath carry_tmp2", false,-1, 3,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_2__d_1 v mult datapath acc_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v mult datapath acc_reg clk", false,-1);
        vcdp->declBit(c+273,"HarnessVRTL__n_2__d_1 v mult datapath acc_reg reset", false,-1);
        vcdp->declBit(c+345,"HarnessVRTL__n_2__d_1 v mult datapath acc_reg w", false,-1);
        vcdp->declBus(c+33,"HarnessVRTL__n_2__d_1 v mult datapath acc_reg d", false,-1, 2,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_2__d_1 v mult datapath acc_reg q", false,-1, 2,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_2__d_1 v mult datapath acc_reg regout", false,-1, 2,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_2__d_1 v mult datapath a_const_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v mult datapath a_const_reg clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_2__d_1 v mult datapath a_const_reg reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_2__d_1 v mult datapath a_const_reg w", false,-1);
        vcdp->declBus(c+105,"HarnessVRTL__n_2__d_1 v mult datapath a_const_reg d", false,-1, 2,0);
        vcdp->declBus(c+137,"HarnessVRTL__n_2__d_1 v mult datapath a_const_reg q", false,-1, 2,0);
        vcdp->declBus(c+137,"HarnessVRTL__n_2__d_1 v mult datapath a_const_reg regout", false,-1, 2,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_2__d_1 v mult datapath a_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v mult datapath a_reg clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_2__d_1 v mult datapath a_reg reset", false,-1);
        vcdp->declBit(c+345,"HarnessVRTL__n_2__d_1 v mult datapath a_reg w", false,-1);
        vcdp->declBus(c+89,"HarnessVRTL__n_2__d_1 v mult datapath a_reg d", false,-1, 2,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_2__d_1 v mult datapath a_reg q", false,-1, 2,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_2__d_1 v mult datapath a_reg regout", false,-1, 2,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_2__d_1 v mult datapath b_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_2__d_1 v mult datapath b_reg clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_2__d_1 v mult datapath b_reg reset", false,-1);
        vcdp->declBit(c+345,"HarnessVRTL__n_2__d_1 v mult datapath b_reg w", false,-1);
        vcdp->declBus(c+281,"HarnessVRTL__n_2__d_1 v mult datapath b_reg d", false,-1, 1,0);
        vcdp->declBus(c+161,"HarnessVRTL__n_2__d_1 v mult datapath b_reg q", false,-1, 1,0);
        vcdp->declBus(c+161,"HarnessVRTL__n_2__d_1 v mult datapath b_reg regout", false,-1, 1,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_2__d_1 v mult datapath a_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+169,"HarnessVRTL__n_2__d_1 v mult datapath a_sel in0", false,-1, 2,0);
        vcdp->declBus(c+105,"HarnessVRTL__n_2__d_1 v mult datapath a_sel in1", false,-1, 2,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_2__d_1 v mult datapath a_sel sel", false,-1);
        vcdp->declBus(c+89,"HarnessVRTL__n_2__d_1 v mult datapath a_sel out", false,-1, 2,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_2__d_1 v mult datapath b_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+177,"HarnessVRTL__n_2__d_1 v mult datapath b_sel in0", false,-1, 1,0);
        vcdp->declBus(c+257,"HarnessVRTL__n_2__d_1 v mult datapath b_sel in1", false,-1, 1,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_2__d_1 v mult datapath b_sel sel", false,-1);
        vcdp->declBus(c+281,"HarnessVRTL__n_2__d_1 v mult datapath b_sel out", false,-1, 1,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_2__d_1 v mult datapath carry_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_2__d_1 v mult datapath carry_sel in0", false,-1, 2,0);
        vcdp->declBus(c+65,"HarnessVRTL__n_2__d_1 v mult datapath carry_sel in1", false,-1, 2,0);
        vcdp->declBit(c+1,"HarnessVRTL__n_2__d_1 v mult datapath carry_sel sel", false,-1);
        vcdp->declBus(c+41,"HarnessVRTL__n_2__d_1 v mult datapath carry_sel out", false,-1, 2,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_2__d_1 v mult datapath add_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_2__d_1 v mult datapath add_sel in0", false,-1, 2,0);
        vcdp->declBus(c+73,"HarnessVRTL__n_2__d_1 v mult datapath add_sel in1", false,-1, 2,0);
        vcdp->declBit(c+81,"HarnessVRTL__n_2__d_1 v mult datapath add_sel sel", false,-1);
        vcdp->declBus(c+33,"HarnessVRTL__n_2__d_1 v mult datapath add_sel out", false,-1, 2,0);
    }
}

void VHarnessVRTL__n_2__d_1::traceFullThis__1(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry));
        vcdp->fullBit(c+9,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add));
        vcdp->fullBit(c+17,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait));
        vcdp->fullBit(c+25,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset));
        vcdp->fullBus(c+33,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                    ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                                           + ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                               ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                                   ? 
                                                  (0xfU 
                                                   & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                        << 2U) 
                                                       - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                      << 1U))
                                                   : 0U)
                                               : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                                        : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)))),3);
        vcdp->fullBus(c+41,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                    ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                        ? (0xfU & (
                                                   (((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                     << 2U) 
                                                    - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                   << 1U))
                                        : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))),3);
        vcdp->fullBus(c+49,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp),4);
        vcdp->fullBus(c+57,((0xfU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                       << 2U) - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                     << 1U))),4);
        vcdp->fullBus(c+65,((7U & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                     << 2U) - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                   << 1U))),3);
        vcdp->fullBus(c+73,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                                   + ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                       ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                           ? (0xfU 
                                              & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                   << 2U) 
                                                  - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                 << 1U))
                                           : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))))),3);
        vcdp->fullBit(c+81,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel));
        vcdp->fullBus(c+89,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                    ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                        ? (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a)
                                        : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                                 << 1U)))),3);
        vcdp->fullBus(c+97,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state),2);
        vcdp->fullBus(c+105,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a),3);
        vcdp->fullBus(c+113,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state),2);
        vcdp->fullBit(c+121,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter));
        vcdp->fullBus(c+129,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout),3);
        vcdp->fullBus(c+137,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout),3);
        vcdp->fullBus(c+145,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout),3);
        vcdp->fullBus(c+153,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),3);
        vcdp->fullBus(c+161,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),2);
        vcdp->fullBus(c+169,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                    << 1U))),3);
        vcdp->fullBus(c+177,((3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                    >> 1U))),2);
        vcdp->fullBit(c+185,(vlTOPp->clk));
        vcdp->fullBit(c+193,(vlTOPp->reset));
        vcdp->fullBus(c+201,(vlTOPp->recv_msg),4);
        vcdp->fullBit(c+209,(vlTOPp->recv_rdy));
        vcdp->fullBit(c+217,(vlTOPp->recv_val));
        vcdp->fullBus(c+225,(vlTOPp->send_msg),2);
        vcdp->fullBit(c+233,(vlTOPp->send_rdy));
        vcdp->fullBit(c+241,(vlTOPp->send_val));
        vcdp->fullBus(c+249,((3U & ((IData)(vlTOPp->recv_msg) 
                                    >> 2U))),2);
        vcdp->fullBus(c+257,((3U & (IData)(vlTOPp->recv_msg))),2);
        vcdp->fullBus(c+265,((3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                     ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                         ? (IData)(vlTOPp->recv_msg)
                                         : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                                  >> 1U)))),3);
        vcdp->fullBit(c+273,(((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait) 
                              | (IData)(vlTOPp->reset))));
        vcdp->fullBus(c+281,((3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                     ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                         ? (IData)(vlTOPp->recv_msg)
                                         : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                                  >> 1U)))),2);
        vcdp->fullBus(c+289,(2U),32);
        vcdp->fullBus(c+297,(1U),32);
        vcdp->fullBus(c+305,(0U),2);
        vcdp->fullBus(c+313,(1U),2);
        vcdp->fullBus(c+321,(2U),2);
        vcdp->fullBus(c+329,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry),3);
        vcdp->fullBus(c+337,(3U),32);
        vcdp->fullBit(c+345,(1U));
    }
}
