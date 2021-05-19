/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cube
*/

#include "indie.hpp"

#ifndef CUBE_HPP_
#define CUBE_HPP_

namespace IModels {
    class Cube : public Models {
        public:
            Cube(::Vector3, float, float, float, ::Color);
            ~Cube() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _position;
            float _width;
            float _height;
            float _length;
            ::Color _color;
    };
    class CubeV : public Models {
        public:
            CubeV(::Vector3, ::Vector3, ::Color);
            ~CubeV() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _position;
            ::Vector3 _size;
            ::Color _color;
    };
    class CubeWires : public Models {
        public:
            CubeWires(::Vector3, float, float, float, ::Color);
            ~CubeWires() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _position;
            float _width;
            float _height;
            float _length;
            ::Color _color;
    };
    class CubeWiresV : public Models {
        public:
            CubeWiresV(::Vector3, ::Vector3, ::Color);
            ~CubeWiresV() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Vector3 _position;
            ::Vector3 _size;
            ::Color _color;
    };
    class CubeTexture : public Models {
        public:
            CubeTexture(::Texture2D, ::Vector3, float, float, float, ::Color);
            ~CubeTexture() = default;
            void DrawModels();
            ::Color GetColor() { return this->_color; };
            void SetColor(::Color color) { this->_color = color; };
        private:
            ::Texture2D _texture;
            ::Vector3 _position;
            float _width;
            float _height;
            float _length;
            ::Color _color;
    };
}

#endif /* !CUBE_HPP_ */
