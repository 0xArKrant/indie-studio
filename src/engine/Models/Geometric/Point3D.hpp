/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Point3D
*/

#include "indie.hpp"

#ifndef POINT3D_HPP_
#define POINT3D_HPP_

namespace IModels {
    class Point3D : public Models {
        public:
            Point3D(const Misc::Vector<3>, const Misc::Colors &);
            ~Point3D() = default;

            inline Misc::Vector<3> GetPosition()     const { return this->_position; };
            inline Misc::Colors    GetColors()       const { return this->_colors;   };

            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position; };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;     };

            void DrawModels();
        private:
            Misc::Vector<3> _position;
            Misc::Colors    _colors;
    };
}

#endif /* !POINT3D_HPP */
