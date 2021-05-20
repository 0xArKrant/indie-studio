/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Triangle
*/

#include "indie.hpp"

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

namespace IShape {
    class Triangle : public Shape {
            Triangle(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, Misc::Colors &);
            ~Triangle() = default;

            inline Misc::Vector<2> GetVector1() { return this->_point1; };
            inline Misc::Vector<2> GetVector2() { return this->_point2; };
            inline Misc::Vector<2> GetVector3() { return this->_point3; };
            inline Misc::Colors    GetColors()  { return this->_colors; };

            inline void SetVector1(Misc::Vector<2> point1) { this->_point1 = point1; };
            inline void SetVector2(Misc::Vector<2> point2) { this->_point2 = point2; };
            inline void SetVector3(Misc::Vector<2> point3) { this->_point3 = point3; };
            inline void SetColors(Misc::Colors colors)     { this->_colors = colors; };

            void DrawShape();
        private:
            Misc::Vector<2> _point1;
            Misc::Vector<2> _point2;
            Misc::Vector<2> _point3;
            Misc::Colors _colors;
    };
    class TriangleLines : public Shape {
        public:
            TriangleLines(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, Misc::Colors &);
            ~TriangleLines() = default;

            inline Misc::Vector<2> GetVector1() { return this->_point1; };
            inline Misc::Vector<2> GetVector2() { return this->_point2; };
            inline Misc::Vector<2> GetVector3() { return this->_point3; };
            inline Misc::Colors    GetColors()  { return this->_colors; };

            inline void SetVector1(Misc::Vector<2> point1) { this->_point1 = point1; };
            inline void SetVector2(Misc::Vector<2> point2) { this->_point2 = point2; };
            inline void SetVector3(Misc::Vector<2> point3) { this->_point3 = point3; };
            inline void SetColors(Misc::Colors colors)     { this->_colors = colors; };

            void DrawShape();
        private:
            Misc::Vector<2> _point1;
            Misc::Vector<2> _point2;
            Misc::Vector<2> _point3;
            Misc::Colors _colors;
    };

    class TriangleFan : public Shape {
            TriangleFan(const Misc::Vector<2>, const int, Misc::Colors &);
            ~TriangleFan() = default;
            inline int              GetPointsCount()                   { return this->_pointsCount;        };
            inline Misc::Vector<2>  GetVector1()                       { return this->_point1;             };
            inline Misc::Colors     GetColors()                        { return this->_colors;             };

            inline void             SetPointsCount(int pointsCount)    { this->_pointsCount = pointsCount; };
            inline void             SetVector1(Misc::Vector<2> point1) { this->_point1 = point1;           };
            inline void             SetColors(Misc::Colors colors)     { this->_colors = colors;           };

            void DrawShape();
        private:
            int _pointsCount;
            Misc::Vector<2> _point1;
            Misc::Colors _colors;
    };

    class TriangleStrip : public Shape {
            TriangleStrip(const Misc::Vector<2>, const int, Misc::Colors &);
            ~TriangleStrip() = default;

            inline int              GetPointsCount()                   { return this->_pointsCount;        };
            inline Misc::Vector<2>  GetVector1()                       { return this->_point1;             };
            inline Misc::Colors     GetColors()                        { return this->_colors;             };

            inline void             SetPointsCount(int pointsCount)    { this->_pointsCount = pointsCount; };
            inline void             SetVector1(Misc::Vector<2> point1) { this->_point1 = point1;           };
            inline void             SetColors(Misc::Colors colors)     { this->_colors = colors;           };

            void DrawShape();
        private:
            int _pointsCount;
            Misc::Vector<2> _point1;
            Misc::Colors _colors;
    };
}

#endif