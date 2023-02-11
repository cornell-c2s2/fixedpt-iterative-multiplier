// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHarnessVRTL__n_2__d_1__Syms.h"


//======================

void VHarnessVRTL__n_2__d_1::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHarnessVRTL__n_2__d_1* t = (VHarnessVRTL__n_2__d_1*)userthis;
    VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VHarnessVRTL__n_2__d_1::traceChgThis(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VHarnessVRTL__n_2__d_1::traceChgThis__2(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry));
        vcdp->chgBit(c+9,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add));
        vcdp->chgBit(c+17,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait));
        vcdp->chgBit(c+25,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset));
        vcdp->chgBus(c+33,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
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
        vcdp->chgBus(c+41,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                       ? (0xfU & ((
                                                   ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                    << 2U) 
                                                   - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                  << 1U))
                                       : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))),3);
        vcdp->chgBus(c+49,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp),4);
        vcdp->chgBus(c+57,((0xfU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                      << 2U) - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                    << 1U))),4);
        vcdp->chgBus(c+65,((7U & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                    << 2U) - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                  << 1U))),3);
        vcdp->chgBus(c+73,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                                  + ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                          ? (0xfU & 
                                             ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                << 2U) 
                                               - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                              << 1U))
                                          : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))))),3);
        vcdp->chgBit(c+81,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel));
    }
}

void VHarnessVRTL__n_2__d_1::traceChgThis__3(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+89,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                       ? (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a)
                                       : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                                << 1U)))),3);
    }
}

void VHarnessVRTL__n_2__d_1::traceChgThis__4(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+97,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state),2);
        vcdp->chgBus(c+105,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a),3);
    }
}

void VHarnessVRTL__n_2__d_1::traceChgThis__5(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+113,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state),2);
        vcdp->chgBit(c+121,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter));
        vcdp->chgBus(c+129,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout),3);
        vcdp->chgBus(c+137,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout),3);
        vcdp->chgBus(c+145,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout),3);
        vcdp->chgBus(c+153,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),3);
        vcdp->chgBus(c+161,(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),2);
        vcdp->chgBus(c+169,((7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                   << 1U))),3);
        vcdp->chgBus(c+177,((3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                   >> 1U))),2);
    }
}

void VHarnessVRTL__n_2__d_1::traceChgThis__6(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+185,(vlTOPp->clk));
        vcdp->chgBit(c+193,(vlTOPp->reset));
        vcdp->chgBus(c+201,(vlTOPp->recv_msg),4);
        vcdp->chgBit(c+209,(vlTOPp->recv_rdy));
        vcdp->chgBit(c+217,(vlTOPp->recv_val));
        vcdp->chgBus(c+225,(vlTOPp->send_msg),2);
        vcdp->chgBit(c+233,(vlTOPp->send_rdy));
        vcdp->chgBit(c+241,(vlTOPp->send_val));
        vcdp->chgBus(c+249,((3U & ((IData)(vlTOPp->recv_msg) 
                                   >> 2U))),2);
        vcdp->chgBus(c+257,((3U & (IData)(vlTOPp->recv_msg))),2);
        vcdp->chgBus(c+265,((3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                    ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                        ? (IData)(vlTOPp->recv_msg)
                                        : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                                 >> 1U)))),3);
        vcdp->chgBit(c+273,(((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait) 
                             | (IData)(vlTOPp->reset))));
        vcdp->chgBus(c+281,((3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                    ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                                        ? (IData)(vlTOPp->recv_msg)
                                        : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                                 >> 1U)))),2);
    }
}
