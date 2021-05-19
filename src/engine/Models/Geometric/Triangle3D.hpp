/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Triangle3D
*/

#include "indie.hpp"

#ifndef TRIANGLE3D_HPP_
#define TRIANGLE3D_HPP_

namespace IModels {
    class Triangle3D : public Models {
        public:
            Triangle3D(::Vector3, ::Vector3, ::Vector3, ::Color);
            ~Triangle3D() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _v1;
            ::Vector3 _v2;
            ::Vector3 _v3;
            ::Color _color;
    };
    class TriangleStrip3D : public Models {
        public:
            TriangleStrip3D(::Vector3 *, int, ::Color);
            ~TriangleStrip3D() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 *_points;
            int _pointsCount;
            ::Color _color;
    };
}

#endif /* !CIRCLE3D_HPP */
