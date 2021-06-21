/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Point3D
*/

#pragma once

#include "IPoint3D.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models     {
            class Point3D : public IPoint3D         {
                public:
                    Point3D(const Misc::Vector<3>, const Misc::Colors&);
                    Point3D(const Point3D &);
                    Point3D& operator=(const Point3D &);
                    ~Point3D() = default;

                    inline Misc::Vector<3> GetPosition() const { return this->_position; };
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    inline void SetPosition(const Misc::Vector<3> position) { this->_position = position; };
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawModels();

                private:
                    Misc::Vector<3> _position;
                    Misc::Colors _colors;
            };
        } // namespace Models
    } // namespace Raylib
} // namespace Indie
