cmake_minimum_required(VERSION 3.26)
project(labor1)

set(CMAKE_CXX_STANDARD 23)

add_executable(labor1 main.cpp
        Sources/functions.cpp
        Headers/functions.h)
include_directories(Headers)
