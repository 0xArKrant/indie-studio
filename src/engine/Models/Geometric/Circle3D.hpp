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
            Circle3D(const Misc::Vector<3>, const float, const Misc::Vector<3>, const float, const Misc::Colors &);
            ~Circle3D() = default;

            inline Misc::Vector<3> GetCenter()        const { return this->_center;        };
            inline float           GetRadius()        const { return this->_radius;        };
            inline Misc::Vector<3> GetRotationAxis()  const { return this->_rotationAxis;  };
            inline float           GetRotationAngle() const { return this->_rotationAngle; };
            inline Misc::Colors    GetColors()        const { return this->_colors;        };


            inline void SetCenter(const Misc::Vector<3> center)             { this->_center = center;               };
            inline void SetRadius(const float radius)                       { this->_radius = radius;               };
            inline void SetRotationAxis(const Misc::Vector<3> rotationAxis) { this->_rotationAxis = rotationAxis;   };
            inline void SetRotationAngle(const float rotationAngle)         { this->_rotationAngle = rotationAngle; };
            inline void SetColors(const Misc::Colors colors)                { this->_colors = colors;               };

            void DrawModels();
        private:
            Misc::Vector<3> _center;
            float           _radius;
            Misc::Vector<3> _rotationAxis;
            float           _rotationAngle;
            Misc::Colors    _colors;
    };
}

#endif /* !CIRCLE3D_HPP */
