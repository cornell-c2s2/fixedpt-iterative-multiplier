// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHarnessVRTL__n_20__d_13.h for the primary calling header

#include "VHarnessVRTL__n_20__d_13.h"
#include "VHarnessVRTL__n_20__d_13__Syms.h"

//==========

VL_CTOR_IMP(VHarnessVRTL__n_20__d_13) {
    VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp = __VlSymsp = new VHarnessVRTL__n_20__d_13__Syms(this, name());
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHarnessVRTL__n_20__d_13::__Vconfigure(VHarnessVRTL__n_20__d_13__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VHarnessVRTL__n_20__d_13::~VHarnessVRTL__n_20__d_13() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VHarnessVRTL__n_20__d_13::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHarnessVRTL__n_20__d_13::eval\n"); );
    VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_20__d_13::_eval_initial_loop(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VHarnessVRTL__n_20__d_13::_sequent__TOP__1(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_sequent__TOP__1\n"); );
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_in);
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
        = (((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait) 
            | (IData)(vlTOPp->reset)) ? VL_ULL(0) : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in);
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out);
    if (vlTOPp->reset) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = VL_ULL(0);
    } else {
        if (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout 
                = vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a;
        }
    }
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter 
        = (((IData)(vlTOPp->reset) | (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset))
            ? 0U : (0x1fU & ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                              ? ((IData)(1U) + (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter))
                              : (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter))));
    vlTOPp->send_msg = (0xfffffU & (IData)((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                            >> 0xdU)));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = (((QData)((IData)((0x7fU & VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout 
                                                                     >> 0x20U)))))))) 
            << 0x21U) | vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout);
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__next_state));
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = 1U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->recv_rdy = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->recv_rdy = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->recv_rdy = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->send_val = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->send_val = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->send_val = 1U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry 
                = (0x13U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter));
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add = 0U;
            }
        }
    }
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout))));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (VL_ULL(0x1ffffffff) & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                       ? (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                          + ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                              ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                                  ? 
                                                 (VL_ULL(0xffffffffff) 
                                                  & (((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                                       << 0x14U) 
                                                      - vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                     << 0x13U))
                                                  : VL_ULL(0))
                                              : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))
                                       : VL_ULL(0))
                                   : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout));
}

void VHarnessVRTL__n_20__d_13::_settle__TOP__2(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_settle__TOP__2\n"); );
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0x1fffU & VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->recv_msg 
                                                                       >> 0x27U)))))))) 
            << 0x14U) | (QData)((IData)((0xfffffU & (IData)(
                                                            (vlTOPp->recv_msg 
                                                             >> 0x14U))))));
    vlTOPp->send_msg = (0xfffffU & (IData)((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                            >> 0xdU)));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
        = (((QData)((IData)((0x7fU & VL_NEGATE_I((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout 
                                                                     >> 0x20U)))))))) 
            << 0x21U) | vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout);
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = 1U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->recv_rdy = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->recv_rdy = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->recv_rdy = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->send_val = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->send_val = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->send_val = 1U;
            }
        }
    }
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
            ? ((IData)(vlTOPp->recv_val) ? 1U : 0U)
            : ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                ? ((0x13U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter))
                    ? 2U : 1U) : ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                                   ? ((IData)(vlTOPp->send_rdy)
                                       ? 0U : 2U) : 0U)));
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry 
                = (0x13U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter));
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
        vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
            vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))) {
                vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add = 0U;
            }
        }
    }
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (VL_ULL(0x1ffffffff) & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                       ? vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a
                                       : VL_ULL(0))
                                   : (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                      << 1U)));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out 
        = (0xfffffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                            ? (IData)(vlTOPp->recv_msg)
                            : 0U) : (IData)(((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                             >> 1U))));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel 
        = ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add) 
           & (IData)((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout))));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in 
        = (VL_ULL(0x1ffffffff) & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel)
                                       ? (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout 
                                          + ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                              ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry)
                                                  ? 
                                                 (VL_ULL(0xffffffffff) 
                                                  & (((vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp 
                                                       << 0x14U) 
                                                      - vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp) 
                                                     << 0x13U))
                                                  : VL_ULL(0))
                                              : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout))
                                       : VL_ULL(0))
                                   : vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout));
}

VL_INLINE_OPT void VHarnessVRTL__n_20__d_13::_combo__TOP__3(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_combo__TOP__3\n"); );
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0x1fffU & VL_NEGATE_I((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->recv_msg 
                                                                       >> 0x27U)))))))) 
            << 0x14U) | (QData)((IData)((0xfffffU & (IData)(
                                                            (vlTOPp->recv_msg 
                                                             >> 0x14U))))));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__next_state 
        = ((0U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
            ? ((IData)(vlTOPp->recv_val) ? 1U : 0U)
            : ((1U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                ? ((0x13U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter))
                    ? 2U : 1U) : ((2U == (IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state))
                                   ? ((IData)(vlTOPp->send_rdy)
                                       ? 0U : 2U) : 0U)));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out 
        = (0xfffffU & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                        ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                            ? (IData)(vlTOPp->recv_msg)
                            : 0U) : (IData)(((QData)((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout)) 
                                             >> 1U))));
    vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_in 
        = (VL_ULL(0x1ffffffff) & ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                   ? ((IData)(vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait)
                                       ? vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a
                                       : VL_ULL(0))
                                   : (vlTOPp->HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout 
                                      << 1U)));
}

void VHarnessVRTL__n_20__d_13::_eval(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_eval\n"); );
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHarnessVRTL__n_20__d_13::_eval_initial(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_eval_initial\n"); );
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VHarnessVRTL__n_20__d_13::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::final\n"); );
    // Variables
    VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHarnessVRTL__n_20__d_13::_eval_settle(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_eval_settle\n"); );
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VHarnessVRTL__n_20__d_13::_change_request(VHarnessVRTL__n_20__d_13__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_change_request\n"); );
    VHarnessVRTL__n_20__d_13* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VHarnessVRTL__n_20__d_13::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_msg & VL_ULL(0)))) {
        Verilated::overWidthError("recv_msg");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
}
#endif  // VL_DEBUG

void VHarnessVRTL__n_20__d_13::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHarnessVRTL__n_20__d_13::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    recv_msg = VL_RAND_RESET_Q(40);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    send_msg = VL_RAND_RESET_I(20);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_carry = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__do_add = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__in_wait = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT____Vcellinp__datapath__a = VL_RAND_RESET_Q(33);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter = VL_RAND_RESET_I(5);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__control__DOT__counter_reset = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_in = VL_RAND_RESET_Q(33);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_in = VL_RAND_RESET_Q(33);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellout__b_sel__out = VL_RAND_RESET_I(20);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry = VL_RAND_RESET_Q(33);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__carry_tmp = VL_RAND_RESET_Q(40);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT____Vcellinp__add_sel__sel = VL_RAND_RESET_I(1);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__acc_reg__DOT__regout = VL_RAND_RESET_Q(33);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_const_reg__DOT__regout = VL_RAND_RESET_Q(33);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__a_reg__DOT__regout = VL_RAND_RESET_Q(33);
    HarnessVRTL___05Fn_20___05Fd_13__DOT__v__DOT__mult__DOT__datapath__DOT__b_reg__DOT__regout = VL_RAND_RESET_I(20);
    __Vm_traceActivity = 0;
}
