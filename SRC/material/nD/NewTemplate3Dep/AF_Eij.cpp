///////////////////////////////////////////////////////////////////////////////
//   COPYLEFT (C): Woody's viral GPL-like license (by BJ):
//                 ``This    source  code is Copyrighted in
//                 U.S.,  for  an  indefinite  period,  and anybody
//                 caught  using it without our permission, will be
//                 mighty good friends of ourn, cause we don't give
//                 a  darn.  Hack it. Compile it. Debug it. Run it.
//                 Yodel  it.  Enjoy it. We wrote it, that's all we
//                 wanted to do.''
//
//
// COPYRIGHT (C):     :-))
// PROJECT:           Object Oriented Finite Element Program
// FILE:              
// CLASS:             
// MEMBER FUNCTIONS:
//
// MEMBER VARIABLES
//
// PURPOSE:           
//
// RETURN:
// VERSION:
// LANGUAGE:          C++
// TARGET OS:         
// DESIGNER:          Zhao Cheng, Boris Jeremic
// PROGRAMMER:        Zhao Cheng, 
// DATE:              Fall 2005
// UPDATE HISTORY:    
//
///////////////////////////////////////////////////////////////////////////////
//

#ifndef AF_Eij_CPP
#define AF_Eij_CPP
#include <OPS_Globals.h>

#include "AF_Eij.h"
#include <Channel.h>
#include <ID.h>
	
stresstensor AF_Eij::AFal;

AF_Eij::AF_Eij(int ha_index_in, 
               int Cr_index_in,
               int alpha_index_in)
  :TensorEvolution(TENSOR_EVOLUTION_TAGS_AF_Eij),
   ha_index(ha_index_in), 
   Cr_index(Cr_index_in),
   alpha_index(alpha_index_in)
{

}

TensorEvolution* AF_Eij::newObj()
{
    TensorEvolution* nObj = new AF_Eij(this->ha_index,
                                       this->Cr_index,
                                       this->alpha_index);
                                       
    return nObj;
}

const straintensor& AF_Eij::Hij(const straintensor& plastic_flow, const stresstensor& Stre, 
                                const straintensor& Stra, const MaterialParameter& material_parameter)
{
    double ha = getha(material_parameter);
    double Cr = getCr(material_parameter);
    stresstensor a = getalpha(material_parameter);

    TensorEvolution::TensorEvolutionHij = plastic_flow * (2.0*ha/3.0) - (a * plastic_flow.equivalent() *Cr); 
    
    return TensorEvolution::TensorEvolutionHij;
}

double AF_Eij::getha(const MaterialParameter& material_parameter) const
{
    if ( ha_index <= material_parameter.getNum_Material_Parameter() && ha_index > 0)
        return material_parameter.getMaterial_Parameter(ha_index -1);
    else {
        opserr << "AF_Eij: Invalid Input of " << ha_index << endln;
        exit (1);
    }
}

double AF_Eij::getCr(const MaterialParameter& material_parameter) const
{
    if ( Cr_index <= material_parameter.getNum_Material_Parameter() && Cr_index > 0)
        return material_parameter.getMaterial_Parameter(Cr_index -1);
    else {
        opserr << "AF_Eij: Invalid Input of " << Cr_index << endln;
        exit (1);
    }
}

const stresstensor& AF_Eij::getalpha(const MaterialParameter& material_parameter) const
{
    if ( alpha_index <= material_parameter.getNum_Internal_Tensor() && alpha_index > 0) {
        AF_Eij::AFal = material_parameter.getInternal_Tensor(alpha_index -1);
        return AF_Eij::AFal;
    }
    else {
        opserr << "AF_Eij: Invalid Input of " << alpha_index << endln;
        exit (1);
    }
}

int
AF_Eij::sendSelf(int commitTag, Channel &theChannel)
{
  static ID iData(3);

  iData(0) = ha_index;
  iData(1) = Cr_index;
  iData(2) = alpha_index;

  int dbTag = this->getDbTag();

  if (theChannel.sendID(dbTag, commitTag, iData) < 0) {
    opserr << "AF_Eij::sendSelf() - failed to send data\n";
    return -1;
  }

  return 0;
}

int 
AF_Eij::recvSelf(int commitTag, Channel &theChannel, FEM_ObjectBroker &theBroker)
{
  static ID iData(3);
  int dbTag = this->getDbTag();

  if (theChannel.recvID(dbTag, commitTag, iData) < 0) {
    opserr << "AF_Eij::recvSelf() - failed to recv data\n";
    return -1;
  }

  ha_index = iData(0);
  Cr_index = iData(1);
  alpha_index = iData(2);

  return 0;
}

#endif

