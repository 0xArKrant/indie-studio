/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cylinder
*/

#include "indie.hpp"

#ifndef CYLINDER_HPP_
#define CYLINDER_HPP_

namespace IModels {
    class Cylinder : public Models {
        public:
            Cylinder(::Vector3, float, float, float, int, ::Color);
            ~Cylinder() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _position;
            float _radiusTop;
            float _radiusBottom;
            float _height;
            int _slices;
            ::Color _color;
    };
    class CylinderWires : public Models {
        public:
            CylinderWires(::Vector3, float, float, float, int, ::Color);
            ~CylinderWires() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _position;
            float _radiusTop;
            float _radiusBottom;
            float _height;
            int _slices;
            ::Color _color;
    };
}

#endif /* !CIRCLE3D_HPP */
