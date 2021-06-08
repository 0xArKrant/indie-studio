/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Ring
*/

#pragma once

#include "IRing.hpp"

namespace Shape {
    class Ring : public IRing {
            Ring(const Misc::Vector<2>, const float, const float, const float, const float, const int, const Misc::Colors &);
            ~Ring() = default;

            inline Misc::Vector<2> GetVector()      const { return this->_center;      };
            inline float           GetInnerRadius() const { return this->_innerRadius; };
            inline float           GetOuterRadius() const { return this->_outerRadius; };
            inline float           GetStartAngle()  const { return this->_startAngle;  };
            inline float           GetEndAngle()    const { return this->_endAngle;    };
            inline int             GetSegments()    const { return this->_segments;    };
            inline Misc::Colors    GetColors()      const { return this->_colors;      };

            inline void SetVector(const Misc::Vector<2> center) { this->_center = center;           };
            inline void SetInnerRadius(const float innerRadius) { this->_innerRadius = innerRadius; };
            inline void SetOuterRadius(const float outerRadius) { this->_outerRadius = outerRadius; };
            inline void SetStartAngle(const float startAngle)   { this->_startAngle = startAngle;   };
            inline void SetEndAngle(const float endAngle)       { this->_endAngle = endAngle;       };
            inline void SetSegments(const int segments)         { this->_segments = segments;       };
            inline void SetColors(const Misc::Colors colors)    { this->_colors = colors;           };

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

    class RingLines : public IRing {
        public:
            RingLines(const Misc::Vector<2>, const float, const float, const float, const float, const int, const Misc::Colors &);
            ~RingLines() = default;

            inline Misc::Vector<2> GetVector()      const { return this->_center;      };
            inline float           GetInnerRadius() const { return this->_innerRadius; };
            inline float           GetOuterRadius() const { return this->_outerRadius; };
            inline float           GetStartAngle()  const { return this->_startAngle;  };
            inline float           GetEndAngle()    const { return this->_endAngle;    };
            inline int             GetSegments()    const { return this->_segments;    };
            inline Misc::Colors    GetColors()      const { return this->_colors;      };

            inline void SetVector(const Misc::Vector<2> center) { this->_center = center;           };
            inline void SetInnerRadius(const float innerRadius) { this->_innerRadius = innerRadius; };
            inline void SetOuterRadius(const float outerRadius) { this->_outerRadius = outerRadius; };
            inline void SetStartAngle(const float startAngle)   { this->_startAngle = startAngle;   };
            inline void SetEndAngle(const float endAngle)       { this->_endAngle = endAngle;       };
            inline void SetSegments(const int segments)         { this->_segments = segments;       };
            inline void SetColors(const Misc::Colors colors)    { this->_colors = colors;           };

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