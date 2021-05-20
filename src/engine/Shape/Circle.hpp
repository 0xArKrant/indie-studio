/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Circle
*/

#include "indie.hpp"

#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

namespace IShape {
    class Circle : public Shape {
        public:
            Circle(const int, const int, const float, Misc::Colors &);
            ~Circle() = default;

            inline int          GetCenterX() { return this->_centerX; };
            inline int          GetCenterY() { return this->_centerY; };
            inline float        GetRadius()  { return this->_radius;  };
            inline Misc::Colors GetColors()  { return this->_colors;  };

            inline void SetCenterX(int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(int centerY)        { this->_centerY = centerY; };
            inline void SetRadius(float radius)        { this->_radius = radius;   };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radius;
            Misc::Colors _colors;
    };

    class CircleSector : public Shape {
        public:
            CircleSector(const Misc::Vector<2>, const float, const float, const float, const int, Misc::Colors &);
            ~CircleSector() = default;

            inline Misc::Vector<2> GetVector()     { return this->_center;     };
            inline float           GetRadius()     { return this->_radius;     };
            inline float           GetStartAngle() { return this->_startAngle; };
            inline float           GetEndAngle()   { return this->_endAngle;   };
            inline int             GetSegments()   { return this->_segments;   };
            inline Misc::Colors    GetColors()     { return this->_colors;     };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center;         };
            inline void SetRadius(float radius)           { this->_radius = radius;         };
            inline void SetStartAngle(float startAngle)   { this->_startAngle = startAngle; };
            inline void SetEndAngle(float endAngle)       { this->_endAngle = endAngle;     };
            inline void SetSegments(int segments)         { this->_segments = segments;     };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors;         };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            float           _radius;
            float           _startAngle;
            float           _endAngle;
            int             _segments;
            Misc::Colors    _colors;
    };

    class CircleSectorLines : public Shape {
        public:
            CircleSectorLines(const Misc::Vector<2>, const float, const float, const float, const int, Misc::Colors &);
            ~CircleSectorLines() = default;

            inline Misc::Vector<2> GetVector()     { return this->_center;     };
            inline float           GetRadius()     { return this->_radius;     };
            inline float           GetStartAngle() { return this->_startAngle; };
            inline float           GetEndAngle()   { return this->_endAngle;   };
            inline int             GetSegments()   { return this->_segments;   };
            inline Misc::Colors    GetColors()     { return this->_colors;     };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center;         };
            inline void SetRadius(float radius)           { this->_radius = radius;         };
            inline void SetStartAngle(float startAngle)   { this->_startAngle = startAngle; };
            inline void SetEndAngle(float endAngle)       { this->_endAngle = endAngle;     };
            inline void SetSegments(int segments)         { this->_segments = segments;     };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors;         };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            float           _radius;
            float           _startAngle;
            float           _endAngle;
            int             _segments;
            Misc::Colors    _colors;
    };

    class CircleGradient : public Shape {
        public:
            CircleGradient(const int, const int, const float, Misc::Colors &, Misc::Colors &);
            ~CircleGradient() = default;

            inline int          GetCenterX() { return this->_centerX; };
            inline int          GetCenterY() { return this->_centerY; };
            inline float        GetRadius()  { return this->_radius;  }
            inline Misc::Colors GetColors1() { return this->_colors1; };
            inline Misc::Colors GetColors2() { return this->_colors2; };

            inline void SetCenterX(int centerX)          { this->_centerX = centerX; };
            inline void SetCenterY(int centerY)          { this->_centerY = centerY; };
            inline void SetRadius(float radius)          { this->_radius = radius;   };
            inline void SetColors1(Misc::Colors colors1) { this->_colors1 = colors1; };
            inline void SetColors2(Misc::Colors colors2) { this->_colors2 = colors2; };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radius;
            Misc::Colors _colors1;
            Misc::Colors _colors2;
    };

    class CircleV : public Shape {
        public:
            CircleV(const Misc::Vector<2>, const float, Misc::Colors &);
            ~CircleV() = default;

            inline Misc::Vector<2> GetVector() { return this->_center; };
            inline float           GetRadius() { return this->_radius; }
            inline Misc::Colors    GetColors() { return this->_colors; };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center; };
            inline void SetRadius(float radius)           { this->_radius = radius; };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors; };

            void DrawShape();
        private:
            Misc::Vector<2>  _center;
            float            _radius;
            Misc::Colors     _colors;
    };

    class CircleLines : public Shape {
        public:
            CircleLines(const int, const int, const float, Misc::Colors &);
            ~CircleLines() = default;

            inline int          GetCenterX() { return this->_centerX; };
            inline int          GetCenterY() { return this->_centerY; };
            inline float        GetRadius()  { return this->_radius;  };
            inline Misc::Colors GetColors()  { return this->_colors;  };

            inline void SetCenterX(int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(int centerY)        { this->_centerY = centerY; };
            inline void SetRadius(float radius)        { this->_radius = radius;   };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radius;
            Misc::Colors _colors;
    };
}

#endif