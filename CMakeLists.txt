cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

project(Pong)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_executable(Pong main.cpp)