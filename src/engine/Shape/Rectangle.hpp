/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#include "indie.hpp"

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

namespace IShape {
    class Rectangle : public Shape {
        public:
            Rectangle(int, int, int, int, ::Color);
            ~Rectangle() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            int _posX;
            int _posY;
            int _width;
            int _height;
            ::Color _color;
    };
    class RectangleV : public Shape {
        public:
            RectangleV(::Vector2, ::Vector2, ::Color);
            ~RectangleV() = default;
            void DrawShape();
            ::Vector2 GetPosition() { return this->_position; };
            void SetPosition(::Vector2 position) { this->_position = position; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        protected:
        private:
            ::Vector2 _position;
            ::Vector2 _size;
            ::Color _color;
    };
    class RectangleRec : public Shape {
        public:
            RectangleRec(::Rectangle, ::Color);
            ~RectangleRec() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Rectangle _rec;
            ::Color _color;
    };
    class RectanglePro : public Shape {
        public:
            RectanglePro(::Rectangle, ::Vector2, float, ::Color);
            ~RectanglePro() = default;
            void DrawShape();
            ::Vector2 GetPosition() { return this->_origin; };
            void SetPosition(::Vector2 origin) { this->_origin = origin; };
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Rectangle _rec;
            ::Vector2 _origin;
            float _rotation;
            ::Color _color;
    };
    class RectangleGradientV : public Shape {
        public:
            RectangleGradientV(int, int, int, int, ::Color, ::Color);
            ~RectangleGradientV() = default;
            void DrawShape();
        private:
            int _posX;
            int _posY;
            int _width;
            int _height;
            ::Color _color;
            ::Color _color2;
    };
    class RectangleGradientH : public Shape {
        public:
            RectangleGradientH(int, int, int, int, ::Color, ::Color);
            ~RectangleGradientH() = default;
            void DrawShape();
        private:
            int _posX;
            int _posY;
            int _width;
            int _height;
            ::Color _color;
            ::Color _color2;
    };
    class RectangleGradientEx : public Shape {
        public:
            RectangleGradientEx(::Rectangle, ::Color, ::Color, ::Color, ::Color);
            ~RectangleGradientEx() = default;
            void DrawShape();
        private:
            ::Rectangle _rec;
            ::Color _color1;
            ::Color _color2;
            ::Color _color3;
            ::Color _color4;
    };
    class RectangleLines : public Shape {
        public:
            RectangleLines(int, int, int, int, ::Color);
            ~RectangleLines() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            int _posX;
            int _posY;
            int _width;
            int _height;
            ::Color _color;
    };
    class RectangleLinesEx : public Shape {
        public:
            RectangleLinesEx(::Rectangle, int, ::Color);
            ~RectangleLinesEx() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Rectangle _rec;
            int _linethick;
            ::Color _color;
    };
    class RectangleRounded : public Shape {
        public:
            RectangleRounded(::Rectangle, float, int, ::Color);
            ~RectangleRounded() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Rectangle _rec;
            float _roundness;
            int _segments;
            ::Color _color;
    };
    class RectangleRoundedLines : public Shape {
        public:
            RectangleRoundedLines(::Rectangle, float, int, int, ::Color);
            ~RectangleRoundedLines() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Rectangle _rec;
            float _roundness;
            int _segments;
            int _linethick;
            ::Color _color;

    };

}

#endif /* !RECTANGLE_HPP_ */
