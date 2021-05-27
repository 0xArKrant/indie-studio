/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** DrawBillboard
*/

#include "indie.hpp"

#ifndef DRAWBILLBOARD_HPP_
#define DRAWBILLBOARD_HPP_

namespace IModels {
    class DrawBillboard : public Models {
        public:
            DrawBillboard(::Camera, ::Texture2D, ::Vector3, float, ::Color);
            ~DrawBillboard() = default;
            void DrawModels();
            ::Color GetColor() { return this->_tint; };
            void SetColor(::Color tint) { this->_tint = tint; };
        private:
            ::Camera _camera;
            ::Texture2D _texture;
            ::Vector3 _center;
            float _size;
            ::Color _tint;
    };
    class DrawBillboardRec : public Models {
        public:
            DrawBillboardRec(::Camera, ::Texture2D, Rectangle, ::Vector3, float, ::Color);
            ~DrawBillboardRec() = default;
            void DrawModels();
            ::Color GetColor() { return this->_tint; };
            void SetColor(::Color tint) { this->_tint = tint; };
        private:
            ::Camera _camera;
            ::Texture2D _texture;
            ::Rectangle _source;
            ::Vector3 _center;
            float _size;
            ::Color _tint;
    };
}

#endif