cmake_minimum_required(VERSION 3.10.0)
project(29_Divide_Two_Integers VERSION 0.1.0 LANGUAGES C CXX)

find_package(GTest REQUIRED)

set(TARGET_TESTS pf-tests)
add_executable(${TARGET_TESTS})
target_include_directories(${TARGET_TESTS} PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_sources(${TARGET_TESTS} PRIVATE
 ${CMAKE_SOURCE_DIR}/src/Solution.cpp
 ${CMAKE_SOURCE_DIR}/test/test-main.cpp
 ${CMAKE_SOURCE_DIR}/test/test-packet-filter.cpp)

target_link_libraries(${TARGET_TESTS} PRIVATE
  GTest::GTest)

