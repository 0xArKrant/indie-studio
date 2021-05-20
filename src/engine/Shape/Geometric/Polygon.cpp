/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Polygon
*/

#include "indie.hpp"

IShape::Polygon::Polygon(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, Misc::Colors &values) : _colors(values)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
}

void IShape::Polygon::DrawShape()
{
    ::DrawPoly(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}


IShape::PolygonLines::PolygonLines(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, Misc::Colors &values) : _colors(values)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
}

void IShape::PolygonLines::DrawShape()
{
    ::DrawPolyLines(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::PolygonLinesEx::PolygonLinesEx(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const float linethick, Misc::Colors &values) : _colors(values)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_linethick = linethick;
}

void IShape::PolygonLinesEx::DrawShape()
{
    ::DrawPolyLinesEx(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        this->_linethick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}



