/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** EngineRaylib
*/

#include "EngineRaylib.hpp"
#include "raylib.h"

indie::Engine_RAYLIB::Engine_RAYLIB() {
    this->_emap[indie::UP] = false;
    this->_emap[indie::DOWN] = false;
    this->_emap[indie::LEFT] = false;
    this->_emap[indie::RIGHT] = false;
    this->_emap[indie::QUIT] = false;
    this->_emap[indie::MENU] = false;
    this->_emap[indie::MAIN_MENU] = false;
    this->_emap[indie::CONFIRM] = false;
    this->_ptrfun[indie::UP] = &Engine_RAYLIB::fup;
    this->_ptrfun[indie::DOWN] = &Engine_RAYLIB::fdown;
    this->_ptrfun[indie::LEFT] = &Engine_RAYLIB::fleft;
    this->_ptrfun[indie::RIGHT] = &Engine_RAYLIB::fright;
    this->_ptrfun[indie::MENU] = &Engine_RAYLIB::fmenu;
    this->_ptrfun[indie::MAIN_MENU] = &Engine_RAYLIB::fmain_menu;
    this->_ptrfun[indie::CONFIRM] = &Engine_RAYLIB::fconfirm;
}

void indie::Engine_RAYLIB::initWindow(const size_t &width, const size_t &height, const std::string &title) {
    InitWindow(width, height, title.c_str());
    SetTargetFPS(50);
}

std::map<indie::keyEvent, bool> indie::Engine_RAYLIB::getEvent()
{
    for (auto &emap : this->_emap)
        emap.second = false;
    for (auto &funmap : this->_ptrfun) {
        if (this->_emap[funmap.first])
            continue;
        this->_emap[funmap.first] = funmap.second(*this);
    }
    return this->_emap;
}


indie::Engine_RAYLIB::~Engine_RAYLIB() {
    CloseWindow();
}

bool indie::Engine_RAYLIB::fup() const {
    if (::IsKeyDown(KEY_UP) || ::IsKeyDown(KEY_Z))
        return true;
    return false;
}

bool indie::Engine_RAYLIB::fdown() const {
    if (::IsKeyDown(KEY_DOWN) || ::IsKeyDown(KEY_S))
        return true;
    return false;
}

bool indie::Engine_RAYLIB::fleft() const {
    if (::IsKeyDown(KEY_LEFT) || ::IsKeyDown(KEY_Q))
        return true;
    return false;
}

bool indie::Engine_RAYLIB::fright() const {
    if (::IsKeyDown(KEY_RIGHT) || ::IsKeyDown(KEY_D))
        return true;
    return false;
}

bool indie::Engine_RAYLIB::fmenu() const {
    if (::IsKeyDown(KEY_ESCAPE))
        return true;
    return false;
}

bool indie::Engine_RAYLIB::fmain_menu() const {
    if (::IsKeyDown(KEY_ZERO))
        return true;
    return false;
}

bool indie::Engine_RAYLIB::fconfirm() const {
    if (::IsKeyDown(KEY_SPACE) || ::IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        return true;
    return false;
}

extern "C" {
    indie::IEngines *entryPointEngine()
    {
        indie::IEngines *object = new indie::Engine_RAYLIB();
        return object;
    };
}