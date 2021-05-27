/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Rectangle
*/

#pragma once

#include "indie.hpp"

namespace Shape {
    class Rectangle : public IRectangle {
        public:
            Rectangle(const int, const int, const int, const int, const Misc::Colors &);
            ~Rectangle() = default;

            inline int          GetPosX()   const { return this->_posX;   };
            inline int          GetPosY()   const { return this->_posY;   };
            inline int          GetWidth()  const { return this->_width;  };
            inline int          GetHeight() const { return this->_height; };
            inline Misc::Colors GetColors() const { return this->_colors; };

            inline void SetPosX(const int posX)              { this->_posX = posX;     };
            inline void SetPosY(const int posY)              { this->_posY = posY;     };
            inline void SetWidth(const int width)            { this->_width = width;   };
            inline void SetHeight(const int height)          { this->_height = height; };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors;
    };

    class RectangleV : public IRectangle {
        public:
            RectangleV(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors &);
            ~RectangleV() = default;

            inline Misc::Vector<2> GetVectorPosition() const { return this->_position; };
            inline Misc::Vector<2> GetVectorSize()     const { return this->_size;     };
            inline Misc::Colors    GetColors()         const { return this->_colors;   };

            inline void SetVectorPosition(const Misc::Vector<2> position) { this->_position = position; };
            inline void SetVectorSize(const Misc::Vector<2> size)         { this->_size = size;         };
            inline void SetColors(const Misc::Colors colors)              { this->_colors = colors;     };

            void DrawShape();
        private:
            Misc::Vector<2> _position;
            Misc::Vector<2> _size;
            Misc::Colors    _colors;
    };

    class RectangleRec : public IRectangle {
        public:
            RectangleRec(const Misc::Rectangle, const Misc::Colors &);
            ~RectangleRec() = default;

            inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };

            inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Rectangle _rectangle;
            Misc::Colors    _colors;
    };

    class RectanglePro : public IRectangle {
        public:
            RectanglePro(const Misc::Rectangle, const Misc::Vector<2>, const float, const Misc::Colors &);
            ~RectanglePro() = default;

            inline Misc::Rectangle GetRectangle()    const { return this->_rectangle; };
            inline Misc::Vector<2> GetVectorOrigin() const { return this->_origin;    };
            inline float           GetRotation()     const { return this->_rotation;  };
            inline Misc::Colors    GetColors()       const { return this->_colors;    };

            inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
            inline void SetVectorOrigin(const Misc::Vector<2> origin) { this->_origin = origin;       };
            inline void SetRotation(const float rotation)             { this->_rotation = rotation;   };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Rectangle _rectangle;
            Misc::Vector<2> _origin;
            float           _rotation;
            Misc::Colors    _colors;
    };

    class RectangleGradientV : public IRectangle {
        public:
            RectangleGradientV(const int, const int, const int, const int,const Misc::Colors &, const Misc::Colors &);
            ~RectangleGradientV() = default;

            inline int          GetPosX()    const { return this->_posX;    };
            inline int          GetPosY()    const { return this->_posY;    };
            inline int          GetWidth()   const { return this->_width;   };
            inline int          GetHeight()  const { return this->_height;  };
            inline Misc::Colors GetColors1() const { return this->_colors1; };
            inline Misc::Colors GetColors2() const { return this->_colors2; };

            inline void SetPosX(const int posX)                { this->_posX = posX;       };
            inline void SetPosY(const int posY)                { this->_posY = posY;       };
            inline void SetWidth(const int width)              { this->_width = width;     };
            inline void SetHeight(const int height)            { this->_height = height;   };
            inline void SetColors1(const Misc::Colors colors1) { this->_colors1 = colors1; };
            inline void SetColors2(const Misc::Colors colors2) { this->_colors2 = colors2; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors1;
            Misc::Colors _colors2;
    };

    class RectangleGradientH : public IRectangle {
        public:
            RectangleGradientH(const int, const int, const int, const int,const Misc::Colors &, const Misc::Colors &);
            ~RectangleGradientH() = default;

            inline int          GetPosX()    const { return this->_posX;    };
            inline int          GetPosY()    const { return this->_posY;    };
            inline int          GetWidth()   const { return this->_width;   };
            inline int          GetHeight()  const { return this->_height;  };
            inline Misc::Colors GetColors1() const { return this->_colors1; };
            inline Misc::Colors GetColors2() const { return this->_colors2; };


            inline void SetPosX(const int posX)                { this->_posX = posX;       };
            inline void SetPosY(const int posY)                { this->_posY = posY;       };
            inline void SetWidth(const int width)              { this->_width = width;     };
            inline void SetHeight(const int height)            { this->_height = height;   };
            inline void SetColors1(const Misc::Colors colors1) { this->_colors1 = colors1; };
            inline void SetColors2(const Misc::Colors colors2) { this->_colors2 = colors2; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors1;
            Misc::Colors _colors2;
    };

    class RectangleGradientEx : public IRectangle {
        public:
            RectangleGradientEx(const Misc::Rectangle, const Misc::Colors &, const Misc::Colors &, const Misc::Colors &, const Misc::Colors &);
            ~RectangleGradientEx() = default;

            inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
            inline Misc::Colors GetColors1()      const { return this->_colors1;   };
            inline Misc::Colors GetColors2()      const { return this->_colors2;   };
            inline Misc::Colors GetColors3()      const { return this->_colors3;   };
            inline Misc::Colors GetColors4()      const { return this->_colors4;   };

            inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
            inline void SetColors1(const Misc::Colors colors1)        { this->_colors1 = colors1;     };
            inline void SetColors2(const Misc::Colors colors2)        { this->_colors2 = colors2;     };
            inline void SetColors3(const Misc::Colors colors3)        { this->_colors3 = colors3;     };
            inline void SetColors4(const Misc::Colors colors4)        { this->_colors4 = colors4;     };

            void DrawShape();
        private:
            Misc::Rectangle _rectangle;
            Misc::Colors    _colors1;
            Misc::Colors    _colors2;
            Misc::Colors    _colors3;
            Misc::Colors    _colors4;
    };

    class RectangleLines : public IRectangle {
        public:
            RectangleLines(const int, const int, const int, const int, const Misc::Colors &);
            ~RectangleLines() = default;

            inline int          GetPosX()   const { return this->_posX;   };
            inline int          GetPosY()   const { return this->_posY;   };
            inline int          GetWidth()  const { return this->_width;  };
            inline int          GetHeight() const { return this->_height; };
            inline Misc::Colors GetColors() const { return this->_colors; };

            inline void SetPosX(const int posX)              { this->_posX = posX;     };
            inline void SetPosY(const int posY)              { this->_posY = posY;     };
            inline void SetWidth(const int width)            { this->_width = width;   };
            inline void SetHeight(const int height)          { this->_height = height; };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

            void DrawShape();
        private:
            int          _posX;
            int          _posY;
            int          _width;
            int          _height;
            Misc::Colors _colors;
    };

    class RectangleLinesEx : public IRectangle {
        public:
            RectangleLinesEx(const Misc::Rectangle, const int, const Misc::Colors &);
            ~RectangleLinesEx() = default;

            inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
            inline int             GetThickness() const { return this->_linethick; };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };


            inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
            inline void SetThickness(const int thickness)             { this->_linethick = thickness; };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Rectangle _rectangle;
            int             _linethick;
            Misc::Colors    _colors;
    };

    class RectangleRounded : public IRectangle {
        public:
            RectangleRounded(const Misc::Rectangle, const float, const int, const Misc::Colors &);
            ~RectangleRounded() = default;

            inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
            inline float           GetRoundness() const { return this->_roundness; };
            inline int             GetSegments()  const { return this->_segments;  };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };

            inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
            inline void SetRoundness(const float roundness)           { this->_roundness = roundness; };
            inline void SetSegments(const int segments)               { this->_segments = segments;   };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Rectangle _rectangle;
            float           _roundness;
            int             _segments;
            Misc::Colors    _colors;
    };

    class RectangleRoundedLines : public IRectangle {
        public:
            RectangleRoundedLines(const Misc::Rectangle, const float, const int, const int, const Misc::Colors &);
            ~RectangleRoundedLines() = default;

            inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
            inline float           GetRoundness() const { return this->_roundness; };
            inline int             GetSegments()  const { return this->_segments;  };
            inline int             GetThickness() const { return this->_linethick; };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };

            inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
            inline void SetRoundness(const float roundness)           { this->_roundness = roundness; };
            inline void SetSegments(const int segments)               { this->_segments = segments;   };
            inline void SetThickness(const int thickness)             { this->_linethick = thickness; };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawShape();
        private:
            Misc::Rectangle _rectangle;
            float           _roundness;
            int             _segments;
            int             _linethick;
            Misc::Colors    _colors;
    };
}
