/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IGrid
*/

#pragma once

#include "IModels.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models {
            class IGrid : public IModels {
                public:
                    virtual ~IGrid() = default;

                    virtual int GetSlices() const = 0;
                    virtual float GetSpacing() const = 0;

                    virtual void SetSlices(const int) = 0;
                    virtual void SetSpacing(const float) = 0;
            };
        } // namespace Models
    } // namespace Raylib
} // namespace Indie
