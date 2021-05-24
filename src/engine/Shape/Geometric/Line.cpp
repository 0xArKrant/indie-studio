/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line
*/

#include "indie.hpp"

IShape::Line::Line( const int startPosX, const int startPosY, const int endPosX, const int endPosY, Misc::Colors &values) : _colors(values)
{
    this->_startPosX = startPosX;
    this->_startPosY = startPosY;
    this->_endPosX = endPosX;
    this->_endPosY = endPosY;
}

void IShape::Line::DrawShape()
{
    ::DrawLine(
        this->_startPosX,
        this->_startPosY,
        this->_endPosX,
        this->_endPosY,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::LineV::LineV(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, Misc::Colors &values) : _colors(values)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
}

void IShape::LineV::DrawShape()
{
    ::DrawLineV(
        ::Vector2 { this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2 { this->_endPos.getX(), this->_endPos.getY() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::LineEx::LineEx(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const float thick, Misc::Colors &values) : _colors(values)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
}

void IShape::LineEx::DrawShape()
{
    ::DrawLineEx(
        ::Vector2 { this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2 { this->_endPos.getX(), this->_endPos.getY() },
        this->_thick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::LineBezier::LineBezier(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const float thick, Misc::Colors &values) : _colors(values)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
}

void IShape::LineBezier::DrawShape()
{
    ::DrawLineBezier(
        ::Vector2 { this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2 { this->_endPos.getX(), this->_endPos.getY() },
        this->_thick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}


IShape::LineBezierQuad::LineBezierQuad(const Misc::Vector<2> startPos, const Misc::Vector<2> endPos, const Misc::Vector<2> controlPos, const float thick, Misc::Colors &values) : _colors(values)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_controlPos = controlPos;
    this->_thick = thick;
}

void IShape::LineBezierQuad::DrawShape()
{
    ::DrawLineBezierQuad(
        ::Vector2 { this->_startPos.getX(), this->_startPos.getY() },
        ::Vector2 { this->_endPos.getX(), this->_endPos.getY() },
        ::Vector2 { this->_controlPos.getX(), this->_controlPos.getY() },
        this->_thick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IShape::LineStrip::LineStrip(const Misc::Vector<2> points, const int pointsCount, Misc::Colors &values) : _colors(values)
{
    this->_points = points;
    this->_pointsCount = pointsCount;
}

void IShape::LineStrip::DrawShape()
{
    ::Vector2 points = { this->_points.getX(), this->_points.getY() };

    ::DrawLineStrip(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}