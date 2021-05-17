/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Polygon
*/

#include "indie.hpp"

shape::Polygon::Polygon(::Vector2 center, int sides, float radius, float rotation, ::Color color)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_color = color;
}

void shape::Polygon::DrawShape()
{
    ::DrawPoly(this->_center, this->_sides, this->_radius, this->_rotation, this->_color);
}


shape::PolygonLines::PolygonLines(::Vector2 center, int sides, float radius, float rotation, ::Color color)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_color = color;
}

void shape::PolygonLines::DrawShape()
{
    ::DrawPolyLines(this->_center, this->_sides, this->_radius, this->_rotation, this->_color);
}

shape::PolygonLinesEx::PolygonLinesEx(::Vector2 center, int sides, float radius, float rotation, float linethick, ::Color color)
{
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_linethick = linethick;
    this->_color = color;
}

void shape::PolygonLinesEx::DrawShape()
{
    ::DrawPolyLinesEx(this->_center, this->_sides, this->_radius, this->_rotation, this->_linethick, this->_color);
}



