/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputKeyboard
*/

#include "InputKeyboard.hpp"

Core::InputKeyboard::InputKeyboard()
{
}

Core::InputKeyboard::~InputKeyboard()
{
}

bool Core::InputKeyboard::IsKeyPressed(int key)
{
    return ::IsKeyPressed(key);
}

bool Core::InputKeyboard::IsKeyDown(int key)
{
    return ::IsKeyDown(key);
}

bool Core::InputKeyboard::IsKeyReleased(int key)
{
    return ::IsKeyReleased(key);
}

bool Core::InputKeyboard::IsKeyUp(int key)
{
    return ::IsKeyUp(key);
}

void Core::InputKeyboard::SetExitKey(int key)
{
    return ::SetExitKey(key);
}

int Core::InputKeyboard::GetKeyPressed(void)
{
    return ::GetKeyPressed();
}

int Core::InputKeyboard::GetCharPressed(void)
{
    return ::GetCharPressed();
}