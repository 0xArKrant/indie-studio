/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IRing
*/

#pragma once

#include "IShape.hpp"

namespace Shape {
    class IRing : public IShape {
        public:
            virtual ~IRing() = default;

            virtual float GetInnerRadius() const = 0;
            virtual float GetOuterRadius() const = 0;
            virtual float GetStartAngle()  const = 0;
            virtual float GetEndAngle()    const = 0;
            virtual int   GetSegments()    const = 0;

            virtual void SetInnerRadius(const float) = 0;
            virtual void SetOuterRadius(const float) = 0;
            virtual void SetStartAngle(const float) = 0;
            virtual void SetEndAngle(const float) = 0;
            virtual void SetSegments(const int) = 0;
    };
}
