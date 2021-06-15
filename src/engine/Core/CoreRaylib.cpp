/**
 * @file CoreRaylib.cpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of the core module from raylib
 * @version 0.1
 * @date 2021-06-10
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "CoreRaylib.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Core:: Core:: Core object
 * @brief Initialize window and OpenGL context
 *
 * @param width
 * @param height
 * @param title
 */

Indie::Raylib::Core::Core::Core(int width, int height, const std::string& title) {
    ::InitWindow(width, height, title.c_str());
}

/**
 * @brief Return the created object of Core, singleton class
 *
 * @param width
 * @param height
 * @param title
 * @return Indie::Raylib::Core::Core&
 */

Indie::Raylib::Core::Core& Indie::Raylib::Core::Core::getInstance(int width, int height, const std::string& title) {
    static Core _core = Core(width, height, title);
    return _core;
}

/**
 * @brief Destroy the Indie:: Raylib:: Core:: Core:: Core object
 * @brief Close window and unload OpenGL context
 */

Indie::Raylib::Core::Core::~Core() {
    ::CloseWindow();
}

/**
 * @brief Get specified monitor position
 *
 * @param monitor
 * @return Misc::Vector<2>
 */

Misc::Vector<2> Indie::Raylib::Core::Core::GetMonitorPosition(int monitor) {
    ::Vector2 monipos = ::GetMonitorPosition(monitor);
    Misc::Vector<2> pos(monipos.x, monipos.y);
    return pos;
}

/**
 * @brief Get window position XY on monitor
 *
 * @return Misc::Vector<2>
 */

Misc::Vector<2> Indie::Raylib::Core::Core::GetWindowPosition(void) {
    ::Vector2 winpos = ::GetWindowPosition();
    Misc::Vector<2> pos(winpos.x, winpos.y);
    return pos;
}

/**
 * @brief Get window scale DPI factor
 *
 * @return Misc::Vector<2>
 */

Misc::Vector<2> Indie::Raylib::Core::Core::GetWindowScaleDPI(void) {
    ::Vector2 dpi = ::GetWindowScaleDPI();
    Misc::Vector<2> mdpi(dpi.x, dpi.y);
    return mdpi;
}

void Indie::Raylib::Core::Core::SetCameraMode(Misc::Camera3D camera, int mode)
{
    this->_camera = {
        ::Vector3 { camera.getPosition().getX(), camera.getPosition().getY(), camera.getPosition().getZ() },
        ::Vector3 { camera.getTarget().getX(), camera.getTarget().getY(), camera.getTarget().getZ() },
        ::Vector3 { camera.getUp().getX(), camera.getUp().getY(), camera.getUp().getZ() },
        camera.getFovy(),
        camera.getProjection()
     };

    ::SetCameraMode(
        this->_camera,
        mode
    );
}

void Indie::Raylib::Core::Core::UpdateCamera(void)
{
    ::UpdateCamera(&this->_camera);
}