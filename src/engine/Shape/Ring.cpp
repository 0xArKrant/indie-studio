/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ring
*/

#include "indie.hpp"

shape::Ring::Ring(::Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, ::Color color)
{
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_color = color;
}

void shape::Ring::DrawShape()
{
    ::DrawRing(this->_center, this->_innerRadius, this->_outerRadius, this->_startAngle, this->_endAngle, this->_segments, this->_color);
}


shape::RingLines::RingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_color = color;
}

void shape::RingLines::DrawShape()
{
    ::DrawRingLines(this->_center, this->_innerRadius, this->_outerRadius, this->_startAngle, this->_endAngle, this->_segments, this->_color);
}
