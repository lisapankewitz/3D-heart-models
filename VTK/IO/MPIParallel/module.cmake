vtk_module(vtkIOMPIParallel
  IMPLEMENTS
    vtkIOGeometry
    vtkIOParallel
  GROUPS
    MPI
  TEST_DEPENDS
    vtkRendering${VTK_RENDERING_BACKEND}
    vtkTestingRendering
    vtkInteractionStyle
  KIT
    vtkParallel
  DEPENDS
    vtkIOGeometry
    vtkIOParallel
  PRIVATE_DEPENDS
    vtkCommonCore
    vtkCommonDataModel
    vtkCommonExecutionModel
    vtkCommonMisc
    vtkParallelMPI
    vtksys
  )