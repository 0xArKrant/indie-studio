/**
 * @file ICore.hpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @brief Interface for the Core Module of the engine
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
#include "Cursor.hpp"
#include "InputGamepads.hpp"
#include "InputKeyboard.hpp"
#include "InputMouse.hpp"

namespace Indie {
    namespace Raylib {
        namespace Core     {
            class ICore         {
                public:
                    ~ICore() = default;
            };
        } // namespace Core
    } // namespace Raylib
} // namespace Indie