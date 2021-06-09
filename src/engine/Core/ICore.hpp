/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** IText
*/

#pragma once

#include "indie.hpp"
#include "Cursor.hpp"
#include "InputGamepads.hpp"
#include "InputKeyboard.hpp"
#include "InputMouse.hpp"

namespace Raylib
{
    namespace Core
    {
        class ICore
        {
        public:
            ~ICore() = default;
        };
    } // namespace Core
} // namespace Raylib