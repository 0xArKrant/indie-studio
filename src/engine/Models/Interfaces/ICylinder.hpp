/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ICylinder
*/

#pragma once

#include "IModels.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models     {
            class ICylinder : public IModels         {
                public:
                    virtual ~ICylinder() = default;

                    virtual Misc::Vector<3> GetPosition() const = 0;
                    virtual float GetRadiusTop() const = 0;
                    virtual float GetRadiusBottom() const = 0;
                    virtual float GetHeight() const = 0;
                    virtual int GetSlices() const = 0;

                    virtual void SetPosition(const Misc::Vector<3>) = 0;
                    virtual void SetRadiusTop(const float) = 0;
                    virtual void SetRadiusBottom(const float) = 0;
                    virtual void SetHeight(const float) = 0;
                    virtual void SetSlices(const int) = 0;
            };
        } // namespace Models
    } // namespace Raylib
} // namespace Indie