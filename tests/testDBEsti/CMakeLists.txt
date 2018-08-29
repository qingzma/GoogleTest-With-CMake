file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testDBEsti ${SRCS})

TARGET_LINK_LIBRARIES(
    testDBEsti
    DBEsti
    libgtest
    libgmock
)

add_test(NAME testDBEsti
         COMMAND testDBEsti)