/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RectangleVector
*/

#pragma once

#include "indie.hpp"

namespace Misc {
    class Rectangle {
        public:
            Rectangle(const std::array<float, 4> rectangle);
            Rectangle();
            ~Rectangle() = default;

            inline float getX() const      { return this->_rectangle[0]; };
            inline float getY() const      { return this->_rectangle[1]; };
            inline float getWidth() const  { return this->_rectangle[2]; };
            inline float getHeight() const { return this->_rectangle[3]; };
        private:
            std::array<float, 4> _rectangle;
    };
}
