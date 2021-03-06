/**
 * @file IShape.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Interface for the Shape Module of the engine
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "indie.hpp"
#include "Colors.hpp"
#include "Vector.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class IShape {
                public:
                    virtual ~IShape() = default;
                    virtual void DrawShape() = 0;

                    virtual Misc::Vector<2> GetVector() const = 0;
                    virtual Misc::Colors    GetColors() const = 0;
                    virtual float           GetRadius() const = 0;

                    virtual void SetColors(const Misc::Colors) = 0;
                    virtual void SetVector(const Misc::Vector<2>) = 0;
                    virtual void SetRadius(const float) = 0;
            };
        }
    }
}