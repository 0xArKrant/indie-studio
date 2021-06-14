/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Plane
*/

#pragma once

#include "IPlane.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models     {
            class Plane : public IPlane         {
                public:
                    Plane(const Misc::Vector<3>, const Misc::Vector<2>, const Misc::Colors&);
                    ~Plane() = default;

                    inline Misc::Vector<3> GetCenterPos() const { return this->_centerPos; };
                    inline Misc::Vector<2> GetSize() const { return this->_size; };
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    inline void SetCenterPos(const Misc::Vector<3> centerPos) { this->_centerPos = centerPos; };
                    inline void SetSize(const Misc::Vector<2> size) { this->_size = size; };
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawModels();

                private:
                    Misc::Vector<3> _centerPos;
                    Misc::Vector<2> _size;
                    Misc::Colors _colors;
            };
        }; // namespace Models
    } // namespace Raylib
} // namespace Indie