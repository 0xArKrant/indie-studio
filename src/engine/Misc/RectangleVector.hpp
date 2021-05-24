/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RectangleVector
*/


#ifndef RECTANGLEVETOR_HPP_
#define RECTANGLEVETOR_HPP_

#include "indie.hpp"

namespace Misc {
    class Rectangle {
        public:
            Rectangle(std::array<float, 4> rectangle) { this->_rectangle = rectangle; };
            Rectangle() { this->_rectangle = {0, 0, 0, 0}; };
            ~Rectangle() = default;

            inline float getX() const      { return this->_rectangle[0]; };
            inline float getY() const      { return this->_rectangle[1]; };
            inline float getWidth() const  { return this->_rectangle[2]; };
            inline float getHeight() const { return this->_rectangle[3]; };
        private:
            std::array<float, 4> _rectangle;
    };
}
#endif /* !RECTANGLEVETOR_HPP_ */
