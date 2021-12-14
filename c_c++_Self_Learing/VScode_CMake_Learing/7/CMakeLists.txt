cmake_minimum_required(VERSION 3.0)

project(SOLIDERFIRE)

set(CMAKE_CXX_FLAGS"S{CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

#include_directories(include)  //这里的include是CMakeLists.txt所在目录下的
include_directories(${CMAKE_SOURCE_DIR}/include) #也可通过绝对路径${CMAKE_SOURCE_DIR}

add_executable(my_cmake_exe main.cpp src/Gun.cpp src/Solider.cpp)
