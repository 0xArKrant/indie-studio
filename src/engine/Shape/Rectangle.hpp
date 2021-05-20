/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#include "indie.hpp"

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

namespace IShape {
    class Rectangle : public Shape {
        public:
            Rectangle(const int, const int, const int, const int, Misc::Colors &);
            ~Rectangle() = default;

            inline int          GetPosX()   { return this->_posX;   };
            inline int          GetPosY()   { return this->_posY;   };
            inline int          GetWidth()  { return this->_width;  };
            inline int          GetHeight() { return this->_height; };
            inline Misc::Colors GetColors() { return this->_colors; };

            inline void SetPosX(int posX)              { this->_posX = posX;     }; 
            inline void SetPosY(int posY)              { this->_posY = posY;     };
            inline void SetWidth(int width)            { this->_width = width;   };
            inline void SetHeight(int height)          { this->_height = height; };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors;
    };

    class RectangleV : public Shape {
        public:
            RectangleV(const Misc::Vector<2>, const Misc::Vector<2>, Misc::Colors&);
            ~RectangleV() = default;

            inline Misc::Vector<2> GetVectorPosition() { return this->_position; };
            inline Misc::Vector<2> GetVectorSize()     { return this->_size;     };
            inline Misc::Colors    GetColors()         { return this->_colors;   };

            inline void SetVectorPosition(Misc::Vector<2> position) { this->_position = position; };
            inline void SetVectorSize(Misc::Vector<2> size)         { this->_size = size;         };
            inline void SetColors(Misc::Colors colors)              { this->_colors = colors;     };

            void DrawShape();
        private:
            Misc::Vector<2> _position;
            Misc::Vector<2> _size;
            Misc::Colors    _colors;
    };

