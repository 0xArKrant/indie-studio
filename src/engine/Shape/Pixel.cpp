/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Pixel
*/

#include "indie.hpp"

IShape::Pixel::Pixel(int posX, int posY, ::Color color)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_color = color;
}

void IShape::Pixel::DrawShape()
{
    ::DrawPixel(this->_posX, this->_posY, this->_color);
}

IShape::PixelV::PixelV(::Vector2 position, ::Color color)
{
    this->_position = position;
    this->_color = color;
}

void IShape::PixelV::DrawShape()
{
    ::DrawPixelV(this->_position, this->_color);
}
