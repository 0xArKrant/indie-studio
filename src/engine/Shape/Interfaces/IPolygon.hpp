/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IPolygon
*/

#pragma once

#include "IShape.hpp"

namespace Shape {
    class IPolygon : public IShape {
        public:
            virtual ~IPolygon() = default;

            virtual int   GetSides()     const = 0;
            virtual float GetRadius()    const = 0;
            virtual float GetRotation()  const = 0;
            virtual float GetLineThick() const = 0;

            virtual void SetSides(const int) = 0;
            virtual void SetRadius(const float) = 0;
            virtual void SetRotation(const float) = 0;
            virtual void SetLineThick(const float) = 0;
    };
}
