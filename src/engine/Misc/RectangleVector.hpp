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
            Rectangle();
            ~Rectangle() = default; /*!< Rectangle default desctructor */

            inline float getX()      const { return this->_rectangle[0]; }; /*!< Rectangle X value getter @return float rectangle[0] */
            inline float getY()      const { return this->_rectangle[1]; }; /*!< Rectangle Y value getter @return float rectangle[1] */
            inline float getWidth()  const { return this->_rectangle[2]; }; /*!< Rectangle Width value getter @return float rectangle[2] */
            inline float getHeight() const { return this->_rectangle[3]; }; /*!< Rectangle Height getter @return float rectangle[3] */
        private:
            std::array<float, 4> _rectangle; /*!< Rectangle vector(array) value of Rectangle */
    };
}
