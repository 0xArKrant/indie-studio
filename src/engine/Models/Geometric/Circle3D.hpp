/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Circle3D
*/

#pragma once

#include "ICircle3D.hpp"

namespace Raylib
{
    namespace Models
    {
        class Circle3D : public ICircle3D
        {
        public:
            Circle3D(const Misc::Vector<3>, const float, const Misc::Vector<3>, const float, const Misc::Colors &);
            ~Circle3D() = default;

            inline Misc::Vector<3> GetCenter() const { return this->_center; };
            inline float GetRadius() const { return this->_radius; };
            inline Misc::Vector<3> GetRotationAxis() const { return this->_rotationAxis; };
            inline float GetRotationAngle() const { return this->_rotationAngle; };
            inline Misc::Colors GetColors() const { return this->_colors; };

            inline void SetCenter(const Misc::Vector<3> center) { this->_center = center; };
            inline void SetRadius(const float radius) { this->_radius = radius; };
            inline void SetRotationAxis(const Misc::Vector<3> rotationAxis) { this->_rotationAxis = rotationAxis; };
            inline void SetRotationAngle(const float rotationAngle) { this->_rotationAngle = rotationAngle; };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

            void DrawModels();

        private:
            Misc::Vector<3> _center;
            float _radius;
            Misc::Vector<3> _rotationAxis;
            float _rotationAngle;
            Misc::Colors _colors;
        };
    }; // namespace Models
} // namespace Raylib