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
            Pixel(const int, const int, const Misc::Colors &);
            ~Pixel() = default;

            inline int          GetPosX()   const { return this->_posX;   };
            inline int          GetPosY()   const { return this->_posY;   };
            inline Misc::Colors GetColors() const { return this->_colors; };

            inline void SetPosX(const int posX)              { this->_posX = posX;     };
            inline void SetPosY(const int posY)              { this->_posY = posY;     };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            Misc::Colors _colors;
    };

    class PixelV : public Shape {
        public:
            PixelV(const Misc::Vector<2>, const Misc::Colors &);
            ~PixelV() = default;

            inline Misc::Vector<2> GetVector() const { return this->_position; };
            inline Misc::Colors    GetColors() const { return this->_colors;   };

            inline void SetVector(const Misc::Vector<2> position) { this->_position = position; };
            inline void SetColors(const Misc::Colors colors)      { this->_colors = colors;     };

            void DrawShape();
        private:
            Misc::Vector<2> _position;
            Misc::Colors    _colors;
    };
}

#endif