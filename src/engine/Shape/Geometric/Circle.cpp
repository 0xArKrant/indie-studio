/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Circle
*/

#include "Circle.hpp"

Shape::Circle::Circle(const int centerX, const int centerY, const float radius, const Misc::Colors &values)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors = values;
}

void Shape::Circle::DrawShape()
{
    ::DrawCircle(
        this->_centerX,
        this->_centerY,
        this->_radius,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Shape::CircleSector::CircleSector(const Misc::Vector<2> center, const float radius, const float startAngle, const float endAngle, const int segments, const Misc::Colors &values)
{
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = values;
}

void Shape::CircleSector::DrawShape()
{
    ::DrawCircleSector(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_radius,
        this->_startAngle,
        this->_endAngle,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Shape::CircleSectorLines::CircleSectorLines(const Misc::Vector<2> center, const float radius, const float startAngle, const float endAngle, const int segments, const Misc::Colors &values)
{
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = values;
}

void Shape::CircleSectorLines::DrawShape()
{
    ::DrawCircleSectorLines(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_radius,
        this->_startAngle,
        this->_endAngle,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Shape::CircleGradient::CircleGradient(const int centerX, const int centerY, const float radius, const Misc::Colors &values1, const Misc::Colors &values2)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors1 = values1;
    this->_colors2 = values2;
}

void Shape::CircleGradient::DrawShape()
{
    ::DrawCircleGradient(
        this->_centerX,
        this->_centerY,
        this->_radius,
        ::Color { this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color { this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() }
    );
}

Shape::CircleV::CircleV(const Misc::Vector<2> center, const float radius, const Misc::Colors &values)
{
    this->_center = center;
    this->_radius = radius;
    this->_colors = values;
}

void Shape::CircleV::DrawShape()
{
    ::DrawCircleV(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_radius,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Shape::CircleLines::CircleLines(const int centerX, const int centerY, const float radius, const Misc::Colors &values)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors = values;
}

void Shape::CircleLines::DrawShape()
{
    ::DrawCircleLines(
        this->_centerX,
        this->_centerY,
        this->_radius,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}