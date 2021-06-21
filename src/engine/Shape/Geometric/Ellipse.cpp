/**
 * @file Ellipse.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Ellipse module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Ellipse.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Ellipse:: Ellipse object
 *
 * @param centerX
 * @param centerY
 * @param radiusH
 * @param radiusV
 * @param values
 */
Indie::Raylib::Shape::Ellipse::Ellipse(const int centerX, const int centerY, const float radiusH, const float radiusV, const Misc::Colors& values) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_colors = values;
}

Indie::Raylib::Shape::Ellipse::Ellipse()
{
    this->_centerX = 0;
    this->_centerY = 0;
    this->_radiusH = 0.f;
    this->_radiusV = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Ellipse::Ellipse(const Ellipse &cpy)
{
    this->_centerX = cpy._centerX;
    this->_centerY = cpy._centerY;
    this->_radiusH = cpy._radiusH;
    this->_radiusV = cpy._radiusV;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Ellipse& Indie::Raylib::Shape::Ellipse::operator=(const Ellipse &other)
{
    this->_centerX = other.GetCenterX();
    this->_centerY = other.GetCenterY();
    this->_radiusH =  other.GetRadiusH();
    this->_radiusV = other.GetRadiusV();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw ellipse
 *
 */
void Indie::Raylib::Shape::Ellipse::DrawShape() {
    ::DrawEllipse(
        this->_centerX,
        this->_centerY,
        this->_radiusH,
        this->_radiusV,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Ellipse Lines:: Ellipse Lines object
 *
 * @param centerX
 * @param centerY
 * @param radiusH
 * @param radiusV
 * @param values
 */
Indie::Raylib::Shape::EllipseLines::EllipseLines(const int centerX, const int centerY, const float radiusH, const float radiusV, const Misc::Colors& values) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radiusH = radiusH;
    this->_radiusV = radiusV;
    this->_colors = values;
}

Indie::Raylib::Shape::EllipseLines::EllipseLines()
{
    this->_centerX = 0;
    this->_centerY = 0;
    this->_radiusH = 0.f;
    this->_radiusV = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::EllipseLines::EllipseLines(const EllipseLines &cpy)
{
    this->_centerX = cpy._centerX;
    this->_centerY = cpy._centerY;
    this->_radiusH = cpy._radiusH;
    this->_radiusV = cpy._radiusV;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::EllipseLines& Indie::Raylib::Shape::EllipseLines::operator=(const EllipseLines &other)
{
    this->_centerX = other.GetCenterX();
    this->_centerY = other.GetCenterY();
    this->_radiusH = other.GetRadiusH();
    this->_radiusV = other.GetRadiusV();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw ellipse outline
 *
 */
void Indie::Raylib::Shape::EllipseLines::DrawShape() {
    ::DrawEllipseLines(
        this->_centerX,
        this->_centerY,
        this->_radiusH,
        this->_radiusV,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}
