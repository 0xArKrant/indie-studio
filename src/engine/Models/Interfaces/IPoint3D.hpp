/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IPoint3D
*/

#pragma once

#include "IModels.hpp"

namespace Models {
    class IPoint3D : public IModels {
        public:
            virtual ~IPoint3D() = default;

            virtual Misc::Vector<3> GetPosition() const = 0;

            virtual void SetPosition(const Misc::Vector<3>) = 0;
    };
}
