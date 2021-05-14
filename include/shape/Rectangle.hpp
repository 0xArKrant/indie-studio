/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#include "indie.hpp"

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

namespace shape {
    class Rectangle : public Shape {
        public:
            Rectangle(Vector2, Vector2, Color);
            ~Rectangle() = default;
            void DrawShape();
            Vector2 GetPosition() { return this->_position; };
            void SetPosition(Vector2 position) { this->_position = position; };
            Color GetColor() { return this->_color; };
            void SetColor(Color color) { this->_color = color; };
        protected:
        private:
            Vector2 _position;
            Vector2 _size;
            Color _color;
    };
}

#endif /* !RECTANGLE_HPP_ */
