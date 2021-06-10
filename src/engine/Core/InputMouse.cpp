/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputMouse
*/

#include "InputMouse.hpp"

Indie::Raylib::Core::InputMouse::InputMouse() {
}

Indie::Raylib::Core::InputMouse::~InputMouse() {
}

bool Indie::Raylib::Core::InputMouse::IsMouseButtonPressed(int button) {
    return ::IsMouseButtonPressed(button);
}

bool Indie::Raylib::Core::InputMouse::IsMouseButtonDown(int button) {
    return ::IsMouseButtonDown(button);
}

bool Indie::Raylib::Core::InputMouse::IsMouseButtonReleased(int button) {
    return ::IsMouseButtonReleased(button);
}

bool Indie::Raylib::Core::InputMouse::IsMouseButtonUp(int button) {
    return ::IsMouseButtonUp(button);
}

int Indie::Raylib::Core::InputMouse::GetMouseX(void) {
    return ::GetMouseX();
}

int Indie::Raylib::Core::InputMouse::GetMouseY(void) {
    return ::GetMouseY();
}

Misc::Vector<2> Indie::Raylib::Core::InputMouse::GetMousePosition(void) {
    ::Vector2 vec = ::GetMousePosition();
    Misc::Vector<2> pos(vec.x, vec.y);
    return pos;
}

void Indie::Raylib::Core::InputMouse::SetMousePosition(int x, int y) {
    ::SetMousePosition(x, y);
}

void Indie::Raylib::Core::InputMouse::SetMouseOffset(int offsetX, int offsetY) {
    ::SetMouseOffset(offsetX, offsetY);
}

void Indie::Raylib::Core::InputMouse::SetMouseScale(float scaleX, float scaleY) {
    ::SetMouseScale(scaleX, scaleY);
}

float Indie::Raylib::Core::InputMouse::GetMouseWheelMove(void) {
    return ::GetMouseWheelMove();
}

void Indie::Raylib::Core::InputMouse::SetMouseCursor(int cursor) {
    ::SetMouseCursor(cursor);
}