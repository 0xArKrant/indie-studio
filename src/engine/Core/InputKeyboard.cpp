/**
 * @file InputKeyboard.cpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @brief InputKeyboard substitution class to raylib structure
 * @version 0.1
 * @date 2021-06-10
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "InputKeyboard.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Core:: Input Keyboard:: Input Keyboard object
 *
 */

Indie::Raylib::Core::InputKeyboard::InputKeyboard() { }

/**
 * @brief Destroy the Indie:: Raylib:: Core:: Input Keyboard:: Input Keyboard object
 *
 */

Indie::Raylib::Core::InputKeyboard::~InputKeyboard() { }

/**
 * @brief Detect if a key has been pressed once
 *
 * @param key
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputKeyboard::IsKeyPressed(int key) {
    return ::IsKeyPressed(key);
}

/**
 * @brief Detect if a key is being pressed
 *
 * @param key
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputKeyboard::IsKeyDown(int key) {
    return ::IsKeyDown(key);
}

/**
 * @brief Detect if a key has been released once
 *
 * @param key
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputKeyboard::IsKeyReleased(int key) {
    return ::IsKeyReleased(key);
}

/**
 * @brief Detect if a key is NOT being pressed
 *
 * @param key
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputKeyboard::IsKeyUp(int key) {
    return ::IsKeyUp(key);
}

/**
 * @brief Set a custom key to exit program (default is ESC)
 *
 * @param key
 */

void Indie::Raylib::Core::InputKeyboard::SetExitKey(int key) {
    return ::SetExitKey(key);
}

/**
 * @brief Get key pressed (keycode), call it multiple times for keys queued
 *
 * @return int
 */

int Indie::Raylib::Core::InputKeyboard::GetKeyPressed(void) {
    return ::GetKeyPressed();
}

/**
 * @brief Get char pressed (unicode), call it multiple times for chars queued
 *
 * @return int
 */

int Indie::Raylib::Core::InputKeyboard::GetCharPressed(void) {
    return ::GetCharPressed();
}