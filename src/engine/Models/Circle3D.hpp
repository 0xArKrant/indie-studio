/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Circle3D
*/

#include "indie.hpp"

#ifndef CIRCLE3D_HPP_
#define CIRCLE3D_HPP_

namespace IModels {
    class Circle3D : public Models {
        public:
            Circle3D(::Vector3, float, ::Vector3, float, ::Color);
            ~Circle3D() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _center;
            float _radius;
            ::Vector3 _rotationAxis;
            float _rotationAngle;
            ::Color _color;
    };
}

#endif /* !CIRCLE3D_HPP */
