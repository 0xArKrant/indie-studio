/**
 * @file IEllipse.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Interface for the Ellipse shape from IShape
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
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
