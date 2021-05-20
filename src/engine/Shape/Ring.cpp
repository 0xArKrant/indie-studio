/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ring
*/

#include "indie.hpp"

IShape::Ring::Ring(const Misc::Vector<2> center, const float innerRadius, const float outerRadius, const float startAngle, const float endAngle, const int segments, Misc::Colors &values) : _colors(values)
{
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
}

void IShape::Ring::DrawShape()
{
    ::DrawRing(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_innerRadius, 
        this->_outerRadius, 
        this->_startAngle, 
        this->_endAngle, 
        this->_segments, 
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}


IShape::RingLines::RingLines(const Misc::Vector<2> center, const float innerRadius, const float outerRadius, const float startAngle, const float endAngle, const int segments, Misc::Colors &values) : _colors(values)
{
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
}

void IShape::RingLines::DrawShape()
{
    ::DrawRingLines(
        ::Vector2 { this->_center.getX(), this->_center.getY() },
        this->_innerRadius, 
        this->_outerRadius, 
        this->_startAngle, 
        this->_endAngle, 
        this->_segments, 
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}
