// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHarnessVRTL__n_38__d_26__Syms.h"


//======================

void VHarnessVRTL__n_38__d_26::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHarnessVRTL__n_38__d_26* t = (VHarnessVRTL__n_38__d_26*)userthis;
    VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VHarnessVRTL__n_38__d_26::traceChgThis(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_38__d_26::traceChgThis__2(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp40[3];
    WData/*95:0*/ __Vtemp41[3];
    WData/*95:0*/ __Vtemp42[3];
    WData/*95:0*/ __Vtemp45[3];
    WData/*95:0*/ __Vtemp46[3];
    WData/*95:0*/ __Vtemp47[3];
    WData/*95:0*/ __Vtemp50[3];
    WData/*95:0*/ __Vtemp51[3];
    WData/*95:0*/ __Vtemp52[3];
    WData/*95:0*/ __Vtemp53[3];
    WData/*95:0*/ __Vtemp55[3];
    WData/*95:0*/ __Vtemp56[3];
    WData/*95:0*/ __Vtemp57[3];
    WData/*95:0*/ __Vtemp60[3];
    WData/*95:0*/ __Vtemp61[3];
    WData/*95:0*/ __Vtemp62[3];
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry));
        vcdp->chgBit(c+9,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_add));
        vcdp->chgBit(c+17,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait));
        vcdp->chgBit(c+25,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__counter_reset));
        VL_SHIFTL_WWI(76,76,32, __Vtemp40, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp41, __Vtemp40, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp42, __Vtemp41, 0x25U);
        vcdp->chgQuad(c+33,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                              ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                  ? (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                     + ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                         ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                             ? (((QData)((IData)(
                                                                 __Vtemp42[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp42[0U])))
                                             : VL_ULL(0))
                                         : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))
                                  : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)),64);
        VL_SHIFTL_WWI(76,76,32, __Vtemp45, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp46, __Vtemp45, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp47, __Vtemp46, 0x25U);
        vcdp->chgQuad(c+49,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                              ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                  ? (((QData)((IData)(
                                                      __Vtemp47[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp47[0U])))
                                  : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)),64);
        vcdp->chgArray(c+65,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp),76);
        VL_SHIFTL_WWI(76,76,32, __Vtemp50, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp51, __Vtemp50, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp52, __Vtemp51, 0x25U);
        __Vtemp53[0U] = __Vtemp52[0U];
        __Vtemp53[1U] = __Vtemp52[1U];
        __Vtemp53[2U] = (0xfffU & __Vtemp52[2U]);
        vcdp->chgArray(c+89,(__Vtemp53),76);
        VL_SHIFTL_WWI(76,76,32, __Vtemp55, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp56, __Vtemp55, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp57, __Vtemp56, 0x25U);
        vcdp->chgQuad(c+113,((((QData)((IData)(__Vtemp57[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp57[0U])))),64);
        VL_SHIFTL_WWI(76,76,32, __Vtemp60, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp, 0x26U);
        VL_SUB_W(3, __Vtemp61, __Vtemp60, vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp);
        VL_SHIFTL_WWI(76,76,32, __Vtemp62, __Vtemp61, 0x25U);
        vcdp->chgQuad(c+129,((vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                              + ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__do_carry)
                                      ? (((QData)((IData)(
                                                          __Vtemp62[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp62[0U])))
                                      : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))),64);
        vcdp->chgBit(c+145,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel));
    }
}

void VHarnessVRTL__n_38__d_26::traceChgThis__3(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+153,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                               ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                   ? vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a
                                   : VL_ULL(0)) : (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                                   << 1U))),64);
    }
}

void VHarnessVRTL__n_38__d_26::traceChgThis__4(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+169,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a),64);
    }
}

void VHarnessVRTL__n_38__d_26::traceChgThis__5(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+185,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__state),2);
        vcdp->chgBus(c+193,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__counter),6);
        vcdp->chgQuad(c+201,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout),64);
        vcdp->chgQuad(c+217,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout),64);
        vcdp->chgQuad(c+233,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout),64);
        vcdp->chgQuad(c+249,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),64);
        vcdp->chgQuad(c+265,(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),38);
        vcdp->chgQuad(c+281,((vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                              << 1U)),64);
        vcdp->chgQuad(c+297,((VL_ULL(0x3fffffffff) 
                              & (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
                                 >> 1U))),38);
    }
}

void VHarnessVRTL__n_38__d_26::traceChgThis__6(VHarnessVRTL__n_38__d_26__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_38__d_26* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+313,(vlTOPp->clk));
        vcdp->chgBit(c+321,(vlTOPp->reset));
        vcdp->chgArray(c+329,(vlTOPp->recv_msg),76);
        vcdp->chgBit(c+353,(vlTOPp->recv_rdy));
        vcdp->chgBit(c+361,(vlTOPp->recv_val));
        vcdp->chgQuad(c+369,(vlTOPp->send_msg),38);
        vcdp->chgBit(c+385,(vlTOPp->send_rdy));
        vcdp->chgBit(c+393,(vlTOPp->send_val));
        vcdp->chgQuad(c+401,((VL_ULL(0x3fffffffff) 
                              & (((QData)((IData)(vlTOPp->recv_msg[2U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlTOPp->recv_msg[1U])) 
                                               >> 6U)))),38);
        vcdp->chgQuad(c+417,((VL_ULL(0x3fffffffff) 
                              & (((QData)((IData)(vlTOPp->recv_msg[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->recv_msg[0U]))))),38);
        vcdp->chgBus(c+433,(((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__control__DOT__state))
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
        vcdp->chgQuad(c+441,((VL_ULL(0x3fffffffff) 
                              & ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                      ? (((QData)((IData)(
                                                          vlTOPp->recv_msg[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->recv_msg[0U])))
                                      : VL_ULL(0)) : 
                                 (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
                                  >> 1U)))),64);
        vcdp->chgBit(c+457,(((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait) 
                             | (IData)(vlTOPp->reset))));
        vcdp->chgQuad(c+465,((VL_ULL(0x3fffffffff) 
                              & ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__in_wait)
                                      ? (((QData)((IData)(
                                                          vlTOPp->recv_msg[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->recv_msg[0U])))
                                      : VL_ULL(0)) : 
                                 (vlTOPp->HarnessVRTL___05Fn_38___05Fd_26__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
                                  >> 1U)))),38);
    }
}
