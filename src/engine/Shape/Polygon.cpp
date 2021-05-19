/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Polygon
*/

#include "indie.hpp"

IShape::Polygon::Polygon(::Vector2 center, int sides, float radius, float rotation, ::Color color)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_color = color;
}

void IShape::Polygon::DrawShape()
{
    ::DrawPoly(this->_center, this->_sides, this->_radius, this->_rotation, this->_color);
}


IShape::PolygonLines::PolygonLines(::Vector2 center, int sides, float radius, float rotation, ::Color color)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_color = color;
}

void IShape::PolygonLines::DrawShape()
{
    ::DrawPolyLines(this->_center, this->_sides, this->_radius, this->_rotation, this->_color);
}

IShape::PolygonLinesEx::PolygonLinesEx(::Vector2 center, int sides, float radius, float rotation, float linethick, ::Color color)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_linethick = linethick;
    this->_color = color;
}

void IShape::PolygonLinesEx::DrawShape()
{
    ::DrawPolyLinesEx(this->_center, this->_sides, this->_radius, this->_rotation, this->_linethick, this->_color);
}



