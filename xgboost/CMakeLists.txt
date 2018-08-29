# We need thread support
find_package(Threads REQUIRED)

# Enable ExternalProject CMake module
include(ExternalProject)

ExternalProject_Add(xgboost
    GIT_REPOSITORY "https://github.com/dmlc/xgboost.git"
    GIT_TAG "release_0.80"
    UPDATE_COMMAND ""
    PATCH_COMMAND ""
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/xgboost
    # Disable install step
    INSTALL_COMMAND "")
    