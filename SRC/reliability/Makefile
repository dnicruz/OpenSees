include ../../Makefile.def

RELIABILITY_OBJS = $(FE)/domain/pattern/DiscretizedRandomProcessSeries.o \
		$(FE)/domain/pattern/SimulatedRandomProcessSeries.o \
		$(FE)/reliability/analysis/analysis/FORMAnalysis.o \
		$(FE)/reliability/analysis/analysis/FragilityAnalysis.o \
		$(FE)/reliability/analysis/analysis/GFunVisualizationAnalysis.o \
		$(FE)/reliability/analysis/analysis/FOSMAnalysis.o \
		$(FE)/reliability/analysis/analysis/ParametricReliabilityAnalysis.o \
		$(FE)/reliability/analysis/analysis/OutCrossingAnalysis.o \
		$(FE)/reliability/analysis/analysis/SamplingAnalysis.o \
		$(FE)/reliability/analysis/analysis/ReliabilityAnalysis.o \
		$(FE)/reliability/analysis/analysis/SORMAnalysis.o \
		$(FE)/reliability/analysis/analysis/SystemAnalysis.o \
		$(FE)/reliability/analysis/analysis/system/IPCM.o \
		$(FE)/reliability/analysis/analysis/system/PCM.o \
		$(FE)/reliability/analysis/analysis/system/SCIS.o \
		$(FE)/reliability/analysis/analysis/system/MVNcdf.o \
		$(FE)/reliability/analysis/analysis/BivariateDecomposition.o \
		$(FE)/reliability/analysis/analysis/DP_RSM_Sim.o \
		$(FE)/reliability/analysis/analysis/DP_RSM_Sim_TimeVariant.o \
		$(FE)/reliability/analysis/analysis/ExperimentalPointRule1D.o \
		$(FE)/reliability/analysis/analysis/GridPlane.o \
		$(FE)/reliability/analysis/analysis/ImportanceSamplingAnalysis.o \
		$(FE)/reliability/analysis/analysis/MonteCarloResponseAnalysis.o \
		$(FE)/reliability/analysis/analysis/MultiDimVisPrincPlane.o \
		$(FE)/reliability/analysis/analysis/OrthogonalPlaneSamplingAnalysis.o \
		$(FE)/reliability/analysis/analysis/PrincipalAxis.o \
		$(FE)/reliability/analysis/analysis/RespSurfaceSimulation.o \
		$(FE)/reliability/analysis/analysis/SurfaceDesign.o \
		$(FE)/reliability/analysis/analysis/UniformExperimentalPointRule1D.o \
		$(FE)/reliability/analysis/analysis/UnivariateDecomposition.o \
		$(FE)/reliability/analysis/convergenceCheck/OptimalityConditionReliabilityConvergenceCheck.o \
		$(FE)/reliability/analysis/convergenceCheck/ReliabilityConvergenceCheck.o \
		$(FE)/reliability/analysis/convergenceCheck/StandardReliabilityConvergenceCheck.o \
		$(FE)/reliability/analysis/curvature/CurvaturesBySearchAlgorithm.o \
		$(FE)/reliability/analysis/curvature/FindCurvatures.o \
		$(FE)/reliability/analysis/curvature/FirstPrincipalCurvature.o \
		$(FE)/reliability/analysis/designPoint/SearchWithStepSizeAndStepDirection.o \
		$(FE)/reliability/analysis/designPoint/FindDesignPointAlgorithm.o \
		$(FE)/reliability/analysis/direction/HLRFSearchDirection.o \
		$(FE)/reliability/analysis/direction/SearchDirection.o \
		$(FE)/reliability/analysis/direction/PolakHeSearchDirectionAndMeritFunction.o \
		$(FE)/reliability/analysis/direction/SQPsearchDirectionMeritFunctionAndHessian.o \
		$(FE)/reliability/analysis/direction/GradientProjectionSearchDirection.o \
		$(FE)/reliability/analysis/gFunction/BasicGFunEvaluator.o \
		$(FE)/reliability/analysis/gFunction/GFunEvaluator.o \
		$(FE)/reliability/analysis/gFunction/OpenSeesGFunEvaluator.o \
		$(FE)/reliability/analysis/gFunction/TclGFunEvaluator.o \
		$(FE)/reliability/analysis/hessianApproximation/HessianApproximation.o \
		$(FE)/reliability/analysis/hessianApproximation/Hessian.o \
		$(FE)/reliability/analysis/meritFunction/AdkZhangMeritFunctionCheck.o \
		$(FE)/reliability/analysis/meritFunction/CriteriaReductionMeritFunctionCheck.o \
		$(FE)/reliability/analysis/meritFunction/MeritFunctionCheck.o \
		$(FE)/reliability/analysis/misc/MatrixOperations.o \
		$(FE)/reliability/analysis/misc/CorrelatedStandardNormal.o \
		$(FE)/reliability/analysis/randomNumber/CStdLibRandGenerator.o \
		$(FE)/reliability/analysis/randomNumber/RandomNumberGenerator.o \
		$(FE)/reliability/analysis/rootFinding/RootFinding.o \
		$(FE)/reliability/analysis/rootFinding/SecantRootFinding.o \
		$(FE)/reliability/analysis/rootFinding/SafeGuardedZeroFindingAlgorithm.o \
		$(FE)/reliability/analysis/rootFinding/ZeroFindingAlgorithm.o \
		$(FE)/reliability/analysis/sensitivity/OpenSeesGradGEvaluator.o \
		$(FE)/reliability/analysis/sensitivity/FiniteDifferenceGradGEvaluator.o \
		$(FE)/reliability/analysis/sensitivity/GradGEvaluator.o \
		$(FE)/reliability/analysis/stepSize/ArmijoStepSizeRule.o \
		$(FE)/reliability/analysis/stepSize/FixedStepSizeRule.o \
		$(FE)/reliability/analysis/stepSize/StepSizeRule.o \
		$(FE)/reliability/analysis/transformation/NatafProbabilityTransformation.o \
		$(FE)/reliability/analysis/transformation/ProbabilityTransformation.o \
		$(FE)/reliability/analysis/telm/AllIndependentTransformation.o \
		$(FE)/reliability/analysis/telm/NewNewmarkSensitivityIntegrator.o \
		$(FE)/reliability/analysis/telm/RandomVibrationSimulatorResult.o \
		$(FE)/reliability/analysis/telm/Analyzer.o \
		$(FE)/reliability/analysis/telm/NewSearchWithStepSizeAndStepDirection.o \
		$(FE)/reliability/analysis/telm/ranrotb.o \
		$(FE)/reliability/analysis/telm/AnalyzerGFunEvaluator.o \
		$(FE)/reliability/analysis/telm/NewSensitivityAlgorithm.o \
		$(FE)/reliability/analysis/telm/ranrotw.o \
		$(FE)/reliability/analysis/telm/AnalyzerGradGEvaluator.o \
		$(FE)/reliability/analysis/telm/NewStandardLinearOscillatorAccelerationFilter.o \
		$(FE)/reliability/analysis/telm/ReliabilityDirectIntegrationAnalysis.o \
		$(FE)/reliability/analysis/telm/CrossingRateAnalyzer.o \
		$(FE)/reliability/analysis/telm/NewStaticSensitivityIntegrator.o \
		$(FE)/reliability/analysis/telm/ReliabilityStaticAnalysis.o \
		$(FE)/reliability/analysis/telm/DynamciAnalyzer.o \
		$(FE)/reliability/analysis/telm/NewWhitenoiseFilter.o \
		$(FE)/reliability/analysis/telm/SelectLoadInitialStaticAnalysis.o \
		$(FE)/reliability/analysis/telm/FirstPassageAnalyzer.o \
		$(FE)/reliability/analysis/telm/NonStatFirstPassageAnalyzer.o \
		$(FE)/reliability/analysis/telm/SmoothConcrete02.o \
		$(FE)/reliability/analysis/telm/FOSeriesSimulation.o \
		$(FE)/reliability/analysis/telm/NonStatRandomVibrationSimulation.o \
		$(FE)/reliability/analysis/telm/StatFirstPassageAnalyzer.o \
		$(FE)/reliability/analysis/telm/GeneralRandGenerator.o \
		$(FE)/reliability/analysis/telm/OutCrossingResults.o \
		$(FE)/reliability/analysis/telm/StaticAnalyzer.o \
		$(FE)/reliability/analysis/telm/GFunEachStepEvaluator.o \
		$(FE)/reliability/analysis/telm/PerformanceFunctionCoeff.o \
		$(FE)/reliability/analysis/telm/StatRandomVibrationSimulation.o \
		$(FE)/reliability/analysis/telm/InitialPointBuilder.o \
		$(FE)/reliability/analysis/telm/PerformanceFunctionCoefficientIter.o \
		$(FE)/reliability/analysis/telm/ThresholdIncInitialPointBuilder.o \
		$(FE)/reliability/analysis/telm/InitialStaticAnalysis.o \
		$(FE)/reliability/analysis/telm/rancombi.o \
		$(FE)/reliability/analysis/telm/TimePoints.o \
		$(FE)/reliability/analysis/telm/mersenne.o \
		$(FE)/reliability/analysis/telm/RandomProcess.o \
		$(FE)/reliability/analysis/telm/UniformGenerator.o \
		$(FE)/reliability/analysis/telm/mother.o \
		$(FE)/reliability/analysis/telm/RandomVibrationAnalysis.o \
		$(FE)/reliability/analysis/telm/NewDiscretizedRandomProcessSeries.o \
		$(FE)/reliability/analysis/telm/RandomVibrationSimulation.o \
		$(FE)/reliability/analysis/telm/localMath.o \
		$(FE)/reliability/domain/components/CorrelationCoefficient.o \
		$(FE)/reliability/domain/components/CorrelationCoefficientIter.o \
		$(FE)/reliability/domain/components/ParameterPositioner.o \
		$(FE)/reliability/domain/components/ParameterPositionerIter.o \
		$(FE)/reliability/domain/components/LimitStateFunction.o \
		$(FE)/reliability/domain/components/LimitStateFunctionIter.o \
		$(FE)/reliability/domain/components/RandomVariable.o \
		$(FE)/reliability/domain/components/RandomVariableIter.o \
		$(FE)/reliability/domain/components/RandomVariablePositioner.o \
		$(FE)/reliability/domain/components/RandomVariablePositionerIter.o \
		$(FE)/reliability/domain/components/ReliabilityDomainComponent.o \
		$(FE)/reliability/domain/components/ReliabilityDomain.o \
		$(FE)/reliability/domain/components/PrincipalPlane.o \
		$(FE)/reliability/domain/components/Cutset.o \
		$(FE)/reliability/domain/components/CutsetIter.o \
		$(FE)/reliability/domain/distributions/BetaRV.o \
		$(FE)/reliability/domain/distributions/GumbelRV.o \
		$(FE)/reliability/domain/distributions/ParetoRV.o \
		$(FE)/reliability/domain/distributions/Type1LargestValueRV.o \
		$(FE)/reliability/domain/distributions/UniformRV.o \
		$(FE)/reliability/domain/distributions/ChiSquareRV.o \
		$(FE)/reliability/domain/distributions/LaplaceRV.o \
		$(FE)/reliability/domain/distributions/RayleighRV.o \
		$(FE)/reliability/domain/distributions/Type1SmallestValueRV.o \
		$(FE)/reliability/domain/distributions/WeibullRV.o \
		$(FE)/reliability/domain/distributions/ExponentialRV.o \
		$(FE)/reliability/domain/distributions/LognormalRV.o \
		$(FE)/reliability/domain/distributions/ShiftedExponentialRV.o \
		$(FE)/reliability/domain/distributions/Type2LargestValueRV.o \
		$(FE)/reliability/domain/distributions/GammaRV.o \
		$(FE)/reliability/domain/distributions/NormalRV.o \
		$(FE)/reliability/domain/distributions/ShiftedRayleighRV.o \
		$(FE)/reliability/domain/distributions/Type3SmallestValueRV.o \
		$(FE)/reliability/domain/distributions/UserDefinedRV.o \
		$(FE)/reliability/domain/modulatingFunction/ModulatingFunction.o \
		$(FE)/reliability/domain/modulatingFunction/ModulatingFunctionIter.o \
		$(FE)/reliability/domain/modulatingFunction/ConstantModulatingFunction.o \
		$(FE)/reliability/domain/modulatingFunction/GammaModulatingFunction.o \
		$(FE)/reliability/domain/modulatingFunction/TrapezoidalModulatingFunction.o \
		$(FE)/reliability/domain/modulatingFunction/KooModulatingFunction.o \
		$(FE)/reliability/domain/spectrum/JonswapSpectrum.o \
		$(FE)/reliability/domain/spectrum/NarrowBandSpectrum.o \
		$(FE)/reliability/domain/spectrum/PointsSpectrum.o \
		$(FE)/reliability/domain/spectrum/Spectrum.o \
		$(FE)/reliability/domain/spectrum/SpectrumIter.o \
		$(FE)/reliability/domain/filter/Filter.o \
		$(FE)/reliability/domain/filter/FilterIter.o \
		$(FE)/reliability/domain/filter/StandardLinearOscillatorAccelerationFilter.o \
		$(FE)/reliability/domain/filter/StandardLinearOscillatorDisplacementFilter.o \
		$(FE)/reliability/domain/filter/StandardLinearOscillatorVelocityFilter.o \
		$(FE)/reliability/domain/filter/KooFilter.o \
		$(FE)/reliability/domain/filter/DeltaFilter.o \
		$(FE)/reliability/FEsensitivity/SensitivityAlgorithm.o \
		$(FE)/reliability/FEsensitivity/SensitivityIntegrator.o \
		$(FE)/reliability/FEsensitivity/StaticSensitivityIntegrator.o \
		$(FE)/reliability/FEsensitivity/NewmarkSensitivityIntegrator.o \
		$(FE)/reliability/tcl/TclReliabilityBuilder.o \
		$(FE)/reliability/optimization/ConstraintFunction.o \
		$(FE)/reliability/optimization/DesignVariable.o \
		$(FE)/reliability/optimization/DesignVariablePositioner.o \
		$(FE)/reliability/optimization/ObjectiveFunction.o \
		$(FE)/reliability/optimization/ToyFunction.o \
		$(FE)/reliability/optimization/ToyOptFunction.o \
		$(FE)/optimization/TclOptimizationBuilder.o 

