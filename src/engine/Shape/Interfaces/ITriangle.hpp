/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ITriangle
*/

#pragma once

#include "IShape.hpp"

namespace Shape {
    class ITriangle : public IShape {
        public:
            virtual ~ITriangle() = default;

            virtual Misc::Vector<2> GetVector1()     const = 0;
            virtual Misc::Vector<2> GetVector2()     const = 0;
            virtual Misc::Vector<2> GetVector3()     const = 0;
            virtual int             GetPointsCount() const = 0;

            virtual void SetVector1(const Misc::Vector<2>) = 0;
            virtual void SetVector2(const Misc::Vector<2>) = 0;
            virtual void SetVector3(const Misc::Vector<2>) = 0;
            virtual void SetPointsCount(const int) = 0;
    };
}
