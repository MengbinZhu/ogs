AddTest(
    NAME PhaseField_3D_Unconfined_Compression
    PATH PhaseField
    EXECUTABLE ogs
    EXECUTABLE_ARGS cube_1e0.prj
    WRAPPER time
    TESTER vtkdiff
    REQUIREMENTS NOT (OGS_USE_LIS OR OGS_USE_MPI)
    DIFF_DATA
    expected_cube_1e0_pcs_0_ts_10000_t_1.000000.vtu cube_1e0_pcs_0_ts_10000_t_1.000000.vtu displacement displacement 1e-6 1e-6
    expected_cube_1e0_pcs_0_ts_10000_t_1.000000.vtu cube_1e0_pcs_0_ts_10000_t_1.000000.vtu phasefield phasefield 1e-6 1e-6
   )
