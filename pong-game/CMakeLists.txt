cmake_minimum_required(VERSION 3.22)
project(pong_game)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(SFML_TEST main.cpp Ball.cpp Ball.h BallPool.cpp BallPool.h)

set(SFML_DIR "${CMAKE_CURRENT_SOURCE_DIR}/lib/cmake/SFML")
find_package(SFML REQUIRED COMPONENTS audio network graphics window system)
target_link_libraries(SFML_TEST sfml-audio sfml-network sfml-graphics sfml-window sfml-system)