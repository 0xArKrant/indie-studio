/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#include "indie.hpp"

IShape::Rectangle::Rectangle(const int posX, const int posY, const int width, const int height, const Misc::Colors &values)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors = values;
}

void IShape::Rectangle::DrawShape()
{
    ::DrawRectangle(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::RectangleV::RectangleV(const Misc::Vector<2> position, const Misc::Vector<2> size, const Misc::Colors &values)
{
    this->_position = position;
    this->_size = size;
    this->_colors = values;
}

void IShape::RectangleV::DrawShape()
{
   ::DrawRectangleV(
        ::Vector2 { this->_position.getX(), this->_position.getY() },
        ::Vector2 { this->_size.getX(), this->_size.getY() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::RectangleRec::RectangleRec(const Misc::Rectangle rectangle, const Misc::Colors &values)
{
    this->_rectangle = rectangle;
    this->_colors = values;
}

void IShape::RectangleRec::DrawShape()
{
    ::DrawRectangleRec(
        ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::RectanglePro::RectanglePro(const Misc::Rectangle rectangle, const Misc::Vector<2> origin, float rotation, const Misc::Colors &values)
{
    this->_rectangle = rectangle;
    this->_origin = origin;
    this->_rotation = rotation;
    this->_colors = values;
}

void IShape::RectanglePro::DrawShape()
{
    ::DrawRectanglePro(
        ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        ::Vector2 { this->_origin.getX(), this->_origin.getY() },
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::RectangleGradientV::RectangleGradientV(const int posX,const int posY,const int width,const int height, const Misc::Colors &values1, const Misc::Colors &values2)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors1 = values1;
    this->_colors2 = values2;
}

void IShape::RectangleGradientV::DrawShape()
{
    ::DrawRectangleGradientV(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color { this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() }
    );
}

IShape::RectangleGradientH::RectangleGradientH(const int posX,const int posY,const int width,const int height, const Misc::Colors &values1, const Misc::Colors &values2)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors1 = values1;
    this->_colors2 = values2;
}

void IShape::RectangleGradientH::DrawShape()
{
    ::DrawRectangleGradientH(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color { this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() }
    );
}

IShape::RectangleGradientEx::RectangleGradientEx(const Misc::Rectangle rectangle, const Misc::Colors &values1, const Misc::Colors &values2, const Misc::Colors &values3, const Misc::Colors &values4)
{
    this->_rectangle = rectangle;
    this->_colors1 = values1;
    this->_colors2 = values2;
    this->_colors3 = values3;
    this->_colors4 = values4;
}

void IShape::RectangleGradientEx::DrawShape()
{
    ::DrawRectangleGradientEx(
        ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        ::Color { this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color { this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() },
        ::Color { this->_colors3.getR(), this->_colors3.getG(), this->_colors3.getB(), this->_colors3.getA() },
        ::Color { this->_colors4.getR(), this->_colors4.getG(), this->_colors4.getB(), this->_colors4.getA() }
    );
}

IShape::RectangleLines::RectangleLines(int posX, int posY, int width, int height, const Misc::Colors &values)
{
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors = values;
}

void IShape::RectangleLines::DrawShape()
{
    ::DrawRectangleLines(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::RectangleLinesEx::RectangleLinesEx(const Misc::Rectangle rectangle, const int linethick, const Misc::Colors &values)
{
    this->_rectangle = rectangle;
    this->_linethick = linethick;
    this->_colors = values;
}

void IShape::RectangleLinesEx::DrawShape()
{
    ::DrawRectangleLinesEx(
        ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        this->_linethick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::RectangleRounded::RectangleRounded(const Misc::Rectangle rectangle, const float roundness, const int segments, const Misc::Colors &values)
{
    this->_rectangle = rectangle;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_colors = values;
}

void IShape::RectangleRounded::DrawShape()
{
    ::DrawRectangleRounded(
        ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        this->_roundness,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::RectangleRoundedLines::RectangleRoundedLines(const Misc::Rectangle rectangle, const float roundness, const int segments, const int linethick, const Misc::Colors &values)
{
    this->_rectangle = rectangle;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_linethick = linethick;
    this->_colors = values;
}

void IShape::RectangleRoundedLines::DrawShape()
{
    ::DrawRectangleRoundedLines(
        ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        this->_roundness,
        this->_segments,
        this->_linethick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}