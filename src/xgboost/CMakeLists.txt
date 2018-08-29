# We need thread support
find_package(Threads REQUIRED)

# Enable ExternalProject CMake module
include(ExternalProject)

# Download and install XGBoost
ExternalProject_Add(
    xgboost
    GIT_REPOSITORY https://github.com/dmlc/xgboost.git
    GIT_TAG "release_0.80"
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/xgboost
    # Disable install step
    INSTALL_COMMAND ""
)

# Get GTest source and binary directories from CMake project
ExternalProject_Get_Property(xgboost source_dir binary_dir)

# Create a xgboost target to be used as a dependency by test programs
# add_library(libxgboost IMPORTED STATIC GLOBAL)
# add_dependencies(libxgboost xgboost)

# Set libxgboost properties
# set_target_properties(xgboost PROPERTIES
# 	"R_LIB" OFF
#     #"IMPORTED_LOCATION" "${binary_dir}/xgboost/libxgboost.a"
#     #"IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
# )



# I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
include_directories("${source_dir}/xgboost/include")

          
