// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHarnessVRTL__n_2__d_1.h for the primary calling header

#include "VHarnessVRTL__n_2__d_1.h"
#include "VHarnessVRTL__n_2__d_1__Syms.h"

//==========
CData/*1:0*/ VHarnessVRTL__n_2__d_1::__Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[32];
CData/*0:0*/ VHarnessVRTL__n_2__d_1::__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[8];
CData/*0:0*/ VHarnessVRTL__n_2__d_1::__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[8];
CData/*0:0*/ VHarnessVRTL__n_2__d_1::__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[8];
CData/*0:0*/ VHarnessVRTL__n_2__d_1::__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[8];
CData/*0:0*/ VHarnessVRTL__n_2__d_1::__Vtable2_recv_rdy[8];
CData/*0:0*/ VHarnessVRTL__n_2__d_1::__Vtable2_send_val[8];

VL_CTOR_IMP(VHarnessVRTL__n_2__d_1) {
    VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp = __VlSymsp = new VHarnessVRTL__n_2__d_1__Syms(this, name());
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHarnessVRTL__n_2__d_1::__Vconfigure(VHarnessVRTL__n_2__d_1__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VHarnessVRTL__n_2__d_1::~VHarnessVRTL__n_2__d_1() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VHarnessVRTL__n_2__d_1::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHarnessVRTL__n_2__d_1::eval\n"); );
    VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_2__d_1::_eval_initial_loop(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VHarnessVRTL__n_2__d_1::_sequent__TOP__1(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_sequent__TOP__1\n"); );
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_in));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
        = (((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait) 
            | (IData)(vlTOPp->reset)) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in));
    if (vlTOPp->reset) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = 0U;
    } else {
        if (vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait) {
            vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout 
                = vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a;
        }
    }
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter 
        = (1U & ((~ ((IData)(vlTOPp->reset) | (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset))) 
                 & ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state))
                     ? ((IData)(1U) + (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter))
                     : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter))));
    vlTOPp->send_msg = (3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                              >> 1U));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = ((8U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout) 
                  << 1U)) | (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state));
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                             << 2U) | (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state));
    if ((1U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait
            [vlTOPp->__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add
            [vlTOPp->__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry
            [vlTOPp->__Vtableidx2];
    }
    if ((8U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset
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
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                         + ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                             ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                 ? (0xfU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                              << 2U) 
                                             - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                            << 1U))
                                 : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                      : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)));
}

void VHarnessVRTL__n_2__d_1::_settle__TOP__2(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_settle__TOP__2\n"); );
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a 
        = ((4U & ((IData)(vlTOPp->recv_msg) >> 1U)) 
           | (3U & ((IData)(vlTOPp->recv_msg) >> 2U)));
    vlTOPp->send_msg = (3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                              >> 1U));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = ((8U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout) 
                  << 1U)) | (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->send_rdy) 
                             << 4U) | (((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                                        << 3U) | (((IData)(vlTOPp->recv_val) 
                                                   << 2U) 
                                                  | (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state))));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = vlTOPp->__Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                             << 2U) | (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state));
    if ((1U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait
            [vlTOPp->__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add
            [vlTOPp->__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry
            [vlTOPp->__Vtableidx2];
    }
    if ((8U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset
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
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                      ? (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a)
                      : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                               << 1U)));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out 
        = (3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                      ? (IData)(vlTOPp->recv_msg) : 0U)
                  : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                     >> 1U)));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                         + ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                             ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry)
                                 ? (0xfU & ((((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                              << 2U) 
                                             - (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                            << 1U))
                                 : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                      : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)));
}

VL_INLINE_OPT void VHarnessVRTL__n_2__d_1::_combo__TOP__3(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_combo__TOP__3\n"); );
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a 
        = ((4U & ((IData)(vlTOPp->recv_msg) >> 1U)) 
           | (3U & ((IData)(vlTOPp->recv_msg) >> 2U)));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->send_rdy) 
                             << 4U) | (((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                                        << 3U) | (((IData)(vlTOPp->recv_val) 
                                                   << 2U) 
                                                  | (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state))));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = vlTOPp->__Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out 
        = (3U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                      ? (IData)(vlTOPp->recv_msg) : 0U)
                  : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                     >> 1U)));
    vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (7U & ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                  ? ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait)
                      ? (IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a)
                      : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                               << 1U)));
}

void VHarnessVRTL__n_2__d_1::_eval(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_eval\n"); );
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_2__d_1::_eval_initial(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_eval_initial\n"); );
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VHarnessVRTL__n_2__d_1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::final\n"); );
    // Variables
    VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHarnessVRTL__n_2__d_1::_eval_settle(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_eval_settle\n"); );
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VHarnessVRTL__n_2__d_1::_change_request(VHarnessVRTL__n_2__d_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_change_request\n"); );
    VHarnessVRTL__n_2__d_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VHarnessVRTL__n_2__d_1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_msg & 0xf0U))) {
        Verilated::overWidthError("recv_msg");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
}
#endif  // VL_DEBUG

void VHarnessVRTL__n_2__d_1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_2__d_1::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    recv_msg = VL_RAND_RESET_I(4);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    send_msg = VL_RAND_RESET_I(2);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_in = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp = VL_RAND_RESET_I(4);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout = VL_RAND_RESET_I(2);
    __Vtableidx1 = 0;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[0] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[1] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[2] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[3] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[4] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[5] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[6] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[7] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[8] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[9] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[10] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[11] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[12] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[13] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[14] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[15] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[16] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[17] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[18] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[19] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[20] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[21] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[22] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[23] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[24] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[25] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[26] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[27] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[28] = 1U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[29] = 2U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[30] = 0U;
    __Vtable1_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__next_state[31] = 0U;
    __Vtableidx2 = 0;
    __Vtablechg2[0] = 0x3fU;
    __Vtablechg2[1] = 0x3fU;
    __Vtablechg2[2] = 0x3fU;
    __Vtablechg2[3] = 0U;
    __Vtablechg2[4] = 0x3fU;
    __Vtablechg2[5] = 0x3fU;
    __Vtablechg2[6] = 0x3fU;
    __Vtablechg2[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[0] = 1U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[4] = 1U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__in_wait[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[1] = 1U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[5] = 1U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_add[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[5] = 1U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__do_carry[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[2] = 1U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[6] = 1U;
    __Vtable2_HarnessVRTL___05Fn_2___05Fd_1__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[7] = 0U;
    __Vtable2_recv_rdy[0] = 1U;
    __Vtable2_recv_rdy[1] = 0U;
    __Vtable2_recv_rdy[2] = 0U;
    __Vtable2_recv_rdy[3] = 0U;
    __Vtable2_recv_rdy[4] = 1U;
    __Vtable2_recv_rdy[5] = 0U;
    __Vtable2_recv_rdy[6] = 0U;
    __Vtable2_recv_rdy[7] = 0U;
    __Vtable2_send_val[0] = 0U;
    __Vtable2_send_val[1] = 0U;
    __Vtable2_send_val[2] = 1U;
    __Vtable2_send_val[3] = 0U;
    __Vtable2_send_val[4] = 0U;
    __Vtable2_send_val[5] = 0U;
    __Vtable2_send_val[6] = 1U;
    __Vtable2_send_val[7] = 0U;
    __Vm_traceActivity = 0;
}
