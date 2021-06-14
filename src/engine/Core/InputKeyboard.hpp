/**
 * @file InputKeyboard.hpp
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

#pragma once

#include "indie.hpp"

namespace Indie {
    namespace Raylib {
        namespace Core     {
            class InputKeyboard         {
                public:
                InputKeyboard();
                ~InputKeyboard();

                bool IsKeyPressed(int key);
                bool IsKeyDown(int key);
                bool IsKeyReleased(int key);
                bool IsKeyUp(int key);
                void SetExitKey(int key);
                int GetKeyPressed(void);
                int GetCharPressed(void);
            };
        } // namespace Core
    } // namespace Raylib
} // namespace Indie