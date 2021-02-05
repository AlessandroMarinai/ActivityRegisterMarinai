cmake_minimum_required(VERSION 3.14)
project(qtHelloWorld)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.12.3/lib/cmake/")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)

add_subdirectory(test)

set(SOURCE_FILES Date.h Schedule.h Date.cpp)
add_executable(qtHelloWorld main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(qtHelloWorld Qt5::Widgets core)



