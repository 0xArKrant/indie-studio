/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ellipse
*/

#include "indie.hpp"

#ifndef ELLIPSE_HPP_
#define ELLIPSE_HPP_

namespace shape {
    class Ellipse : public Shape {
        public:
            Ellipse(int, int, float, float, ::Color);
            ~Ellipse() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            int _centerX;
            int _centerY;
            float _radiusH;
            float _radiusV;
            ::Color _color;
    };
    class EllipseLines : public Shape {
        public:
            EllipseLines(int, int, float, float, ::Color);
            ~EllipseLines() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            int _centerX;
            int _centerY;
            float _radiusH;
            float _radiusV;
            ::Color _color;
    };
}

#endif