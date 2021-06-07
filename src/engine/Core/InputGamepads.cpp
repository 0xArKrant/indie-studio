/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputGamepads
*/

#include "InputGamepads.hpp"

Core::InputGamepads::InputGamepads()
{
}

Core::InputGamepads::~InputGamepads()
{
}

bool Core::InputGamepads::IsGamepadAvailable(int gamepad)
{
    return ::IsGamepadAvailable(gamepad);
}

bool Core::InputGamepads::IsGamepadName(int gamepad, const std::string &name)
{
    return ::IsGamepadName(gamepad, name.c_str());
}

const std::string Core::InputGamepads::GetGamepadName(int gamepad)
{
    return ::GetGamepadName(gamepad);
}

bool Core::InputGamepads::IsGamepadButtonPressed(int gamepad, int button)
{
    return ::IsGamepadButtonPressed(gamepad, button);
}

bool Core::InputGamepads::IsGamepadButtonDown(int gamepad, int button)
{
    return ::IsGamepadButtonDown(gamepad, button);
}

bool Core::InputGamepads::IsGamepadButtonReleased(int gamepad, int button)
{
    return ::IsGamepadButtonReleased(gamepad, button);
}

bool Core::InputGamepads::IsGamepadButtonUp(int gamepad, int button)
{
    return ::IsGamepadButtonUp(gamepad, button);
}

int Core::InputGamepads::GetGamepadButtonPressed(void)
{
    return ::GetGamepadButtonPressed();
}

int Core::InputGamepads::GetGamepadAxisCount(int gamepad)
{
    return ::GetGamepadAxisCount(gamepad);
}

float Core::InputGamepads::GetGamepadAxisMovement(int gamepad, int axis)
{
    return ::GetGamepadAxisMovement(gamepad, axis);
}

int Core::InputGamepads::SetGamepadMappings(const std::string &mappings)
{
    return ::SetGamepadMappings(mappings.c_str());
}