/**
 * @file RayHitInfo.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief RayHitInfo substitution class to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
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
            /**
             * @brief Destroy the Ray Hit Info object
             *
             */
            ~RayHitInfo() = default;
            /**
             * @brief Check if Ray has hit
             *
             * @return true
             * @return false
             */
            inline bool            hasHit()       const { return this->_hit;       };
            /**
             * @brief Get the Distance object
             *
             * @return float
             */
            inline float           getDistance()  const { return this->_distance;  };
            /**
             * @brief Get the Position object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> getPosition()  const { return this->_position;  };
            /**
             * @brief Get the Direction object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> getDirection() const { return this->_direction; };
        private:
            bool                 _hit; /*! Hit value of RayHitInfo */
            float                _distance; /*! Distance value of RayHitInfo */
            Misc::Vector<3>      _position; /*! Position value of RayHitInfo */
            Misc::Vector<3>      _direction; /*! Direction value of RayHitInfo */
    };
}
