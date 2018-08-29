cmake_minimum_required (VERSION 3.2)
project(DBEsti)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)


# should we use xgboost library
option(USE_XGBOOST 
  "Use XGBOOST Library" ON)


add_subdirectory(sample_lib_1)
add_subdirectory(sample_lib_2)

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

add_executable (main main.cpp)


#add_library(DBEsti main.cpp)
target_link_libraries (main SAMPLE_LIB_1 SAMPLE_LIB_2 ${EXTRA_LIBS} )

