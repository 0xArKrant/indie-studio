/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Circle
*/

#include "indie.hpp"

#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

namespace IShape {
    class Circle : public Shape {
        public:
            Circle(int, int, float, ::Color);
            ~Circle() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            int _centerX;
            int _centerY;
            float _radius;
            ::Color _color;
    };
    class CircleSector : public Shape {
        public:
            CircleSector(::Vector2, float, float, float, int, ::Color);
            ~CircleSector() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _center;
            float _radius;
            float _startAngle;
            float _endAngle;
            int _segments;
            ::Color _color;
    };
    class CircleSectorLines : public Shape {
        public:
            CircleSectorLines(::Vector2, float, float, float, int, ::Color);
            ~CircleSectorLines() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _center;
            float _radius;
            float _startAngle;
            float _endAngle;
            int _segments;
            ::Color _color;
    };
    class CircleGradient : public Shape {
        public:
            CircleGradient(int, int, float, ::Color, ::Color);
            ~CircleGradient() = default;
            void DrawShape();
        private:
            int _centerX;
            int _centerY;
            float _radius;
            ::Color _color1;
            ::Color _color2;
    };
    class CircleV : public Shape {
        public:
            CircleV(::Vector2, float, ::Color);
            ~CircleV() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _center;
            float _radius;
            ::Color _color;
    };
    class CircleLines : public Shape {
        public:
            CircleLines(int, int, float, ::Color);
            ~CircleLines() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            int _centerX;
            int _centerY;
            float _radius;
            ::Color _color;
    };
}

#endif