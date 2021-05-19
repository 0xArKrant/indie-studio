/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** DrawBoundingBox
*/

#include "indie.hpp"

#ifndef DRAWBOUNDINGBOX_HPP_
#define DRAWBOUNDINGBOX_HPP_

namespace IModels {
    class DrawBoundingBox : public Models {
        public:
            DrawBoundingBox(::BoundingBox, ::Color);
            ~DrawBoundingBox() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::BoundingBox _box;
            ::Color _color;
    };
};

#endif