/*
** EPITECH PROJECT, 2021
** indiestudio2
** File description:
** Cursor
*/

#include "Cursor.hpp"

Indie::Raylib::Core::Cursor::Cursor() {
}

Indie::Raylib::Core::Cursor::~Cursor() {
}

void Indie::Raylib::Core::Cursor::ShowCursor(void) {
    ::ShowCursor();
}

void Indie::Raylib::Core::Cursor::HideCursor(void) {
    ::HideCursor();
}

bool Indie::Raylib::Core::Cursor::IsCursorHidden(void) {
    return ::IsCursorHidden();
}

void Indie::Raylib::Core::Cursor::EnableCursor(void) {
    ::EnableCursor();
}

void Indie::Raylib::Core::Cursor::DisableCursor(void) {
    ::DisableCursor();
}

bool Indie::Raylib::Core::Cursor::IsCursorOnScreen(void) {
    return ::IsCursorOnScreen();
}