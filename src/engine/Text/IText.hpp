/**
 * @file IText.hpp
 * @author QuentinMarchand1
 * @brief Interface for the Text Module of the engine
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "indie.hpp"
#include "Vector.hpp"
#include "Colors.hpp"
#include "RectangleVector.hpp"

namespace Indie {
    namespace Raylib {
        namespace Text {
            class IText {
                public:
                    ~IText() = default;

                    virtual void DrawText(const std::string&, int, int, int, Misc::Colors) = 0;
                    virtual void DrawTextEx(const std::string&, Misc::Vector<2>, float, float, Misc::Colors) = 0;
                    virtual void DrawTextRec(const std::string&, Misc::Rectangle, float, float, bool, Misc::Colors) = 0;
                    virtual void DrawTextRecEx(const std::string&, Misc::Rectangle, float, float, bool, Misc::Colors, int, int, Misc::Colors, Misc::Colors) = 0;
                    virtual void DrawTextCodepoint(int, Misc::Vector<2>, float, Misc::Colors) = 0;

                    // Text misc. functions
                    virtual int MeasureText(const std::string&, int) = 0;
                    virtual Misc::Vector<2> MeasureTextEx(const std::string&, float, float) = 0;
                    virtual int GetGlyphIndex(int) = 0;
            };
        }
    }
}