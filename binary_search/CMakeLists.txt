cmake_minimum_required (VERSION 2.6)
project (binary_search)

set (LIST_DIR ${CMAKE_SOURCE_DIR})
set (EXECUTABLE_OUTPUT_PATH ${LIST_DIR}/bin)

include_directories ("$ENV{GTEST_ROOT}/include")
link_directories ("$ENV{GTEST_ROOT}/make")
link_libraries ("libgtest_main.a")

add_executable(test_binary_search src/binary_search.h
        src/test_binary_search.cpp)
