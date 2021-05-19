/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line3D
*/

#include "indie.hpp"

#ifndef LINE3D_HPP_
#define LINE3D_HPP_

namespace IModels {
    class Line3D : public Models {
        public:
            Line3D(::Vector3, ::Vector3, ::Color);
            ~Line3D() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _startPos;
            ::Vector3 _endPos;
            ::Color _color;
    };
}

#endif /* !LINE3D_HPP */
