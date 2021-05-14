/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#include "indie.hpp"

shape::Rectangle::Rectangle(Vector2 position, Vector2 size, Color color)
{
    this->_position = position;
    this->_size = size;
    this->_color = color;
}

void shape::Rectangle::DrawShape()
{
   ::DrawRectangleV(this->_position, this->_size, this->_color);
}