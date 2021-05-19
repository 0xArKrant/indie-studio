/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Polygon
*/

#include "indie.hpp"

#ifndef POLYGON_HPP_
#define POLYGON_HPP_

namespace IShape {
    class Polygon : public Shape {
        public:
            Polygon(::Vector2, int, float, float, ::Color);
            ~Polygon() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            Vector2 _center;
            int _sides;
            float _radius;
            float _rotation;
            ::Color _color;
    };
    class PolygonLines : public Shape {
        public:
            PolygonLines(::Vector2, int, float, float, ::Color);
            ~PolygonLines() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            Vector2 _center;
            int _sides;
            float _radius;
            float _rotation;
            ::Color _color;
    };
    class PolygonLinesEx : public Shape {
        public:
            PolygonLinesEx(::Vector2, int, float, float, float, ::Color);
            ~PolygonLinesEx() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            Vector2 _center;
            int _sides;
            float _radius;
            float _rotation;
            float _linethick;
            ::Color _color;
    };
}

#endif