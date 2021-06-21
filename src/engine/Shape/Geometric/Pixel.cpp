/**
 * @file Pixel.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Pixel module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Pixel.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Pixel:: Pixel object
 *
 * @param posX
 * @param posY
 * @param colors
 */
Indie::Raylib::Shape::Pixel::Pixel(const int posX, const int posY, const Misc::Colors& colors) {
    this->_posX = posX;
    this->_posY = posY;
    this->_colors = colors;
}

Indie::Raylib::Shape::Pixel::Pixel()
{
    this->_posY = 0;
    this->_posY = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Pixel::Pixel(const Pixel &cpy)
{
    this->_posX = cpy._posX;
    this->_posY = cpy._posY;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Pixel& Indie::Raylib::Shape::Pixel::operator=(const Pixel &other)
{
    this->_posX = other.GetPosX();
    this->_posY = other.GetPosY();
    this->_colors = other.GetColors();
    return (*this);
}
/**
 * @brief Draw a pixel
 *
 */
void Indie::Raylib::Shape::Pixel::DrawShape() {
    ::DrawPixel(
        this->_posX,
        this->_posY,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Pixel V:: Pixel V object
 *
 * @param position
 * @param colors
 */
Indie::Raylib::Shape::PixelV::PixelV(const Misc::Vector<2> position, const Misc::Colors& colors) {
    this->_position = position;
    this->_colors = colors;
}

Indie::Raylib::Shape::PixelV::PixelV()
{
    this->_position = {0.f, 0.f};
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::PixelV::PixelV(const PixelV &cpy)
{
    this->_position = cpy._position;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::PixelV& Indie::Raylib::Shape::PixelV::operator=(const PixelV &other)
{
    this->_position = other.GetVector();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a pixel (Vector version)
 *
 */
void Indie::Raylib::Shape::PixelV::DrawShape() {
    ::DrawPixelV(
        ::Vector2{ this->_position.getX(), this->_position.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}
