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
 * @param values
 */
Indie::Raylib::Shape::Triangle::Triangle(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, const Misc::Colors& values) {
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::TriangleLines::TriangleLines(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, const Misc::Colors& values) {
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::TriangleFan::TriangleFan(const Misc::Vector<2> point, const int pointsCount, const Misc::Colors& values) {
    this->_point = point;
    this->_pointsCount = pointsCount;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::TriangleStrip::TriangleStrip(const Misc::Vector<2> point, const int pointsCount, const Misc::Colors& values) {
    this->_point = point;
    this->_pointsCount = pointsCount;
    this->_colors = values;
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