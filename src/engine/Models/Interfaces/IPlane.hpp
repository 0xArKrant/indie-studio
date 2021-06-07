/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IPlane
*/

#pragma once

#include "IModels.hpp"

namespace Models {
    class IPlane : public IModels {
        public:
            virtual ~IPlane() = default;

            virtual Misc::Vector<3> GetCenterPos() const = 0;
            virtual Misc::Vector<2> GetSize()      const = 0;

            virtual void SetCenterPos(const Misc::Vector<3>) = 0;
            virtual void SetSize(const Misc::Vector<2>) = 0;
    };
}
