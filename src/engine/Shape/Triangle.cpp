/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Triangle
*/

#include "indie.hpp"

shape::Triangle::Triangle(::Vector2 p1, ::Vector2 p2, ::Vector2 p3, ::Color color)
{
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_color = color;
}

void shape::Triangle::DrawShape()
{
    ::DrawTriangle(this->_point1, this->_point2, this->_point3, this->_color);
}

shape::TriangleLines::TriangleLines(::Vector2 p1, ::Vector2 p2, ::Vector2 p3, ::Color color)
{
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_color = color;
}

void shape::TriangleLines::DrawShape()
{
    ::DrawTriangleLines(this->_point1, this->_point2, this->_point3, this->_color);
}

shape::TriangleFan::TriangleFan(::Vector2 *p1, int pointsCount, ::Color color)
{
    this->_point1 = p1;
    this->_pointsCount = pointsCount;
    this->_color = color;
}

void shape::TriangleFan::DrawShape()
{
    ::DrawTriangleFan(this->_point1, this->_pointsCount, this->_color);

}

shape::TriangleStrip::TriangleStrip(::Vector2 *p1, int pointsCount, ::Color color)
{
    this->_point1 = p1;
    this->_pointsCount = pointsCount;
    this->_color = color;
}

void shape::TriangleStrip::DrawShape()
{
    ::DrawTriangleStrip(this->_point1, this->_pointsCount, this->_color);
}