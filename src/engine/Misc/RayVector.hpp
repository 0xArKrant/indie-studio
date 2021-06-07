/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RayVector
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"

namespace Misc {
    class Ray {
        public:
            Ray(const Misc::Vector<3>, const Misc::Vector<3>);
            Ray();
            ~Ray() = default;

            inline Misc::Vector<3> getPosition()  const { return this->_position;  };
            inline Misc::Vector<3> getDirection() const { return this->_direction; };
        private:
            Misc::Vector<3> _position;
            Misc::Vector<3> _direction;
    };
}
