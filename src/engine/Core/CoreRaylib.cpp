/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#include "CoreRaylib.hpp"

Indie::Raylib::Core::Core::Core(int width, int height, const std::string& title) {
    ::InitWindow(width, height, title.c_str());
}

Indie::Raylib::Core::Core& Indie::Raylib::Core::Core::getInstance(int width, int height, const std::string& title) {
    static Core _core = Core(width, height, title);
    return _core;
}

Indie::Raylib::Core::Core::~Core() {
    ::CloseWindow();
}

Misc::Vector<2> Indie::Raylib::Core::Core::GetMonitorPosition(int monitor) {
    ::Vector2 monipos = ::GetMonitorPosition(monitor);
    Misc::Vector<2> pos(monipos.x, monipos.y);
    return pos;
}

Misc::Vector<2> Indie::Raylib::Core::Core::GetWindowPosition(void) {
    ::Vector2 winpos = ::GetWindowPosition();
    Misc::Vector<2> pos(winpos.x, winpos.y);
    return pos;
}

Misc::Vector<2> Indie::Raylib::Core::Core::GetWindowScaleDPI(void) {
    ::Vector2 dpi = ::GetWindowScaleDPI();
    Misc::Vector<2> mdpi(dpi.x, dpi.y);
    return mdpi;
}