# Makefile for element objects

include ../../../Makefile.def

OBJS       = IncrementalIntegrator.o \
	StaticIntegrator.o \
	TransientIntegrator.o \
	HHT.o \
	GeneralizedAlpha.o \
	WilsonTheta.o \
	Newmark.o \
	CentralDifference.o \
	Integrator.o \
	LoadControl.o \
	HHT1.o \
	Newmark1.o \
	CentralDifferenceAlternative.o \
	TRBDF2.o \
	ArcLength.o \
	ArcLength1.o \
	LoadPath.o \
	DisplacementControl.o \
	DistributedDisplacementControl.o \
	MinUnbalDispNorm.o \
	EigenIntegrator.o \
	HSConstraint.o \
	CentralDifferenceNoDamping.o \
	NewmarkExplicit.o \
	NewmarkHSFixedNumIter.o \
	NewmarkHSIncrReduct.o \
	HHTExplicit.o \
	HHTGeneralized.o \
	HHTGeneralizedExplicit.o \
	HHTHSFixedNumIter.o \
	HHTHSIncrReduct.o \
	Collocation.o \
	CollocationHSFixedNumIter.o \
	CollocationHSIncrReduct.o \
	AlphaOSGeneralized.o \
	AlphaOS.o 

all:         $(OBJS)

# Miscellaneous
tidy:	
	@$(RM) $(RMFLAGS) Makefile.bak *~ #*# core

clean: tidy
	@$(RM) $(RMFLAGS) $(OBJS) *.o

spotless: clean

wipe: spotless


# DO NOT DELETE THIS LINE -- make depend depends on it.
