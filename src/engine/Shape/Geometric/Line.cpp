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
 * @param values
 */
Indie::Raylib::Shape::Line::Line(const int startPosX, const int startPosY, const int endPosX, const int endPosY, const Misc::Colors& values) {
    this->_startPosX = startPosX;
    this->_startPosY = startPosY;
    this->_endPosX = endPosX;
    this->_endPosY = endPosY;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::LineV::LineV(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const Misc::Colors& values) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::LineEx::LineEx(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const float thick, const Misc::Colors& values) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::LineBezier::LineBezier(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const float thick, const Misc::Colors& values) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::LineBezierQuad::LineBezierQuad(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const Misc::Vector<2> controlPos, const float thick, const Misc::Colors& values) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_controlPos = controlPos;
    this->_thick = thick;
    this->_colors = values;
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
 * @param values
 */
Indie::Raylib::Shape::LineStrip::LineStrip(const Misc::Vector<2> points, const int pointsCount, const Misc::Colors& values) {
    this->_points = points;
    this->_pointsCount = pointsCount;
    this->_colors = values;
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