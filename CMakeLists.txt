cmake_minimum_required(VERSION 3.17)
project(Snake)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(Snake)
add_subdirectory(src)
add_subdirectory(src/Entities)

target_link_libraries(Snake sfml-graphics sfml-window sfml-system sfml-audio)