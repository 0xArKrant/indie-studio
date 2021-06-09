/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ISphere
*/

#pragma once

#include "IModels.hpp"

namespace Raylib {
namespace Models {
    class ISphere : public IModels {
        public:
            virtual ~ISphere() = default;

            virtual Misc::Vector<3> GetCenterPos() const = 0;
            virtual float           GetRadius()    const = 0;
            virtual int             GetRings()     const = 0;
            virtual int             GetSlices()    const = 0;

            virtual void SetCenterPos(const Misc::Vector<3>) = 0;
            virtual void SetRadius(const float) = 0;
            virtual void SetRings(const int) = 0;
            virtual void SetSlices(const int) = 0;
    };
};
}
