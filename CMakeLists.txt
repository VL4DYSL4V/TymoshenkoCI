cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled
        random/Random.cpp
        random/LinearCongruentRandom.cpp
        exception/IllegalArgumentException.cpp
        main.cpp)

project(tests)

set(CMAKE_CXX_STANDARD 20)

add_executable(tests
        random/Random.cpp
        random/LinearCongruentRandom.cpp
        exception/IllegalArgumentException.cpp
        test/test.cpp)
