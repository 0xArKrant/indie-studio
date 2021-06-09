/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ILine3D
*/

#pragma once

#include "IModels.hpp"

namespace Raylib
{
    namespace Models
    {
        class ILine3D : public IModels
        {
        public:
            virtual ~ILine3D() = default;

            virtual Misc::Vector<3> GetStartPos() const = 0;
            virtual Misc::Vector<3> GetEndPos() const = 0;

            virtual void SetStartPos(const Misc::Vector<3>) = 0;
            virtual void SetEndPos(const Misc::Vector<3>) = 0;
        };
    }; // namespace Models
} // namespace Raylib