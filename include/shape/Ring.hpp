/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ring
*/

#include "indie.hpp"

#ifndef RING_HPP_
#define RING_HPP_

namespace shape {
    class Ring : public Shape {
            Ring(::Vector2, float, float, float, float, int, ::Color);
            ~Ring() = default;
            void DrawShape();
            ::Vector2 GetPosition() { return this->_center; };
            void SetPosition(::Vector2 center) { this->_center = center; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _center;
            float _innerRadius;
            float _outerRadius;
            float _startAngle;
            float _endAngle;
            int _segments;
            ::Color _color;
    };
    class RingLines : public Shape {
        public:
            RingLines(::Vector2, float, float, float, float, int, ::Color);
            ~RingLines() = default;
            void DrawShape();
            ::Vector2 GetPosition() { return this->_center; };
            void SetPosition(::Vector2 center) { this->_center = center; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _center;
            float _innerRadius;
            float _outerRadius;
            float _startAngle;
            float _endAngle;
            int _segments;
            ::Color _color;
    };
}

#endif