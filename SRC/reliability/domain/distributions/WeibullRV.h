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
// $Date: 2008-04-28 18:36:21 $
// $Source: /usr/local/cvs/OpenSees/SRC/reliability/domain/distributions/WeibullRV.h,v $


//
// Written by Terje Haukaas (haukaas@ce.berkeley.edu)
//

#ifndef WeibullRV_h
#define WeibullRV_h

#include <RandomVariable.h>

class WeibullRV : public RandomVariable
{

public:
	WeibullRV(int tag, 
			 double mean,
			 double stdv,
			 double startValue);
	WeibullRV(int tag, 
			 double parameter1,
			 double parameter2,
			 double parameter3,
			 double parameter4,
			 double startValue);
	WeibullRV(int tag, 
			 double mean,
			 double stdv);
	WeibullRV(int tag, 
			 double parameter1,
			 double parameter2,
			 double parameter3,
			 double parameter4);
	~WeibullRV();
	void Print(OPS_Stream &s, int flag =0);
	double getPDFvalue(double rvValue);
	double getCDFvalue(double rvValue);
	double getInverseCDFvalue(double probValue);
	const char * getType();
	double getMean();
	double getStdv();
	double getParameter1();
	double getParameter2();

protected:

private:
	double u;
	double k;
	double harmonicNumber(double n);
	void setParameters(double mean, double stdv);
};

#endif