#		$(FE)/reliability/optimization/SnoptAnalysis.o \
#		$(FE)/reliability/optimization/SnoptProblem.o \
#		$(FE)/reliability/optimization/SnoptWrapper.o \


# Compilation control
all:         
	     @$(CD) $(FE)/reliability/analysis; $(MAKE);
	     @$(CD) $(FE)/reliability/domain; $(MAKE);
	     @$(CD) $(FE)/reliability/FEsensitivity; $(MAKE);
	     @$(CD) $(FE)/reliability/tcl; $(MAKE);
	     @$(CD) $(FE)/reliability/optimization; $(MAKE);
	     @$(CD) $(FE)/optimization; $(MAKE);
	     $(AR) $(ARFLAGS) $(RELIABILITY_LIBRARY) $(RELIABILITY_OBJS)

# Miscellaneous
tidy:	
	@$(RM) $(RMFLAGS) Makefile.bak *~ #*# core

clean: tidy
	@$(RM) $(RMFLAGS) $(OBJS) *.o

spotless: clean

wipe: spotless
	     @$(CD) $(FE)/reliability/analysis; $(MAKE) wipe;
	     @$(CD) $(FE)/reliability/domain; $(MAKE) wipe;
	     @$(CD) $(FE)/reliability/FEsensitivity; $(MAKE) wipe;
	     @$(CD) $(FE)/reliability/tcl; $(MAKE) wipe;
	     @$(CD) $(FE)/reliability/optimization; $(MAKE) wipe;

# DO NOT DELETE THIS LINE -- make depend depends on it.
