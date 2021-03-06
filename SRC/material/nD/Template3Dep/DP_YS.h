///*
//################################################################################
//# COPYRIGHT (C):     :-))                                                      #
//# PROJECT:           Object Oriented Finite Element Program                    #
//# PURPOSE:           Drucker - Prager  yield criterion                         #
//# CLASS:             DPYieldSurface                                            #
//#                                                                              #
//# VERSION:                                                                     #
//# LANGUAGE:          C++.ver >= 2.0 ( Borland C++ ver=3.00, SUN C++ ver=2.1 )  #
//# TARGET OS:         DOS || UNIX || . . .                                      #
//# PROGRAMMER(S):     Boris Jeremic, Zhaohui Yang                               #
//#                                                                              #
//#                                                                              #
//# DATE:              August 03 '93                                             #
//# UPDATE HISTORY:    August 08 '00                                                          #
//#                                                                              #
//#                                                                              #
//#                                                                              #
//#                                                                              #
//# SHORT EXPLANATION:                                                           #
//#                                                                              #
//# if alfa1#=0 && alfa2#=0 && alfa1#=alfa2 =>                                   #
//#              Drucker-Prager with non-associated flow rule                    #
//#                                                                              #
//# if alfa1#=0 && alfa2#=0 && alfa1==alfa2 =>                                   #
//#              Drucker-Prager with associated flow rule                        #
//#                                                                              #
//# if alfa1==0 && alfa2#=0 =>                                                   #
//#              Von Mises with non-associated Drucker-Prager flow rule          #
//#                                                                              #
//# if alfa1#=0 && alfa2==0 =>                                                   #
//#              Drucker-Prager with non-associated Von Mises flow rule          #
//#                                                                              #
//# if alfa1==0 && alfa2==0 =>                                                   #
//#              Von Mises with associated flow rule                             #
//#                                                                              #
//################################################################################
//*/

#ifndef DP_YS_H
#define DP_YS_H

#include <stresst.h>
#include <BJtensor.h>
#include "EPState.h"
#include "YS.h"


class DPYieldSurface : public YieldSurface
{
  private:		  // Private vars to define the Drucker-Prager Yield Surface
    //double alfa1;	  // Cone orientation angle now in EPState's first scalar var 
  
  public:
    //alpha machines complains on this
    //DPYieldSurface *newObj();  //create a clone of itself  
    YieldSurface *newObj();  //create a clone of itself
    
    DPYieldSurface ( ) {}    // Default constructor
    virtual ~DPYieldSurface ( );   // Destructor //Virtual functions not all redefined
    //DPYieldSurface (const DPYieldSurface & );   // copy constructor

    double f(const EPState *EPS) const;
    tensor dFods(const EPState *EPS) const;

    // Redefine 1st derivative of F over scalar internal variables
    double xi_s1( const EPState *EPS ) const;
    double xi_s2( const EPState *EPS ) const;

    // Redefine 1st derivative of F over tensorial internal variables
    tensor xi_t1(const EPState *EPS) const;

    void print() { opserr << *this; }; 
  
    //================================================================================
    // Overloaded Insertion Operator
    // prints an DP YieldSurface's contents 
    //================================================================================
    friend OPS_Stream& operator<< (OPS_Stream& os, const DPYieldSurface & YS);

};

#endif

