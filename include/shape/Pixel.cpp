/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Pixel
*/

#include "indie.hpp"

shape::Pixel::Pixel(int posX, int posY, ::Color color)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_color = color;
}

void shape::Pixel::DrawShape()
{
    ::DrawPixel(this->_posX, this->_posY, this->_color);
}

shape::PixelV::PixelV(::Vector2 position, ::Color color)
{
    this->_position = position;
    this->_color = color;
}

void shape::PixelV::DrawShape()
{
    ::DrawPixelV(this->_position, this->_color);
}
