/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Plane
*/

#include "indie.hpp"

#ifndef PLANE_HPP_
#define PLANE_HPP_

namespace IModels {
    class Plane : public Models {
        public:
            Plane(::Vector3, ::Vector2, ::Color);
            ~Plane() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _centerPos;
            ::Vector2 _size;
            ::Color _color;
    };
}

#endif /* !LINE3D_HPP */
