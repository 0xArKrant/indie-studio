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
 * @param values
 */
Indie::Raylib::Shape::Pixel::Pixel(const int posX, const int posY, const Misc::Colors& values) {
    this->_posX = posX;
    this->_posY = posY;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::PixelV::PixelV(const Misc::Vector<2> position, const Misc::Colors& values) {
    this->_position = position;
    this->_colors = values;
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
