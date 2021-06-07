/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Text
*/

#pragma once

#include "indie.hpp"

namespace Text {
    class Text : public IText {
        public:
            Text();
            Text(const std::string &fileName);
            Text(const std::string &fileName, int fontSize, int *fontChars, int charsCount);
            ~Text();

            // Text drawing functions
            void DrawText(const std::string &text, int posX, int posY, int fontSize, Misc::Colors color);
            void DrawTextEx(const std::string &text, Misc::Vector<2> position, float fontSize, float spacing, Misc::Colors tint);
            void DrawTextRec(const std::string &text, Misc::Rectangle rec, float fontSize, float spacing, bool wordWrap, Misc::Colors tint);
            void DrawTextRecEx(const std::string &text, Misc::Rectangle rec, float fontSize, float spacing, bool wordWrap, Misc::Colors tint,
                                int selectStart, int selectLength, Misc::Colors selectTint, Misc::Colors selectBackTint);
            void DrawTextCodepoint(int codepoint, Misc::Vector<2> position, float fontSize, Misc::Colors tint);

            // Text misc. functions
            int MeasureText(const std::string &text, int fontSize);
            Misc::Vector<2> MeasureTextEx(const std::string &text, float fontSize, float spacing);
            int GetGlyphIndex(int codepoint);
        private:
            ::Font _font;
    };
}