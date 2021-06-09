/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputMouse
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"

namespace Raylib
{
    namespace Core
    {
        class InputMouse
        {
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

        protected:
        private:
        };
    } // namespace Core
} // namespace Raylib