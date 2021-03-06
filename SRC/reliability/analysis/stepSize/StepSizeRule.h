/* ****************************************************************** **
**    OpenSees - Open System for Earthquake Engineering Simulation    **
**          Pacific Earthquake Engineering Research Center            **
**                                                                    **
**                                                                    **
** (C) Copyright 2001, The Regents of the University of California    **
** All Rights Reserved.                                               **
**                                                                    **
** Commercial use of this program without express permission of the   **
** University of California, Berkeley, is strictly prohibited.  See   **
** file 'COPYRIGHT'  in main directory for information on usage and   **
** redistribution,  and for a DISCLAIMER OF ALL WARRANTIES.           **
**                                                                    **
** Developed by:                                                      **
**   Frank McKenna (fmckenna@ce.berkeley.edu)                         **
**   Gregory L. Fenves (fenves@ce.berkeley.edu)                       **
**   Filip C. Filippou (filippou@ce.berkeley.edu)                     **
**                                                                    **
** Reliability module developed by:                                   **
**   Terje Haukaas (haukaas@ce.berkeley.edu)                          **
**   Armen Der Kiureghian (adk@ce.berkeley.edu)                       **
**                                                                    **
** ****************************************************************** */
                                                                        
// $Revision: 1.7 $
// $Date: 2008-02-29 19:47:20 $
// $Source: /usr/local/cvs/OpenSees/SRC/reliability/analysis/stepSize/StepSizeRule.h,v $


//
// Written by Terje Haukaas (haukaas@ce.berkeley.edu)
//

#ifndef StepSizeRule_h
#define StepSizeRule_h

#include <Vector.h>

class StepSizeRule
{

public:
	StepSizeRule();
	virtual ~StepSizeRule();
        /////S added by K Fujimura /////
	/*virtual int		computeStepSize(Vector u, Vector grad_G, double G, Vector d, int stepNumber,
		int reschk=0) =0; */
	virtual int		computeStepSize(const Vector &u, const Vector &grad_G, double G, const Vector &d, int stepNumber, int reschk =0) =0;
	   /////E added by K Fujimura /////
	virtual double	getStepSize() =0;
	virtual double	getInitialStepSize() =0;
	virtual double getGFunValue() =0;
	virtual int getNumReductions() =0;
	///// added by K Fujimura /////

protected:

private:

};

#endif
