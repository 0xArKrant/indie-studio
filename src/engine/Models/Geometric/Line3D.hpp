/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line3D
*/

#pragma once

#include "ILine3D.hpp"

namespace Raylib
{
    namespace Models
    {
        class Line3D : public ILine3D
        {
        public:
            Line3D(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Colors &);
            ~Line3D() = default;

            inline Misc::Vector<3> GetStartPos() const { return this->_startPos; };
            inline Misc::Vector<3> GetEndPos() const { return this->_endPos; };
            inline Misc::Colors GetColors() const { return this->_colors; };

            inline void SetStartPos(const Misc::Vector<3> startPos) { this->_startPos = startPos; };
            inline void SetEndPos(const Misc::Vector<3> endPos) { this->_endPos = endPos; };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

            void DrawModels();

        private:
            Misc::Vector<3> _startPos;
            Misc::Vector<3> _endPos;
            Misc::Colors _colors;
        };
    }; // namespace Models
} // namespace Raylib
