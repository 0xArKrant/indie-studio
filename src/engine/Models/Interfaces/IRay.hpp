/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IRay
*/

#pragma once

#include "IModels.hpp"
#include "RayVector.hpp"

namespace Raylib
{
    namespace Models
    {
        class IRay : public IModels
        {
        public:
            virtual ~IRay() = default;

            virtual Misc::Ray GetRay() const = 0;

            virtual void SetRay(const Misc::Ray) = 0;
        };
    }; // namespace Models
} // namespace Raylib
