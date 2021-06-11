/**
 * @file Cursor.hpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @brief Cursor substitution class to raylib structure
 * @brief
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
        namespace Core {
            class Cursor {
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
} // namespace Indie