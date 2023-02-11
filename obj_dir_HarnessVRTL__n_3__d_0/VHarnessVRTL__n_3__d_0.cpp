// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHarnessVRTL__n_3__d_0.h for the primary calling header

#include "VHarnessVRTL__n_3__d_0.h"
#include "VHarnessVRTL__n_3__d_0__Syms.h"

//==========
CData/*1:0*/ VHarnessVRTL__n_3__d_0::__Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[64];
CData/*0:0*/ VHarnessVRTL__n_3__d_0::__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[16];
CData/*0:0*/ VHarnessVRTL__n_3__d_0::__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[16];
CData/*0:0*/ VHarnessVRTL__n_3__d_0::__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[16];
CData/*0:0*/ VHarnessVRTL__n_3__d_0::__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[16];
CData/*0:0*/ VHarnessVRTL__n_3__d_0::__Vtable2_recv_rdy[16];
CData/*0:0*/ VHarnessVRTL__n_3__d_0::__Vtable2_send_val[16];

VL_CTOR_IMP(VHarnessVRTL__n_3__d_0) {
    VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp = __VlSymsp = new VHarnessVRTL__n_3__d_0__Syms(this, name());
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHarnessVRTL__n_3__d_0::__Vconfigure(VHarnessVRTL__n_3__d_0__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VHarnessVRTL__n_3__d_0::~VHarnessVRTL__n_3__d_0() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VHarnessVRTL__n_3__d_0::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHarnessVRTL__n_3__d_0::eval\n"); );
    VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("HarnessVRTL.v", 46, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VHarnessVRTL__n_3__d_0::_eval_initial_loop(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("HarnessVRTL.v", 46, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VHarnessVRTL__n_3__d_0::_sequent__TOP__1(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_sequent__TOP__1\n"); );
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_in));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_in));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
        = (((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait) 
            | (IData)(vlTOPp->reset)) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in));
    if (vlTOPp->reset) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = 0U;
    } else {
        if (vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait) {
            vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout 
                = (7U & ((IData)(vlTOPp->recv_msg) 
                         >> 3U));
        }
    }
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter 
        = (((IData)(vlTOPp->reset) | (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset))
            ? 0U : (3U & ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__state))
                           ? ((IData)(1U) + (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter))
                           : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter))));
    vlTOPp->send_msg = vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout;
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = ((0x38U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout) 
                                                >> 2U)))) 
                     << 3U)) | (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state));
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                             << 2U) | (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__state));
    if ((1U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait
            [vlTOPp->__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add
            [vlTOPp->__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry
            [vlTOPp->__Vtableidx2];
    }
    if ((8U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset
            [vlTOPp->__Vtableidx2];
    }
    if ((0x10U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->recv_rdy = vlTOPp->__Vtable2_recv_rdy
            [vlTOPp->__Vtableidx2];
    }
    if ((0x20U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->send_val = vlTOPp->__Vtable2_send_val
            [vlTOPp->__Vtableidx2];
    }
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                         + ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry)
                             ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry)
                                 ? (0x3fU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                               << 3U) 
                                              - (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                             << 2U))
                                 : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                      : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)));
}

void VHarnessVRTL__n_3__d_0::_settle__TOP__2(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_settle__TOP__2\n"); );
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->send_msg = vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout;
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = ((0x38U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout) 
                                                >> 2U)))) 
                     << 3U)) | (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->send_rdy) 
                             << 5U) | (((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                                        << 3U) | (((IData)(vlTOPp->recv_val) 
                                                   << 2U) 
                                                  | (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__state))));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = vlTOPp->__Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                             << 2U) | (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__state));
    if ((1U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait
            [vlTOPp->__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add
            [vlTOPp->__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry
            [vlTOPp->__Vtableidx2];
    }
    if ((8U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset
            [vlTOPp->__Vtableidx2];
    }
    if ((0x10U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->recv_rdy = vlTOPp->__Vtable2_recv_rdy
            [vlTOPp->__Vtableidx2];
    }
    if ((0x20U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->send_val = vlTOPp->__Vtable2_send_val
            [vlTOPp->__Vtableidx2];
    }
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                      ? ((IData)(vlTOPp->recv_msg) 
                         >> 3U) : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                         << 1U)));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                      ? (IData)(vlTOPp->recv_msg) : 0U)
                  : ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                     >> 1U)));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                         + ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry)
                             ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry)
                                 ? (0x3fU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                               << 3U) 
                                              - (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                             << 2U))
                                 : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                      : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)));
}

VL_INLINE_OPT void VHarnessVRTL__n_3__d_0::_combo__TOP__3(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_combo__TOP__3\n"); );
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->send_rdy) 
                             << 5U) | (((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                                        << 3U) | (((IData)(vlTOPp->recv_val) 
                                                   << 2U) 
                                                  | (IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__state))));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = vlTOPp->__Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                      ? ((IData)(vlTOPp->recv_msg) 
                         >> 3U) : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                         << 1U)));
    vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait)
                      ? (IData)(vlTOPp->recv_msg) : 0U)
                  : ((IData)(vlTOPp->HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                     >> 1U)));
}

