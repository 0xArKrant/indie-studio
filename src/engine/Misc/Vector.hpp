/**
 * @file Vector.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Vector2/3/4 substitution class to raylib structure
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
#include "Exception.hpp"

namespace Misc {
    template<unsigned int vSize>
    class Vector {
        public:
            Vector() : _vector{ 0 } {}; /*!  Vector default constructor */
            /**
             * @brief Construct a new Vector object using 1 to 4 float
             *
             * @tparam x
             * @param args
             */
            template<typename ... x>
            Vector(x... args) {
                float vec[]{ args... };
                if (vSize > 4)
                    throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size > 4", __FILE__, __LINE__));
                std::memcpy(this->_vector.data(), vec, this->_vector.size() * sizeof(float));
            };
            ~Vector() = default; /*! Rectangle default desctructor */

            template<typename ... x>
            void move(x... args) {
                float vec[]{args...};
                this->_vector[0] += vec[0];
                if (vSize > 1)
                    this->_vector[0] += vec[0];
                if (vSize > 2)
                    this->_vector[1] += vec[1];
                if (vSize > 3) {}
                    this->_vector[2] += vec[2];
            }

            /**
             * @brief Get X Position Object
             *
             * @return float
             */
            inline float getX() const { if (vSize > 0) return this->_vector[0]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size  0", __FILE__, __LINE__));}; /*! X value getter @return float X*/
            /**
             * @brief Get Y Position Object
             *
             * @return float
             */
            inline float getY() const { if (vSize > 1) return this->_vector[1]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size  1", __FILE__, __LINE__));}; /*! Y value getter @return float Y*/
            /**
             * @brief Get Z Position object
             *
             * @return float
             */
            inline float getZ() const { if (vSize > 2) return this->_vector[2]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size  2", __FILE__, __LINE__));}; /*! Z value getter @return float Z*/
            /**
             * @brief Get Width object
             *
             * @return float
             */
            inline float getW() const { if (vSize > 3) return this->_vector[3]; else throw (Indie::Errors::Exception("Unable to Compute Vector", "Vector Size  3", __FILE__, __LINE__));}; /*! W value getter @return float W*/
            /**
             * @brief Get the Vector object
             *
             * @return std::array<float, vSize>
             */
            inline std::array<float, vSize> getVector() const { return this->_vector; }; /*! Vector value getter @return std::array<float, vSize> vector*/
        private:
            std::array<float, vSize> _vector; /*! Vector (template array of float and 1 to 4 size max) value of Texture */
    };
}
