cmake_minimum_required(VERSION 3.17)
project(Snake)

set(CMAKE_CXX_STANDARD 14)

target_sources(Snake PRIVATE main.cpp World.cpp)