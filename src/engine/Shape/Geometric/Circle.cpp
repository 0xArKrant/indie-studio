/**
 * @file Circle.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Circle module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Circle.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Circle:: Circle object
 *
 * @param centerX
 * @param centerY
 * @param radius
 * @param values
 */
Indie::Raylib::Shape::Circle::Circle(const int centerX, const int centerY, const float radius, const Misc::Colors& values) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors = values;
}

/**
 * @brief Draw a color-filled circle
 *
 */
void Indie::Raylib::Shape::Circle::DrawShape() {
    ::DrawCircle(
        this->_centerX,
        this->_centerY,
        this->_radius,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Circle Sector:: Circle Sector object
 *
 * @param center
 * @param radius
 * @param startAngle
 * @param endAngle
 * @param segments
 * @param values
 */
Indie::Raylib::Shape::CircleSector::CircleSector(const Misc::Vector<2> center, const float radius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& values) {
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = values;
}

/**
 * @brief Draw a piece of a circle
 *
 */
void Indie::Raylib::Shape::CircleSector::DrawShape() {
    ::DrawCircleSector(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_radius,
        this->_startAngle,
        this->_endAngle,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Circle Sector Lines:: Circle Sector Lines object
 *
 * @param center
 * @param radius
 * @param startAngle
 * @param endAngle
 * @param segments
 * @param values
 */
Indie::Raylib::Shape::CircleSectorLines::CircleSectorLines(const Misc::Vector<2> center, const float radius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& values) {
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = values;
}

/**
 * @brief Draw circle sector outline
 *
 */
void Indie::Raylib::Shape::CircleSectorLines::DrawShape() {
    ::DrawCircleSectorLines(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_radius,
        this->_startAngle,
        this->_endAngle,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Circle Gradient:: Circle Gradient object
 *
 * @param centerX
 * @param centerY
 * @param radius
 * @param values1
 * @param values2
 */
Indie::Raylib::Shape::CircleGradient::CircleGradient(const int centerX, const int centerY, const float radius, const Misc::Colors& values1, const Misc::Colors& values2) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors1 = values1;
    this->_colors2 = values2;
}

/**
 * @brief Draw a gradient-filled circle
 *
 */
void Indie::Raylib::Shape::CircleGradient::DrawShape() {
    ::DrawCircleGradient(
        this->_centerX,
        this->_centerY,
        this->_radius,
        ::Color { this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color{ this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Circle V:: Circle V object
 *
 * @param center
 * @param radius
 * @param values
 */
Indie::Raylib::Shape::CircleV::CircleV(const Misc::Vector<2> center, const float radius, const Misc::Colors& values) {
    this->_center = center;
    this->_radius = radius;
    this->_colors = values;
}

/**
 * @brief Draw a color-filled circle (Vector version)
 *
 */
void Indie::Raylib::Shape::CircleV::DrawShape() {
    ::DrawCircleV(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_radius,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Circle Lines:: Circle Lines object
 *
 * @param centerX
 * @param centerY
 * @param radius
 * @param values
 */
Indie::Raylib::Shape::CircleLines::CircleLines(const int centerX, const int centerY, const float radius, const Misc::Colors& values) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors = values;
}

/**
 * @brief Draw circle outline
 *
 */
void Indie::Raylib::Shape::CircleLines::DrawShape() {
    ::DrawCircleLines(
        this->_centerX,
        this->_centerY,
        this->_radius,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}