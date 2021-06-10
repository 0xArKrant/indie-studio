/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Text
*/

#include "Text.hpp"

Indie::Raylib::Text::Text::Text() {
    this->_font = ::GetFontDefault();
}

Indie::Raylib::Text::Text::Text(const std::string& fileName) {
    this->_font = ::LoadFont(fileName.c_str());
}

Indie::Raylib::Text::Text::Text(const std::string& fileName, int fontSize, int* fontChars, int charsCount) {
    this->_font = ::LoadFontEx(
        fileName.c_str(),
        fontSize,
        fontChars,
        charsCount
    );
}

Indie::Raylib::Text::Text::~Text() {
    ::UnloadFont(this->_font);
}

void Indie::Raylib::Text::Text::DrawText(const std::string& text, int posX, int posY, int fontSize, Misc::Colors color) {
    ::DrawText(
        text.c_str(),
        posX,
        posY,
        fontSize,
        ::Color{ color.getR(), color.getG(), color.getB(), color.getA() }
    );
}

void Indie::Raylib::Text::Text::DrawTextEx(const std::string& text, Misc::Vector<2> position, float fontSize, float spacing, Misc::Colors tint) {
    ::DrawTextEx(
        this->_font,
        text.c_str(),
        ::Vector2{ position.getX(), position.getY() },
        fontSize,
        spacing,
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() }
    );
}

void Indie::Raylib::Text::Text::DrawTextRec(const std::string& text, Misc::Rectangle rec, float fontSize, float spacing, bool wordWrap, Misc::Colors tint) {
    ::DrawTextRec(
        this->_font,
        text.c_str(),
        ::Rectangle{ rec.getX(), rec.getY(), rec.getWidth(), rec.getHeight() },
        fontSize,
        spacing,
        wordWrap,
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() }
    );
}

void Indie::Raylib::Text::Text::DrawTextRecEx(const std::string& text, Misc::Rectangle rec, float fontSize, float spacing, bool wordWrap, Misc::Colors tint, int selectStart, int selectLength, Misc::Colors selectTint, Misc::Colors selectBackTint) {
    ::DrawTextRecEx(
        this->_font,
        text.c_str(),
        ::Rectangle{ rec.getX(), rec.getY(), rec.getWidth(), rec.getHeight() },
        fontSize,
        spacing,
        wordWrap,
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() },
        selectStart,
        selectLength,
        ::Color{ selectTint.getR(), selectTint.getG(), selectTint.getB(), selectTint.getA() },
        ::Color{ selectBackTint.getR(), selectBackTint.getG(), selectBackTint.getB(), selectBackTint.getA() }
    );
}

void Indie::Raylib::Text::Text::DrawTextCodepoint(int codepoint, Misc::Vector<2> position, float fontSize, Misc::Colors tint) {
    ::DrawTextCodepoint(
        this->_font,
        codepoint,
        ::Vector2 { position.getX(), position.getY() },
        fontSize,
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() }
    );
}

int Indie::Raylib::Text::Text::MeasureText(const std::string& text, int fontSize) {
    return ::MeasureText(
        text.c_str(),
        fontSize
    );
}

Misc::Vector<2> Indie::Raylib::Text::Text::MeasureTextEx(const std::string& text, float fontSize, float spacing) {
    ::Vector2 ray_vector = ::MeasureTextEx(this->_font, text.c_str(), fontSize, spacing);
    Misc::Vector<2> vector = { ray_vector.x, ray_vector.y };
    return vector;
}

int Indie::Raylib::Text::Text::GetGlyphIndex(int codepoint) {
    return ::GetGlyphIndex(
        this->_font,
        codepoint
    );
}