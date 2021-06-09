/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputGamepads
*/

#pragma once

#include "indie.hpp"

namespace Raylib
{
    namespace Core
    {
        class InputGamepads
        {
        public:
            InputGamepads();
            ~InputGamepads();

            bool IsGamepadAvailable(int gamepad);
            bool IsGamepadName(int gamepad, const std::string &name);

            const std::string GetGamepadName(int gamepad);

            bool IsGamepadButtonPressed(int gamepad, int button);
            bool IsGamepadButtonDown(int gamepad, int button);
            bool IsGamepadButtonReleased(int gamepad, int button);
            bool IsGamepadButtonUp(int gamepad, int button);

            int GetGamepadButtonPressed(void);
            int GetGamepadAxisCount(int gamepad);
            float GetGamepadAxisMovement(int gamepad, int axis);
            int SetGamepadMappings(const std::string &mappings);
        };
    }; // namespace Core
} // namespace Raylib