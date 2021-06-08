cmake_minimum_required(VERSION 3.12)
project(bomberman CXX)

SET(CMAKE_BUILD_TYPE Debug)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}")
find_package(raylib REQUIRED)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../)

set(BIN_NAME bomberman)

file(GLOB SRC_FILES
    src/engine/Misc/Colors.cpp
    src/engine/Misc/Texture.cpp
    src/engine/Misc/RayVector.cpp
    src/engine/Misc/RayHitInfo.cpp
    src/engine/Misc/Matrix.cpp
    src/engine/Misc/RectangleVector.cpp
    src/engine/Misc/Camera.cpp

    src/engine/Shape/Geometric/Rectangle.cpp
    src/engine/Shape/Geometric/Pixel.cpp
    src/engine/Shape/Geometric/Ellipse.cpp
    src/engine/Shape/Geometric/Polygon.cpp
    src/engine/Shape/Geometric/Ring.cpp
    src/engine/Shape/Geometric/Triangle.cpp
    src/engine/Shape/Geometric/Line.cpp
    src/engine/Shape/Geometric/Circle.cpp

    src/engine/Shape/Collision/CheckCollision.cpp

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
    #src/engine/Models/MeshGeneration/GenMesh.cpp
    #src/engine/Models/MeshManipulation/MeshManipulation.cpp
    #src/engine/Models/ModelDrawing/DrawBoundingBox.cpp
    #src/engine/Models/ModelDrawing/DrawBillboard.cpp
    #src/engine/Models/ModelDrawing/DrawModel.cpp
    src/engine/Text/Text.cpp
    src/engine/Audio/Audio.cpp

    src/engine/Core/CoreRaylib.cpp
    src/engine/Core/InputMouse.cpp
    src/engine/Core/InputKeyboard.cpp
    src/engine/Core/InputGamepads.cpp
    src/engine/Core/Cursor.cpp

    src/main.cpp
    src/core/Core.cpp
    src/core/SceneManagement.cpp
    src/core/LibraryLoader.cpp
    src/error/Exception.cpp
)

add_executable(${BIN_NAME} ${SRC_FILES})

include_directories(
    include/
    src/error/
    src/engine/
    src/engine/Shape
    src/engine/Shape/Interfaces
    src/engine/Shape/Geometric
    src/engine/Shape/Collision
    src/engine/Models/Interfaces
    src/engine/Models/Collision
    src/engine/Models/Geometric
    src/engine/Core
    src/engine/Audio
    #src/engine/Models/MeshGeneration
    #src/engine/Models/MeshManipulation
    #src/engine/Models/ModelDrawing
    src/engine/Misc/
    src/engine/Text
    src/game/
    src/core/
)

if (UNIX)
    target_compile_options(${BIN_NAME} PUBLIC
        -W
        -Wall
        -Wextra
        -Werror
        -Wuninitialized
        -Wformat-security
        -std=c++17
    )
endif(UNIX)
if (WIN32)
    target_compile_options(${BIN_NAME} PUBLIC
        -Wall
        -Wextra
        -Werror
        -Wuninitialized
        -Wformat-security
        -std=c++17
    )
endif(WIN32)

target_link_libraries(${BIN_NAME} PUBLIC raylib ${CMAKE_DL_LIBS})
