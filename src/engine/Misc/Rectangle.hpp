/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#pragma once

namespace Misc {
    class Rectangle {
        public:
            Rectangle(float x, float y, float width, float height);
            Rectangle(const Rectangle &cpy) :_x(cpy._x), _y(cpy._y), _width(cpy._width), _height(cpy._height) {}
            ~Rectangle();

            inline float getX() const {return this->_x;}
            inline float getY() const {return this->_x;}
            inline float getWidth() const {return this->_x;}
            inline float getHeight() const {return this->_x;}
        private:
            float _x;
            float _y;
            float _width;
            float _height;
    }
}