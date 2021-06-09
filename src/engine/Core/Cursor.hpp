/*
** EPITECH PROJECT, 2021
** indiestudio2
** File description:
** Cursor
*/

#pragma once

#include "indie.hpp"
namespace Raylib
{
    namespace Core
    {
        class Cursor
        {
        public:
            Cursor();
            ~Cursor();

            void ShowCursor(void);
            void HideCursor(void);
            bool IsCursorHidden(void);
            void EnableCursor(void);
            void DisableCursor(void);
            bool IsCursorOnScreen(void);
        };
    } // namespace Core
} // namespace Raylib