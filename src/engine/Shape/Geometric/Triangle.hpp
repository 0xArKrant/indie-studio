/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Triangle
*/

#pragma once

#include "indie.hpp"

namespace Shape {
    class Triangle : public ITriangle {
            Triangle(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors &);
            ~Triangle() = default;

            inline Misc::Vector<2> GetVector1() const { return this->_point1; };
            inline Misc::Vector<2> GetVector2() const { return this->_point2; };
            inline Misc::Vector<2> GetVector3() const { return this->_point3; };
            inline Misc::Colors    GetColors()  const { return this->_colors; };

            inline void SetVector1(const Misc::Vector<2> point1) { this->_point1 = point1; };
            inline void SetVector2(const Misc::Vector<2> point2) { this->_point2 = point2; };
            inline void SetVector3(const Misc::Vector<2> point3) { this->_point3 = point3; };
            inline void SetColors(const Misc::Colors colors)     { this->_colors = colors; };

            void DrawShape();
        private:
            Misc::Vector<2> _point1;
            Misc::Vector<2> _point2;
            Misc::Vector<2> _point3;
            Misc::Colors _colors;
    };

    class TriangleLines : public ITriangle {
        public:
            TriangleLines(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors &);
            ~TriangleLines() = default;

            inline Misc::Vector<2> GetVector1() const { return this->_point1; };
            inline Misc::Vector<2> GetVector2() const { return this->_point2; };
            inline Misc::Vector<2> GetVector3() const { return this->_point3; };
            inline Misc::Colors    GetColors()  const { return this->_colors; };

            inline void SetVector1(const Misc::Vector<2> point1) { this->_point1 = point1; };
            inline void SetVector2(const Misc::Vector<2> point2) { this->_point2 = point2; };
            inline void SetVector3(const Misc::Vector<2> point3) { this->_point3 = point3; };
            inline void SetColors(const Misc::Colors colors)     { this->_colors = colors; };

            void DrawShape();
        private:
            Misc::Vector<2> _point1;
            Misc::Vector<2> _point2;
            Misc::Vector<2> _point3;
            Misc::Colors _colors;
    };

    class TriangleFan : public ITriangle {
            TriangleFan(const Misc::Vector<2>, const int, const Misc::Colors &);
            ~TriangleFan() = default;
            inline Misc::Vector<2>  GetVector()      const { return this->_point;       };
            inline int              GetPointsCount() const { return this->_pointsCount; };
            inline Misc::Colors     GetColors()      const { return this->_colors;      };

            inline void SetVector(const Misc::Vector<2> point) { this->_point = point;             };
            inline void SetPointsCount(const int pointsCount)  { this->_pointsCount = pointsCount; };
            inline void SetColors(const Misc::Colors colors)   { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _point;
            int _pointsCount;
            Misc::Colors _colors;
    };

    class TriangleStrip : public ITriangle {
            TriangleStrip(const Misc::Vector<2>, const int, const Misc::Colors &);
            ~TriangleStrip() = default;

            inline Misc::Vector<2>  GetVector()      const { return this->_point;       };
            inline int              GetPointsCount() const { return this->_pointsCount; };
            inline Misc::Colors     GetColors()      const { return this->_colors;      };

            inline void SetVector(const Misc::Vector<2> point) { this->_point = point;             };
            inline void SetPointsCount(const int pointsCount)  { this->_pointsCount = pointsCount; };
            inline void SetColors(const Misc::Colors colors)   { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _point;
            int             _pointsCount;
            Misc::Colors    _colors;
    };
}