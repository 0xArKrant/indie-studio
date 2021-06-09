/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputKeyboard
*/

#include "InputKeyboard.hpp"

Raylib::Core::InputKeyboard::InputKeyboard()
{
}

Raylib::Core::InputKeyboard::~InputKeyboard()
{
}

bool Raylib::Core::InputKeyboard::IsKeyPressed(int key)
{
    return ::IsKeyPressed(key);
}

bool Raylib::Core::InputKeyboard::IsKeyDown(int key)
{
    return ::IsKeyDown(key);
}

bool Raylib::Core::InputKeyboard::IsKeyReleased(int key)
{
    return ::IsKeyReleased(key);
}

bool Raylib::Core::InputKeyboard::IsKeyUp(int key)
{
    return ::IsKeyUp(key);
}

void Raylib::Core::InputKeyboard::SetExitKey(int key)
{
    return ::SetExitKey(key);
}

int Raylib::Core::InputKeyboard::GetKeyPressed(void)
{
    return ::GetKeyPressed();
}

int Raylib::Core::InputKeyboard::GetCharPressed(void)
{
    return ::GetCharPressed();
}