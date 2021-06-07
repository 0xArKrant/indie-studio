/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ellipse
*/

#include "Ellipse.hpp"

Shape::Ellipse::Ellipse(const int centerX, const int centerY, const float radiusH, const float radiusV, const Misc::Colors &values)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_colors = values;
}

void Shape::Ellipse::DrawShape()
{
    ::DrawEllipse(
        this->_centerX,
        this->_centerY,
        this->_radiusH,
        this->_radiusV,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Shape::EllipseLines::EllipseLines(const int centerX, const int centerY, const float radiusH, const float radiusV, const Misc::Colors &values)
{
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_colors = values;
}

void Shape::EllipseLines::DrawShape()
{
    ::DrawEllipseLines(
        this->_centerX,
        this->_centerY,
        this->_radiusH,
        this->_radiusV,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}
