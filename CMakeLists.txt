cmake_minimum_required(VERSION 3.12)
project(bomberman CXX)

SET(CMAKE_BUILD_TYPE Debug)
set(OpenGL_GL_PREFERENCE GLVND)
SET(CMAKE_CXX_STANDARD_17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
if(CMAKE_COMPILER_IS_GNUCXX)
    message(STATUS "GCC detected, adding compile flags")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra")
endif(CMAKE_COMPILER_IS_GNUCXX)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../)

find_package(raylib REQUIRED)

set(BIN_NAME bomberman)

file(GLOB SRC_FILES
    src/engine/Misc/Colors.cpp
    src/engine/Misc/Texture.cpp
    src/engine/Misc/RayVector.cpp
    src/engine/Misc/RayHitInfo.cpp
    src/engine/Misc/Matrix.cpp
    src/engine/Misc/RectangleVector.cpp
    src/engine/Misc/Camera.cpp
    src/engine/Misc/BoundingBox.cpp

    src/engine/Shape/Geometric/Rectangle.cpp
    src/engine/Shape/Geometric/Pixel.cpp
    src/engine/Shape/Geometric/Ellipse.cpp
    src/engine/Shape/Geometric/Polygon.cpp
    src/engine/Shape/Geometric/Ring.cpp
    src/engine/Shape/Geometric/Triangle.cpp
    src/engine/Shape/Geometric/Line.cpp
    src/engine/Shape/Geometric/Circle.cpp
    src/engine/Shape/Collision/CheckCollisionShape.cpp


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
    src/engine/Models/ModelsRaylib.cpp
    src/engine/Models/Collison.cpp

    src/engine/Text/Text.cpp
    src/engine/Audio/Audio.cpp

    src/engine/Texture/Texture.cpp

    src/engine/Core/CoreRaylib.cpp
    src/engine/Core/InputMouse.cpp
    src/engine/Core/InputKeyboard.cpp
    src/engine/Core/InputGamepads.cpp
    src/engine/Core/Cursor.cpp

    src/engine/Map/Map.cpp

    src/main.cpp
    src/core/Core.cpp
    src/core/SceneManagement.cpp
    src/error/Exception.cpp
    src/scene/MainMenu.cpp
    src/scene/GameScene.cpp
    src/core/GameObject.cpp
    src/core/Model3D.cpp
    src/core/Player.cpp
    src/core/Box.cpp
    src/core/Boost.cpp

    src/scene/SplashScreen.cpp
    src/scene/TransitionFadeOut.cpp
    src/scene/TransitionFadeIn.cpp
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
    src/engine/Models
    src/engine/Misc/
    src/engine/Text
    src/engine/Texture
    src/engine/Map
    src/game/
    src/core/
    src/scene/
)

if (UNIX)
    target_compile_options(${BIN_NAME} PUBLIC
        -g
        -Wall
        -Wextra
        -std=c++17
    )
endif(UNIX)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif(MSVC)

target_link_libraries(${BIN_NAME} PUBLIC raylib ${CMAKE_DL_LIBS})
