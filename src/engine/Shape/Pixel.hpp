/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Pixel
*/

#include "indie.hpp"

#ifndef PIXEL_HPP_
#define PIXEL_HPP_

namespace IShape {
    class Pixel : public Shape {
        public:
            Pixel(int, int, ::Color);
            ~Pixel() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        protected:
        private:
            int _posX;
            int _posY;
            ::Color _color;
    };
    class PixelV : public Shape {
        public:
            PixelV(::Vector2, ::Color);
            ~PixelV() = default;
            void DrawShape();
            ::Vector2 GetPosition() { return this->_position; };
            void SetPosition(::Vector2 position) { this->_position = position; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        protected:
        private:
            ::Vector2 _position;
            ::Color _color;
    };
}

#endif