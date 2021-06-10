/**
 * @file RayVector.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Ray substitution classes to raylib structure
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
    class Ray {
        public:
            Ray(const Misc::Vector<3>, const Misc::Vector<3>);
            Ray();
            ~Ray() = default; /*!< Ray default destructor */

            inline Misc::Vector<3> getPosition()  const { return this->_position;  }; /*!< Position value getter @return Misc::Vector<3> position */
            inline Misc::Vector<3> getDirection() const { return this->_direction; }; /*!< Direction value getter @return Misc::Vector<3> direction */
        private:
            Misc::Vector<3> _position; /*!< Position value of Ray */
            Misc::Vector<3> _direction; /*!< Direction value of Ray */
    };
}
