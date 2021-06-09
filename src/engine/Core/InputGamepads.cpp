/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputGamepads
*/

#include "InputGamepads.hpp"

Raylib::Core::InputGamepads::InputGamepads()
{
}

Raylib::Core::InputGamepads::~InputGamepads()
{
}

bool Raylib::Core::InputGamepads::IsGamepadAvailable(int gamepad)
{
    return ::IsGamepadAvailable(gamepad);
}

bool Raylib::Core::InputGamepads::IsGamepadName(int gamepad, const std::string &name)
{
    return ::IsGamepadName(gamepad, name.c_str());
}

const std::string Raylib::Core::InputGamepads::GetGamepadName(int gamepad)
{
    return ::GetGamepadName(gamepad);
}

bool Raylib::Core::InputGamepads::IsGamepadButtonPressed(int gamepad, int button)
{
    return ::IsGamepadButtonPressed(gamepad, button);
}

bool Raylib::Core::InputGamepads::IsGamepadButtonDown(int gamepad, int button)
{
    return ::IsGamepadButtonDown(gamepad, button);
}

bool Raylib::Core::InputGamepads::IsGamepadButtonReleased(int gamepad, int button)
{
    return ::IsGamepadButtonReleased(gamepad, button);
}

bool Raylib::Core::InputGamepads::IsGamepadButtonUp(int gamepad, int button)
{
    return ::IsGamepadButtonUp(gamepad, button);
}

int Raylib::Core::InputGamepads::GetGamepadButtonPressed(void)
{
    return ::GetGamepadButtonPressed();
}

int Raylib::Core::InputGamepads::GetGamepadAxisCount(int gamepad)
{
    return ::GetGamepadAxisCount(gamepad);
}

float Raylib::Core::InputGamepads::GetGamepadAxisMovement(int gamepad, int axis)
{
    return ::GetGamepadAxisMovement(gamepad, axis);
}

int Raylib::Core::InputGamepads::SetGamepadMappings(const std::string &mappings)
{
    return ::SetGamepadMappings(mappings.c_str());
}