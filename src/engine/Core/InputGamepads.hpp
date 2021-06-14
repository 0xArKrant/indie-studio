/**
 * @file InputGamepads.hpp
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

#pragma once

#include "indie.hpp"

namespace Indie {
    namespace Raylib {
        namespace Core     {
            class InputGamepads         {
                public:
                    InputGamepads();
                    ~InputGamepads();

                    bool IsGamepadAvailable(int gamepad);
                    bool IsGamepadName(int gamepad, const std::string& name);

                    const std::string GetGamepadName(int gamepad);

                    bool IsGamepadButtonPressed(int gamepad, int button);
                    bool IsGamepadButtonDown(int gamepad, int button);
                    bool IsGamepadButtonReleased(int gamepad, int button);
                    bool IsGamepadButtonUp(int gamepad, int button);

                    int GetGamepadButtonPressed(void);
                    int GetGamepadAxisCount(int gamepad);
                    float GetGamepadAxisMovement(int gamepad, int axis);
                    int SetGamepadMappings(const std::string& mappings);
            };
        } // namespace Core
    } // namespace Raylib
} // namespace Indie