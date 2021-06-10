/**
 * @file Vector.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Vector2/3/4 substitution class to raylib structure
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
#include "Exception.hpp"

namespace Misc {
    template<unsigned int vSize>
    class Vector {
        public:
            Vector() : _vector{ 0 } {};
            template<typename ... x>
            Vector(x... args) {
                float vec[]{ args... };
                if (vSize > 4)
                    throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size > 4", __FILE__, __LINE__));
                std::memcpy(this->_vector.data(), vec, this->_vector.size() * sizeof(float));
            };
            ~Vector() = default;

            inline float getX() const { if (vSize > 0) return this->_vector[0]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size < 0", __FILE__, __LINE__));};
            inline float getY() const { if (vSize > 1) return this->_vector[1]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size < 1", __FILE__, __LINE__));};
            inline float getZ() const { if (vSize > 2) return this->_vector[2]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size < 2", __FILE__, __LINE__));};
            inline float getW() const { if (vSize > 3) return this->_vector[3]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size < 3", __FILE__, __LINE__));};
            inline std::array<float, vSize> getVector() const { return this->_vector; };
        private:
            std::array<float, vSize> _vector;
    };
}
