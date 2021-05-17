cmake_minimum_required(VERSION 3.10)

project(bomberman CXX)
find_package(raylib 2.5.0 REQUIRED)

set(BIN_NAME bomberman)

file(GLOB SRC_FILES
    include/shape/Rectangle.cpp
    include/shape/Pixel.cpp
    include/shape/Ellipse.cpp
    include/shape/Polygon.cpp
    include/shape/Ring.cpp
    src/main.cpp
    src/core/Core.cpp
    src/core/LibraryLoader.cpp
    src/error/Exception.cpp
)

add_executable(${BIN_NAME} ${SRC_FILES})

include_directories(
    include/
    include/shape/
    src/error/
    src/engine/
    src/game/
    src/core/
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

target_link_libraries(${BIN_NAME} PUBLIC raylib ${CMAKE_DL_LIBS})
