/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Line
*/

#include "indie.hpp"

#ifndef LINE_HPP_
#define LINE_HPP_

namespace IShape {
    class Line : public Shape {
        public:
            Line(const int, const int, const int, const int, Misc::Colors &);
            ~Line() = default;

            inline int             GetStartPosX() { return this->_startPosX; };
            inline int             GetStartPosY() { return this->_startPosY; };
            inline int             GetEndPosX()   { return this->_endPosX;   };
            inline int             GetEndPosY()   { return this->_endPosY;   };
            inline Misc::Colors    GetColors()    { return this->_colors;    };

            inline void SetStartPosX(int startPosX)    { this->_startPosX = startPosX; };
            inline void SetStartPosY(int startPosY)    { this->_startPosY = startPosY; };
            inline void SetEndPosX(int endPosX)        { this->_endPosX = endPosX;     };
            inline void SetEndPosY(int endPosY)        { this->_endPosY = endPosY;     };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors;       };

            void DrawShape();
        private:
            int          _startPosX;
            int          _startPosY;
            int          _endPosX;
            int          _endPosY;
            Misc::Colors _colors;
    };

    class LineV : public Shape {
        public:
            LineV(const Misc::Vector<2>, const Misc::Vector<2>, Misc::Colors &);
            ~LineV() = default;

            inline Misc::Vector<2> GetVectorStartPos() { return this->_startPos; };
            inline Misc::Vector<2> GetVectorEndPos()   { return this->_endPos;   };
            inline Misc::Colors    GetColors()         { return this->_colors;   };

            inline void SetVectorStartPosX(Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
            inline void SetVectorEndPosX(Misc::Vector<2> endPosX)     { this->_endPos = endPosX;     };
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;      };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            Misc::Colors    _colors;
    };

    class LineEx : public Shape {
        public:
            LineEx(const Misc::Vector<2>, const Misc::Vector<2>, const float, Misc::Colors &);
            ~LineEx() = default;

            inline Misc::Vector<2> GetVectorStartPos() { return this->_startPos; };
            inline Misc::Vector<2> GetVectorEndPos()   { return this->_endPos;   };
            inline float           GetThickness()      { return this->_thick;    };
            inline Misc::Colors    GetColors()         { return this->_colors;   };

            inline void SetVectorStartPosX(Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
            inline void SetVectorEndPosX(Misc::Vector<2> endPosX)     { this->_endPos = endPosX;     };
            inline void SetThickness(float thickness)                 { this->_thick =  thickness;   }; 
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;      };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            float           _thick;
            Misc::Colors    _colors;
    };

    class LineBezier : public Shape {
        public:
            LineBezier(const Misc::Vector<2>, const Misc::Vector<2>, const float, Misc::Colors &);
            ~LineBezier() = default;

            inline Misc::Vector<2> GetVectorStartPos() { return this->_startPos; };
            inline Misc::Vector<2> GetVectorEndPos()   { return this->_endPos;   };
            inline float           GetThickness()      { return this->_thick;    };
            inline Misc::Colors    GetColors()         { return this->_colors;   };

            inline void SetVectorStartPosX(Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
            inline void SetVectorEndPosX(Misc::Vector<2> endPosX)     { this->_endPos = endPosX;     };
            inline void SetThickness(float thickness)                 { this->_thick =  thickness;   }; 
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;      };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            float           _thick;
            Misc::Colors    _colors;
    };

    class LineBezierQuad : public Shape {
        public:
            LineBezierQuad(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const float, Misc::Colors &);
            ~LineBezierQuad() = default;

            inline Misc::Vector<2> GetVectorStartPos()   { return this->_startPos;   };
            inline Misc::Vector<2> GetVectorEndPos()     { return this->_endPos;     };
            inline Misc::Vector<2> GetVectorControlPos() { return this->_controlPos; };
            inline float           GetThickness()        { return this->_thick;      };
            inline Misc::Colors    GetColors()           { return this->_colors;     };

            inline void SetVectorStartPosX(Misc::Vector<2> startPosX)   { this->_startPos = startPosX;    };
            inline void SetVectorEndPosX(Misc::Vector<2> endPosX)       { this->_endPos = endPosX;        };
            inline void SetVectorControlPos(Misc::Vector<2> controlPos) { this->_controlPos = controlPos; };
            inline void SetThickness(float thickness)                   { this->_thick =  thickness;      }; 
            inline void SetColors(Misc::Colors colors)                  { this->_colors = colors;         };

            void DrawShape();
        private:
            Misc::Vector<2> _startPos;
            Misc::Vector<2> _endPos;
            Misc::Vector<2> _controlPos;
            float           _thick;
            Misc::Colors    _colors;
    };
    class LineStrip : public Shape {
        public:
            LineStrip(Misc::Vector<2>, int, Misc::Colors &);
            ~LineStrip() = default;

            inline Misc::Vector<2> GetVectorPoints() { return this->_points;      };
            inline int             GetPointsCount()  { return this->_pointsCount; };
            inline Misc::Colors    GetColors()       { return this->_colors;      };

            inline void SetVectorPoints(Misc::Vector<2> points) { this->_points = points;           };
            inline void SetPointsCount(int pointsCount)         { this->_pointsCount = pointsCount; };
            inline void SetColors(Misc::Colors colors)          { this->_colors = colors;           };


            void DrawShape();
        private:
            Misc::Vector<2> _points;
            int _pointsCount;
            Misc::Colors _colors;
    };
}

#endif