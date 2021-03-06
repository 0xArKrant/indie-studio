/**
 * @file Text.hpp
 * @author QuentinMarchand1
 * @brief Encapsulation of the Text module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "IText.hpp"

namespace Indie {
    namespace Raylib {
        namespace Text {
            class Text : public IText {
                public:
                    Text();
                    Text(const std::string& fileName);
                    Text(const std::string& fileName, int fontSize, int* fontChars, int charsCount);
                    ~Text();

                    // Text drawing functions
                    void DrawText(const std::string& text, int posX, int posY, int fontSize, Misc::Colors color);
                    void DrawTextEx(const std::string& text, Misc::Vector<2> position, float fontSize, float spacing, Misc::Colors tint);
                    void DrawTextRec(const std::string& text, Misc::Rectangle rec, float fontSize, float spacing, bool wordWrap, Misc::Colors tint);
                    void DrawTextRecEx(const std::string& text, Misc::Rectangle rec, float fontSize, float spacing, bool wordWrap, Misc::Colors tint,
                        int selectStart, int selectLength, Misc::Colors selectTint, Misc::Colors selectBackTint);
                    void DrawTextCodepoint(int codepoint, Misc::Vector<2> position, float fontSize, Misc::Colors tint);

                    // Text misc. functions
                    int MeasureText(const std::string& text, int fontSize);
                    Misc::Vector<2> MeasureTextEx(const std::string& text, float fontSize, float spacing);
                    int GetGlyphIndex(int codepoint);
                private:
                    ::Font _font; /*!Font structure from raylib */
            };
        }
    }
}