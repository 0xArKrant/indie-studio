/**
 * @file InputGamepads.cpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @brief InputGamepads substitution class to raylib structure
 * @version 0.1
 * @date 2021-06-10
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "InputGamepads.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Core:: Input Gamepads:: Input Gamepads object
 *
 */

Indie::Raylib::Core::InputGamepads::InputGamepads() { }

/**
 * @brief Destroy the Indie:: Raylib:: Core:: Input Gamepads:: Input Gamepads object
 *
 */

Indie::Raylib::Core::InputGamepads::~InputGamepads() { }

/**
 * @brief Detect if a gamepad is available
 *
 * @param gamepad
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputGamepads::IsGamepadAvailable(int gamepad) {
    return ::IsGamepadAvailable(gamepad);
}

/**
 * @brief Check gamepad name (if available)
 *
 * @param gamepad
 * @param name
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputGamepads::IsGamepadName(int gamepad, const std::string& name) {
    return ::IsGamepadName(gamepad, name.c_str());
}

/**
 * @brief Return gamepad internal name id
 *
 * @param gamepad
 * @return const std::string
 */

const std::string Indie::Raylib::Core::InputGamepads::GetGamepadName(int gamepad) {
    return ::GetGamepadName(gamepad);
}

/**
 * @brief Detect if a gamepad button has been pressed once
 *
 * @param gamepad
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonPressed(int gamepad, int button) {
    return ::IsGamepadButtonPressed(gamepad, button);
}

/**
 * @brief Detect if a gamepad button is being pressed
 *
 * @param gamepad
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonDown(int gamepad, int button) {
    return ::IsGamepadButtonDown(gamepad, button);
}

/**
 * @brief Detect if a gamepad button has been released once
 *
 * @param gamepad
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonReleased(int gamepad, int button) {
    return ::IsGamepadButtonReleased(gamepad, button);
}

/**
 * @brief Detect if a gamepad button is NOT being pressed
 *
 * @param gamepad
 * @param button
 * @return true
 * @return false
 */

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonUp(int gamepad, int button) {
    return ::IsGamepadButtonUp(gamepad, button);
}

/**
 * @brief Get the last gamepad button pressed
 *
 * @return int
 */

int Indie::Raylib::Core::InputGamepads::GetGamepadButtonPressed(void) {
    return ::GetGamepadButtonPressed();
}

/**
 * @brief Return gamepad axis count for a gamepad
 *
 * @param gamepad
 * @return int
 */

int Indie::Raylib::Core::InputGamepads::GetGamepadAxisCount(int gamepad) {
    return ::GetGamepadAxisCount(gamepad);
}

/**
 * @brief Return axis movement value for a gamepad axis
 *
 * @param gamepad
 * @param axis
 * @return float
 */

float Indie::Raylib::Core::InputGamepads::GetGamepadAxisMovement(int gamepad, int axis) {
    return ::GetGamepadAxisMovement(gamepad, axis);
}

/**
 * @brief Set internal gamepad mappings (SDL_GameControllerDB)
 *
 * @param mappings
 * @return int
 */

int Indie::Raylib::Core::InputGamepads::SetGamepadMappings(const std::string& mappings) {
    return ::SetGamepadMappings(mappings.c_str());
}