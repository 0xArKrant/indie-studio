/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Pixel
*/

#include "indie.hpp"

IShape::Pixel::Pixel(const int posX, const int posY, Misc::Colors &values) : _colors(values)
{
    this->_posX = posX;
    this->_posY = posY;
}

void IShape::Pixel::DrawShape()
{
    ::DrawPixel(
        this->_posX,
        this->_posY,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::PixelV::PixelV(const Misc::Vector<2> position, Misc::Colors &values) : _colors(values)
{
    this->_position = position;
}

void IShape::PixelV::DrawShape()
{
    ::DrawPixelV(
        ::Vector2 { this->_position.getX(), this->_position.getY() },
        ::Color   { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}
