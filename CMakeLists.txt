cmake_minimum_required(VERSION 3.20)

project(PtrSwap LANGUAGES C)

set(CMAKE_C_COMPILER clang)
set(CMAKE_LINKER_TYPE LLD)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(PtrSwap src/main.c)

target_compile_features(PtrSwap PRIVATE c_std_23)

target_compile_options(PtrSwap PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -O2
)
