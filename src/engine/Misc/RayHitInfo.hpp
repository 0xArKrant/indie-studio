/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RayHitInfo
*/

#ifndef RAYHITINFO_HPP_
#define RAYHITINFO_HPP_

#include "indie.hpp"

namespace Misc {
    class RayHitInfo {
        public:
            RayHitInfo(const bool, const float, const std::array<float, 3>, const std::array<float, 3>);
            RayHitInfo();
            ~RayHitInfo() = default;

            inline bool  hasHit()        const { return this->_hit;          };
            inline float getDistance()   const { return this->_distance;     };
            inline float getPositionX()  const { return this->_position[0];  };
            inline float getPositionY()  const { return this->_position[1];  };
            inline float getPositionZ()  const { return this->_position[2];  };
            inline float getDirectionX() const { return this->_direction[0]; };
            inline float getDirectionY() const { return this->_direction[1]; };
            inline float getDirectionZ() const { return this->_direction[2]; };
        private:
            bool                 _hit;
            float                _distance;
            std::array<float, 3> _position;
            std::array<float, 3> _direction;
    };
}
#endif /* !RAYHITINFO_HPP_ */
