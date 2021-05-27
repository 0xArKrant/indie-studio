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
            void LoadFontFromImage(::Image image, ::Color key, int firstChar);
            void LoadFontFromMemory(const std::string &fileType, const std::string &fileData, int dataSize, int fontSize, int *fontChars, int charsCount);
            void LoadFontData(const std::string &fileData, int dataSize, int fontSize, int *fontChars, int charsCount, int type);
            void GenImageFontAtlas(const ::CharInfo *chars, ::Rectangle **recs, int charsCount, int fontSize, int padding, int packMethod);

            // Text drawing functions
            void DrawFPS(int posX, int posY);
            void DrawText(const std::string &text, int posX, int posY, int fontSize, ::Color color);
            void DrawTextEx(const std::string &text, ::Vector2 position, float fontSize, float spacing, ::Color tint);
            void DrawTextRec(const std::string &text, ::Rectangle rec, float fontSize, float spacing, bool wordWrap, ::Color tint);
            void DrawTextRecEx(const std::string &text, ::Rectangle rec, float fontSize, float spacing, bool wordWrap, ::Color tint,
                                int selectStart, int selectLength, ::Color selectTint, ::Color selectBackTint);
            void DrawTextCodepoint(int codepoint, ::Vector2 position, float fontSize, ::Color tint);

            // Text misc. functions
            int MeasureText(const std::string &text, int fontSize);
            ::Vector2 MeasureTextEx(const std::string &text, float fontSize, float spacing);
            int GetGlyphIndex(int codepoint);

        protected:
            ::Font font;
            std::pair<::CharInfo *, int> charInfo;
            ::Image image;
        private:
    };
}