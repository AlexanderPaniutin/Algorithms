cmake_minimum_required (VERSION 2.6)

project (Solution)
add_executable(Solution solution.cpp)
add_executable(Solution solution_test.cpp)


include_directories("../../thirdParty/gtest-1.7.0/include/")
link_directories("../../thirdParty/gtest-1.7.0/make")
target_link_libraries (Solution gtest_mail.a)
