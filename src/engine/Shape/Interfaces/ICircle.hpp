/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ICircle
*/

#pragma once

#include "indie.hpp"

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
