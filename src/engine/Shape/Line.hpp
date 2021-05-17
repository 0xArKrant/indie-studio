/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Line
*/

#include "indie.hpp"

#ifndef LINE_HPP_
#define LINE_HPP_

namespace shape {
    class Line : public Shape {
        public:
            Line(int, int, int, int, ::Color);
            ~Line() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            int _startPosX;
            int _startPosY;
            int _endPosX;
            int _endPosY;
            ::Color _color;
    };
    class LineV : public Shape {
        public:
            LineV(::Vector2, ::Vector2, ::Color);
            ~LineV() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _startPos;
            ::Vector2 _endPos;
            ::Color _color;
    };
    class LineEx : public Shape {
        public:
            LineEx(::Vector2, ::Vector2, float, ::Color);
            ~LineEx() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _startPos;
            ::Vector2 _endPos;
            float _thick;
            ::Color _color;
    };
    class LineBezier : public Shape {
        public:
            LineBezier(::Vector2, ::Vector2, float, ::Color);
            ~LineBezier() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _startPos;
            ::Vector2 _endPos;
            float _thick;
            ::Color _color;
    };
    class LineBezierQuad : public Shape {
        public:
            LineBezierQuad(::Vector2, ::Vector2, ::Vector2, float, ::Color);
            ~LineBezierQuad() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 _startPos;
            ::Vector2 _endPos;
            ::Vector2 _controlPos;
            float _thick;
            ::Color _color;
    };
    class LineStrip : public Shape {
        public:
            LineStrip(::Vector2 *, int, ::Color);
            ~LineStrip() = default;
            void DrawShape();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector2 *_points;
            int _pointsCount;
            ::Color _color;
    };
}

#endif