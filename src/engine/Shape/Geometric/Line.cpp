/**
 * @file Line.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Line module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Line.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Line:: Line object
 *
 * @param startPosX
 * @param startPosY
 * @param endPosX
 * @param endPosY
 * @param colors
 */
Indie::Raylib::Shape::Line::Line(const int startPosX, const int startPosY, const int endPosX, const int endPosY, const Misc::Colors& colors) {
    this->_startPosX = startPosX;
    this->_startPosY = startPosY;
    this->_endPosX = endPosX;
    this->_endPosY = endPosY;
    this->_colors = colors;
}

Indie::Raylib::Shape::Line::Line()
{
    this->_startPosX = 0;
    this->_startPosY = 0;
    this->_endPosX = 0;
    this->_startPosY = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Line::Line(const Line &cpy)
{
    this->_startPosX = cpy._startPosX;
    this->_startPosY = cpy._startPosY;
    this->_endPosX = cpy._endPosX;
    this->_endPosY = cpy._endPosY;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Line& Indie::Raylib::Shape::Line::operator=(const Line &other)
{
    this->_startPosX = other.GetStartPosX();
    this->_startPosY = other.GetStartPosY();
    this->_endPosX = other.GetEndPosX();
    this->_endPosY = other.GetEndPosY();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a line
 *
 */
void Indie::Raylib::Shape::Line::DrawShape() {
    ::DrawLine(
        this->_startPosX,
        this->_startPosY,
        this->_endPosX,
        this->_endPosY,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Line V:: Line V object
 *
 * @param startPos
 * @param endPos
 * @param colors
 */
Indie::Raylib::Shape::LineV::LineV(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const Misc::Colors& colors) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_colors = colors;
}

Indie::Raylib::Shape::LineV::LineV()
{
    this->_startPos = {0.f, 0.f};
    this->_endPos = {0.f, 0.f};
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::LineV::LineV(const LineV &cpy)
{
    this->_startPos = cpy._startPos;
    this->_endPos = cpy._endPos;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::LineV& Indie::Raylib::Shape::LineV::operator=(const LineV &other)
{
    this->_startPos = other.GetVectorStartPos();
    this->_endPos = other.GetVectorEndPos();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a line (Vector version)
 *
 */
void Indie::Raylib::Shape::LineV::DrawShape() {
    ::DrawLineV(
        ::Vector2{ this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2{ this->_endPos.getX(), this->_endPos.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Line Ex:: Line Ex object
 *
 * @param startPos
 * @param endPos
 * @param thick
 * @param colors
 */
Indie::Raylib::Shape::LineEx::LineEx(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const float thick, const Misc::Colors& colors) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
    this->_colors = colors;
}

Indie::Raylib::Shape::LineEx::LineEx()
{
    this->_startPos = {0.f, 0.f};
    this->_endPos = {0.f, 0.f};
    this->_thick = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::LineEx::LineEx(const LineEx &cpy)
{
    this->_startPos = cpy._startPos;
    this->_endPos = cpy._endPos;
    this->_thick = cpy._thick;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::LineEx& Indie::Raylib::Shape::LineEx::operator=(const LineEx &other)
{
    this->_startPos = other.GetVectorStartPos();
    this->_endPos = other.GetVectorEndPos();
    this->_thick = other.GetThickness();
    this->_colors = other.GetColors();
    return (*this);
}
/**
 * @brief Draw a line defining thickness
 *
 */
void Indie::Raylib::Shape::LineEx::DrawShape() {
    ::DrawLineEx(
        ::Vector2{ this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2{ this->_endPos.getX(), this->_endPos.getY() },
        this->_thick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Line Bezier:: Line Bezier object
 *
 * @param startPos
 * @param endPos
 * @param thick
 * @param colors
 */
Indie::Raylib::Shape::LineBezier::LineBezier(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const float thick, const Misc::Colors& colors) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
    this->_colors = colors;
}

Indie::Raylib::Shape::LineBezier::LineBezier()
{
    this->_startPos = {0.f, 0.f};
    this->_endPos = {0.f, 0.f};
    this->_thick = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::LineBezier::LineBezier(const LineBezier &cpy)
{
    this->_startPos = cpy._startPos;
    this->_endPos = cpy._endPos;
    this->_thick = cpy._thick;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::LineBezier& Indie::Raylib::Shape::LineBezier::operator=(const LineBezier &other)
{
    this->_startPos = other.GetVectorStartPos();
    this->_endPos = other.GetVectorEndPos();
    this->_thick = other.GetThickness();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw a line using cubic-bezier curves in-out
 *
 */
void Indie::Raylib::Shape::LineBezier::DrawShape() {
    ::DrawLineBezier(
        ::Vector2{ this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2{ this->_endPos.getX(), this->_endPos.getY() },
        this->_thick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Line Bezier Quad:: Line Bezier Quad object
 *
 * @param startPos
 * @param endPos
 * @param controlPos
 * @param thick
 * @param colors
 */
Indie::Raylib::Shape::LineBezierQuad::LineBezierQuad(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const Misc::Vector<2> controlPos, const float thick, const Misc::Colors& colors) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_controlPos = controlPos;
    this->_thick = thick;
    this->_colors = colors;
}

Indie::Raylib::Shape::LineBezierQuad::LineBezierQuad()
{
    this->_startPos = {0.f, 0.f};
    this->_endPos = {0.f, 0.f};
    this->_controlPos = {0.f, 0.f};
    this->_thick = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::LineBezierQuad::LineBezierQuad(const LineBezierQuad &cpy)
{
    this->_startPos = cpy._startPos;
    this->_endPos = cpy._endPos;
    this->_controlPos = cpy._controlPos;
    this->_thick = cpy._thick;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::LineBezierQuad& Indie::Raylib::Shape::LineBezierQuad::operator=(const LineBezierQuad &other)
{
    this->_startPos = other.GetVectorStartPos();
    this->_endPos = other.GetVectorEndPos();
    this->_controlPos = other.GetVectorControlPos();
    this->_thick = other.GetThickness();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw line using quadratic bezier curves with a control point
 *
 */
void Indie::Raylib::Shape::LineBezierQuad::DrawShape() {
    ::DrawLineBezierQuad(
        ::Vector2{ this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2{ this->_endPos.getX(), this->_endPos.getY() },
        ::Vector2{ this->_controlPos.getX(), this->_controlPos.getY() },
        this->_thick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Line Strip:: Line Strip object
 *
 * @param points
 * @param pointsCount
 * @param colors
 */
Indie::Raylib::Shape::LineStrip::LineStrip(const Misc::Vector<2> points, const int pointsCount, const Misc::Colors& colors) {
    this->_points = points;
    this->_pointsCount = pointsCount;
    this->_colors = colors;
}

Indie::Raylib::Shape::LineStrip::LineStrip()
{
    this->_points = {0.f, 0.f};
    this->_pointsCount = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::LineStrip::LineStrip(const LineStrip &cpy)
{
    this->_points = cpy._points;
    this->_pointsCount = cpy._pointsCount;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::LineStrip& Indie::Raylib::Shape::LineStrip::operator=(const LineStrip &other)
{
    this->_points = other.GetVectorPoints();
    this->_pointsCount = other.GetPointsCount();
    this->_colors = other.GetColors();
    return (*this);
}

/**
 * @brief Draw lines sequence
 *
 */
void Indie::Raylib::Shape::LineStrip::DrawShape() {
    ::Vector2 points = { this->_points.getX(), this->_points.getY() };

    ::DrawLineStrip(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}