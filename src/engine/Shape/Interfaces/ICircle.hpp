/**
 * @file ICircle.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Interface for the Circle shape from IShape
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
            class ICircle : public IShape {
                public:
                    virtual ~ICircle() = default;

                    virtual int          GetCenterX()    const = 0;
                    virtual int          GetCenterY()    const = 0;
                    virtual int          GetSegments()   const = 0;
                    virtual float        GetStartAngle() const = 0;
                    virtual float        GetEndAngle()   const = 0;
                    virtual Misc::Colors GetColors1()    const = 0;
                    virtual Misc::Colors GetColors2()    const = 0;

                    virtual void SetCenterX(const int) = 0;
                    virtual void SetCenterY(const int) = 0;
                    virtual void SetSegments(const int) = 0;
                    virtual void SetStartAngle(const float) = 0;
                    virtual void SetEndAngle(const float) = 0;
                    virtual void SetColors1(const Misc::Colors) = 0;
                    virtual void SetColors2(const Misc::Colors) = 0;
            };
        }
    }
}
