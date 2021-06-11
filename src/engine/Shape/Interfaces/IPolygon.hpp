/**
 * @file IPolygon.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Interface for the Polygon shape from IShape
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
    }
}
