cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER gcc)

project(PtrSwap)

add_executable(PtrSwap src/main.cpp)

target_compile_options(PtrSwap PRIVATE
    -Wall
    -Wextra
    -pedantic
    -O2
)
