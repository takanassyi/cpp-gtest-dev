cmake_minimum_required(VERSION 3.5)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(cpp-gtest-dev)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(TestSample1 test_calculator.cc)
target_link_libraries(TestSample1 testcpp GTest::GTest GTest::Main)
include_directories(${PROJECT_SOURCE_DIR}/src ${GTEST_INCLUDE_DIRS})

# Google Testの各テストケースごとにCTestのテストを作成する
gtest_add_tests(TARGET TestSample1)

