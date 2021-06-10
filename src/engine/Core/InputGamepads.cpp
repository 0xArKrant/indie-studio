/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputGamepads
*/

#include "InputGamepads.hpp"

Indie::Raylib::Core::InputGamepads::InputGamepads() {
}

Indie::Raylib::Core::InputGamepads::~InputGamepads() {
}

bool Indie::Raylib::Core::InputGamepads::IsGamepadAvailable(int gamepad) {
    return ::IsGamepadAvailable(gamepad);
}

bool Indie::Raylib::Core::InputGamepads::IsGamepadName(int gamepad, const std::string& name) {
    return ::IsGamepadName(gamepad, name.c_str());
}

const std::string Indie::Raylib::Core::InputGamepads::GetGamepadName(int gamepad) {
    return ::GetGamepadName(gamepad);
}

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonPressed(int gamepad, int button) {
    return ::IsGamepadButtonPressed(gamepad, button);
}

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonDown(int gamepad, int button) {
    return ::IsGamepadButtonDown(gamepad, button);
}

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonReleased(int gamepad, int button) {
    return ::IsGamepadButtonReleased(gamepad, button);
}

bool Indie::Raylib::Core::InputGamepads::IsGamepadButtonUp(int gamepad, int button) {
    return ::IsGamepadButtonUp(gamepad, button);
}

int Indie::Raylib::Core::InputGamepads::GetGamepadButtonPressed(void) {
    return ::GetGamepadButtonPressed();
}

int Indie::Raylib::Core::InputGamepads::GetGamepadAxisCount(int gamepad) {
    return ::GetGamepadAxisCount(gamepad);
}

float Indie::Raylib::Core::InputGamepads::GetGamepadAxisMovement(int gamepad, int axis) {
    return ::GetGamepadAxisMovement(gamepad, axis);
}

int Indie::Raylib::Core::InputGamepads::SetGamepadMappings(const std::string& mappings) {
    return ::SetGamepadMappings(mappings.c_str());
}