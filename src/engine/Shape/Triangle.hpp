/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Triangle
*/

#include "indie.hpp"

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

namespace IShape {
    class Triangle : public Shape {
            Triangle(::Vector2, ::Vector2, Vector2, ::Color);
            ~Triangle() = default;
            void DrawShape();
            void SetPosition(::Vector2 p1, ::Vector2 p2, ::Vector2 p3) { this->_point1 = p1; this->_point2 = p2; this->_point3 = p3; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _point1;
            ::Vector2 _point2;
            ::Vector2 _point3;
            ::Color _color;
    };

    class TriangleLines : public Shape {
            TriangleLines(::Vector2, ::Vector2, Vector2, ::Color);
            ~TriangleLines() = default;
            void DrawShape();
            void SetPosition(::Vector2 p1, ::Vector2 p2, ::Vector2 p3) { this->_point1 = p1; this->_point2 = p2; this->_point3 = p3; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _point1;
            ::Vector2 _point2;
            ::Vector2 _point3;
            ::Color _color;
    };

    class TriangleFan : public Shape {
            TriangleFan(::Vector2 *, int, ::Color);
            ~TriangleFan() = default;
            void DrawShape();
            void SetPosition(::Vector2 *p1, int pointsCount) { this->_point1 = p1; this->_pointsCount = pointsCount; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 *_point1;
            int _pointsCount;
            ::Color _color;
    };

    class TriangleStrip : public Shape {
            TriangleStrip(::Vector2 *, int, ::Color);
            ~TriangleStrip() = default;
            void DrawShape();
            void SetPosition(::Vector2 *p1, int pointsCount) { this->_point1 = p1; this->_pointsCount = pointsCount; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 *_point1;
            int _pointsCount;
            ::Color _color;
    };
}

#endif