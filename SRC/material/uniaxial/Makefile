include ../../../Makefile.def

 OBJS       = UniaxialMaterial.o \
	ElasticMaterial.o \
	Elastic2Material.o \
        ElasticPPMaterial.o \
        ElasticBilin.o \
	ParallelMaterial.o \
	Neoprene.o \
	Maxwell.o \
        HardeningMaterial.o \
	Concrete01.o \
	Concrete04.o \
	Concrete04.o \
	Concrete06.o \
	Concrete07.o \
	Steel01.o \
        HystereticMaterial.o \
	EPPGapMaterial.o \
        ViscousMaterial.o \
	SeriesMaterial.o \
	InitStrainMaterial.o \
	InitStressMaterial.o \
	MinMaxMaterial.o \
        PathIndependentMaterial.o \
	CableMaterial.o \
	ENTMaterial.o \
	FedeasMaterial.o \
	DrainMaterial.o \
	BoucWenMaterial.o \
	SecantConcrete.o \
	HardeningMaterial2.o \
	Pinching4Material.o \
	BarSlipMaterial.o \
	FatigueMaterial.o \
	SteelMP.o \
	SmoothPSConcrete.o \
	Steel02.o \
	Concrete02.o \
	Steel03.o \
	Bond_SP01.o \
	UniaxialJ2Plasticity.o \
	HyperbolicGapMaterial.o \
	TclHyperbolicGapMaterial.o \
	ImpactMaterial.o \
	TclImpactMaterial.o \
	KinematicHardening.o \
	TclKinematicHardening.o \
	NewUniaxialMaterial.o \
	TclNewUnixialMaterial.o \
	ReinforcingSteel.o \
	TclReinforcingSteel.o \
	PenaltyMaterial.o \
	ContinuumUniaxial.o \
	WrappedMaterial.o \
	SecantMaterial.o \
	Concrete01WithSITC.o \
	Concrete05.o \
	ECC01.o \
	PrestressedSteelMaterial.o \
	ElasticBDMaterial.o \
	ShearPanelMaterial.o \
	SelfCenteringMaterial.o \
	BackboneMaterial.o \
	WrapperUniaxialMaterial.o \
	SAWSMaterial.o \
	ConfinedConcrete01.o \
	ConfinedConcrete02.o \
	pyUCLA.o \
        TclModelBuilderUniaxialMaterialCommand.o

all:         $(OBJS)
	@$(CD) $(FE)/material/uniaxial/fedeas; $(MAKE);
	@$(CD) $(FE)/material/uniaxial/drain; $(MAKE);
	@$(CD) $(FE)/material/uniaxial/snap; $(MAKE);
	@$(CD) $(FE)/material/uniaxial/PY; $(MAKE);
	@$(CD) $(FE)/material/uniaxial/backbone; $(MAKE);
	@$(CD) $(FE)/material/uniaxial/limitState; $(MAKE);

# Miscellaneous

tidy:   
	@$(RM) $(RMFLAGS) Makefile.bak *~ #*# core

clean: tidy
	@$(RM) $(RMFLAGS) $(OBJS) *.o

spotless: clean
	@$(CD) $(FE)/material/uniaxial/fedeas; $(MAKE) wipe;
	@$(CD) $(FE)/material/uniaxial/drain; $(MAKE) wipe;
	@$(CD) $(FE)/material/uniaxial/snap; $(MAKE) wipe;
	@$(CD) $(FE)/material/uniaxial/PY; $(MAKE) wipe;
	@$(CD) $(FE)/material/uniaxial/backbone; $(MAKE) wipe;
	@$(CD) $(FE)/material/uniaxial/limitState; $(MAKE) wipe;

wipe: spotless

# DO NOT DELETE THIS LINE -- make depend depends on it.
