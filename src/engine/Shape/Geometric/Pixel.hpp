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
            Pixel(const int, const int, Misc::Colors &);
            ~Pixel() = default;

            inline int          GetPosX()   { return this->_posX;   };
            inline int          GetPosY()   { return this->_posY;   };
            inline Misc::Colors GetColors() { return this->_colors; };

            inline void SetPosX(int posX)              { this->_posX = posX;     };
            inline void SetPosY(int posY)              { this->_posY = posY;     };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            Misc::Colors _colors;
    };

    class PixelV : public Shape {
        public:
            PixelV(const Misc::Vector<2>, Misc::Colors &);
            ~PixelV() = default;

            inline Misc::Vector<2> GetVector() { return this->_position; };
            inline Misc::Colors    GetColors() { return this->_colors;   };

            inline void SetVector(Misc::Vector<2> position) { this->_position = position; };
            inline void SetColors(Misc::Colors colors)      { this->_colors = colors;     };

            void DrawShape();
        private:
            Misc::Vector<2> _position;
            Misc::Colors    _colors;
    };
}

#endif