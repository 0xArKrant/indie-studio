/**
 * @file Triangle.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Triangle module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Triangle.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Triangle:: Triangle object
 *
 * @param p1
 * @param p2
 * @param p3
 * @param colors
 */
Indie::Raylib::Shape::Triangle::Triangle(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, const Misc::Colors& colors) {
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_colors = colors;
}

Indie::Raylib::Shape::Triangle::Triangle()
{
    this->_point1 = {0.f, 0.f};
    this->_point2 = {0.f, 0.f};
    this->_point3 = {0.f, 0.f};
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Triangle::Triangle(const Triangle &cpy)
{
    this->_point1 = cpy._point1;
    this->_point2 = cpy._point2;
    this->_point3 = cpy._point3;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Triangle& Indie::Raylib::Shape::Triangle::operator=(const Triangle &other)
{
    this->_point1 = other.GetVector1();
    this->_point2 = other.GetVector2();
    this->_point3 = other.GetVector3();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a color-filled triangle (vertex in counter-clockwise order!)
 *
 */
void Indie::Raylib::Shape::Triangle::DrawShape() {
    ::DrawTriangle(
        ::Vector2{ this->_point1.getX(), this->_point1.getY() },
        ::Vector2{ this->_point2.getX(), this->_point2.getY() },
        ::Vector2{ this->_point3.getX(), this->_point3.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Triangle Lines:: Triangle Lines object
 *
 * @param p1
 * @param p2
 * @param p3
 * @param colors
 */
Indie::Raylib::Shape::TriangleLines::TriangleLines(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, const Misc::Colors& colors) {
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_colors = colors;
}

Indie::Raylib::Shape::TriangleLines::TriangleLines()
{
    this->_point1 = {0.f, 0.f};
    this->_point2 = {0.f, 0.f};
    this->_point3 = {0.f, 0.f};
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::TriangleLines::TriangleLines(const TriangleLines &cpy)
{
    this->_point1 = cpy._point1;
    this->_point2 = cpy._point2;
    this->_point3 = cpy._point3;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::TriangleLines& Indie::Raylib::Shape::TriangleLines::operator=(const TriangleLines &other)
{
    this->_point1 = other.GetVector1();
    this->_point2 = other.GetVector2();
    this->_point3 = other.GetVector3();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw triangle outline (vertex in counter-clockwise order!)
 *
 */
void Indie::Raylib::Shape::TriangleLines::DrawShape() {
    ::DrawTriangleLines(
        ::Vector2{ this->_point1.getX(), this->_point1.getY() },
        ::Vector2{ this->_point2.getX(), this->_point2.getY() },
        ::Vector2{ this->_point3.getX(), this->_point3.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Triangle Fan:: Triangle Fan object
 *
 * @param point
 * @param pointsCount
 * @param colors
 */
Indie::Raylib::Shape::TriangleFan::TriangleFan(const Misc::Vector<2> point, const int pointsCount, const Misc::Colors& colors) {
    this->_point = point;
    this->_pointsCount = pointsCount;
    this->_colors = colors;
}

Indie::Raylib::Shape::TriangleFan::TriangleFan()
{
    this->_point = {0.f, 0.f};
    this->_pointsCount = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::TriangleFan::TriangleFan(const TriangleFan &cpy)
{
    this->_point = cpy._point;
    this->_pointsCount = cpy._pointsCount;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::TriangleFan& Indie::Raylib::Shape::TriangleFan::operator=(const TriangleFan &other)
{
    this->_point = other.GetVector();
    this->_pointsCount = other.GetPointsCount();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a triangle fan defined by points (first vertex is the center)
 *
 */
void Indie::Raylib::Shape::TriangleFan::DrawShape() {
    ::Vector2 points = { this->_point.getX(), this->_point.getY() };

    ::DrawTriangleFan(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Triangle Strip:: Triangle Strip object
 *
 * @param point
 * @param pointsCount
 * @param colors
 */
Indie::Raylib::Shape::TriangleStrip::TriangleStrip(const Misc::Vector<2> point, const int pointsCount, const Misc::Colors& colors) {
    this->_point = point;
    this->_pointsCount = pointsCount;
    this->_colors = colors;
}

Indie::Raylib::Shape::TriangleStrip::TriangleStrip()
{
    this->_point = {0.f, 0.f};
    this->_pointsCount = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::TriangleStrip::TriangleStrip(const TriangleStrip &cpy)
{
    this->_point = cpy._point;
    this->_pointsCount = cpy._pointsCount;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::TriangleStrip& Indie::Raylib::Shape::TriangleStrip::operator=(const TriangleStrip &other)
{
    this->_point = other.GetVector();
    this->_pointsCount = other.GetPointsCount();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a triangle strip defined by points
 *
 */
void Indie::Raylib::Shape::TriangleStrip::DrawShape() {
    ::Vector2 points = { this->_point.getX(), this->_point.getY() };

    ::DrawTriangleStrip(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}