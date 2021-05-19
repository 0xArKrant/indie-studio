/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#include "indie.hpp"

IShape::Rectangle::Rectangle(int posX, int posY, int width, int height, ::Color color)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_color = color;
}

void IShape::Rectangle::DrawShape()
{
    ::DrawRectangle(this->_posX, this->_posY, this->_width, this->_height, this->_color);
}

IShape::RectangleV::RectangleV(Vector2 position, Vector2 size, Color color)
{
    this->_position = position;
    this->_size = size;
    this->_color = color;
}

void IShape::RectangleV::DrawShape()
{
   ::DrawRectangleV(this->_position, this->_size, this->_color);
}

IShape::RectangleRec::RectangleRec(::Rectangle rec, ::Color color)
{
    this->_rec = rec;
    this->_color = color;
}

void IShape::RectangleRec::DrawShape()
{
    ::DrawRectangleRec(this->_rec, this->_color);
}

IShape::RectanglePro::RectanglePro(::Rectangle rec, ::Vector2 origin, float rotation, ::Color color)
{
    this->_rec = rec;
    this->_origin = origin;
    this->_rotation = rotation;
    this->_color = color;
}

void IShape::RectanglePro::DrawShape()
{
    ::DrawRectanglePro(this->_rec, this->_origin, this->_rotation, this->_color);
}

IShape::RectangleGradientV::RectangleGradientV(int posX, int posY, int width, int height, ::Color color, ::Color color2)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_color = color;
    this->_color2 = color2;
}

void IShape::RectangleGradientV::DrawShape()
{
    ::DrawRectangleGradientV(this->_posX, this->_posY, this->_width, this->_height, this->_color, this->_color2);
}

IShape::RectangleGradientH::RectangleGradientH(int posX, int posY, int width, int height, ::Color color, ::Color color2)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_color = color;
    this->_color2 = color2;
}

void IShape::RectangleGradientH::DrawShape()
{
    ::DrawRectangleGradientH(this->_posX, this->_posY, this->_width, this->_height, this->_color, this->_color2);
}

IShape::RectangleGradientEx::RectangleGradientEx(::Rectangle rec, ::Color color1, ::Color color2, ::Color color3, ::Color color4)
{
    this->_rec = rec;
    this->_color1 = color1;
    this->_color2 = color2;
    this->_color3 = color3;
    this->_color4 = color4;
}

void IShape::RectangleGradientEx::DrawShape()
{
    ::DrawRectangleGradientEx(this->_rec, this->_color1, this->_color2, this->_color3, this->_color4);
}

IShape::RectangleLines::RectangleLines(int posX, int posY, int width, int height, ::Color color)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_color = color;
}

void IShape::RectangleLines::DrawShape()
{
    ::DrawRectangleLines(this->_posX, this->_posY, this->_width, this->_height, this->_color);
}

IShape::RectangleLinesEx::RectangleLinesEx(::Rectangle rec, int linethick, ::Color color)
{
    this->_rec = rec;
    this->_linethick = linethick;
    this->_color = color;
}

void IShape::RectangleLinesEx::DrawShape()
{
    ::DrawRectangleLinesEx(this->_rec, this->_linethick, this->_color);
}

IShape::RectangleRounded::RectangleRounded(::Rectangle rec, float roundness, int segments, ::Color color)
{
    this->_rec = rec;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_color = color;
}

void IShape::RectangleRounded::DrawShape()
{
    ::DrawRectangleRounded(this->_rec, this->_roundness, this->_segments, this->_color);
}

IShape::RectangleRoundedLines::RectangleRoundedLines(::Rectangle rec, float roundness, int segments, int linethick, ::Color color)
{
    this->_rec = rec;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_linethick = linethick;
    this->_color = color;

}

void IShape::RectangleRoundedLines::DrawShape()
{
    ::DrawRectangleRoundedLines(this->_rec, this->_roundness, this->_segments, this->_linethick, this->_color);
}