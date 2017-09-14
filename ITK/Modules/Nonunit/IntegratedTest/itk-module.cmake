set(DOCUMENTATION "This modules contains tests targeting the behavior of
multiple modules of the toolkit when they act together.")

itk_module(ITKIntegratedTest
  TEST_DEPENDS
    ITKAnisotropicSmoothing
    ITKAntiAlias
    ITKBiasCorrection
    ITKBioCell
    ITKClassifiers
    ITKCommon
    ITKConnectedComponents
    ITKCurvatureFlow
    ITKDeformableMesh
    ITKDisplacementField
    ITKDiffusionTensorImage
    ITKDistanceMap
    ITKEigen
    ITKFEM
    ITKFEMRegistration
    ITKFFT
    ITKFiniteDifference
    ITKImageAdaptors
    ITKImageCompare
    ITKImageCompose
    ITKImageFeature
    ITKImageFilterBase
    ITKImageFunction
    ITKImageGradient
    ITKImageGrid
    ITKImageIntensity
    ITKImageLabel
    ITKImageSources
    ITKImageStatistics
    ITKIOImageBase
    ITKIOBioRad
    ITKIOBMP
    ITKIOGDCM
    ITKIOGE
    ITKIOGIPL
    ITKIOIPL
    ITKIOJPEG
    ITKIOMeta
    ITKIONIFTI
    ITKIONRRD
    ITKIOPNG
    ITKIORAW
    ITKIOSiemens
    ITKIOTransformBase
    ITKIOTransformMatlab
    ITKIOTransformHDF5
    ITKIOTransformInsightLegacy
    ITKIOSpatialObjects
    ITKIOStimulate
    ITKIOTIFF
    ITKIOVTK
    ITKIOXML
    ITKKLMRegionGrowing
    ITKLabelVoting
    ITKLevelSets
    ITKIOLSM
    ITKMarkovRandomFieldsClassifiers
    ITKMathematicalMorphology
    ITKMesh
    ITKNarrowBand
    ITKNeuralNetworks
    ITKOptimizers
    ITKPath
    ITKPDEDeformableRegistration
    ITKPolynomials
    ITKQuadEdgeMesh
    ITKQuadEdgeMeshFiltering
    ITKRegionGrowing
    ITKRegistrationCommon
    ITKSignedDistanceFunction
    ITKSmoothing
    ITKSpatialFunction
    ITKSpatialObjects
    ITKStatistics
    ITKThresholding
    ITKVoronoi
    ITKVTK
    ITKWatersheds
    ITKTestKernel
  DESCRIPTION
    "${DOCUMENTATION}"
)
