cmake_minimum_required(VERSION 2.8.4)
project(Practice)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Child.cpp Container.cpp List_Container.cpp)
add_executable(Practice ${SOURCE_FILES})

