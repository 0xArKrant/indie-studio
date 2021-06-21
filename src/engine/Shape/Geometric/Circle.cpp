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
 * @param colors
 */
Indie::Raylib::Shape::Circle::Circle(const int centerX, const int centerY, const float radius, const Misc::Colors& colors) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors = colors;
}

Indie::Raylib::Shape::Circle::Circle()
{
    this->_centerX = 0;
    this->_centerY = 0;
    this->_radius = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Circle::Circle(const Circle &cpy)
{
    this->_centerX = cpy._centerX;
    this->_centerY = cpy._centerY;
    this->_radius = cpy._radius;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Circle& Indie::Raylib::Shape::Circle::operator=(const Circle &other)
{
    this->_centerX = other.GetCenterX();
    this->_centerY = other.GetCenterY();
    this->_radius = other.GetRadius();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::CircleSector::CircleSector(const Misc::Vector<2> center, const float radius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& colors) {
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = colors;
}

Indie::Raylib::Shape::CircleSector::CircleSector()
{
    this->_center = {0.f, 0.f};
    this->_radius = 0.f;
    this->_startAngle = 0.f;
    this->_endAngle = 0.f;
    this->_segments = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::CircleSector::CircleSector(const CircleSector &cpy)
{
    this->_center = cpy._center;
    this->_radius = cpy._radius;
    this->_startAngle = cpy._startAngle;
    this->_endAngle = cpy._endAngle;
    this->_segments = cpy._endAngle;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::CircleSector& Indie::Raylib::Shape::CircleSector::operator=(const CircleSector &other)
{
    this->_center = other.GetVector();
    this->_radius = other.GetRadius();
    this->_startAngle = other.GetStartAngle();
    this->_endAngle = other.GetEndAngle();
    this->_segments = other.GetSegments();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::CircleSectorLines::CircleSectorLines(const Misc::Vector<2> center, const float radius, const float startAngle, const float endAngle, const int segments, const Misc::Colors& colors) {
    this->_center = center;
    this->_radius = radius;
    this->_startAngle = startAngle;
    this->_endAngle = endAngle;
    this->_segments = segments;
    this->_colors = colors;
}

Indie::Raylib::Shape::CircleSectorLines::CircleSectorLines()
{
    this->_center = {0.f, 0.f};
    this->_radius = 0.f;
    this->_startAngle = 0.f;
    this->_endAngle = 0.f;
    this->_segments = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::CircleSectorLines::CircleSectorLines(const CircleSectorLines &cpy)
{
    this->_center = cpy._center;
    this->_radius = cpy._radius;
    this->_startAngle = cpy._startAngle;
    this->_endAngle = cpy._endAngle;
    this->_segments = cpy._segments;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::CircleSectorLines& Indie::Raylib::Shape::CircleSectorLines::operator=(const CircleSectorLines &other)
{
    this->_center = other.GetVector();
    this->_radius = other.GetRadius();
    this->_startAngle = other.GetStartAngle();
    this->_endAngle = other.GetEndAngle();
    this->_segments = other.GetSegments();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors1
 * @param colors2
 */
Indie::Raylib::Shape::CircleGradient::CircleGradient(const int centerX, const int centerY, const float radius, const Misc::Colors& colors1, const Misc::Colors& colors2) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors1 = colors1;
    this->_colors2 = colors2;
}

Indie::Raylib::Shape::CircleGradient::CircleGradient()
{
    this->_centerX = 0;
    this->_centerY = 0;
    this->_radius = 0.f;
    this->_colors1 = {0, 0, 0, 0};
    this->_colors2 = {0, 0, 0, 0};
}

Indie::Raylib::Shape::CircleGradient::CircleGradient(const CircleGradient &cpy)
{
    this->_centerX = cpy._centerX;
    this->_centerY = cpy._centerY;
    this->_radius = cpy._radius;
    this->_colors1 = cpy._colors1;
    this->_colors2 = cpy._colors2;
}

Indie::Raylib::Shape::CircleGradient& Indie::Raylib::Shape::CircleGradient::operator=(const CircleGradient &other)
{
    this->_centerX = other.GetCenterX();
    this->_centerY = other.GetCenterY();
    this->_radius = other.GetRadius();
    this->_colors1 = other.GetColors1();
    this->_colors2 = other.GetColors2();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::CircleV::CircleV(const Misc::Vector<2> center, const float radius, const Misc::Colors& colors) {
    this->_center = center;
    this->_radius = radius;
    this->_colors = colors;
}

Indie::Raylib::Shape::CircleV::CircleV()
{
    this->_center = {0.f, 0.f};
    this->_radius = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::CircleV::CircleV(const CircleV &cpy)
{
    this->_center = cpy._center;
    this->_radius = cpy._radius;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::CircleV& Indie::Raylib::Shape::CircleV::operator=(const CircleV &other)
{
    this->_center = other.GetVector();
    this->_radius = other.GetRadius();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::CircleLines::CircleLines(const int centerX, const int centerY, const float radius, const Misc::Colors& colors) {
    this->_centerX = centerX;
    this->_centerY = centerY;
    this->_radius = radius;
    this->_colors = colors;
}

Indie::Raylib::Shape::CircleLines::CircleLines()
{
    this->_centerX = 0;
    this->_centerY = 0;
    this->_radius = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::CircleLines::CircleLines(const CircleLines &cpy)
{
    this->_centerX = cpy._centerX;
    this->_centerY = cpy._centerY;
    this->_radius = cpy._radius;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::CircleLines& Indie::Raylib::Shape::CircleLines::operator=(const CircleLines &other)
{
    this->_centerX = other.GetCenterX();
    this->_centerY = other.GetCenterY();
    this->_radius = other.GetCenterY();
    this->_colors = other.GetColors();
    return (*this);
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