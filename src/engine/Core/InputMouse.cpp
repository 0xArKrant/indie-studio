/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputMouse
*/

#include "InputMouse.hpp"

Raylib::Core::InputMouse::InputMouse()
{
}

Raylib::Core::InputMouse::~InputMouse()
{
}

bool Raylib::Core::InputMouse::IsMouseButtonPressed(int button)
{
    return ::IsMouseButtonPressed(button);
}

bool Raylib::Core::InputMouse::IsMouseButtonDown(int button)
{
    return ::IsMouseButtonDown(button);
}

bool Raylib::Core::InputMouse::IsMouseButtonReleased(int button)
{
    return ::IsMouseButtonReleased(button);
}

bool Raylib::Core::InputMouse::IsMouseButtonUp(int button)
{
    return ::IsMouseButtonUp(button);
}

int Raylib::Core::InputMouse::GetMouseX(void)
{
    return ::GetMouseX();
}

int Raylib::Core::InputMouse::GetMouseY(void)
{
    return ::GetMouseY();
}

Misc::Vector<2> Raylib::Core::InputMouse::GetMousePosition(void)
{
    ::Vector2 vec = ::GetMousePosition();
    Misc::Vector<2> pos(vec.x, vec.y);
    return pos;
}

void Raylib::Core::InputMouse::SetMousePosition(int x, int y)
{
    ::SetMousePosition(x, y);
}

void Raylib::Core::InputMouse::SetMouseOffset(int offsetX, int offsetY)
{
    ::SetMouseOffset(offsetX, offsetY);
}

void Raylib::Core::InputMouse::SetMouseScale(float scaleX, float scaleY)
{
    ::SetMouseScale(scaleX, scaleY);
}

float Raylib::Core::InputMouse::GetMouseWheelMove(void)
{
    return ::GetMouseWheelMove();
}

void Raylib::Core::InputMouse::SetMouseCursor(int cursor)
{
    ::SetMouseCursor(cursor);
}