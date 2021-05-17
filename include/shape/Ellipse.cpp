/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ellipse
*/

#include "indie.hpp"

shape::Ellipse::Ellipse(int centerX, int centerY, float radiusH, float radiusV, ::Color color)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_color = color;
}

void shape::Ellipse::DrawShape()
{
    ::DrawEllipse(this->_centerX, this->_centerY, this->_radiusH, this->_radiusV, this->_color);
}


shape::EllipseLines::EllipseLines(int centerX, int centerY, float radiusH, float radiusV, ::Color color)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_color = color;
}

void shape::EllipseLines::DrawShape()
{
    ::DrawEllipseLines(this->_centerX, this->_centerY, this->_radiusH, this->_radiusV, this->_color);
}
