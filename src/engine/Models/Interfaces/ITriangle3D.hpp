/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ITriangle3D
*/

#pragma once

#include "IModels.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models     {
            class ITriangle3D : public IModels         {
                public:
                    virtual ~ITriangle3D() = default;

                    virtual Misc::Vector<3> GetV1() const = 0;
                    virtual Misc::Vector<3> GetV2() const = 0;
                    virtual Misc::Vector<3> GetV3() const = 0;
                    virtual Misc::Vector<3> GetPoints() const = 0;
                    virtual int GetPointsCount() const = 0;

                    virtual void SetV1(const Misc::Vector<3>) = 0;
                    virtual void SetV2(const Misc::Vector<3>) = 0;
                    virtual void SetV3(const Misc::Vector<3>) = 0;
                    virtual void SetPoints(const Misc::Vector<3>) = 0;
                    virtual void SetPointsCount(const int) = 0;
            };
        }; // namespace Models
    } // namespace Raylib
} // namespace Indie