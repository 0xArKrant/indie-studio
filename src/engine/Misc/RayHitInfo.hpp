/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RayHitInfo
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"

namespace Misc {
    class RayHitInfo {
        public:
            RayHitInfo(const bool, const float, const Misc::Vector<3>, const Misc::Vector<3>);
            RayHitInfo();
            ~RayHitInfo() = default;

            inline bool            hasHit()       const { return this->_hit; };
            inline float           getDistance()  const { return this->_distance; };
            inline Misc::Vector<3> getPosition()  const { return this->_position; };
            inline Misc::Vector<3> getDirection() const { return this->_direction; };
        private:
            bool                 _hit;
            float                _distance;
            Misc::Vector<3>      _position;
            Misc::Vector<3>      _direction;
    };
}
