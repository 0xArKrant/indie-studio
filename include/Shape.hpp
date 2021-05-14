/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Shape
*/

#include "indie.hpp"

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

namespace shape {
    class Shape {
        public:
            virtual ~Shape() = default;
            virtual void DrawShape() = 0;
            virtual Vector2 GetPosition() = 0;
            virtual void SetPosition(Vector2) = 0;
            virtual Color GetColor() = 0;
            virtual void SetColor(Color) = 0;
        protected:
        private:
            enum shape_t {
                PIXEL,
                LINE,
                LINEEX,
                LINEBEZIER,
                LINEBEZIERQUAD,
                LINESTRIP,
                CIRCLE,
                CIRCLESECTOR,
                CIRCLESECTORLINE,
                CIRCLEGRADIENT,
                CIRCLELINES,
                ELLIPSE,
                ELLIPSELINE,
                RING,
                RINGLINES,
                RECTANGLE,
                RECTANGLERECT,
                RECTANGLEPRO,
                RECTANGLEGRADIENTV,
                RECTANGLEGRADIENTH,
                RECTANGLEGRADIENTEX,
                RECTANGLELINES,
                RECTANGLELINESEX,
                RECTANGLEROUNDED,
                RECTANGLEROUNDEDLINES,
                TRIANGLE,
                TRIANGLELINES,
                TRIANGLEFAN,
                TRIANGLESTRIP,
                POLY,
                POLYLINES,
            };
    };
}

#endif /* !SHAPE_HPP_ */
