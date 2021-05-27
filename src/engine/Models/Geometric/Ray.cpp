/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#include "indie.hpp"

IModels::Ray::Ray(const Misc::Ray ray, const Misc::Colors &values)
{
    this->_ray = ray;
    this->_colors = values;
}

void IModels::Ray::DrawModels()
{
    ::DrawRay(
        ::Ray {
            ::Vector3 { this->_ray.getPositionX(), this->_ray.getPositionY(), this->_ray.getPositionZ() },
            ::Vector3 { this->_ray.getDirectionX(), this->_ray.getDirectionY(),this->_ray.getDirectionZ() }
         },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}