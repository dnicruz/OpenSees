include ../../../Makefile.def

OBJS       = FlatSliderSimple2d.o \
	FlatSliderSimple3d.o \
	SingleFPSimple2d.o \
	SingleFPSimple3d.o \
	TclFlatSliderCommand.o \
	TclSingleFPCommand.o \
	TPB1D.o

# Compilation control

all:         $(OBJS)
	@$(CD) $(FE)/element/frictionBearing/frictionModel; $(MAKE);

# Miscellaneous
tidy:	
	@$(RM) $(RMFLAGS) Makefile.bak *~ #*# core

clean: tidy
	@$(RM) $(RMFLAGS) $(OBJS) *.o

spotless: clean

wipe: spotless
	@$(CD) $(FE)/element/frictionBearing/frictionModel; $(MAKE) wipe;

# DO NOT DELETE THIS LINE -- make depend depends on it.
