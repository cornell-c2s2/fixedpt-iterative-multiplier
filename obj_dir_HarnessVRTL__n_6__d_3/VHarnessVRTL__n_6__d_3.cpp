// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHarnessVRTL__n_6__d_3.h for the primary calling header

#include "VHarnessVRTL__n_6__d_3.h"
#include "VHarnessVRTL__n_6__d_3__Syms.h"

//==========
CData/*1:0*/ VHarnessVRTL__n_6__d_3::__Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[128];
CData/*0:0*/ VHarnessVRTL__n_6__d_3::__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[32];
CData/*0:0*/ VHarnessVRTL__n_6__d_3::__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[32];
CData/*0:0*/ VHarnessVRTL__n_6__d_3::__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[32];
CData/*0:0*/ VHarnessVRTL__n_6__d_3::__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[32];
CData/*0:0*/ VHarnessVRTL__n_6__d_3::__Vtable2_recv_rdy[32];
CData/*0:0*/ VHarnessVRTL__n_6__d_3::__Vtable2_send_val[32];

VL_CTOR_IMP(VHarnessVRTL__n_6__d_3) {
    VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp = __VlSymsp = new VHarnessVRTL__n_6__d_3__Syms(this, name());
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHarnessVRTL__n_6__d_3::__Vconfigure(VHarnessVRTL__n_6__d_3__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VHarnessVRTL__n_6__d_3::~VHarnessVRTL__n_6__d_3() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VHarnessVRTL__n_6__d_3::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHarnessVRTL__n_6__d_3::eval\n"); );
    VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_6__d_3::_eval_initial_loop(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VHarnessVRTL__n_6__d_3::_sequent__TOP__1(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_sequent__TOP__1\n"); );
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_in));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
        = (((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait) 
            | (IData)(vlTOPp->reset)) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in));
    if (vlTOPp->reset) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = 0U;
    } else {
        if (vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait) {
            vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout 
                = vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a;
        }
    }
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter 
        = (((IData)(vlTOPp->reset) | (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset))
            ? 0U : (7U & ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state))
                           ? ((IData)(1U) + (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter))
                           : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter))));
    vlTOPp->send_msg = (0x3fU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                                 >> 3U));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = ((0xe00U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout) 
                                                 >> 8U)))) 
                      << 9U)) | (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state));
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                             << 2U) | (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state));
    if ((1U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait
            [vlTOPp->__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add
            [vlTOPp->__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry
            [vlTOPp->__Vtableidx2];
    }
    if ((8U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset
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
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                          ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                             + ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                 ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                     ? (0xfffU & ((
                                                   ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                    << 6U) 
                                                   - (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                  << 5U))
                                     : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                          : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)));
}

void VHarnessVRTL__n_6__d_3::_settle__TOP__2(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_settle__TOP__2\n"); );
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a 
        = ((0x1c0U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->recv_msg) 
                                                 >> 0xbU)))) 
                      << 6U)) | (0x3fU & ((IData)(vlTOPp->recv_msg) 
                                          >> 6U)));
    vlTOPp->send_msg = (0x3fU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                                 >> 3U));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = ((0xe00U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout) 
                                                 >> 8U)))) 
                      << 9U)) | (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->send_rdy) 
                             << 6U) | (((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                                        << 3U) | (((IData)(vlTOPp->recv_val) 
                                                   << 2U) 
                                                  | (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state))));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = vlTOPp->__Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                             << 2U) | (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state));
    if ((1U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait
            [vlTOPp->__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add
            [vlTOPp->__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry
            [vlTOPp->__Vtableidx2];
    }
    if ((8U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset 
            = vlTOPp->__Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset
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
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                          ? (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a)
                          : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                   << 1U)));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out 
        = (0x3fU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                     ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                         ? (IData)(vlTOPp->recv_msg)
                         : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                  >> 1U)));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                          ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout) 
                             + ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                 ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry)
                                     ? (0xfffU & ((
                                                   ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                    << 6U) 
                                                   - (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp)) 
                                                  << 5U))
                                     : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout)))
                          : 0U) : (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout)));
}

