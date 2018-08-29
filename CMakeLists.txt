cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(DBEstiMain)
# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 14)
if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-std=gnu++0x)
endif()

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

add_executable (DBEstiMain DBEstiMain.cpp)
target_link_libraries(DBEstiMain DBEsti)