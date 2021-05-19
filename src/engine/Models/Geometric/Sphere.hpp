/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Sphere
*/

#include "indie.hpp"

#ifndef SPHERE_HPP_
#define SPHERE_HPP_

namespace IModels {
    class Sphere : public Models {
        public:
            Sphere(::Vector3, float, ::Color);
            ~Sphere() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _centerPos;
            float _radius;
            ::Color _color;
    };
    class SphereEx : public Models {
        public:
            SphereEx(::Vector3, float, int, int, ::Color);
            ~SphereEx() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _centerPos;
            float _radius;
            int _rings;
            int _slices;
            ::Color _color;
    };
    class SphereWires : public Models {
        public:
            SphereWires(::Vector3, float, int, int, ::Color);
            ~SphereWires() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _centerPos;
            float _radius;
            int _rings;
            int _slices;
            ::Color _color;
    };
}

#endif /* !SPHERE_HPP */
