/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Triangle
*/

#include "indie.hpp"

IShape::Triangle::Triangle(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, Misc::Colors &values) : _colors(values)
{
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
}

void IShape::Triangle::DrawShape()
{
    ::DrawTriangle(
        ::Vector2 { this->_point1.getX(), this->_point1.getY() },
        ::Vector2 { this->_point2.getX(), this->_point2.getY() },
        ::Vector2 { this->_point3.getX(), this->_point3.getY() },
        ::Color   { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::TriangleLines::TriangleLines(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, Misc::Colors &values) : _colors(values)
{
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
}

void IShape::TriangleLines::DrawShape()
{
    ::DrawTriangleLines(
        ::Vector2 { this->_point1.getX(), this->_point1.getY() },
        ::Vector2 { this->_point2.getX(), this->_point2.getY() },
        ::Vector2 { this->_point3.getX(), this->_point3.getY() },
        ::Color   { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::TriangleFan::TriangleFan(const Misc::Vector<2> point, const int pointsCount, Misc::Colors &values) : _colors(values)
{
    this->_point = point;
    this->_pointsCount = pointsCount;
}

void IShape::TriangleFan::DrawShape()
{
    ::Vector2 points = { this->_point.getX(), this->_point.getY() };

    ::DrawTriangleFan(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::TriangleStrip::TriangleStrip(const Misc::Vector<2> point, const int pointsCount, Misc::Colors &values) : _colors(values)
{
    this->_point = point;
    this->_pointsCount = pointsCount;
}

void IShape::TriangleStrip::DrawShape()
{
    ::Vector2 points = { this->_point.getX(), this->_point.getY() };

    ::DrawTriangleStrip(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}