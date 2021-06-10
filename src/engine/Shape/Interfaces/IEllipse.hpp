/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IEllipse
*/

#pragma once

#include "IShape.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class IEllipse : public IShape {
                public:
                    virtual ~IEllipse() = default;

                    virtual int   GetCenterX() const = 0;
                    virtual int   GetCenterY() const = 0;
                    virtual float GetRadiusH() const = 0;
                    virtual float GetRadiusV() const = 0;

                    virtual void SetCenterX(const int) = 0;
                    virtual void SetCenterY(const int) = 0;
                    virtual void SetRadiusH(const float) = 0;
                    virtual void SetRadiusV(const float) = 0;
            };
        }
    }
}
