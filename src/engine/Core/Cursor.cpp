/**
 * @file Cursor.cpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @brief Cursor substitution class to raylib structure
 * @version 0.1
 * @date 2021-06-10
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Cursor.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Core:: Cursor:: Cursor object
 *
 */

Indie::Raylib::Core::Cursor::Cursor() { }

/**
 * @brief Destroy the Indie:: Raylib:: Core:: Cursor:: Cursor object
 *
 */

Indie::Raylib::Core::Cursor::~Cursor() { }

/**
 * @brief Shows cursor
 *
 */

void Indie::Raylib::Core::Cursor::ShowCursor(void) {
    ::ShowCursor();
}

/**
 * @brief Hides cursor
 *
 */

void Indie::Raylib::Core::Cursor::HideCursor(void) {
    ::HideCursor();
}

/**
 * @brief Check if cursor is not visible
 *
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::Cursor::IsCursorHidden(void) {
    return ::IsCursorHidden();
}

/**
 * @brief Enables cursor (unlock cursor)
 *
 */

void Indie::Raylib::Core::Cursor::EnableCursor(void) {
    ::EnableCursor();
}

/**
 * @brief Disables cursor (lock cursor)
 *
 */

void Indie::Raylib::Core::Cursor::DisableCursor(void) {
    ::DisableCursor();
}

/**
 * @brief Check if cursor is on the current screen.
 *
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::Cursor::IsCursorOnScreen(void) {
    return ::IsCursorOnScreen();
}