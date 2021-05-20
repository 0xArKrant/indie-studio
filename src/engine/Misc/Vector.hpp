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
            inline float getX() const { 
                if (vSize > 0)
                    return (*this)(0);
                else
                    throw std::runtime_error("vSize < 0");
            };
            inline float getY() const {
                if (vSize > 1)
                    return (*this)(1);
                else
                    throw std::runtime_error("vSize < 1");
            };
            inline float getZ() const {
                if (vSize > 2)
                    return (*this)(2);
                else
                    throw std::runtime_error("vSize < 2");
            };
            inline float getW() const {
                if (vSize > 3)
                    return (*this)(3);
                else
                    throw std::runtime_error("Vector Size < 3");
            };
        private:
            std::array<float, vSize> _vector;
    };
}

#endif /* !VECTOR_HPP_ */
