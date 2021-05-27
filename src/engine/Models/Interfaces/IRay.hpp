/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IRay
*/

#pragma once

#include "indie.hpp"

namespace Models {
    class IRay : public IModels {
        public:
            virtual ~IRay() = default;

            virtual Misc::Ray GetRay() const = 0;

            virtual void SetRay(const Misc::Ray) = 0;
    };
}
