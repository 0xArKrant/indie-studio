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
 * @param colors
 */
Indie::Raylib::Shape::Ring::Ring(const Misc::Vector<2> center, const float innerRadius, const float outerRadius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& colors) {
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = colors;
}

Indie::Raylib::Shape::Ring::Ring()
{
    this->_center = {0.f, 0.f};
    this->_innerRadius = 0.f;
    this->_outerRadius = 0.f;
    this->_startAngle = 0.f;
    this->_endAngle = 0.f;
    this->_segments = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Ring::Ring(const Ring &cpy)
{
    this->_center = cpy._center;
    this->_innerRadius = cpy._innerRadius;
    this->_outerRadius = cpy._outerRadius;
    this->_startAngle = cpy._startAngle;
    this->_endAngle = cpy._endAngle;
    this->_segments = cpy._segments;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Ring& Indie::Raylib::Shape::Ring::operator=(const Ring &other)
{
    this->_center = other.GetVector();
    this->_innerRadius = other.GetInnerRadius();
    this->_outerRadius = other.GetOuterRadius();
    this->_startAngle = other.GetStartAngle();
    this->_endAngle = other.GetEndAngle();
    this->_segments = other.GetSegments();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RingLines::RingLines(const Misc::Vector<2> center, const float innerRadius, const float outerRadius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& colors) {
    this->_center = center;
    this->_innerRadius = innerRadius;
    this->_outerRadius = outerRadius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = colors;
}

Indie::Raylib::Shape::RingLines::RingLines()
{
    this->_center = {0.f, 0.f};
    this->_innerRadius = 0.f;
    this->_outerRadius = 0.f;
    this->_startAngle = 0.f;
    this->_endAngle = 0.f;
    this->_segments = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RingLines::RingLines(const RingLines &cpy)
{
    this->_center = cpy._center;
    this->_innerRadius = cpy._innerRadius;
    this->_outerRadius = cpy._outerRadius;
    this->_startAngle = cpy._startAngle;
    this->_endAngle = cpy._endAngle;
    this->_segments = cpy._segments;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RingLines& Indie::Raylib::Shape::RingLines::operator=(const RingLines &other)
{
    this->_center = other.GetVector();
    this->_innerRadius = other.GetInnerRadius();
    this->_outerRadius = other.GetOuterRadius();
    this->_startAngle = other.GetStartAngle();
    this->_endAngle = other.GetEndAngle();
    this->_segments = other.GetSegments();
    this->_colors = other.GetColors();
    return (*this);
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
