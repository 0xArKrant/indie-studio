/*
** EPITECH PROJECT, 2021
** indiestudio2
** File description:
** Cursor
*/

#include "Cursor.hpp"

Raylib::Core::Cursor::Cursor()
{
}

Raylib::Core::Cursor::~Cursor()
{
}

void Raylib::Core::Cursor::ShowCursor(void)
{
    ::ShowCursor();
}

void Raylib::Core::Cursor::HideCursor(void)
{
    ::HideCursor();
}

bool Raylib::Core::Cursor::IsCursorHidden(void)
{
    return ::IsCursorHidden();
}

void Raylib::Core::Cursor::EnableCursor(void)
{
    ::EnableCursor();
}

void Raylib::Core::Cursor::DisableCursor(void)
{
    ::DisableCursor();
}

bool Raylib::Core::Cursor::IsCursorOnScreen(void)
{
    return ::IsCursorOnScreen();
}