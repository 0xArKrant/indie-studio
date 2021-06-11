/**
 * @file InputMouse.cpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @brief InputMouse substitution class to raylib structure
 * @version 0.1
 * @date 2021-06-10
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "InputMouse.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Core:: Input Mouse:: Input Mouse object
 *
 */

Indie::Raylib::Core::InputMouse::InputMouse() { }

/**
 * @brief Destroy the Indie:: Raylib:: Core:: Input Mouse:: Input Mouse object
 *
 */

Indie::Raylib::Core::InputMouse::~InputMouse() { }

/**
 * @brief Detect if a mouse button has been pressed once
 *
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputMouse::IsMouseButtonPressed(int button) {
    return ::IsMouseButtonPressed(button);
}

/**
 * @brief Detect if a mouse button is being pressed
 *
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputMouse::IsMouseButtonDown(int button) {
    return ::IsMouseButtonDown(button);
}

/**
 * @brief Detect if a mouse button has been released once
 *
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputMouse::IsMouseButtonReleased(int button) {
    return ::IsMouseButtonReleased(button);
}

/**
 * @brief Detect if a mouse button is NOT being pressed
 *
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputMouse::IsMouseButtonUp(int button) {
    return ::IsMouseButtonUp(button);
}

/**
 * @brief Returns mouse position X
 *
 * @return int
 */

int Indie::Raylib::Core::InputMouse::GetMouseX(void) {
    return ::GetMouseX();
}

/**
 * @brief Returns mouse position Y
 *
 * @return int
 */

int Indie::Raylib::Core::InputMouse::GetMouseY(void) {
    return ::GetMouseY();
}

/**
 * @brief Returns mouse position XY
 *
 * @return Misc::Vector<2>
 */

Misc::Vector<2> Indie::Raylib::Core::InputMouse::GetMousePosition(void) {
    ::Vector2 vec = ::GetMousePosition();
    Misc::Vector<2> pos(vec.x, vec.y);
    return pos;
}

/**
 * @brief Set mouse position XY
 *
 * @param x
 * @param y
 */

void Indie::Raylib::Core::InputMouse::SetMousePosition(int x, int y) {
    ::SetMousePosition(x, y);
}

/**
 * @brief Set mouse offset
 *
 * @param offsetX
 * @param offsetY
 */

void Indie::Raylib::Core::InputMouse::SetMouseOffset(int offsetX, int offsetY) {
    ::SetMouseOffset(offsetX, offsetY);
}

/**
 * @brief Set mouse scaling
 *
 * @param scaleX
 * @param scaleY
 */

void Indie::Raylib::Core::InputMouse::SetMouseScale(float scaleX, float scaleY) {
    ::SetMouseScale(scaleX, scaleY);
}

/**
 * @brief Returns mouse wheel movement Y
 *
 * @return float
 */

float Indie::Raylib::Core::InputMouse::GetMouseWheelMove(void) {
    return ::GetMouseWheelMove();
}

/**
 * @brief Set mouse cursor
 *
 * @param cursor
 */

void Indie::Raylib::Core::InputMouse::SetMouseCursor(int cursor) {
    ::SetMouseCursor(cursor);
}