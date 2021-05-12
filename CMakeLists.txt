cmake_minimum_required(VERSION 3.10)

project(bomberman CXX)

set(BIN_NAME bomberman)

file(GLOB SRC_FILES
    src/main.cpp
)

add_executable(${BIN_NAME} ${SRC_FILES})

include_directories(
    include/
    src/errors/
    src/
)

target_compile_options(${BIN_NAME} PUBLIC
    -W
    -Wall
    -Wextra
    -Werror
    -Wuninitialized 
    -Wformat-security
    -std=c++17
)