    class RectangleRec : public Shape {
        public:
            RectangleRec(const Misc::Vector<4>, Misc::Colors &);
            ~RectangleRec() = default;

            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };
            inline Misc::Colors    GetColors()          { return this->_colors;    };
           
            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Vector<4> _rectangle;
            Misc::Colors    _colors;
    };

    class RectanglePro : public Shape {
        public:
            RectanglePro(const Misc::Vector<4>, const Misc::Vector<2>, const float, Misc::Colors &);
            ~RectanglePro() = default;

            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };
            inline Misc::Vector<2> GetVectorOrigin()    { return this->_origin;    };
            inline float           GetRotation()        { return this->_rotation;  };
            inline Misc::Colors    GetColors()          { return this->_colors;    };

            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };
            inline void SetVectorOrigin(Misc::Vector<4> rectangle)    { this->_rectangle = rectangle; };
            inline void SetRotation(float rotation)                   { this->_rotation = rotation;   };
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Vector<4> _rectangle;
            Misc::Vector<2> _origin;
            float           _rotation;
            Misc::Colors    _colors;
    };

    class RectangleGradientV : public Shape {
        public:
            RectangleGradientV(const int, const int, const int, const int,Misc::Colors &, Misc::Colors &);
            ~RectangleGradientV() = default;

            inline int          GetPosX()    { return this->_posX;    };
            inline int          GetPosY()    { return this->_posY;    };
            inline int          GetWidth()   { return this->_width;   };
            inline int          GetHeight()  { return this->_height;  };
            inline Misc::Colors GetColors1() { return this->_colors1; };
            inline Misc::Colors GetColors2() { return this->_colors2; };


            inline void SetPosX(int posX)                { this->_posX = posX;       }; 
            inline void SetPosY(int posY)                { this->_posY = posY;       };
            inline void SetWidth(int width)              { this->_width = width;     };
            inline void SetHeight(int height)            { this->_height = height;   };
            inline void SetColors1(Misc::Colors colors1) { this->_colors1 = colors1; };
            inline void SetColors2(Misc::Colors colors2) { this->_colors2 = colors2; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors1;
            Misc::Colors _colors2;
    };

    class RectangleGradientH : public Shape {
        public:
            RectangleGradientH(const int, const int, const int, const int,Misc::Colors &, Misc::Colors &);
            ~RectangleGradientH() = default;

            inline int          GetPosX()    { return this->_posX;    };
            inline int          GetPosY()    { return this->_posY;    };
            inline int          GetWidth()   { return this->_width;   };
            inline int          GetHeight()  { return this->_height;  };
            inline Misc::Colors GetColors1() { return this->_colors1; };
            inline Misc::Colors GetColors2() { return this->_colors2; };


            inline void SetPosX(int posX)                { this->_posX = posX;       }; 
            inline void SetPosY(int posY)                { this->_posY = posY;       };
            inline void SetWidth(int width)              { this->_width = width;     };
            inline void SetHeight(int height)            { this->_height = height;   };
            inline void SetColors1(Misc::Colors colors1) { this->_colors1 = colors1; };
            inline void SetColors2(Misc::Colors colors2) { this->_colors2 = colors2; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors1;
            Misc::Colors _colors2;
    };

    class RectangleGradientEx : public Shape {
        public:
            RectangleGradientEx(const Misc::Vector<4>, Misc::Colors &, Misc::Colors &, Misc::Colors &, Misc::Colors &);
            ~RectangleGradientEx() = default;

            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };
            inline Misc::Colors GetColors1()            { return this->_colors1;   };
            inline Misc::Colors GetColors2()            { return this->_colors2;   };
            inline Misc::Colors GetColors3()            { return this->_colors3;   };
            inline Misc::Colors GetColors4()            { return this->_colors4;   };

            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };
            inline void SetColors1(Misc::Colors colors1)              { this->_colors1 = colors1;     };
            inline void SetColors2(Misc::Colors colors2)              { this->_colors2 = colors2;     };
            inline void SetColors3(Misc::Colors colors3)              { this->_colors3 = colors3;     };
            inline void SetColors4(Misc::Colors colors4)              { this->_colors4 = colors4;     };

            void DrawShape();
        private:
            Misc::Vector<4> _rectangle;
            Misc::Colors _colors1;
            Misc::Colors _colors2;
            Misc::Colors _colors3;
            Misc::Colors _colors4;
    };

    class RectangleLines : public Shape {
        public:
            RectangleLines(const int, const int, const int, const int, Misc::Colors &);
            ~RectangleLines() = default;

            inline int          GetPosX()   { return this->_posX;   };
            inline int          GetPosY()   { return this->_posY;   };
            inline int          GetWidth()  { return this->_width;  };
            inline int          GetHeight() { return this->_height; };
            inline Misc::Colors GetColors() { return this->_colors; };

            inline void SetPosX(int posX)              { this->_posX = posX;     }; 
            inline void SetPosY(int posY)              { this->_posY = posY;     };
            inline void SetWidth(int width)            { this->_width = width;   };
            inline void SetHeight(int height)          { this->_height = height; };
            inline void SetColors(Misc::Colors colors) { this->_colors = colors; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors;
    };

    class RectangleLinesEx : public Shape {
        public:
            RectangleLinesEx(const Misc::Vector<4>, const int, Misc::Colors &);
            ~RectangleLinesEx() = default;

            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };
            inline int             GetThickness()       { return this->_linethick; };
            inline Misc::Colors    GetColors()          { return this->_colors;    };


            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };
            inline void SetThickness(int thickness)                   { this->_linethick = thickness; };
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Vector<4> _rectangle;
            int             _linethick;
            Misc::Colors    _colors;
    };

    class RectangleRounded : public Shape {
        public:
            RectangleRounded(const Misc::Vector<4>, const float, const int, Misc::Colors &);
            ~RectangleRounded() = default;

            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };
            inline float           GetRoundness()       { return this->_roundness; };
            inline int             GetSegments()        { return this->_segments;  };
            inline Misc::Colors    GetColors()          { return this->_colors;    };

            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };
            inline void SetRoundness(float roundness)                 { this->_roundness = roundness; };
            inline void SetSegments(int segments)                     { this->_segments = segments;   };
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Vector<4> _rectangle;
            float           _roundness;
            int             _segments;
            Misc::Colors    _colors;
    };

    class RectangleRoundedLines : public Shape {
        public:
            RectangleRoundedLines(const Misc::Vector<4>, const float, const int, const int, Misc::Colors &);
            ~RectangleRoundedLines() = default;

            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };
            inline float           GetRoundness()       { return this->_roundness; };
            inline int             GetSegments()        { return this->_segments;  };
            inline int             GetThickness()       { return this->_linethick; };
            inline Misc::Colors    GetColors()          { return this->_colors;    };

            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };
            inline void SetRoundness(float roundness)                 { this->_roundness = roundness; };
            inline void SetSegments(int segments)                     { this->_segments = segments;   };
            inline void SetThickness(int thickness)                   { this->_linethick = thickness; };
            inline void SetColors(Misc::Colors colors)                { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Vector<4> _rectangle;
            float           _roundness;
            int             _segments;
            int             _linethick;
            Misc::Colors    _colors;
    };
}

#endif /* !RECTANGLE_HPP_ */
