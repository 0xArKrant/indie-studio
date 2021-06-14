/**
 * @file Ring.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Ring module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Ring.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Ring:: Ring object
 *
 * @param center
 * @param innerRadius
 * @param outerRadius
 * @param startAngle
 * @param endAngle
 * @param segments
 * @param values
 */
Indie::Raylib::Shape::Ring::Ring(const Misc::Vector<2> center, const float innerRadius, const float outerRadius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& values) {
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = values;
}

/**
 * @brief Draw ring
 *
 */
void Indie::Raylib::Shape::Ring::DrawShape() {
    ::DrawRing(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_innerRadius,
        this->_outerRadius,
        this->_startAngle,
        this->_endAngle,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Ring Lines:: Ring Lines object
 *
 * @param center
 * @param innerRadius
 * @param outerRadius
 * @param startAngle
 * @param endAngle
 * @param segments
 * @param values
 */
Indie::Raylib::Shape::RingLines::RingLines(const Misc::Vector<2> center, const float innerRadius, const float outerRadius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& values) {
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = values;
}

/**
 * @brief Draw ring outline
 *
 */
void Indie::Raylib::Shape::RingLines::DrawShape() {
    ::DrawRingLines(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_innerRadius,
        this->_outerRadius,
        this->_startAngle,
        this->_endAngle,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}
