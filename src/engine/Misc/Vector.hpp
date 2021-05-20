/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Vector
*/

#ifndef VECTOR_HPP_
#define VECTOR_HPP_

#include "indie.hpp"

namespace Math {
    template<unsigned int vSize>
    class Vector {
        public:
            Vector() : _vector{ 0 } {};
            template<typename ... x>
            Vector(x... args) { float vec[]{ args... };  std::memcpy(this->_vector.data(), vec, this->_vector.size() * sizeof(float)); };
            ~Vector() = default;

            inline float operator()(unsigned int i) const { return this->_vector[i]; };
            inline float getX() const { if (vSize > 0) return (*this)(0); else throw (Errors::Exception("Unable to Compute Vector", "Vector Size < 0", __FILE__, __LINE__));};
            inline float getY() const { if (vSize > 1) return (*this)(1); else throw (Errors::Exception("Unable to Compute Vector", "Vector Size < 1", __FILE__, __LINE__));};
            inline float getZ() const { if (vSize > 2) return (*this)(2); else throw (Errors::Exception("Unable to Compute Vector", "Vector Size < 2", __FILE__, __LINE__));};
            inline float getW() const { if (vSize > 3) return (*this)(3); else throw (Errors::Exception("Unable to Compute Vector", "Vector Size < 3", __FILE__, __LINE__));};
        private:
            std::array<float, vSize> _vector;
    };
}

#endif /* !VECTOR_HPP_ */
