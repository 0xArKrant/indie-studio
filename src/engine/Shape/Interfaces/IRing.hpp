/**
 * @file IRing.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Interface for the Ring shape from IShape
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
    }
}
