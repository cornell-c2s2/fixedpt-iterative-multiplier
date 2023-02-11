// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHarnessVRTL__n_6__d_3__Syms.h"


//======================

void VHarnessVRTL__n_6__d_3::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VHarnessVRTL__n_6__d_3::traceInit, &VHarnessVRTL__n_6__d_3::traceFull, &VHarnessVRTL__n_6__d_3::traceChg, this);
}
void VHarnessVRTL__n_6__d_3::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VHarnessVRTL__n_6__d_3* t = (VHarnessVRTL__n_6__d_3*)userthis;
    VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VHarnessVRTL__n_6__d_3::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHarnessVRTL__n_6__d_3* t = (VHarnessVRTL__n_6__d_3*)userthis;
    VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VHarnessVRTL__n_6__d_3::traceInitThis(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VHarnessVRTL__n_6__d_3::traceFullThis(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VHarnessVRTL__n_6__d_3::traceInitThis__1(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+185,"clk", false,-1, 0,0);
        vcdp->declBus(c+193,"reset", false,-1, 0,0);
        vcdp->declBus(c+201,"recv_msg", false,-1, 11,0);
        vcdp->declBus(c+209,"recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+217,"recv_val", false,-1, 0,0);
        vcdp->declBus(c+225,"send_msg", false,-1, 5,0);
        vcdp->declBus(c+233,"send_rdy", false,-1, 0,0);
        vcdp->declBus(c+241,"send_val", false,-1, 0,0);
        vcdp->declBus(c+185,"HarnessVRTL__n_6__d_3 clk", false,-1, 0,0);
        vcdp->declBus(c+193,"HarnessVRTL__n_6__d_3 reset", false,-1, 0,0);
        vcdp->declBus(c+201,"HarnessVRTL__n_6__d_3 recv_msg", false,-1, 11,0);
        vcdp->declBus(c+209,"HarnessVRTL__n_6__d_3 recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+217,"HarnessVRTL__n_6__d_3 recv_val", false,-1, 0,0);
        vcdp->declBus(c+225,"HarnessVRTL__n_6__d_3 send_msg", false,-1, 5,0);
        vcdp->declBus(c+233,"HarnessVRTL__n_6__d_3 send_rdy", false,-1, 0,0);
        vcdp->declBus(c+241,"HarnessVRTL__n_6__d_3 send_val", false,-1, 0,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_6__d_3 v n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_6__d_3 v d", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_6__d_3 v reset", false,-1);
        vcdp->declBit(c+217,"HarnessVRTL__n_6__d_3 v recv_val", false,-1);
        vcdp->declBit(c+209,"HarnessVRTL__n_6__d_3 v recv_rdy", false,-1);
        vcdp->declBus(c+201,"HarnessVRTL__n_6__d_3 v recv_msg", false,-1, 11,0);
        vcdp->declBit(c+241,"HarnessVRTL__n_6__d_3 v send_val", false,-1);
        vcdp->declBit(c+233,"HarnessVRTL__n_6__d_3 v send_rdy", false,-1);
        vcdp->declBus(c+225,"HarnessVRTL__n_6__d_3 v send_msg", false,-1, 5,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_6__d_3 v mult n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_6__d_3 v mult d", false,-1, 31,0);
        vcdp->declBus(c+305,"HarnessVRTL__n_6__d_3 v mult sign", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v mult clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_6__d_3 v mult reset", false,-1);
        vcdp->declBit(c+217,"HarnessVRTL__n_6__d_3 v mult recv_val", false,-1);
        vcdp->declBit(c+233,"HarnessVRTL__n_6__d_3 v mult send_rdy", false,-1);
        vcdp->declBus(c+249,"HarnessVRTL__n_6__d_3 v mult a", false,-1, 5,0);
        vcdp->declBus(c+257,"HarnessVRTL__n_6__d_3 v mult b", false,-1, 5,0);
        vcdp->declBus(c+225,"HarnessVRTL__n_6__d_3 v mult c", false,-1, 5,0);
        vcdp->declBit(c+241,"HarnessVRTL__n_6__d_3 v mult send_val", false,-1);
        vcdp->declBit(c+209,"HarnessVRTL__n_6__d_3 v mult recv_rdy", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_6__d_3 v mult do_carry", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_6__d_3 v mult do_add", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_6__d_3 v mult in_wait", false,-1);
        vcdp->declBus(c+289,"HarnessVRTL__n_6__d_3 v mult control n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_6__d_3 v mult control d", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v mult control clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_6__d_3 v mult control reset", false,-1);
        vcdp->declBit(c+217,"HarnessVRTL__n_6__d_3 v mult control recv_val", false,-1);
        vcdp->declBit(c+209,"HarnessVRTL__n_6__d_3 v mult control recv_rdy", false,-1);
        vcdp->declBit(c+241,"HarnessVRTL__n_6__d_3 v mult control send_val", false,-1);
        vcdp->declBit(c+233,"HarnessVRTL__n_6__d_3 v mult control send_rdy", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_6__d_3 v mult control in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_6__d_3 v mult control do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_6__d_3 v mult control do_carry", false,-1);
        vcdp->declBus(c+313,"HarnessVRTL__n_6__d_3 v mult control IDLE", false,-1, 1,0);
        vcdp->declBus(c+321,"HarnessVRTL__n_6__d_3 v mult control CALC", false,-1, 1,0);
        vcdp->declBus(c+329,"HarnessVRTL__n_6__d_3 v mult control DONE", false,-1, 1,0);
        vcdp->declBus(c+113,"HarnessVRTL__n_6__d_3 v mult control state", false,-1, 1,0);
        vcdp->declBus(c+97,"HarnessVRTL__n_6__d_3 v mult control next_state", false,-1, 1,0);
        vcdp->declBus(c+121,"HarnessVRTL__n_6__d_3 v mult control counter", false,-1, 2,0);
        vcdp->declBit(c+25,"HarnessVRTL__n_6__d_3 v mult control counter_reset", false,-1);
        vcdp->declBus(c+289,"HarnessVRTL__n_6__d_3 v mult datapath n", false,-1, 31,0);
        vcdp->declBus(c+297,"HarnessVRTL__n_6__d_3 v mult datapath d", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v mult datapath clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_6__d_3 v mult datapath reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_6__d_3 v mult datapath in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_6__d_3 v mult datapath do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_6__d_3 v mult datapath do_carry", false,-1);
        vcdp->declBus(c+105,"HarnessVRTL__n_6__d_3 v mult datapath a", false,-1, 8,0);
        vcdp->declBus(c+257,"HarnessVRTL__n_6__d_3 v mult datapath b", false,-1, 5,0);
        vcdp->declBus(c+225,"HarnessVRTL__n_6__d_3 v mult datapath c", false,-1, 5,0);
        vcdp->declBus(c+33,"HarnessVRTL__n_6__d_3 v mult datapath acc_in", false,-1, 8,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_6__d_3 v mult datapath acc_out", false,-1, 8,0);
        vcdp->declBus(c+137,"HarnessVRTL__n_6__d_3 v mult datapath a_const_out", false,-1, 8,0);
        vcdp->declBus(c+89,"HarnessVRTL__n_6__d_3 v mult datapath a_in", false,-1, 8,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_6__d_3 v mult datapath a_out", false,-1, 8,0);
        vcdp->declBus(c+265,"HarnessVRTL__n_6__d_3 v mult datapath b_in", false,-1, 8,0);
        vcdp->declBus(c+153,"HarnessVRTL__n_6__d_3 v mult datapath b_out", false,-1, 8,0);
        vcdp->declBus(c+41,"HarnessVRTL__n_6__d_3 v mult datapath add_tmp", false,-1, 8,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_6__d_3 v mult datapath carry", false,-1, 8,0);
        vcdp->declBus(c+49,"HarnessVRTL__n_6__d_3 v mult datapath carry_tmp", false,-1, 11,0);
        vcdp->declBus(c+57,"HarnessVRTL__n_6__d_3 v mult datapath carry_tmp2", false,-1, 11,0);
        vcdp->declBus(c+345,"HarnessVRTL__n_6__d_3 v mult datapath acc_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v mult datapath acc_reg clk", false,-1);
        vcdp->declBit(c+273,"HarnessVRTL__n_6__d_3 v mult datapath acc_reg reset", false,-1);
        vcdp->declBit(c+353,"HarnessVRTL__n_6__d_3 v mult datapath acc_reg w", false,-1);
        vcdp->declBus(c+33,"HarnessVRTL__n_6__d_3 v mult datapath acc_reg d", false,-1, 8,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_6__d_3 v mult datapath acc_reg q", false,-1, 8,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_6__d_3 v mult datapath acc_reg regout", false,-1, 8,0);
        vcdp->declBus(c+345,"HarnessVRTL__n_6__d_3 v mult datapath a_const_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v mult datapath a_const_reg clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_6__d_3 v mult datapath a_const_reg reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_6__d_3 v mult datapath a_const_reg w", false,-1);
        vcdp->declBus(c+105,"HarnessVRTL__n_6__d_3 v mult datapath a_const_reg d", false,-1, 8,0);
        vcdp->declBus(c+137,"HarnessVRTL__n_6__d_3 v mult datapath a_const_reg q", false,-1, 8,0);
        vcdp->declBus(c+137,"HarnessVRTL__n_6__d_3 v mult datapath a_const_reg regout", false,-1, 8,0);
        vcdp->declBus(c+345,"HarnessVRTL__n_6__d_3 v mult datapath a_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v mult datapath a_reg clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_6__d_3 v mult datapath a_reg reset", false,-1);
        vcdp->declBit(c+353,"HarnessVRTL__n_6__d_3 v mult datapath a_reg w", false,-1);
        vcdp->declBus(c+89,"HarnessVRTL__n_6__d_3 v mult datapath a_reg d", false,-1, 8,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_6__d_3 v mult datapath a_reg q", false,-1, 8,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_6__d_3 v mult datapath a_reg regout", false,-1, 8,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_6__d_3 v mult datapath b_reg N", false,-1, 31,0);
        vcdp->declBit(c+185,"HarnessVRTL__n_6__d_3 v mult datapath b_reg clk", false,-1);
        vcdp->declBit(c+193,"HarnessVRTL__n_6__d_3 v mult datapath b_reg reset", false,-1);
        vcdp->declBit(c+353,"HarnessVRTL__n_6__d_3 v mult datapath b_reg w", false,-1);
        vcdp->declBus(c+281,"HarnessVRTL__n_6__d_3 v mult datapath b_reg d", false,-1, 5,0);
        vcdp->declBus(c+161,"HarnessVRTL__n_6__d_3 v mult datapath b_reg q", false,-1, 5,0);
        vcdp->declBus(c+161,"HarnessVRTL__n_6__d_3 v mult datapath b_reg regout", false,-1, 5,0);
        vcdp->declBus(c+345,"HarnessVRTL__n_6__d_3 v mult datapath a_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+169,"HarnessVRTL__n_6__d_3 v mult datapath a_sel in0", false,-1, 8,0);
        vcdp->declBus(c+105,"HarnessVRTL__n_6__d_3 v mult datapath a_sel in1", false,-1, 8,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_6__d_3 v mult datapath a_sel sel", false,-1);
        vcdp->declBus(c+89,"HarnessVRTL__n_6__d_3 v mult datapath a_sel out", false,-1, 8,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_6__d_3 v mult datapath b_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+177,"HarnessVRTL__n_6__d_3 v mult datapath b_sel in0", false,-1, 5,0);
        vcdp->declBus(c+257,"HarnessVRTL__n_6__d_3 v mult datapath b_sel in1", false,-1, 5,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_6__d_3 v mult datapath b_sel sel", false,-1);
        vcdp->declBus(c+281,"HarnessVRTL__n_6__d_3 v mult datapath b_sel out", false,-1, 5,0);
        vcdp->declBus(c+345,"HarnessVRTL__n_6__d_3 v mult datapath carry_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+145,"HarnessVRTL__n_6__d_3 v mult datapath carry_sel in0", false,-1, 8,0);
        vcdp->declBus(c+65,"HarnessVRTL__n_6__d_3 v mult datapath carry_sel in1", false,-1, 8,0);
        vcdp->declBit(c+1,"HarnessVRTL__n_6__d_3 v mult datapath carry_sel sel", false,-1);
        vcdp->declBus(c+41,"HarnessVRTL__n_6__d_3 v mult datapath carry_sel out", false,-1, 8,0);
        vcdp->declBus(c+345,"HarnessVRTL__n_6__d_3 v mult datapath add_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+129,"HarnessVRTL__n_6__d_3 v mult datapath add_sel in0", false,-1, 8,0);
        vcdp->declBus(c+73,"HarnessVRTL__n_6__d_3 v mult datapath add_sel in1", false,-1, 8,0);
        vcdp->declBit(c+81,"HarnessVRTL__n_6__d_3 v mult datapath add_sel sel", false,-1);
        vcdp->declBus(c+33,"HarnessVRTL__n_6__d_3 v mult datapath add_sel out", false,-1, 8,0);
    }
}

void VHarnessVRTL__n_6__d_3::traceFullThis__1(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry));
        vcdp->fullBit(c+9,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add));
        vcdp->fullBit(c+17,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait));
        vcdp->fullBit(c+25,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset));
        vcdp->fullBus(c+33,((0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                            ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                                               + ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                                   ? 
                                                  ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                                    ? 
                                                   (0xfffU 
                                                    & ((((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                         << 6U) 
                                                        - (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                       << 5U))
                                                    : 0U)
                                                   : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                                            : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)))),9);
        vcdp->fullBus(c+41,((0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                            ? (0xfffU 
                                               & ((((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                    << 6U) 
                                                   - (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                  << 5U))
                                            : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))),9);
        vcdp->fullBus(c+49,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp),12);
        vcdp->fullBus(c+57,((0xfffU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                         << 6U) - (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                       << 5U))),12);
        vcdp->fullBus(c+65,((0x1ffU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                         << 6U) - (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                       << 5U))),9);
        vcdp->fullBus(c+73,((0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                                       + ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                           ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                               ? (0xfffU 
                                                  & ((((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                       << 6U) 
                                                      - (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                     << 5U))
                                               : 0U)
                                           : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))))),9);
        vcdp->fullBit(c+81,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel));
        vcdp->fullBus(c+89,((0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                                            ? (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a)
                                            : 0U) : 
                                       ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                        << 1U)))),9);
        vcdp->fullBus(c+97,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state),2);
        vcdp->fullBus(c+105,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a),9);
        vcdp->fullBus(c+113,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state),2);
        vcdp->fullBus(c+121,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter),3);
        vcdp->fullBus(c+129,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout),9);
        vcdp->fullBus(c+137,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout),9);
        vcdp->fullBus(c+145,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout),9);
        vcdp->fullBus(c+153,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),9);
        vcdp->fullBus(c+161,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),6);
        vcdp->fullBus(c+169,((0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                        << 1U))),9);
        vcdp->fullBus(c+177,((0x3fU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                       >> 1U))),6);
        vcdp->fullBit(c+185,(vlTOPp->clk));
        vcdp->fullBit(c+193,(vlTOPp->reset));
        vcdp->fullBus(c+201,(vlTOPp->recv_msg),12);
        vcdp->fullBit(c+209,(vlTOPp->recv_rdy));
        vcdp->fullBit(c+217,(vlTOPp->recv_val));
        vcdp->fullBus(c+225,(vlTOPp->send_msg),6);
        vcdp->fullBit(c+233,(vlTOPp->send_rdy));
        vcdp->fullBit(c+241,(vlTOPp->send_val));
        vcdp->fullBus(c+249,((0x3fU & ((IData)(vlTOPp->recv_msg) 
                                       >> 6U))),6);
        vcdp->fullBus(c+257,((0x3fU & (IData)(vlTOPp->recv_msg))),6);
        vcdp->fullBus(c+265,((0x3fU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                                            ? (IData)(vlTOPp->recv_msg)
                                            : 0U) : 
                                       ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                        >> 1U)))),9);
        vcdp->fullBit(c+273,(((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait) 
                              | (IData)(vlTOPp->reset))));
        vcdp->fullBus(c+281,((0x3fU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                                            ? (IData)(vlTOPp->recv_msg)
                                            : 0U) : 
                                       ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                        >> 1U)))),6);
        vcdp->fullBus(c+289,(6U),32);
        vcdp->fullBus(c+297,(3U),32);
        vcdp->fullBus(c+305,(1U),32);
        vcdp->fullBus(c+313,(0U),2);
        vcdp->fullBus(c+321,(1U),2);
        vcdp->fullBus(c+329,(2U),2);
        vcdp->fullBus(c+337,(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry),9);
        vcdp->fullBus(c+345,(9U),32);
        vcdp->fullBit(c+353,(1U));
    }
}
