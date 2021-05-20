/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ring
*/

#include "indie.hpp"

#ifndef RING_HPP_
#define RING_HPP_

namespace IShape {
    class Ring : public Shape {
            Ring(const Misc::Vector<2>, const float, const float, const float, const float, const int, Misc::Colors &);
            ~Ring() = default;
            
            inline Misc::Vector<2> GetVector()      { return this->_center;      };
            inline float           GetInnerRadius() { return this->_innerRadius; };
            inline float           GetOuterRadius() { return this->_outerRadius; };
            inline float           GetStartAngle()  { return this->_startAngle;  };
            inline float           GetEndAngle()    { return this->_endAngle;    };
            inline int             GetSegments()    { return this->_segments;    };
            inline Misc::Colors    GetColors()      { return this->_colors;      };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center;           };
            inline void SetInnerRadius(float innerRadius) { this->_innerRadius = innerRadius; };
            inline void SetOuterRadius(float outerRadius) { this->_outerRadius = outerRadius; };
            inline void SetStartAngle(float startAngle)   { this->_startAngle = startAngle;   };
            inline void SetEndAngle(float endAngle)       { this->_endAngle = endAngle;       };
            inline void SetSegments(int segments)         { this->_segments = segments;       };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            float           _innerRadius;
            float           _outerRadius;
            float           _startAngle;
            float           _endAngle;
            int             _segments;
            Misc::Colors    _colors;
    };

    class RingLines : public Shape {
        public:
            RingLines(const Misc::Vector<2>, const float, const float, const float, const float, const int, Misc::Colors &);
            ~RingLines() = default;

            inline Misc::Vector<2> GetVector()      { return this->_center;      };
            inline float           GetInnerRadius() { return this->_innerRadius; };
            inline float           GetOuterRadius() { return this->_outerRadius; };
            inline float           GetStartAngle()  { return this->_startAngle;  };
            inline float           GetEndAngle()    { return this->_endAngle;    };
            inline int             GetSegments()    { return this->_segments;    };
            inline Misc::Colors    GetColors()      { return this->_colors;      };

            inline void SetVector(Misc::Vector<2> center) { this->_center = center;           };
            inline void SetInnerRadius(float innerRadius) { this->_innerRadius = innerRadius; };
            inline void SetOuterRadius(float outerRadius) { this->_outerRadius = outerRadius; };
            inline void SetStartAngle(float startAngle)   { this->_startAngle = startAngle;   };
            inline void SetEndAngle(float endAngle)       { this->_endAngle = endAngle;       };
            inline void SetSegments(int segments)         { this->_segments = segments;       };
            inline void SetColors(Misc::Colors colors)    { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _center;
            float           _innerRadius;
            float           _outerRadius;
            float           _startAngle;
            float           _endAngle;
            int             _segments;
            Misc::Colors    _colors;
    };
}

#endif