/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#include "indie.hpp"

#ifndef RAY_HPP_
#define RAY_HPP_

namespace IModels {
    class Ray : public Models {
        public:
            Ray(::Ray, ::Color);
            ~Ray() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Ray _ray;
            ::Color _color;
    };
}

#endif /* !LINE3D_HPP */
