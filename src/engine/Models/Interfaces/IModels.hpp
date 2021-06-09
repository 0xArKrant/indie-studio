/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** IModels
*/

#pragma once

#include "indie.hpp"
#include "Colors.hpp"
#include "Vector.hpp"

namespace Raylib
{
    namespace Models
    {
        class IModels
        {
        public:
            virtual ~IModels() = default;

            virtual void DrawModels() = 0;
            virtual void ComputeMesh() = 0;
            virtual ::Mesh GenerateMesh() = 0;

            virtual Misc::Colors GetColors() const = 0;
            virtual void SetColors(const Misc::Colors) = 0;
        };
    } // namespace Models
} // namespace Raylib
