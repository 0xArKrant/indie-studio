/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputMouse
*/

#include "InputMouse.hpp"

Core::InputMouse::InputMouse()
{
}

Core::InputMouse::~InputMouse()
{
}

bool Core::InputMouse::IsMouseButtonPressed(int button)
{
    return ::IsMouseButtonPressed(button);
}

bool Core::InputMouse::IsMouseButtonDown(int button)
{
    return ::IsMouseButtonDown(button);
}

bool Core::InputMouse::IsMouseButtonReleased(int button)
{
    return ::IsMouseButtonReleased(button);
}

bool Core::InputMouse::IsMouseButtonUp(int button)
{
    return ::IsMouseButtonUp(button);
}

int Core::InputMouse::GetMouseX(void)
{
    return ::GetMouseX();
}

int Core::InputMouse::GetMouseY(void)
{
    return ::GetMouseY();
}

Misc::Vector<2> Core::InputMouse::GetMousePosition(void)
{
    ::Vector2 vec = ::GetMousePosition();
    Misc::Vector<2> pos(vec.x, vec.y);
    return pos;
}

void Core::InputMouse::SetMousePosition(int x, int y)
{
    ::SetMousePosition(x, y);
}

void Core::InputMouse::SetMouseOffset(int offsetX, int offsetY)
{
    ::SetMouseOffset(offsetX, offsetY);
}

void Core::InputMouse::SetMouseScale(float scaleX, float scaleY)
{
    ::SetMouseScale(scaleX, scaleY);
}

float Core::InputMouse::GetMouseWheelMove(void)
{
    return ::GetMouseWheelMove();
}

void Core::InputMouse::SetMouseCursor(int cursor)
{
    ::SetMouseCursor(cursor);
}