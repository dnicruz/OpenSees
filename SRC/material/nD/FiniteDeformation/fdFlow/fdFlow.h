//===============================================================================
//# COPYRIGHT (C): Woody's license (by BJ):
//                 ``This    source  code is Copyrighted in
//                 U.S.,  for  an  indefinite  period,  and anybody
//                 caught  using it without our permission, will be
//                 mighty good friends of ourn, cause we don't give
//                 a  darn.  Hack it. Compile it. Debug it. Run it.
//                 Yodel  it.  Enjoy it. We wrote it, that's all we
//                 wanted to do.''
//
//# PROJECT:           Object Oriented Finite Element Program
//# PURPOSE:           Finite Deformation Hyper-Elastic classes
//# CLASS:
//#
//# VERSION:           0.6_(1803398874989) (golden section)
//# LANGUAGE:          C++
//# TARGET OS:         all...
//# DESIGN:            Zhao Cheng, Boris Jeremic (jeremic@ucdavis.edu)
//# PROGRAMMER(S):     Zhao Cheng, Boris Jeremic
//#
//#
//# DATE:              July 2004
//# UPDATE HISTORY:
//#
//===============================================================================

#ifndef fdFlow_H
#define fdFlow_H

#include <stresst.h>
#include <straint.h>

#include <FDEPState.h>

class fdFlow
{
  public:
    fdFlow();
    virtual ~fdFlow() {}; 
    
    virtual fdFlow *newObj() = 0;   

    virtual stresstensor dFods(const stresstensor &sts, const FDEPState &fdepstate ) const = 0; 
    virtual double dFodq(const stresstensor &sts, const FDEPState &fdepstate ) const;
    virtual stresstensor dFoda(const stresstensor &sts, const FDEPState &fdepstate ) const;

    virtual tensor d2Fodsds(const stresstensor &sts, const FDEPState &fdepstate ) const ;     	 
    virtual stresstensor d2Fodsdq(const stresstensor &sts, const FDEPState &fdepstate ) const;
    virtual tensor d2Fodsda(const stresstensor &sts, const FDEPState &fdepstate ) const;
     
    virtual double d2Fodqdq(const stresstensor &sts, const FDEPState &fdepstate ) const;
    virtual stresstensor d2Fodqda(const stresstensor &sts, const FDEPState &fdepstate ) const;
    
    virtual tensor d2Fodada(const stresstensor &sts, const FDEPState &fdepstate ) const; 

    virtual void print() = 0; 

    friend OPS_Stream& operator<< (OPS_Stream& os, const fdFlow & fdfl);
};


#endif
