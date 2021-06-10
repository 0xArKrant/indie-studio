/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputKeyboard
*/

#include "InputKeyboard.hpp"

Indie::Raylib::Core::InputKeyboard::InputKeyboard()
{
}

Indie::Raylib::Core::InputKeyboard::~InputKeyboard()
{
}

bool Indie::Raylib::Core::InputKeyboard::IsKeyPressed(int key)
{
    return ::IsKeyPressed(key);
}

bool Indie::Raylib::Core::InputKeyboard::IsKeyDown(int key)
{
    return ::IsKeyDown(key);
}

bool Indie::Raylib::Core::InputKeyboard::IsKeyReleased(int key)
{
    return ::IsKeyReleased(key);
}

bool Indie::Raylib::Core::InputKeyboard::IsKeyUp(int key)
{
    return ::IsKeyUp(key);
}

void Indie::Raylib::Core::InputKeyboard::SetExitKey(int key)
{
    return ::SetExitKey(key);
}

int Indie::Raylib::Core::InputKeyboard::GetKeyPressed(void)
{
    return ::GetKeyPressed();
}

int Indie::Raylib::Core::InputKeyboard::GetCharPressed(void)
{
    return ::GetCharPressed();
}