VL_INLINE_OPT void VHarnessVRTL__n_6__d_3::_combo__TOP__3(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_combo__TOP__3\n"); );
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a 
        = ((0x1c0U & (VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->recv_msg) 
                                                 >> 0xbU)))) 
                      << 6U)) | (0x3fU & ((IData)(vlTOPp->recv_msg) 
                                          >> 6U)));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->send_rdy) 
                             << 6U) | (((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter) 
                                        << 3U) | (((IData)(vlTOPp->recv_val) 
                                                   << 2U) 
                                                  | (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state))));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = vlTOPp->__Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out 
        = (0x3fU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                     ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                         ? (IData)(vlTOPp->recv_msg)
                         : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout) 
                                  >> 1U)));
    vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (0x1ffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                      ? ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait)
                          ? (IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a)
                          : 0U) : ((IData)(vlTOPp->HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout) 
                                   << 1U)));
}

void VHarnessVRTL__n_6__d_3::_eval(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_eval\n"); );
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_6__d_3::_eval_initial(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_eval_initial\n"); );
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VHarnessVRTL__n_6__d_3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::final\n"); );
    // Variables
    VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHarnessVRTL__n_6__d_3::_eval_settle(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_eval_settle\n"); );
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VHarnessVRTL__n_6__d_3::_change_request(VHarnessVRTL__n_6__d_3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_change_request\n"); );
    VHarnessVRTL__n_6__d_3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VHarnessVRTL__n_6__d_3::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_msg & 0xf000U))) {
        Verilated::overWidthError("recv_msg");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
}
#endif  // VL_DEBUG

void VHarnessVRTL__n_6__d_3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_6__d_3::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    recv_msg = VL_RAND_RESET_I(12);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    send_msg = VL_RAND_RESET_I(6);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a = VL_RAND_RESET_I(9);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter = VL_RAND_RESET_I(3);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in = VL_RAND_RESET_I(9);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_in = VL_RAND_RESET_I(9);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out = VL_RAND_RESET_I(6);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry = VL_RAND_RESET_I(9);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp = VL_RAND_RESET_I(12);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout = VL_RAND_RESET_I(9);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = VL_RAND_RESET_I(9);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout = VL_RAND_RESET_I(9);
    HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout = VL_RAND_RESET_I(6);
    __Vtableidx1 = 0;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[0] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[1] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[2] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[3] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[4] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[5] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[6] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[7] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[8] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[9] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[10] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[11] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[12] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[13] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[14] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[15] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[16] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[17] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[18] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[19] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[20] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[21] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[22] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[23] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[24] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[25] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[26] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[27] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[28] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[29] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[30] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[31] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[32] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[33] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[34] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[35] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[36] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[37] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[38] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[39] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[40] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[41] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[42] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[43] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[44] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[45] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[46] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[47] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[48] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[49] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[50] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[51] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[52] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[53] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[54] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[55] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[56] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[57] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[58] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[59] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[60] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[61] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[62] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[63] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[64] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[65] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[66] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[67] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[68] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[69] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[70] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[71] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[72] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[73] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[74] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[75] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[76] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[77] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[78] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[79] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[80] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[81] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[82] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[83] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[84] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[85] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[86] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[87] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[88] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[89] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[90] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[91] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[92] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[93] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[94] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[95] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[96] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[97] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[98] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[99] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[100] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[101] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[102] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[103] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[104] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[105] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[106] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[107] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[108] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[109] = 2U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[110] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[111] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[112] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[113] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[114] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[115] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[116] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[117] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[118] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[119] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[120] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[121] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[122] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[123] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[124] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[125] = 1U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[126] = 0U;
    __Vtable1_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__next_state[127] = 0U;
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
    __Vtablechg2[16] = 0x3fU;
    __Vtablechg2[17] = 0x3fU;
    __Vtablechg2[18] = 0x3fU;
    __Vtablechg2[19] = 0U;
    __Vtablechg2[20] = 0x3fU;
    __Vtablechg2[21] = 0x3fU;
    __Vtablechg2[22] = 0x3fU;
    __Vtablechg2[23] = 0U;
    __Vtablechg2[24] = 0x3fU;
    __Vtablechg2[25] = 0x3fU;
    __Vtablechg2[26] = 0x3fU;
    __Vtablechg2[27] = 0U;
    __Vtablechg2[28] = 0x3fU;
    __Vtablechg2[29] = 0x3fU;
    __Vtablechg2[30] = 0x3fU;
    __Vtablechg2[31] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[0] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[4] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[8] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[9] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[10] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[12] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[13] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[14] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[16] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[17] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[18] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[19] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[20] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[21] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[22] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[23] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[24] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[25] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[26] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[27] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[28] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[29] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[30] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__in_wait[31] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[1] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[5] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[8] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[9] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[10] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[12] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[13] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[14] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[16] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[17] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[18] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[19] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[20] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[21] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[22] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[23] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[24] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[25] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[26] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[27] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[28] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[29] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[30] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_add[31] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[2] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[6] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[8] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[9] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[10] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[12] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[13] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[14] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[16] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[17] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[18] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[19] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[20] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[21] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[22] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[23] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[24] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[25] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[26] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[27] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[28] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[29] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[30] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__do_carry[31] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[0] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[1] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[2] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[3] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[4] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[5] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[6] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[7] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[8] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[9] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[10] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[11] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[12] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[13] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[14] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[15] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[16] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[17] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[18] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[19] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[20] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[21] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[22] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[23] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[24] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[25] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[26] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[27] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[28] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[29] = 0U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[30] = 1U;
    __Vtable2_HarnessVRTL___05Fn_6___05Fd_3__DOT__v__DOT__mult__DOT__control__DOT__counter_reset[31] = 0U;
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
    __Vtable2_recv_rdy[16] = 1U;
    __Vtable2_recv_rdy[17] = 0U;
    __Vtable2_recv_rdy[18] = 0U;
    __Vtable2_recv_rdy[19] = 0U;
    __Vtable2_recv_rdy[20] = 1U;
    __Vtable2_recv_rdy[21] = 0U;
    __Vtable2_recv_rdy[22] = 0U;
    __Vtable2_recv_rdy[23] = 0U;
    __Vtable2_recv_rdy[24] = 1U;
    __Vtable2_recv_rdy[25] = 0U;
    __Vtable2_recv_rdy[26] = 0U;
    __Vtable2_recv_rdy[27] = 0U;
    __Vtable2_recv_rdy[28] = 1U;
    __Vtable2_recv_rdy[29] = 0U;
    __Vtable2_recv_rdy[30] = 0U;
    __Vtable2_recv_rdy[31] = 0U;
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
    __Vtable2_send_val[16] = 0U;
    __Vtable2_send_val[17] = 0U;
    __Vtable2_send_val[18] = 1U;
    __Vtable2_send_val[19] = 0U;
    __Vtable2_send_val[20] = 0U;
    __Vtable2_send_val[21] = 0U;
    __Vtable2_send_val[22] = 1U;
    __Vtable2_send_val[23] = 0U;
    __Vtable2_send_val[24] = 0U;
    __Vtable2_send_val[25] = 0U;
    __Vtable2_send_val[26] = 1U;
    __Vtable2_send_val[27] = 0U;
    __Vtable2_send_val[28] = 0U;
    __Vtable2_send_val[29] = 0U;
    __Vtable2_send_val[30] = 1U;
    __Vtable2_send_val[31] = 0U;
    __Vm_traceActivity = 0;
}
