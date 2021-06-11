/**
 * @file Text.cpp
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

#include "Text.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Text:: Text:: Text object
 *
 */
Indie::Raylib::Text::Text::Text() {
    this->_font = ::GetFontDefault();
}

/**
 * @brief Construct a new Indie:: Raylib:: Text:: Text:: Text object
 *
 * @param fileName
 */
Indie::Raylib::Text::Text::Text(const std::string& fileName) {
    this->_font = ::LoadFont(fileName.c_str());
}

/**
 * @brief Construct a new Indie:: Raylib:: Text:: Text:: Text object
 *
 * @param fileName
 * @param fontSize
 * @param fontChars
 * @param charsCount
 */
Indie::Raylib::Text::Text::Text(const std::string& fileName, int fontSize, int* fontChars, int charsCount) {
    this->_font = ::LoadFontEx(
        fileName.c_str(),
        fontSize,
        fontChars,
        charsCount
    );
}

/**
 * @brief Destroy the Indie:: Raylib:: Text:: Text:: Text object
 *
 */
Indie::Raylib::Text::Text::~Text() {
    ::UnloadFont(this->_font);
}

/**
 * @brief Draw text (using default font)
 *
 * @param text
 * @param posX
 * @param posY
 * @param fontSize
 * @param color
 */
void Indie::Raylib::Text::Text::DrawText(const std::string& text, int posX, int posY, int fontSize, Misc::Colors color) {
    ::DrawText(
        text.c_str(),
        posX,
        posY,
        fontSize,
        ::Color{ color.getR(), color.getG(), color.getB(), color.getA() }
    );
}

/**
 * @brief Draw text using font and additional parameters
 *
 * @param text
 * @param position
 * @param fontSize
 * @param spacing
 * @param tint
 */
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

/**
 * @brief  Draw text using font inside rectangle limits
 *
 * @param text
 * @param rec
 * @param fontSize
 * @param spacing
 * @param wordWrap
 * @param tint
 */
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

/**
 * @brief Draw text using font inside rectangle limits with support for text selection
 *
 * @param text
 * @param rec
 * @param fontSize
 * @param spacing
 * @param wordWrap
 * @param tint
 * @param selectStart
 * @param selectLength
 * @param selectTint
 * @param selectBackTint
 */
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

/**
 * @brief Draw one character (codepoint)
 *
 * @param codepoint
 * @param position
 * @param fontSize
 * @param tint
 */
void Indie::Raylib::Text::Text::DrawTextCodepoint(int codepoint, Misc::Vector<2> position, float fontSize, Misc::Colors tint) {
    ::DrawTextCodepoint(
        this->_font,
        codepoint,
        ::Vector2 { position.getX(), position.getY() },
        fontSize,
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() }
    );
}

/**
 * @brief Measure string width for default font
 *
 * @param text
 * @param fontSize
 * @return int
 */
int Indie::Raylib::Text::Text::MeasureText(const std::string& text, int fontSize) {
    return ::MeasureText(
        text.c_str(),
        fontSize
    );
}

/**
 * @brief Measure string size for Font
 *
 * @param text
 * @param fontSize
 * @param spacing
 * @return Misc::Vector<2>
 */
Misc::Vector<2> Indie::Raylib::Text::Text::MeasureTextEx(const std::string& text, float fontSize, float spacing) {
    ::Vector2 ray_vector = ::MeasureTextEx(this->_font, text.c_str(), fontSize, spacing);
    Misc::Vector<2> vector = { ray_vector.x, ray_vector.y };
    return vector;
}

/**
 * @brief Get index position for a unicode character on font
 *
 * @param codepoint
 * @return int
 */
int Indie::Raylib::Text::Text::GetGlyphIndex(int codepoint) {
    return ::GetGlyphIndex(
        this->_font,
        codepoint
    );
}