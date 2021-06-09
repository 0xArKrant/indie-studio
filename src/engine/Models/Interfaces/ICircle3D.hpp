/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ICircle3D
*/

#pragma once

#include "IModels.hpp"

namespace Raylib
{
    namespace Models
    {
        class ICircle3D : public IModels
        {
        public:
            virtual ~ICircle3D() = default;

            virtual Misc::Vector<3> GetCenter() const = 0;
            virtual float GetRadius() const = 0;
            virtual Misc::Vector<3> GetRotationAxis() const = 0;
            virtual float GetRotationAngle() const = 0;
            virtual Misc::Colors GetColors() const = 0;

            virtual void SetCenter(const Misc::Vector<3>) = 0;
            virtual void SetRadius(const float) = 0;
            virtual void SetRotationAxis(const Misc::Vector<3>) = 0;
            virtual void SetRotationAngle(const float) = 0;
            virtual void SetColors(const Misc::Colors) = 0;
        };
    }; // namespace Models
} // namespace Raylib
