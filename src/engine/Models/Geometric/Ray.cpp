/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#include "Ray.hpp"

Models::Ray::Ray(const Misc::Ray ray, const Misc::Colors &values)
{
    this->_ray = ray;
    this->_colors = values;
}

void Models::Ray::DrawModels()
{
    ::DrawRay(
        ::Ray {
            ::Vector3 { this->_ray.getPosition().getX(), this->_ray.getPosition().getY(), this->_ray.getPosition().getZ() },
            ::Vector3 { this->_ray.getDirection().getX(), this->_ray.getDirection().getY(),this->_ray.getDirection().getZ() }
         },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}