cmake_minimum_required(VERSION 3.23)
project(calck)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(calck main.cpp Stack.cpp Stack.h calc.cpp calc.h tests.cpp)
target_link_libraries(calck gtest_main)