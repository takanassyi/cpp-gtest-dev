cmake_minimum_required(VERSION 3.5)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(cpp-gtest-dev)
enable_testing()
add_subdirectory(src)
add_subdirectory(test)
#add_test(
#        NAME MyTests
#        COMMAND MyTest
#)