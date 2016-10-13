#Add custom path to find path
set(CMAKE_PREFIX_PATH ${GTEST_ROOT_DIR})

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

#Use our public headers like anyone else 
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(../src)

set( SRCS
    ../src/MyApp.cpp
    MyApp_test.cpp
    )

add_executable(MyApp_test ${SRCS})

target_link_libraries(MyApp_test ${GTEST_BOTH_LIBRARIES} myLibShared)

add_test(MyApp_test MyApp_test)