void VHarnessVRTL__n_3__d_0::_eval(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_eval\n"); );
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VHarnessVRTL__n_3__d_0::_eval_initial(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_eval_initial\n"); );
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VHarnessVRTL__n_3__d_0::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::final\n"); );
    // Variables
    VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHarnessVRTL__n_3__d_0::_eval_settle(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_eval_settle\n"); );
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VHarnessVRTL__n_3__d_0::_change_request(VHarnessVRTL__n_3__d_0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_change_request\n"); );
    VHarnessVRTL__n_3__d_0* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VHarnessVRTL__n_3__d_0::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_msg & 0xc0U))) {
        Verilated::overWidthError("recv_msg");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
}
#endif  // VL_DEBUG

void VHarnessVRTL__n_3__d_0::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_3__d_0::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    recv_msg = VL_RAND_RESET_I(6);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    send_msg = VL_RAND_RESET_I(3);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_in = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_in = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp = VL_RAND_RESET_I(6);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[0] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[1] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[2] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[3] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[4] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[5] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[6] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[7] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[8] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[9] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[10] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[11] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[12] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[13] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[14] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[15] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[16] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[17] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[18] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[19] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[20] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[21] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[22] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[23] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[24] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[25] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[26] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[27] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[28] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[29] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[30] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[31] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[32] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[33] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[34] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[35] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[36] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[37] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[38] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[39] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[40] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[41] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[42] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[43] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[44] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[45] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[46] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[47] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[48] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[49] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[50] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[51] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[52] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[53] = 2U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[54] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[55] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[56] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[57] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[58] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[59] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[60] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[61] = 1U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[62] = 0U;
    __Vtable1_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__next_state[63] = 0U;
    __Vtableidx2 = 0;
    __Vtablechg2[0] = 0x3fU;
    __Vtablechg2[1] = 0x3fU;
    __Vtablechg2[2] = 0x3fU;
    __Vtablechg2[3] = 0U;
    __Vtablechg2[4] = 0x3fU;
    __Vtablechg2[5] = 0x3fU;
    __Vtablechg2[6] = 0x3fU;
    __Vtablechg2[7] = 0U;
    __Vtablechg2[8] = 0x3fU;
    __Vtablechg2[9] = 0x3fU;
    __Vtablechg2[10] = 0x3fU;
    __Vtablechg2[11] = 0U;
    __Vtablechg2[12] = 0x3fU;
    __Vtablechg2[13] = 0x3fU;
    __Vtablechg2[14] = 0x3fU;
    __Vtablechg2[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[0] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[4] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[8] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[9] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[10] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[12] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[13] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[14] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__in_wait[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[1] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[5] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[8] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[9] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[10] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[12] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[13] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[14] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_add[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[8] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[9] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[10] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[12] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[13] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[14] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__do_carry[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[2] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[6] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[8] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[9] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[10] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[12] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[13] = 0U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[14] = 1U;
    __Vtable2_HarnessVRTL___05Fn_3___05Fd_0__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[15] = 0U;
    __Vtable2_recv_rdy[0] = 1U;
    __Vtable2_recv_rdy[1] = 0U;
    __Vtable2_recv_rdy[2] = 0U;
    __Vtable2_recv_rdy[3] = 0U;
    __Vtable2_recv_rdy[4] = 1U;
    __Vtable2_recv_rdy[5] = 0U;
    __Vtable2_recv_rdy[6] = 0U;
    __Vtable2_recv_rdy[7] = 0U;
    __Vtable2_recv_rdy[8] = 1U;
    __Vtable2_recv_rdy[9] = 0U;
    __Vtable2_recv_rdy[10] = 0U;
    __Vtable2_recv_rdy[11] = 0U;
    __Vtable2_recv_rdy[12] = 1U;
    __Vtable2_recv_rdy[13] = 0U;
    __Vtable2_recv_rdy[14] = 0U;
    __Vtable2_recv_rdy[15] = 0U;
    __Vtable2_send_val[0] = 0U;
    __Vtable2_send_val[1] = 0U;
    __Vtable2_send_val[2] = 1U;
    __Vtable2_send_val[3] = 0U;
    __Vtable2_send_val[4] = 0U;
    __Vtable2_send_val[5] = 0U;
    __Vtable2_send_val[6] = 1U;
    __Vtable2_send_val[7] = 0U;
    __Vtable2_send_val[8] = 0U;
    __Vtable2_send_val[9] = 0U;
    __Vtable2_send_val[10] = 1U;
    __Vtable2_send_val[11] = 0U;
    __Vtable2_send_val[12] = 0U;
    __Vtable2_send_val[13] = 0U;
    __Vtable2_send_val[14] = 1U;
    __Vtable2_send_val[15] = 0U;
    __Vm_traceActivity = 0;
}
