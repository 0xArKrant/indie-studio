/**
 * @file Polygon.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Polygon module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Polygon.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Polygon:: Polygon object
 *
 * @param center
 * @param sides
 * @param radius
 * @param rotation
 * @param colors
 */
Indie::Raylib::Shape::Polygon::Polygon(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const Misc::Colors& colors) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_colors = colors;
}

Indie::Raylib::Shape::Polygon::Polygon()
{
    this->_center = {0.f, 0.f};
    this->_sides = 0;
    this->_radius = 0.f;
    this->_rotation = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Polygon::Polygon(const Polygon &cpy)
{
    this->_center = cpy._center;
    this->_sides = cpy._sides;
    this->_radius = cpy._radius;
    this->_rotation = cpy._rotation;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Polygon& Indie::Raylib::Shape::Polygon::operator=(const Polygon &other)
{
    this->_center = other.GetVector();
    this->_sides = other.GetSides();
    this->_radius = other.GetRadius();
    this->_rotation = other.GetRotation();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a regular polygon (Vector version)
 *
 */
void Indie::Raylib::Shape::Polygon::DrawShape() {
    ::DrawPoly(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Polygon Lines:: Polygon Lines object
 *
 * @param center
 * @param sides
 * @param radius
 * @param rotation
 * @param colors
 */
Indie::Raylib::Shape::PolygonLines::PolygonLines(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const Misc::Colors& colors) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_colors = colors;
}

Indie::Raylib::Shape::PolygonLines::PolygonLines()
{
    this->_center = {0.f, 0.f};
    this->_sides = 0;
    this->_radius = 0.f;
    this->_rotation = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::PolygonLines::PolygonLines(const PolygonLines &cpy)
{
    this->_center = cpy._center;
    this->_sides = cpy._sides;
    this->_radius = cpy._radius;
    this->_rotation = cpy._rotation;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::PolygonLines& Indie::Raylib::Shape::PolygonLines::operator=(const PolygonLines &other)
{
    this->_center = other.GetVector();
    this->_sides = other.GetSides();
    this->_radius = other.GetRadius();
    this->_rotation = other.GetRotation();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a polygon outline of n sides
 *
 */
void Indie::Raylib::Shape::PolygonLines::DrawShape() {
    ::DrawPolyLines(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Polygon Lines Ex:: Polygon Lines Ex object
 *
 * @param center
 * @param sides
 * @param radius
 * @param rotation
 * @param linethick
 * @param colors
 */
Indie::Raylib::Shape::PolygonLinesEx::PolygonLinesEx(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const float linethick, const Misc::Colors& colors) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_linethick = linethick;
    this->_colors = colors;
}

Indie::Raylib::Shape::PolygonLinesEx::PolygonLinesEx()
{
    this->_center = {0.f, 0.f};
    this->_sides = 0;
    this->_radius = 0.f;
    this->_rotation = 0.f;
    this->_linethick = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::PolygonLinesEx::PolygonLinesEx(const PolygonLinesEx &cpy)
{
    this->_center = cpy._center;
    this->_sides = cpy._sides;
    this->_radius = cpy._radius;
    this->_rotation = cpy._rotation;
    this->_linethick = cpy._linethick;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::PolygonLinesEx& Indie::Raylib::Shape::PolygonLinesEx::operator=(const PolygonLinesEx &other)
{
    this->_center = other.GetVector();
    this->_sides = other.GetSides();
    this->_radius = other.GetRadius();
    this->_rotation = other.GetRotation();
    this->_linethick = other.GetLineThick();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a polygon outline of n sides extended
 *
 */
void Indie::Raylib::Shape::PolygonLinesEx::DrawShape() {
    ::DrawPolyLinesEx(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        this->_linethick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}



