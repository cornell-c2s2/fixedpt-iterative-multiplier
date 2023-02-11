// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VHARNESSVRTL__N_20__D_13__SYMS_H_
#define _VHARNESSVRTL__N_20__D_13__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VHarnessVRTL__n_20__d_13.h"

// SYMS CLASS
class VHarnessVRTL__n_20__d_13__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VHarnessVRTL__n_20__d_13*      TOPp;
    
    // CREATORS
    VHarnessVRTL__n_20__d_13__Syms(VHarnessVRTL__n_20__d_13* topp, const char* namep);
    ~VHarnessVRTL__n_20__d_13__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
