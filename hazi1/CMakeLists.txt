cmake_minimum_required(VERSION 3.26)
project(hazi1)

set(CMAKE_CXX_STANDARD 23)

add_executable(hazi1 main.cpp
        Sources/functions.cpp
        Headers/functions.h)
include_directories(Headers)