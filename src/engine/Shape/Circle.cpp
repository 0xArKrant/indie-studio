/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Circle
*/

#include "indie.hpp"

IShape::Circle::Circle(int centerX, int centerY, float radius, ::Color color)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_color = color;
}

void IShape::Circle::DrawShape()
{
    ::DrawCircle(this->_centerX, this->_centerY, this->_radius, this->_color);
}

IShape::CircleSector::CircleSector(::Vector2 center, float radius, float startAngle, float endAngle, int segments, ::Color color)
{
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_color = color;
}

void IShape::CircleSector::DrawShape()
{
    ::DrawCircleSector(this->_center, this->_radius, this->_startAngle, this->_endAngle, this->_segments, this->_color);
}

IShape::CircleSectorLines::CircleSectorLines(::Vector2 center, float radius, float startAngle, float endAngle, int segments, ::Color color)
{
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_color = color;
}

void IShape::CircleSectorLines::DrawShape()
{
    ::DrawCircleSectorLines(this->_center, this->_radius, this->_startAngle, this->_endAngle, this->_segments, this->_color);
}

IShape::CircleGradient::CircleGradient(int centerX, int centerY, float radius, ::Color color1, ::Color color2)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_color1 = color1;
    this->_color2 = color2;
}

void IShape::CircleGradient::DrawShape()
{
    ::DrawCircleGradient(this->_centerX, this->_centerY, this->_radius, this->_color1, this->_color2);
}

IShape::CircleV::CircleV(::Vector2 center, float radius, ::Color color)
{
    this->_center = center;
    this->_radius = radius;
    this->_color = color;
}

void IShape::CircleV::DrawShape()
{
    ::DrawCircleV(this->_center, this->_radius, this->_color);
}

IShape::CircleLines::CircleLines(int centerX, int centerY, float radius, Color color)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_color = color;
}

void IShape::CircleLines::DrawShape()
{
    ::DrawCircleLines(this->_centerX, this->_centerY, this->_radius, this->_color);
}