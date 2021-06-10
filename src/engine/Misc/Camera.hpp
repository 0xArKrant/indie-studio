/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Camera
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"

namespace Misc {
    class Camera2D {
        public:
            Camera2D(const Misc::Vector<2>, const Misc::Vector<2>, float, float);
            Camera2D();
            ~Camera2D() = default;

            inline Misc::Vector<2> getOffset()    const { return this->_offset; };
            inline Misc::Vector<2> getTarget()    const { return this->_target; };
            inline float           getRotation()  const { return this->_rotation; };
            inline float           getZoom()      const { return this->_zoom; };
        private:
            Misc::Vector<2> _offset;
            Misc::Vector<2> _target;
            float           _rotation;
            float           _zoom;
    };

    class Camera3D {
        public:
            Camera3D(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Vector<3>, float, int);
            Camera3D();
            ~Camera3D() = default;
        private:
            Misc::Vector<3> _position;
            Misc::Vector<3> _target;
            Misc::Vector<3> _up;
            float           _fovy;
            int             _projection;
    };
}
