/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cylinder
*/

#include "indie.hpp"

#ifndef CYLINDER_HPP_
#define CYLINDER_HPP_

namespace IModels {
    class Cylinder : public Models {
        public:
            Cylinder(const Misc::Vector<3>, const float, const float, const float, const int, const Misc::Colors &);
            ~Cylinder() = default;

            inline Misc::Vector<3> GetPosition()     const { return this->_position;     };
            inline float           GetRadiusTop()    const { return this->_radiusTop;    };
            inline float           GetRadiusBottom() const { return this->_radiusBottom; };
            inline float           GetHeight()       const { return this->_height;       };
            inline int             GetSlices()       const { return this->_slices;       };
            inline Misc::Colors    GetColors()       const { return this->_colors;       };

            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position;         };
            inline void SetRadiusTop(const float radiusTop)         { this->_radiusTop = radiusTop;       };
            inline void SetRadiusBottom(const float radiusBottom)   { this->_radiusBottom = radiusBottom; };
            inline void SetHeight(const float height)               { this->_height = height;             };
            inline void SetSlices(const int slices)                 { this->_slices = slices;             };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;             };

            void DrawModels();
        private:
            Misc::Vector<3> _position;
            float           _radiusTop;
            float           _radiusBottom;
            float           _height;
            int             _slices;
            Misc::Colors    _colors;
    };

    class CylinderWires : public Models {
        public:
            CylinderWires(const Misc::Vector<3>, const float, const float, const float, const int, const Misc::Colors &);
            ~CylinderWires() = default;

            inline Misc::Vector<3> GetPosition()     const { return this->_position;     };
            inline float           GetRadiusTop()    const { return this->_radiusTop;    };
            inline float           GetRadiusBottom() const { return this->_radiusBottom; };
            inline float           GetHeight()       const { return this->_height;       };
            inline int             GetSlices()       const { return this->_slices;       };
            inline Misc::Colors    GetColors()       const { return this->_colors;       };

            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position;         };
            inline void SetRadiusTop(const float radiusTop)         { this->_radiusTop = radiusTop;       };
            inline void SetRadiusBottom(const float radiusBottom)   { this->_radiusBottom = radiusBottom; };
            inline void SetHeight(const float height)               { this->_height = height;             };
            inline void SetSlices(const int slices)                 { this->_slices = slices;             };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;             };

            void DrawModels();
        private:
            Misc::Vector<3> _position;
            float           _radiusTop;
            float           _radiusBottom;
            float           _height;
            int             _slices;
            Misc::Colors    _colors;
    };
}

#endif /* !CYLINDER_HPP_ */
