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
 * @param values
 */
Indie::Raylib::Shape::Polygon::Polygon(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const Misc::Colors& values) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::PolygonLines::PolygonLines(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const Misc::Colors& values) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::PolygonLinesEx::PolygonLinesEx(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const float linethick, const Misc::Colors& values) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_linethick = linethick;
    this->_colors = values;
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



