cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory("externals/SDL2")
set_target_properties( SDL2 SDL2main SDL2-static PROPERTIES FOLDER "Externals")

project(Pong)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


add_executable(Pong main.cpp graphics.cpp graphics.hpp input.cpp input.hpp)

target_link_libraries(Pong 
  PUBLIC SDL2-static
  PUBLIC SDL2main
)