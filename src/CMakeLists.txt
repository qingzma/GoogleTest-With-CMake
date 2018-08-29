project(DBEsti)

set(DBEsti_SRCS
    DBEsti.hpp
    DBEsti.cpp
)

# Declare the library
add_library(DBEsti STATIC
    ${DBEsti_SRCS}
)

# target_link_libraries(DBEsti_LIB
#     #SAMPLE_LIB_2
# )


# Specify here the include directories exported
# by this library
target_include_directories(DBEsti PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

