/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** InputKeyboard
*/

#pragma once

#include "indie.hpp"

namespace Raylib
{
    namespace Core
    {
        class InputKeyboard
        {
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

        protected:
        private:
        };
    }; // namespace Core
} // namespace Raylib