/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Point3D
*/

#include "indie.hpp"

#ifndef POINT3D_HPP_
#define POINT3D_HPP_

namespace IModels {
    class Point3D : public Models {
        public:
            Point3D(::Vector3, ::Color);
            ~Point3D() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _position;
            ::Color _color;
    };
}

#endif /* !POINT3D_HPP */
