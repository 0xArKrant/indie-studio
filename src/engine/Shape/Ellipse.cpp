/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ellipse
*/

#include "indie.hpp"

IShape::Ellipse::Ellipse(int centerX, int centerY, float radiusH, float radiusV, ::Color color)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_color = color;
}

void IShape::Ellipse::DrawShape()
{
    ::DrawEllipse(this->_centerX, this->_centerY, this->_radiusH, this->_radiusV, this->_color);
}


IShape::EllipseLines::EllipseLines(int centerX, int centerY, float radiusH, float radiusV, ::Color color)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_color = color;
}

void IShape::EllipseLines::DrawShape()
{
    ::DrawEllipseLines(this->_centerX, this->_centerY, this->_radiusH, this->_radiusV, this->_color);
}
