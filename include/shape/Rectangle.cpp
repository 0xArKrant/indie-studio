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

shape::RectangleRec::RectangleRec(::Rectangle rec, ::Color color)
{
    this->_rec = rec;
    this->_color = color;
}

void shape::RectangleRec::DrawShape()
{
    ::DrawRectangleRec(this->_rec, this->_color);
}

shape::RectanglePro::RectanglePro(::Rectangle rec, ::Vector2 origin, float rotation, ::Color color)
{
    this->_rec = rec;
    this->_origin = origin;
    this->_rotation = rotation;
    this->_color = color;
}

void shape::RectanglePro::DrawShape()
{
    ::DrawRectanglePro(this->_rec, this->_origin, this->_rotation, this->_color);
}

shape::RectangleGradientV::RectangleGradientV(int posX, int posY, int width, int height, ::Color color, ::Color color2)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_color = color;
    this->_color2 = color2;
}

void shape::RectangleGradientV::DrawShape()
{
    ::DrawRectangleGradientV(this->_posX, this->_posY, this->_width, this->_height, this->_color, this->_color2);
}

shape::RectangleGradientH::RectangleGradientH(int posX, int posY, int width, int height, ::Color color, ::Color color2)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_color = color;
    this->_color2 = color2;
}

void shape::RectangleGradientH::DrawShape()
{
    ::DrawRectangleGradientH(this->_posX, this->_posY, this->_width, this->_height, this->_color, this->_color2);
}

shape::RectangleGradientEx::RectangleGradientEx(::Rectangle rec, ::Color color1, ::Color color2, ::Color color3, ::Color color4)
{
    this->_rec = rec;
    this->_color1 = color1;
    this->_color2 = color2;
    this->_color3 = color3;
    this->_color4 = color4;
}

void shape::RectangleGradientEx::DrawShape()
{
    ::DrawRectangleGradientEx(this->_rec, this->_color1, this->_color2, this->_color3, this->_color4);
}

shape::RectangleLines::RectangleLines(int posX, int posY, int width, int height, ::Color color)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_color = color;
}

void shape::RectangleLines::DrawShape()
{
    ::DrawRectangleLines(this->_posX, this->_posY, this->_width, this->_height, this->_color);
}

shape::RectangleLinesEx::RectangleLinesEx(::Rectangle rec, int linethick, ::Color color)
{
    this->_rec = rec;
    this->_linethick = linethick;
    this->_color = color;
}

void shape::RectangleLinesEx::DrawShape()
{
    ::DrawRectangleLinesEx(this->_rec, this->_linethick, this->_color);
}

shape::RectangleRounded::RectangleRounded(::Rectangle rec, float roundness, int segments, ::Color color)
{
    this->_rec = rec;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_color = color;
}

void shape::RectangleRounded::DrawShape()
{
    ::DrawRectangleRounded(this->_rec, this->_roundness, this->_segments, this->_color);
}

shape::RectangleRoundedLines::RectangleRoundedLines(::Rectangle rec, float roundness, int segments, int linethick, ::Color color)
{
    this->_rec = rec;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_linethick = linethick;
    this->_color = color;

}

void shape::RectangleRoundedLines::DrawShape()
{
    ::DrawRectangleRoundedLines(this->_rec, this->_roundness, this->_segments, this->_linethick, this->_color);
}