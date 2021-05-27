/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Circle
*/

#pragma once

#include "indie.hpp"

namespace Shape {
    class Circle : public ICircle {
        public:
            Circle(const int, const int, const float, const Misc::Colors &);
            ~Circle() = default;

            inline int          GetCenterX() const { return this->_centerX; };
            inline int          GetCenterY() const { return this->_centerY; };
            inline float        GetRadius()  const { return this->_radius;  };
            inline Misc::Colors GetColors()  const { return this->_colors;  };

            inline void SetCenterX(const int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(const int centerY)        { this->_centerY = centerY; };
            inline void SetRadius(const float radius)        { this->_radius = radius;   };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radius;
            Misc::Colors _colors;
    };

    class CircleSector : public ICircle {
        public:
            CircleSector(const Misc::Vector<2>, const float, const float, const float, const int, const Misc::Colors &);
            ~CircleSector() = default;

            inline Misc::Vector<2> GetVector()     const { return this->_center;     };
            inline float           GetRadius()     const { return this->_radius;     };
            inline float           GetStartAngle() const { return this->_startAngle; };
            inline float           GetEndAngle()   const { return this->_endAngle;   };
            inline int             GetSegments()   const { return this->_segments;   };
            inline Misc::Colors    GetColors()     const { return this->_colors;     };

            inline void SetVector(const Misc::Vector<2> center) { this->_center = center;         };
            inline void SetRadius(const float radius)           { this->_radius = radius;         };
            inline void SetStartAngle(const float startAngle)   { this->_startAngle = startAngle; };
            inline void SetEndAngle(const float endAngle)       { this->_endAngle = endAngle;     };
            inline void SetSegments(const int segments)         { this->_segments = segments;     };
            inline void SetColors(const Misc::Colors colors)    { this->_colors = colors;         };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            float           _radius;
            float           _startAngle;
            float           _endAngle;
            int             _segments;
            Misc::Colors    _colors;
    };

    class CircleSectorLines : public ICircle {
        public:
            CircleSectorLines(const Misc::Vector<2>, const float, const float, const float, const int, const Misc::Colors &);
            ~CircleSectorLines() = default;

            inline Misc::Vector<2> GetVector()     const { return this->_center;     };
            inline float           GetRadius()     const { return this->_radius;     };
            inline float           GetStartAngle() const { return this->_startAngle; };
            inline float           GetEndAngle()   const { return this->_endAngle;   };
            inline int             GetSegments()   const { return this->_segments;   };
            inline Misc::Colors    GetColors()     const { return this->_colors;     };

            inline void SetVector(const Misc::Vector<2> center) { this->_center = center;         };
            inline void SetRadius(const float radius)           { this->_radius = radius;         };
            inline void SetStartAngle(const float startAngle)   { this->_startAngle = startAngle; };
            inline void SetEndAngle(const float endAngle)       { this->_endAngle = endAngle;     };
            inline void SetSegments(const int segments)         { this->_segments = segments;     };
            inline void SetColors(const Misc::Colors colors)    { this->_colors = colors;         };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            float           _radius;
            float           _startAngle;
            float           _endAngle;
            int             _segments;
            Misc::Colors    _colors;
    };

    class CircleGradient : public ICircle {
        public:
            CircleGradient(const int, const int, const float, const Misc::Colors &, const Misc::Colors &);
            ~CircleGradient() = default;

            inline int          GetCenterX() const { return this->_centerX; };
            inline int          GetCenterY() const { return this->_centerY; };
            inline float        GetRadius()  const { return this->_radius;  }
            inline Misc::Colors GetColors1() const { return this->_colors1; };
            inline Misc::Colors GetColors2() const { return this->_colors2; };

            inline void SetCenterX(const int centerX)          { this->_centerX = centerX; };
            inline void SetCenterY(const int centerY)          { this->_centerY = centerY; };
            inline void SetRadius(const float radius)          { this->_radius = radius;   };
            inline void SetColors1(const Misc::Colors colors1) { this->_colors1 = colors1; };
            inline void SetColors2(const Misc::Colors colors2) { this->_colors2 = colors2; };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radius;
            Misc::Colors _colors1;
            Misc::Colors _colors2;
    };

    class CircleV : public ICircle {
        public:
            CircleV(const Misc::Vector<2>, const float, const Misc::Colors &);
            ~CircleV() = default;

            inline Misc::Vector<2> GetVector() const { return this->_center; };
            inline float           GetRadius() const { return this->_radius; }
            inline Misc::Colors    GetColors() const { return this->_colors; };

            inline void SetVector(const Misc::Vector<2> center) { this->_center = center; };
            inline void SetRadius(const float radius)           { this->_radius = radius; };
            inline void SetColors(const Misc::Colors colors)    { this->_colors = colors; };

            void DrawShape();
        private:
            Misc::Vector<2>  _center;
            float            _radius;
            Misc::Colors     _colors;
    };

    class CircleLines : public ICircle {
        public:
            CircleLines(const int, const int, const float, const Misc::Colors &);
            ~CircleLines() = default;

            inline int          GetCenterX() const { return this->_centerX; };
            inline int          GetCenterY() const { return this->_centerY; };
            inline float        GetRadius()  const { return this->_radius;  };
            inline Misc::Colors GetColors()  const { return this->_colors;  };

            inline void SetCenterX(const int centerX)        { this->_centerX = centerX; };
            inline void SetCenterY(const int centerY)        { this->_centerY = centerY; };
            inline void SetRadius(const float radius)        { this->_radius = radius;   };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors;   };

            void DrawShape();
        private:
            int          _centerX;
            int          _centerY;
            float        _radius;
            Misc::Colors _colors;
    };
}