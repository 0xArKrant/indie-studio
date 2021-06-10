/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Triangle3D
*/

#pragma once

#include "ITriangle3D.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models     {
            class Triangle3D : public ITriangle3D         {
                public:
                    Triangle3D(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Colors&);
                    ~Triangle3D() = default;

                    inline Misc::Vector<3> GetV1() const { return this->_v1; };
                    inline Misc::Vector<3> GetV2() const { return this->_v2; };
                    inline Misc::Vector<3> GetV3() const { return this->_v3; };
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    inline void SetV1(const Misc::Vector<3> v1) { this->_v1 = v1; };
                    inline void SetV2(const Misc::Vector<3> v2) { this->_v2 = v2; };
                    inline void SetV3(const Misc::Vector<3> v3) { this->_v3 = v3; };
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawModels();

                private:
                    Misc::Vector<3> _v1;
                    Misc::Vector<3> _v2;
                    Misc::Vector<3> _v3;
                    Misc::Colors _colors;
            };

            class TriangleStrip3D : public ITriangle3D         {
                public:
                    TriangleStrip3D(const Misc::Vector<3>, const int, const Misc::Colors&);
                    ~TriangleStrip3D() = default;

                    inline Misc::Vector<3> GetPoints() const { return this->_points; };
                    inline int GetPointsCount() const { return this->_pointsCount; };
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    inline void SetPoints(const Misc::Vector<3> points) { this->_points = points; };
                    inline void SetPointsCount(const int pointsCount) { this->_pointsCount = pointsCount; };
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawModels();

                private:
                    Misc::Vector<3> _points;
                    int _pointsCount;
                    Misc::Colors _colors;
            };
        } // namespace Models
    } // namespace Raylib
} // namespace Indie