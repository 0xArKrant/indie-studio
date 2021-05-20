/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ellipse
*/

#include "indie.hpp"

#ifndef ELLIPSE_HPP_
#define ELLIPSE_HPP_

namespace IShape {
    class Ellipse : public Shape {
        public:
            Ellipse(const int, const int, const float, const float, Misc::Colors &);
            ~Ellipse() = default;

            inline int          GetCenterX() { return this->_centerX; };
            inline int          GetCenterY() { return this->_centerY; };
            inline float        GetRadiusH() { return this->_radiusH; };
            inline float        GetRadiusV() { return this->_radiusV; };
            inline Misc::Colors GetColors()  { return this->_colors;  };

            inline void SetCenterX(int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(int centerY)        { this->_centerY = centerY; };
            inline void SetRadiusH(float radiusH)      { this->_radiusH = radiusH; };
            inline void SetRadiusV(float radiusV)      { this->_radiusV = radiusV; };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radiusH;
            float        _radiusV;
            Misc::Colors _colors;
    };

    class EllipseLines : public Shape {
        public:
            EllipseLines(const int, const int, const float, const float, Misc::Colors &);
            ~EllipseLines() = default;

            inline int          GetCenterX() { return this->_centerX; };
            inline int          GetCenterY() { return this->_centerY; };
            inline float        GetRadiusH() { return this->_radiusH; };
            inline float        GetRadiusV() { return this->_radiusV; };
            inline Misc::Colors GetColors()  { return this->_colors;  };

            inline void SetCenterX(int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(int centerY)        { this->_centerY = centerY; };
            inline void SetRadiusH(float radiusH)      { this->_radiusH = radiusH; };
            inline void SetRadiusV(float radiusV)      { this->_radiusV = radiusV; };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radiusH;
            float        _radiusV;
            Misc::Colors _colors;
    };
}

#endif