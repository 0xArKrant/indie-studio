/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ellipse
*/

#pragma once

#include "indie.hpp"

namespace Shape {
    class Ellipse : public IEllipse {
        public:
            Ellipse(const int, const int, const float, const float, const Misc::Colors &);
            ~Ellipse() = default;

            inline int          GetCenterX() const { return this->_centerX; };
            inline int          GetCenterY() const { return this->_centerY; };
            inline float        GetRadiusH() const { return this->_radiusH; };
            inline float        GetRadiusV() const { return this->_radiusV; };
            inline Misc::Colors GetColors()  const { return this->_colors;  };

            inline void SetCenterX(const int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(const int centerY)        { this->_centerY = centerY; };
            inline void SetRadiusH(const float radiusH)      { this->_radiusH = radiusH; };
            inline void SetRadiusV(const float radiusV)      { this->_radiusV = radiusV; };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radiusH;
            float        _radiusV;
            Misc::Colors _colors;
    };

    class EllipseLines : public IEllipse {
        public:
            EllipseLines(const int, const int, const float, const float, const Misc::Colors &);
            ~EllipseLines() = default;

            inline int          GetCenterX() const { return this->_centerX; };
            inline int          GetCenterY() const { return this->_centerY; };
            inline float        GetRadiusH() const { return this->_radiusH; };
            inline float        GetRadiusV() const { return this->_radiusV; };
            inline Misc::Colors GetColors()  const { return this->_colors;  };

            inline void SetCenterX(const int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(const int centerY)        { this->_centerY = centerY; };
            inline void SetRadiusH(const float radiusH)      { this->_radiusH = radiusH; };
            inline void SetRadiusV(const float radiusV)      { this->_radiusV = radiusV; };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radiusH;
            float        _radiusV;
            Misc::Colors _colors;
    };
}