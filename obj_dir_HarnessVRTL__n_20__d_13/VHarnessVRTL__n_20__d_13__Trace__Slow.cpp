// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHarnessVRTL__n_20__d_13__Syms.h"


//======================

void VHarnessVRTL__n_20__d_13::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VHarnessVRTL__n_20__d_13::traceInit, &VHarnessVRTL__n_20__d_13::traceFull, &VHarnessVRTL__n_20__d_13::traceChg, this);
}
void VHarnessVRTL__n_20__d_13::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VHarnessVRTL__n_20__d_13* t = (VHarnessVRTL__n_20__d_13*)userthis;
    VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VHarnessVRTL__n_20__d_13::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHarnessVRTL__n_20__d_13* t = (VHarnessVRTL__n_20__d_13*)userthis;
    VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VHarnessVRTL__n_20__d_13::traceInitThis(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VHarnessVRTL__n_20__d_13::traceFullThis(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VHarnessVRTL__n_20__d_13::traceInitThis__1(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+281,"clk", false,-1, 0,0);
        vcdp->declBus(c+289,"reset", false,-1, 0,0);
        vcdp->declQuad(c+297,"recv_msg", false,-1, 39,0);
        vcdp->declBus(c+313,"recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+321,"recv_val", false,-1, 0,0);
        vcdp->declBus(c+329,"send_msg", false,-1, 19,0);
        vcdp->declBus(c+337,"send_rdy", false,-1, 0,0);
        vcdp->declBus(c+345,"send_val", false,-1, 0,0);
        vcdp->declBus(c+281,"HarnessVRTL__n_20__d_13 clk", false,-1, 0,0);
        vcdp->declBus(c+289,"HarnessVRTL__n_20__d_13 reset", false,-1, 0,0);
        vcdp->declQuad(c+297,"HarnessVRTL__n_20__d_13 recv_msg", false,-1, 39,0);
        vcdp->declBus(c+313,"HarnessVRTL__n_20__d_13 recv_rdy", false,-1, 0,0);
        vcdp->declBus(c+321,"HarnessVRTL__n_20__d_13 recv_val", false,-1, 0,0);
        vcdp->declBus(c+329,"HarnessVRTL__n_20__d_13 send_msg", false,-1, 19,0);
        vcdp->declBus(c+337,"HarnessVRTL__n_20__d_13 send_rdy", false,-1, 0,0);
        vcdp->declBus(c+345,"HarnessVRTL__n_20__d_13 send_val", false,-1, 0,0);
        vcdp->declBus(c+409,"HarnessVRTL__n_20__d_13 v n", false,-1, 31,0);
        vcdp->declBus(c+417,"HarnessVRTL__n_20__d_13 v d", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v clk", false,-1);
        vcdp->declBit(c+289,"HarnessVRTL__n_20__d_13 v reset", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_20__d_13 v recv_val", false,-1);
        vcdp->declBit(c+313,"HarnessVRTL__n_20__d_13 v recv_rdy", false,-1);
        vcdp->declQuad(c+297,"HarnessVRTL__n_20__d_13 v recv_msg", false,-1, 39,0);
        vcdp->declBit(c+345,"HarnessVRTL__n_20__d_13 v send_val", false,-1);
        vcdp->declBit(c+337,"HarnessVRTL__n_20__d_13 v send_rdy", false,-1);
        vcdp->declBus(c+329,"HarnessVRTL__n_20__d_13 v send_msg", false,-1, 19,0);
        vcdp->declBus(c+409,"HarnessVRTL__n_20__d_13 v mult n", false,-1, 31,0);
        vcdp->declBus(c+417,"HarnessVRTL__n_20__d_13 v mult d", false,-1, 31,0);
        vcdp->declBus(c+425,"HarnessVRTL__n_20__d_13 v mult sign", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v mult clk", false,-1);
        vcdp->declBit(c+289,"HarnessVRTL__n_20__d_13 v mult reset", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_20__d_13 v mult recv_val", false,-1);
        vcdp->declBit(c+337,"HarnessVRTL__n_20__d_13 v mult send_rdy", false,-1);
        vcdp->declBus(c+353,"HarnessVRTL__n_20__d_13 v mult a", false,-1, 19,0);
        vcdp->declBus(c+361,"HarnessVRTL__n_20__d_13 v mult b", false,-1, 19,0);
        vcdp->declBus(c+329,"HarnessVRTL__n_20__d_13 v mult c", false,-1, 19,0);
        vcdp->declBit(c+345,"HarnessVRTL__n_20__d_13 v mult send_val", false,-1);
        vcdp->declBit(c+313,"HarnessVRTL__n_20__d_13 v mult recv_rdy", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_20__d_13 v mult do_carry", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_20__d_13 v mult do_add", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_20__d_13 v mult in_wait", false,-1);
        vcdp->declBus(c+409,"HarnessVRTL__n_20__d_13 v mult control n", false,-1, 31,0);
        vcdp->declBus(c+417,"HarnessVRTL__n_20__d_13 v mult control d", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v mult control clk", false,-1);
        vcdp->declBit(c+289,"HarnessVRTL__n_20__d_13 v mult control reset", false,-1);
        vcdp->declBit(c+321,"HarnessVRTL__n_20__d_13 v mult control recv_val", false,-1);
        vcdp->declBit(c+313,"HarnessVRTL__n_20__d_13 v mult control recv_rdy", false,-1);
        vcdp->declBit(c+345,"HarnessVRTL__n_20__d_13 v mult control send_val", false,-1);
        vcdp->declBit(c+337,"HarnessVRTL__n_20__d_13 v mult control send_rdy", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_20__d_13 v mult control in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_20__d_13 v mult control do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_20__d_13 v mult control do_carry", false,-1);
        vcdp->declBus(c+433,"HarnessVRTL__n_20__d_13 v mult control IDLE", false,-1, 1,0);
        vcdp->declBus(c+441,"HarnessVRTL__n_20__d_13 v mult control CALC", false,-1, 1,0);
        vcdp->declBus(c+449,"HarnessVRTL__n_20__d_13 v mult control DONE", false,-1, 1,0);
        vcdp->declBus(c+169,"HarnessVRTL__n_20__d_13 v mult control state", false,-1, 1,0);
        vcdp->declBus(c+369,"HarnessVRTL__n_20__d_13 v mult control next_state", false,-1, 1,0);
        vcdp->declBus(c+177,"HarnessVRTL__n_20__d_13 v mult control counter", false,-1, 4,0);
        vcdp->declBit(c+25,"HarnessVRTL__n_20__d_13 v mult control counter_reset", false,-1);
        vcdp->declBus(c+409,"HarnessVRTL__n_20__d_13 v mult datapath n", false,-1, 31,0);
        vcdp->declBus(c+417,"HarnessVRTL__n_20__d_13 v mult datapath d", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v mult datapath clk", false,-1);
        vcdp->declBit(c+289,"HarnessVRTL__n_20__d_13 v mult datapath reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_20__d_13 v mult datapath in_wait", false,-1);
        vcdp->declBit(c+9,"HarnessVRTL__n_20__d_13 v mult datapath do_add", false,-1);
        vcdp->declBit(c+1,"HarnessVRTL__n_20__d_13 v mult datapath do_carry", false,-1);
        vcdp->declQuad(c+153,"HarnessVRTL__n_20__d_13 v mult datapath a", false,-1, 32,0);
        vcdp->declBus(c+361,"HarnessVRTL__n_20__d_13 v mult datapath b", false,-1, 19,0);
        vcdp->declBus(c+329,"HarnessVRTL__n_20__d_13 v mult datapath c", false,-1, 19,0);
        vcdp->declQuad(c+33,"HarnessVRTL__n_20__d_13 v mult datapath acc_in", false,-1, 32,0);
        vcdp->declQuad(c+185,"HarnessVRTL__n_20__d_13 v mult datapath acc_out", false,-1, 32,0);
        vcdp->declQuad(c+201,"HarnessVRTL__n_20__d_13 v mult datapath a_const_out", false,-1, 32,0);
        vcdp->declQuad(c+137,"HarnessVRTL__n_20__d_13 v mult datapath a_in", false,-1, 32,0);
        vcdp->declQuad(c+217,"HarnessVRTL__n_20__d_13 v mult datapath a_out", false,-1, 32,0);
        vcdp->declQuad(c+377,"HarnessVRTL__n_20__d_13 v mult datapath b_in", false,-1, 32,0);
        vcdp->declQuad(c+233,"HarnessVRTL__n_20__d_13 v mult datapath b_out", false,-1, 32,0);
        vcdp->declQuad(c+49,"HarnessVRTL__n_20__d_13 v mult datapath add_tmp", false,-1, 32,0);
        vcdp->declQuad(c+457,"HarnessVRTL__n_20__d_13 v mult datapath carry", false,-1, 32,0);
        vcdp->declQuad(c+65,"HarnessVRTL__n_20__d_13 v mult datapath carry_tmp", false,-1, 39,0);
        vcdp->declQuad(c+81,"HarnessVRTL__n_20__d_13 v mult datapath carry_tmp2", false,-1, 39,0);
        vcdp->declBus(c+473,"HarnessVRTL__n_20__d_13 v mult datapath acc_reg N", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v mult datapath acc_reg clk", false,-1);
        vcdp->declBit(c+393,"HarnessVRTL__n_20__d_13 v mult datapath acc_reg reset", false,-1);
        vcdp->declBit(c+481,"HarnessVRTL__n_20__d_13 v mult datapath acc_reg w", false,-1);
        vcdp->declQuad(c+33,"HarnessVRTL__n_20__d_13 v mult datapath acc_reg d", false,-1, 32,0);
        vcdp->declQuad(c+185,"HarnessVRTL__n_20__d_13 v mult datapath acc_reg q", false,-1, 32,0);
        vcdp->declQuad(c+185,"HarnessVRTL__n_20__d_13 v mult datapath acc_reg regout", false,-1, 32,0);
        vcdp->declBus(c+473,"HarnessVRTL__n_20__d_13 v mult datapath a_const_reg N", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v mult datapath a_const_reg clk", false,-1);
        vcdp->declBit(c+289,"HarnessVRTL__n_20__d_13 v mult datapath a_const_reg reset", false,-1);
        vcdp->declBit(c+17,"HarnessVRTL__n_20__d_13 v mult datapath a_const_reg w", false,-1);
        vcdp->declQuad(c+153,"HarnessVRTL__n_20__d_13 v mult datapath a_const_reg d", false,-1, 32,0);
        vcdp->declQuad(c+201,"HarnessVRTL__n_20__d_13 v mult datapath a_const_reg q", false,-1, 32,0);
        vcdp->declQuad(c+201,"HarnessVRTL__n_20__d_13 v mult datapath a_const_reg regout", false,-1, 32,0);
        vcdp->declBus(c+473,"HarnessVRTL__n_20__d_13 v mult datapath a_reg N", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v mult datapath a_reg clk", false,-1);
        vcdp->declBit(c+289,"HarnessVRTL__n_20__d_13 v mult datapath a_reg reset", false,-1);
        vcdp->declBit(c+481,"HarnessVRTL__n_20__d_13 v mult datapath a_reg w", false,-1);
        vcdp->declQuad(c+137,"HarnessVRTL__n_20__d_13 v mult datapath a_reg d", false,-1, 32,0);
        vcdp->declQuad(c+217,"HarnessVRTL__n_20__d_13 v mult datapath a_reg q", false,-1, 32,0);
        vcdp->declQuad(c+217,"HarnessVRTL__n_20__d_13 v mult datapath a_reg regout", false,-1, 32,0);
        vcdp->declBus(c+409,"HarnessVRTL__n_20__d_13 v mult datapath b_reg N", false,-1, 31,0);
        vcdp->declBit(c+281,"HarnessVRTL__n_20__d_13 v mult datapath b_reg clk", false,-1);
        vcdp->declBit(c+289,"HarnessVRTL__n_20__d_13 v mult datapath b_reg reset", false,-1);
        vcdp->declBit(c+481,"HarnessVRTL__n_20__d_13 v mult datapath b_reg w", false,-1);
        vcdp->declBus(c+401,"HarnessVRTL__n_20__d_13 v mult datapath b_reg d", false,-1, 19,0);
        vcdp->declBus(c+249,"HarnessVRTL__n_20__d_13 v mult datapath b_reg q", false,-1, 19,0);
        vcdp->declBus(c+249,"HarnessVRTL__n_20__d_13 v mult datapath b_reg regout", false,-1, 19,0);
        vcdp->declBus(c+473,"HarnessVRTL__n_20__d_13 v mult datapath a_sel p_nbits", false,-1, 31,0);
        vcdp->declQuad(c+257,"HarnessVRTL__n_20__d_13 v mult datapath a_sel in0", false,-1, 32,0);
        vcdp->declQuad(c+153,"HarnessVRTL__n_20__d_13 v mult datapath a_sel in1", false,-1, 32,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_20__d_13 v mult datapath a_sel sel", false,-1);
        vcdp->declQuad(c+137,"HarnessVRTL__n_20__d_13 v mult datapath a_sel out", false,-1, 32,0);
        vcdp->declBus(c+409,"HarnessVRTL__n_20__d_13 v mult datapath b_sel p_nbits", false,-1, 31,0);
        vcdp->declBus(c+273,"HarnessVRTL__n_20__d_13 v mult datapath b_sel in0", false,-1, 19,0);
        vcdp->declBus(c+361,"HarnessVRTL__n_20__d_13 v mult datapath b_sel in1", false,-1, 19,0);
        vcdp->declBit(c+17,"HarnessVRTL__n_20__d_13 v mult datapath b_sel sel", false,-1);
        vcdp->declBus(c+401,"HarnessVRTL__n_20__d_13 v mult datapath b_sel out", false,-1, 19,0);
        vcdp->declBus(c+473,"HarnessVRTL__n_20__d_13 v mult datapath carry_sel p_nbits", false,-1, 31,0);
        vcdp->declQuad(c+217,"HarnessVRTL__n_20__d_13 v mult datapath carry_sel in0", false,-1, 32,0);
        vcdp->declQuad(c+97,"HarnessVRTL__n_20__d_13 v mult datapath carry_sel in1", false,-1, 32,0);
        vcdp->declBit(c+1,"HarnessVRTL__n_20__d_13 v mult datapath carry_sel sel", false,-1);
        vcdp->declQuad(c+49,"HarnessVRTL__n_20__d_13 v mult datapath carry_sel out", false,-1, 32,0);
        vcdp->declBus(c+473,"HarnessVRTL__n_20__d_13 v mult datapath add_sel p_nbits", false,-1, 31,0);
        vcdp->declQuad(c+185,"HarnessVRTL__n_20__d_13 v mult datapath add_sel in0", false,-1, 32,0);
        vcdp->declQuad(c+113,"HarnessVRTL__n_20__d_13 v mult datapath add_sel in1", false,-1, 32,0);
        vcdp->declBit(c+129,"HarnessVRTL__n_20__d_13 v mult datapath add_sel sel", false,-1);
        vcdp->declQuad(c+33,"HarnessVRTL__n_20__d_13 v mult datapath add_sel out", false,-1, 32,0);
    }
}

void VHarnessVRTL__n_20__d_13::traceFullThis__1(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry));
        vcdp->fullBit(c+9,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add));
        vcdp->fullBit(c+17,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait));
        vcdp->fullBit(c+25,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset));
        vcdp->fullQuad(c+33,((VL_ULL(0x1ffffffff) & 
                              ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                    ? (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                       + ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                           ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                               ? (VL_ULL(0xffffffffff) 
                                                  & (((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                                       << 0x14U) 
                                                      - vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                     << 0x13U))
                                               : VL_ULL(0))
                                           : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))
                                    : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout))),33);
        vcdp->fullQuad(c+49,((VL_ULL(0x1ffffffff) & 
                              ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                    ? (VL_ULL(0xffffffffff) 
                                       & (((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                            << 0x14U) 
                                           - vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                          << 0x13U))
                                    : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))),33);
        vcdp->fullQuad(c+65,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp),40);
        vcdp->fullQuad(c+81,((VL_ULL(0xffffffffff) 
                              & (((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                   << 0x14U) - vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                 << 0x13U))),40);
        vcdp->fullQuad(c+97,((VL_ULL(0x1ffffffff) & 
                              (((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                 << 0x14U) - vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                               << 0x13U))),33);
        vcdp->fullQuad(c+113,((VL_ULL(0x1ffffffff) 
                               & (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                  + ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                          ? (VL_ULL(0xffffffffff) 
                                             & (((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                                  << 0x14U) 
                                                 - vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                << 0x13U))
                                          : VL_ULL(0))
                                      : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))),33);
        vcdp->fullBit(c+129,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel));
        vcdp->fullQuad(c+137,((VL_ULL(0x1ffffffff) 
                               & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                       ? vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a
                                       : VL_ULL(0))
                                   : (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                      << 1U)))),33);
        vcdp->fullQuad(c+153,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a),33);
        vcdp->fullBus(c+169,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state),2);
        vcdp->fullBus(c+177,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter),5);
        vcdp->fullQuad(c+185,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout),33);
        vcdp->fullQuad(c+201,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout),33);
        vcdp->fullQuad(c+217,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout),33);
        vcdp->fullQuad(c+233,((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout))),33);
        vcdp->fullBus(c+249,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),20);
        vcdp->fullQuad(c+257,((VL_ULL(0x1ffffffff) 
                               & (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                  << 1U))),33);
        vcdp->fullBus(c+273,((0xfffffU & (IData)(((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                  >> 1U)))),20);
        vcdp->fullBit(c+281,(vlTOPp->clk));
        vcdp->fullBit(c+289,(vlTOPp->reset));
        vcdp->fullQuad(c+297,(vlTOPp->recv_msg),40);
        vcdp->fullBit(c+313,(vlTOPp->recv_rdy));
        vcdp->fullBit(c+321,(vlTOPp->recv_val));
        vcdp->fullBus(c+329,(vlTOPp->send_msg),20);
        vcdp->fullBit(c+337,(vlTOPp->send_rdy));
        vcdp->fullBit(c+345,(vlTOPp->send_val));
        vcdp->fullBus(c+353,((0xfffffU & (IData)((vlTOPp->recv_msg 
                                                  >> 0x14U)))),20);
        vcdp->fullBus(c+361,((0xfffffU & (IData)(vlTOPp->recv_msg))),20);
        vcdp->fullBus(c+369,(((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                               ? ((IData)(vlTOPp->recv_val)
                                   ? 1U : 0U) : ((1U 
                                                  == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                                                  ? 
                                                 ((0x13U 
                                                   == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter))
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                                                   ? 
                                                  ((IData)(vlTOPp->send_rdy)
                                                    ? 0U
                                                    : 2U)
                                                   : 0U)))),2);
        vcdp->fullQuad(c+377,((QData)((IData)((0xfffffU 
                                               & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                                   ? 
                                                  ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                                    ? (IData)(vlTOPp->recv_msg)
                                                    : 0U)
                                                   : (IData)(
                                                             ((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                              >> 1U))))))),33);
        vcdp->fullBit(c+393,(((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait) 
                              | (IData)(vlTOPp->reset))));
        vcdp->fullBus(c+401,((0xfffffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                           ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                               ? (IData)(vlTOPp->recv_msg)
                                               : 0U)
                                           : (IData)(
                                                     ((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                      >> 1U))))),20);
        vcdp->fullBus(c+409,(0x14U),32);
        vcdp->fullBus(c+417,(0xdU),32);
        vcdp->fullBus(c+425,(1U),32);
        vcdp->fullBus(c+433,(0U),2);
        vcdp->fullBus(c+441,(1U),2);
        vcdp->fullBus(c+449,(2U),2);
        vcdp->fullQuad(c+457,(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry),33);
        vcdp->fullBus(c+473,(0x21U),32);
        vcdp->fullBit(c+481,(1U));
    }
}
