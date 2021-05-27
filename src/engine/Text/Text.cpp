/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Text
*/

#include "Text.hpp"

Text::Text::Text()
{
    this->font = ::GetFontDefault();
}

Text::Text::~Text()
{
    ::UnloadFont(this->font);
    ::UnloadFontData(this->charInfo.first, this->charInfo.second);
}

void Text::Text::LoadFont(const std::string &fileName)
{
    this->font = ::LoadFont(fileName.c_str());
}

void Text::Text::LoadFontEx(const std::string &fileName, int fontSize, int *fontChars, int charsCount)
{
    this->font = ::LoadFontEx(fileName.c_str(), fontSize, fontChars, charsCount);
}

void Text::Text::LoadFontFromImage(::Image image, ::Color key, int firstChar)
{
    this->font = ::LoadFontFromImage(image, key, firstChar);
}

void Text::Text::LoadFontFromMemory(const std::string &fileType, const std::string &fileData, int dataSize, int fontSize, int *fontChars, int charsCount)
{
    this->font = ::LoadFontFromMemory(fileType.c_str(), (const unsigned char *)fileData.c_str(), dataSize, fontSize, fontChars, charsCount);
}

void Text::Text::LoadFontData(const std::string &fileData, int dataSize, int fontSize, int *fontChars, int charsCount, int type)
{
    this->charInfo.first = ::LoadFontData((const unsigned char *)fileData.c_str(), dataSize, fontSize, fontChars, charsCount, type);
    this->charInfo.second = charsCount;
}

void Text::Text::GenImageFontAtlas(const ::CharInfo *chars, ::Rectangle **recs, int charsCount, int fontSize, int padding, int packMethod)
{
    this->image = ::GenImageFontAtlas(chars, recs, charsCount, fontSize, padding, packMethod);
}

void Text::Text::DrawFPS(int posX, int posY)
{
    ::DrawFPS(posX, posY);
}

void Text::Text::DrawText(const std::string &text, int posX, int posY, int fontSize, ::Color color)
{
    ::DrawText(text.c_str(), posX, posY, fontSize, color);
}

void Text::Text::DrawTextEx(const std::string &text, ::Vector2 position, float fontSize, float spacing, ::Color tint)
{
    ::DrawTextEx(this->font, text.c_str(), position, fontSize, spacing, tint);
}

void Text::Text::DrawTextRec(const std::string &text, ::Rectangle rec, float fontSize, float spacing, bool wordWrap, ::Color tint)
{
    ::DrawTextRec(this->font, text.c_str(), rec, fontSize, spacing, wordWrap, tint);
}

void Text::Text::DrawTextRecEx(const std::string &text, ::Rectangle rec, float fontSize, float spacing, bool wordWrap, ::Color tint, int selectStart, int selectLength, ::Color selectTint, ::Color selectBackTint)
{
    ::DrawTextRecEx(this->font, text.c_str(), rec, fontSize, spacing, wordWrap, tint, selectStart, selectLength, selectTint, selectBackTint);
}

void Text::Text::DrawTextCodepoint(int codepoint, ::Vector2 position, float fontSize, ::Color tint)
{
    ::DrawTextCodepoint(this->font, codepoint, position, fontSize, tint);
}

int Text::Text::MeasureText(const std::string &text, int fontSize)
{
    return ::MeasureText(text.c_str(), fontSize);
}

::Vector2 Text::Text::MeasureTextEx(const std::string &text, float fontSize, float spacing)
{
    return ::MeasureTextEx(this->font, text.c_str(), fontSize, spacing);
}

int Text::Text::GetGlyphIndex(int codepoint)
{
    return ::GetGlyphIndex(this->font, codepoint);
}