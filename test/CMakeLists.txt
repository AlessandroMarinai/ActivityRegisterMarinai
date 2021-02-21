cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.12.3/lib/cmake/")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)


set(TEST_SOURCE_FILES runAllTests.cpp timeTest.cpp dateTest.cpp registerTest.cpp)
add_executable(runTests ${TEST_SOURCE_FILES})
target_link_libraries(runTests gtest gtest_main core Qt5::Widgets)