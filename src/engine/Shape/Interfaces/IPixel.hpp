/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IPixel
*/

#pragma once

#include "IShape.hpp"

namespace Shape {
    class IPixel : public IShape {
        public:
            virtual ~IPixel() = default;

            virtual int GetPosX() const = 0;
            virtual int GetPosY() const = 0;

            virtual void SetPosX(const int) = 0;
            virtual void SetPosY(const int) = 0;
    };
}
