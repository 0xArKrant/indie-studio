/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Line
*/

#pragma once

#include "indie.hpp"

namespace Shape {
    class Line : public ILine {
        public:
            Line(const int, const int, const int, const int, const Misc::Colors &);
            ~Line() = default;

            inline int             GetStartPosX() const { return this->_startPosX; };
            inline int             GetStartPosY() const { return this->_startPosY; };
            inline int             GetEndPosX()   const { return this->_endPosX;   };
            inline int             GetEndPosY()   const { return this->_endPosY;   };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };

            inline void SetStartPosX(const int startPosX)    { this->_startPosX = startPosX; };
            inline void SetStartPosY(const int startPosY)    { this->_startPosY = startPosY; };
            inline void SetEndPosX(const int endPosX)        { this->_endPosX = endPosX;     };
            inline void SetEndPosY(const int endPosY)        { this->_endPosY = endPosY;     };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors;       };

            void DrawShape();
        private:
            int          _startPosX;
            int          _startPosY;
            int          _endPosX;
            int          _endPosY;
            Misc::Colors _colors;
    };

    class LineV : public ILine {
        public:
            LineV(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors &);
            ~LineV() = default;

            inline Misc::Vector<2> GetVectorStartPos() const { return this->_startPos; };
            inline Misc::Vector<2> GetVectorEndPos()   const { return this->_endPos;   };
            inline Misc::Colors    GetColors()         const { return this->_colors;   };

            inline void SetVectorStartPosX(const Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
            inline void SetVectorEndPosX(const Misc::Vector<2> endPosX)     { this->_endPos = endPosX;     };
            inline void SetColors(const Misc::Colors colors)                { this->_colors = colors;      };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            Misc::Colors    _colors;
    };

    class LineEx : public ILine {
        public:
            LineEx(const Misc::Vector<2>, const Misc::Vector<2>, const float, const Misc::Colors &);
            ~LineEx() = default;

            inline Misc::Vector<2> GetVectorStartPos() const { return this->_startPos; };
            inline Misc::Vector<2> GetVectorEndPos()   const { return this->_endPos;   };
            inline float           GetThickness()      const { return this->_thick;    };
            inline Misc::Colors    GetColors()         const { return this->_colors;   };

            inline void SetVectorStartPosX(const Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
            inline void SetVectorEndPosX(const Misc::Vector<2> endPosX)     { this->_endPos = endPosX;     };
            inline void SetThickness(const float thickness)                 { this->_thick =  thickness;   };
            inline void SetColors(const Misc::Colors colors)                { this->_colors = colors;      };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            float           _thick;
            Misc::Colors    _colors;
    };

    class LineBezier : public ILine {
        public:
            LineBezier(const Misc::Vector<2>, const Misc::Vector<2>, const float, const Misc::Colors &);
            ~LineBezier() = default;

            inline Misc::Vector<2> GetVectorStartPos() const { return this->_startPos; };
            inline Misc::Vector<2> GetVectorEndPos()   const { return this->_endPos;   };
            inline float           GetThickness()      const { return this->_thick;    };
            inline Misc::Colors    GetColors()         const { return this->_colors;   };

            inline void SetVectorStartPosX(const Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
            inline void SetVectorEndPosX(const Misc::Vector<2> endPosX)     { this->_endPos = endPosX;     };
            inline void SetThickness(const float thickness)                 { this->_thick =  thickness;   };
            inline void SetColors(const Misc::Colors colors)                { this->_colors = colors;      };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            float           _thick;
            Misc::Colors    _colors;
    };

    class LineBezierQuad : public ILine {
        public:
            LineBezierQuad(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const float, const Misc::Colors &);
            ~LineBezierQuad() = default;

            inline Misc::Vector<2> GetVectorStartPos()   const { return this->_startPos;   };
            inline Misc::Vector<2> GetVectorEndPos()     const { return this->_endPos;     };
            inline Misc::Vector<2> GetVectorControlPos() const { return this->_controlPos; };
            inline float           GetThickness()        const { return this->_thick;      };
            inline Misc::Colors    GetColors()           const { return this->_colors;     };

            inline void SetVectorStartPosX(const Misc::Vector<2> startPosX)   { this->_startPos = startPosX;    };
            inline void SetVectorEndPosX(const Misc::Vector<2> endPosX)       { this->_endPos = endPosX;        };
            inline void SetVectorControlPos(const Misc::Vector<2> controlPos) { this->_controlPos = controlPos; };
            inline void SetThickness(const float thickness)                   { this->_thick =  thickness;      };
            inline void SetColors(const Misc::Colors colors)                  { this->_colors = colors;         };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            Misc::Vector<2> _controlPos;
            float           _thick;
            Misc::Colors    _colors;
    };

    class LineStrip : public ILine {
        public:
            LineStrip(Misc::Vector<2>, int, const Misc::Colors &);
            ~LineStrip() = default;

            inline Misc::Vector<2> GetVectorPoints() const { return this->_points;      };
            inline int             GetPointsCount()  const { return this->_pointsCount; };
            inline Misc::Colors    GetColors()       const { return this->_colors;      };

            inline void SetVectorPoints(const Misc::Vector<2> points) { this->_points = points;           };
            inline void SetPointsCount(const int pointsCount)         { this->_pointsCount = pointsCount; };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;           };

            void DrawShape();
        private:
            Misc::Vector<2> _points;
            int             _pointsCount;
            Misc::Colors    _colors;
    };
}