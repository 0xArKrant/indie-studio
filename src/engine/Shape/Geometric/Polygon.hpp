/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Polygon
*/

#include "indie.hpp"

#ifndef POLYGON_HPP_
#define POLYGON_HPP_

namespace IShape {
    class Polygon : public Shape {
        public:
            Polygon(const Misc::Vector<2>, const int, const float, const float, Misc::Colors &);
            ~Polygon() = default;

            inline Misc::Vector<2> GetVector()   { return this->_center;      };
            inline int             GetSides()    { return this->_sides;       };
            inline float           GetRadius()   { return this->_radius;      };
            inline float           GetRotation() { return this->_rotation;    };
            inline Misc::Colors    GetColors()   { return this->_colors;      };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center;           };
            inline void SetSides(int sides)               { this->_sides = sides;             };
            inline void SetRadius(float radius)           { this->_radius = radius;           };
            inline void SetRotation(float rotation)       { this->_rotation = rotation;       };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            int             _sides;
            float           _radius;
            float           _rotation;
            Misc::Colors    _colors;
    };

    class PolygonLines : public Shape {
        public:
            PolygonLines(const Misc::Vector<2>, const int, const float, const float, Misc::Colors &);
            ~PolygonLines() = default;

            inline Misc::Vector<2> GetVector()   { return this->_center;      };
            inline int             GetSides()    { return this->_sides;       };
            inline float           GetRadius()   { return this->_radius;      };
            inline float           GetRotation() { return this->_rotation;    };
            inline Misc::Colors    GetColors()   { return this->_colors;      };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center;           };
            inline void SetSides(int sides)               { this->_sides = sides;             };
            inline void SetRadius(float radius)           { this->_radius = radius;           };
            inline void SetRotation(float rotation)       { this->_rotation = rotation;       };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            int             _sides;
            float           _radius;
            float           _rotation;
            Misc::Colors    _colors;
    };

    class PolygonLinesEx : public Shape {
        public:
            PolygonLinesEx(const Misc::Vector<2>, const int, const float, const float, const float, Misc::Colors &);
            ~PolygonLinesEx() = default;

            inline Misc::Vector<2> GetVector()    { return this->_center;      };
            inline int             GetSides()     { return this->_sides;       };
            inline float           GetRadius()    { return this->_radius;      };
            inline float           GetRotation()  { return this->_rotation;    };
            inline float           GetLineThick() { return this->_linethick;   };
            inline Misc::Colors    GetColors()    { return this->_colors;      };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center;           };
            inline void SetSides(int sides)               { this->_sides = sides;             };
            inline void SetRadius(float radius)           { this->_radius = radius;           };
            inline void SetRotation(float rotation)       { this->_rotation = rotation;       };
            inline void SetLineThick(float linethick)     { this->_linethick = linethick;     };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            int             _sides;
            float           _radius;
            float           _rotation;
            float           _linethick;
            Misc::Colors    _colors;
    };
}

#endif