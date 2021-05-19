cmake_minimum_required(VERSION 3.10)

project(bomberman CXX)
find_package(raylib 2.5.0 REQUIRED)

set(BIN_NAME bomberman)

file(GLOB SRC_FILES
    src/engine/Shape/Rectangle.cpp
    src/engine/Shape/Pixel.cpp
    src/engine/Shape/Ellipse.cpp
    src/engine/Shape/Polygon.cpp
    src/engine/Shape/Ring.cpp
    src/engine/Shape/Triangle.cpp
    src/engine/Shape/Line.cpp
    src/engine/Shape/Circle.cpp

    src/engine/Models/Geometric/Cube.cpp
    src/engine/Models/Geometric/Line3D.cpp
    src/engine/Models/Geometric/Point3D.cpp
    src/engine/Models/Geometric/Circle3D.cpp
    src/engine/Models/Geometric/Triangle3D.cpp
    src/engine/Models/Geometric/Ray.cpp
    src/engine/Models/Geometric/Plane.cpp
    src/engine/Models/Geometric/Grid.cpp
    src/engine/Models/Geometric/Cylinder.cpp
    src/engine/Models/Geometric/Sphere.cpp
    src/engine/Models/MeshGeneration/GenMesh.cpp
    src/engine/Models/MeshManipulation/MeshManipulation.cpp
    src/engine/Models/ModelDrawing/DrawBoundingBox.cpp

    src/main.cpp
    src/core/Core.cpp
    src/core/LibraryLoader.cpp
    src/error/Exception.cpp
)

add_executable(${BIN_NAME} ${SRC_FILES})

include_directories(
    include/
    src/error/
    src/engine/
    src/engine/Shape
    src/engine/Models/Geometric
    src/engine/Models/MeshGeneration
    src/engine/Models/MeshManipulation
    src/engine/Models/ModelDrawing
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
