cmake_minimum_required(VERSION 3.22)
project(MAIN LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

#set(SRC_F
    #lib/decorator.cpp
#)

set(HEAD_F
    lib/decorator.hpp
)

add_executable(${PROJECT_NAME} main.cpp ${SRC_F} ${HEAD_F})
