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

namespace Indie {
    namespace Raylib {
        namespace Models     {
            class IModels         {
                public:
                    virtual ~IModels() = default;

                    virtual void DrawModel(Misc::Vector<3>, float, Misc::Colors) = 0;

                    virtual Misc::Colors GetColors() const = 0;
                    virtual void SetColors(const Misc::Colors) = 0;
            };
        } // namespace Models
    } // namespace Raylib
} // namespace Indie
