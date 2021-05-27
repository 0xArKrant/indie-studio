/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line3D
*/

#include "indie.hpp"

#ifndef LINE3D_HPP_
#define LINE3D_HPP_

namespace IModels {
    class Line3D : public Models {
        public:
            Line3D(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Colors &);
            ~Line3D() = default;

            inline Misc::Vector<3> GetStartPos() const { return this->_startPos; };
            inline Misc::Vector<3> GetEndPos()   const { return this->_endPos;   };
            inline Misc::Colors    GetColors()   const { return this->_colors;   };

            inline void SetStartPos(const Misc::Vector<3> startPos) { this->_startPos = startPos; };
            inline void SetEndPos(const Misc::Vector<3> endPos)     { this->_endPos = endPos;     };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;     };

            void DrawModels();
        private:
            Misc::Vector<3> _startPos;
            Misc::Vector<3> _endPos;
            Misc::Colors    _colors;
    };
}

#endif /* !LINE3D_HPP */
