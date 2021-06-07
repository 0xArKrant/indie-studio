/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Pixel
*/

#include "Pixel.hpp"

Shape::Pixel::Pixel(const int posX, const int posY, const Misc::Colors &values)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_colors = values;
}

void Shape::Pixel::DrawShape()
{
    ::DrawPixel(
        this->_posX,
        this->_posY,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Shape::PixelV::PixelV(const Misc::Vector<2> position, const Misc::Colors &values)
{
    this->_position = position;
    this->_colors = values;
}

void Shape::PixelV::DrawShape()
{
    ::DrawPixelV(
        ::Vector2 { this->_position.getX(), this->_position.getY() },
        ::Color   { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}
