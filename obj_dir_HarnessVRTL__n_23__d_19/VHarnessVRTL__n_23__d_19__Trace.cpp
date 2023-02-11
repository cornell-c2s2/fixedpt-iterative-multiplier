// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHarnessVRTL__n_23__d_19__Syms.h"


//======================

void VHarnessVRTL__n_23__d_19::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHarnessVRTL__n_23__d_19* t = (VHarnessVRTL__n_23__d_19*)userthis;
    VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VHarnessVRTL__n_23__d_19::traceChgThis(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_23__d_19* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_23__d_19::traceChgThis__2(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_23__d_19* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry));
        vcdp->chgBit(c+9,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_add));
        vcdp->chgBit(c+17,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait));
        vcdp->chgBit(c+25,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__counter_reset));
        vcdp->chgQuad(c+33,((VL_ULL(0x3ffffffffff) 
                             & ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                 ? ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                     ? (vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                        + ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry)
                                            ? ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry)
                                                ? (VL_ULL(0x3fffffffffff) 
                                                   & (((vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                                        << 0x17U) 
                                                       - vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                      << 0x16U))
                                                : VL_ULL(0))
                                            : vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))
                                     : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout))),42);
        vcdp->chgQuad(c+49,((VL_ULL(0x3ffffffffff) 
                             & ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry)
                                 ? ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry)
                                     ? (VL_ULL(0x3fffffffffff) 
                                        & (((vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                             << 0x17U) 
                                            - vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                           << 0x16U))
                                     : VL_ULL(0)) : vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))),42);
        vcdp->chgQuad(c+65,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp),46);
        vcdp->chgQuad(c+81,((VL_ULL(0x3fffffffffff) 
                             & (((vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                  << 0x17U) - vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                << 0x16U))),46);
        vcdp->chgQuad(c+97,((VL_ULL(0x3ffffffffff) 
                             & (((vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                  << 0x17U) - vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                << 0x16U))),42);
        vcdp->chgQuad(c+113,((VL_ULL(0x3ffffffffff) 
                              & (vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                 + ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry)
                                     ? ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__do_carry)
                                         ? (VL_ULL(0x3fffffffffff) 
                                            & (((vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                                 << 0x17U) 
                                                - vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                               << 0x16U))
                                         : VL_ULL(0))
                                     : vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))),42);
        vcdp->chgBit(c+129,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel));
    }
}

void VHarnessVRTL__n_23__d_19::traceChgThis__3(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_23__d_19* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+137,((VL_ULL(0x3ffffffffff) 
                              & ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait)
                                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait)
                                      ? vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a
                                      : VL_ULL(0)) : 
                                 (vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                  << 1U)))),42);
    }
}

void VHarnessVRTL__n_23__d_19::traceChgThis__4(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_23__d_19* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+153,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a),42);
    }
}

void VHarnessVRTL__n_23__d_19::traceChgThis__5(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_23__d_19* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+169,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__state),2);
        vcdp->chgBus(c+177,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__counter),5);
        vcdp->chgQuad(c+185,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout),42);
        vcdp->chgQuad(c+201,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout),42);
        vcdp->chgQuad(c+217,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout),42);
        vcdp->chgQuad(c+233,((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout))),42);
        vcdp->chgBus(c+249,(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout),23);
        vcdp->chgQuad(c+257,((VL_ULL(0x3ffffffffff) 
                              & (vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                 << 1U))),42);
        vcdp->chgBus(c+273,((0x7fffffU & (IData)(((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                  >> 1U)))),23);
    }
}

void VHarnessVRTL__n_23__d_19::traceChgThis__6(VHarnessVRTL__n_23__d_19__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHarnessVRTL__n_23__d_19* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+281,(vlTOPp->clk));
        vcdp->chgBit(c+289,(vlTOPp->reset));
        vcdp->chgQuad(c+297,(vlTOPp->recv_msg),46);
        vcdp->chgBit(c+313,(vlTOPp->recv_rdy));
        vcdp->chgBit(c+321,(vlTOPp->recv_val));
        vcdp->chgBus(c+329,(vlTOPp->send_msg),23);
        vcdp->chgBit(c+337,(vlTOPp->send_rdy));
        vcdp->chgBit(c+345,(vlTOPp->send_val));
        vcdp->chgBus(c+353,((0x7fffffU & (IData)((vlTOPp->recv_msg 
                                                  >> 0x17U)))),23);
        vcdp->chgBus(c+361,((0x7fffffU & (IData)(vlTOPp->recv_msg))),23);
        vcdp->chgBus(c+369,(((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__state))
                              ? ((IData)(vlTOPp->recv_val)
                                  ? 1U : 0U) : ((1U 
                                                 == (IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__state))
                                                 ? 
                                                ((0x16U 
                                                  == (IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__counter))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__control__DOT__state))
                                                  ? 
                                                 ((IData)(vlTOPp->send_rdy)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)))),2);
        vcdp->chgQuad(c+377,((QData)((IData)((0x7fffffU 
                                              & ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait)
                                                  ? 
                                                 ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait)
                                                   ? (IData)(vlTOPp->recv_msg)
                                                   : 0U)
                                                  : (IData)(
                                                            ((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                             >> 1U))))))),42);
        vcdp->chgBit(c+393,(((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait) 
                             | (IData)(vlTOPp->reset))));
        vcdp->chgBus(c+401,((0x7fffffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait)
                                           ? ((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__in_wait)
                                               ? (IData)(vlTOPp->recv_msg)
                                               : 0U)
                                           : (IData)(
                                                     ((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_23___05Fd_19__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                                      >> 1U))))),23);
    }
}
