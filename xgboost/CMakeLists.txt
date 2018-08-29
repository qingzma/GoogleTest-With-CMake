# should we use xgboost library
option(USE_XGBOOST 
  "Use XGBOOST Library" ON)

if (USE_XGBOOST)
	add_subdirectory(xgboost)
	set (XGBOOST_RABIT_DIR "/home/u1796377/Workspace/DBEsti/build/src/xgboost/xgboost/src/xgboost-build")
	set (XGBOOST_DMLC_DIR "${XGBOOST_RABIT_DIR}/dmlc-core")
	#set (XGBOOST_OUTPUT_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../build/src/xgboost/xgboost/src/xgboost/lib")
	
	include_directories(xgboost)
	include_directories ("${XGBOOST_DMLC_DIR}")
	include_directories ("${XGBOOST_RABIT_DIR}")
	#include_directories(${XGBOOST_OUTPUT_LIB_DIR})

	set (EXTRA_LIBS ${EXTRA_LIBS} )
	#set (EXTRA_LIBS ${EXTRA_LIBS}   ${XGBOOST_DMLC_DIR}/libdmlc.a) #${XGBOOST_RABIT_DIR}/librabit.a
endif (USE_XGBOOST)



