/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line
*/

#include "indie.hpp"

shape::Line::Line(int startPosX, int startPosY, int endPosX, int endPosY, ::Color color)
{
    this->_startPosX = startPosX;
    this->_startPosY = startPosY;
    this->_endPosX = endPosX;
    this->_endPosY = endPosY;
    this->_color = color;
}

void shape::Line::DrawShape()
{
    ::DrawLine(this->_startPosX, this->_startPosY, this->_endPosX, this->_endPosY, this->_color);
}

shape::LineV::LineV(::Vector2 startPos, ::Vector2 endPos, ::Color color)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_color = color;
}

void shape::LineV::DrawShape()
{
    ::DrawLineV(this->_startPos, this->_endPos, this->_color);
}

shape::LineEx::LineEx(::Vector2 startPos, ::Vector2 endPos, float thick, ::Color color)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
    this->_color = color;
}

void shape::LineEx::DrawShape()
{
    ::DrawLineEx(this->_startPos, this->_endPos, this->_thick, this->_color);
}

shape::LineBezier::LineBezier(::Vector2 startPos, ::Vector2 endPos, float thick, ::Color color)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_thick = thick;
    this->_color = color;
}

void shape::LineBezier::DrawShape()
{
    ::DrawLineBezier(this->_startPos, this->_endPos, this->_thick, this->_color);
}


shape::LineBezierQuad::LineBezierQuad(::Vector2 startPos, ::Vector2 endPos, ::Vector2 controlPos, float thick, ::Color color)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_controlPos = controlPos;
    this->_thick = thick;
    this->_color = color;
}

void shape::LineBezierQuad::DrawShape()
{
    ::DrawLineBezierQuad(this->_startPos, this->_endPos, this->_controlPos, this->_thick, this->_color);
}

shape::LineStrip::LineStrip(::Vector2 *points, int pointsCount, ::Color color)
{
    this->_points = points;
    this->_pointsCount = pointsCount;
    this->_color = color;
}

void shape::LineStrip::DrawShape()
{
    ::DrawLineStrip(this->_points, this->_pointsCount, this->_color);
}