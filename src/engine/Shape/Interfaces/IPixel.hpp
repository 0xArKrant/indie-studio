/**
 * @file IPixel.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Interface for the Pixel shape from IShape
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
            class IPixel : public IShape {
                public:
                    virtual ~IPixel() = default;

                    virtual int GetPosX() const = 0;
                    virtual int GetPosY() const = 0;

                    virtual void SetPosX(const int) = 0;
                    virtual void SetPosY(const int) = 0;
            };
        }
    }
}
