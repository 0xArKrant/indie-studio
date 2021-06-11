/**
 * @file InputMouse.hpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @brief InputMouse substitution class to raylib structure
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
#include "Vector.hpp"

namespace Indie {
    namespace Raylib {
        namespace Core     {
            class InputMouse         {
                public:
                    InputMouse();
                    ~InputMouse();

                    bool IsMouseButtonPressed(int button);
                    bool IsMouseButtonDown(int button);
                    bool IsMouseButtonReleased(int button);
                    bool IsMouseButtonUp(int button);
                    int GetMouseX(void);
                    int GetMouseY(void);
                    Misc::Vector<2> GetMousePosition(void);
                    void SetMousePosition(int x, int y);
                    void SetMouseOffset(int offsetX, int offsetY);
                    void SetMouseScale(float scaleX, float scaleY);
                    float GetMouseWheelMove(void);
                    void SetMouseCursor(int cursor);
            };
        } // namespace Core
    } // namespace Raylib
} // namespace Indie