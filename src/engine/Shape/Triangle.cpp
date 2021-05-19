/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Triangle
*/

#include "indie.hpp"

IShape::Triangle::Triangle(::Vector2 p1, ::Vector2 p2, ::Vector2 p3, ::Color color)
{
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_color = color;
}

void IShape::Triangle::DrawShape()
{
    ::DrawTriangle(this->_point1, this->_point2, this->_point3, this->_color);
}

IShape::TriangleLines::TriangleLines(::Vector2 p1, ::Vector2 p2, ::Vector2 p3, ::Color color)
{
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_color = color;
}

void IShape::TriangleLines::DrawShape()
{
    ::DrawTriangleLines(this->_point1, this->_point2, this->_point3, this->_color);
}

IShape::TriangleFan::TriangleFan(::Vector2 *p1, int pointsCount, ::Color color)
{
    this->_point1 = p1;
    this->_pointsCount = pointsCount;
    this->_color = color;
}

void IShape::TriangleFan::DrawShape()
{
    ::DrawTriangleFan(this->_point1, this->_pointsCount, this->_color);

}

IShape::TriangleStrip::TriangleStrip(::Vector2 *p1, int pointsCount, ::Color color)
{
    this->_point1 = p1;
    this->_pointsCount = pointsCount;
    this->_color = color;
}

void IShape::TriangleStrip::DrawShape()
{
    ::DrawTriangleStrip(this->_point1, this->_pointsCount, this->_color);
}