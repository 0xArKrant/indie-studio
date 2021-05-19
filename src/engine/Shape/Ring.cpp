/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ring
*/

#include "indie.hpp"

IShape::Ring::Ring(::Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, ::Color color)
{
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_color = color;
}

void IShape::Ring::DrawShape()
{
    ::DrawRing(this->_center, this->_innerRadius, this->_outerRadius, this->_startAngle, this->_endAngle, this->_segments, this->_color);
}


IShape::RingLines::RingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_color = color;
}

void IShape::RingLines::DrawShape()
{
    ::DrawRingLines(this->_center, this->_innerRadius, this->_outerRadius, this->_startAngle, this->_endAngle, this->_segments, this->_color);
}
