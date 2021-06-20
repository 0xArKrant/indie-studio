/**
 * @file RectangleVector.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Rectangle substitution class to raylib structure (Vector4)
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

namespace Misc {
    class Rectangle {
        public:
            Rectangle(const std::array<float, 4> rectangle);
            Rectangle(const Rectangle &);
            Rectangle();
            /**
             * @brief Destroy the Rectangle object
             *
             */
            ~Rectangle() = default;

            /**
             * @brief Get X Position object
             *
             * @return float
             */
            inline float getX()      const { return this->_rectangle[0]; };
            /**
             * @brief Get Y Position object
             *
             * @return float
             */
            inline float getY()      const { return this->_rectangle[1]; };
            /**
             * @brief Get the Width object
             *
             * @return float
             */
            inline float getWidth()  const { return this->_rectangle[2]; };
            /**
             * @brief Get the Height object
             *
             * @return float
             */
            inline float getHeight() const { return this->_rectangle[3]; };
        private:
            std::array<float, 4> _rectangle; /*! Rectangle vector(array) value of Rectangle */
    };
}
