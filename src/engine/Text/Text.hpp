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
            ~Text();

            // Font loading/unloading functions
            void LoadFont(const std::string &fileName);
            void LoadFontEx(const std::string &fileName, int fontSize, int *fontChars, int charsCount);
            void LoadFontFromImage(::Image image, Misc::Colors key, int firstChar);
            void LoadFontFromMemory(const std::string &fileType, const std::string &fileData, int dataSize, int fontSize, int *fontChars, int charsCount);
            void LoadFontData(const std::string &fileData, int dataSize, int fontSize, int *fontChars, int charsCount, int type);
            void GenImageFontAtlas(const ::CharInfo *chars, ::Rectangle **recs, int charsCount, int fontSize, int padding, int packMethod);

            // Text drawing functions
            void DrawFPS(int posX, int posY);
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

        protected:
            ::Font font;
            std::pair<::CharInfo *, int> charInfo;
            ::Image image;
        private:
    };
}