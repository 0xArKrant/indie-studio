/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RayVector
*/

#ifndef RAYVECTOR_HPP_
#define RAYVECTOR_HPP_

#include "indie.hpp"

namespace Misc {
    class Ray {
        public:
            Ray(const std::array<float, 3>, const std::array<float, 3>);
            Ray();
            ~Ray() = default;

            inline float getPositionX()  const { return this->_position[0];  };
            inline float getPositionY()  const { return this->_position[1];  };
            inline float getPostionZ()   const { return this->_position[2];  };
            inline float getDirectionX() const { return this->_direction[0]; };
            inline float getDirectionY() const { return this->_direction[1]; };
            inline float getDirectionZ() const { return this->_direction[2]; };
        private:
            std::array<float, 3> _position;
            std::array<float, 3> _direction;
    };
}
#endif /* !RAYVECTOR_HPP_ */
