/*
** EPITECH PROJECT, 2021
** indiestudio2
** File description:
** Cursor
*/

#include "Cursor.hpp"

Core::Cursor::Cursor()
{
}

Core::Cursor::~Cursor()
{
}

void Core::Cursor::ShowCursor(void)
{
    ::ShowCursor();
}

void Core::Cursor::HideCursor(void)
{
    ::HideCursor();
}

bool Core::Cursor::IsCursorHidden(void)
{
    return ::IsCursorHidden();
}

void Core::Cursor::EnableCursor(void)
{
    ::EnableCursor();
}

void Core::Cursor::DisableCursor(void)
{
    ::DisableCursor();
}

bool Core::Cursor::IsCursorOnScreen(void)
{
    return ::IsCursorOnScreen();
}