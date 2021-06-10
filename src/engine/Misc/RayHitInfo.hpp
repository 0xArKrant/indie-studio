/**
 * @file RayHitInfo.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief RayHitInfo substitution class to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
 * Epitech Nancy 2021
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
