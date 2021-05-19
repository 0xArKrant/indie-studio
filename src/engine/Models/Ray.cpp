/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#include "indie.hpp"

IModels::Ray::Ray(::Ray ray, ::Color color)
{
    this->_ray = ray;
    this->_color = color;
}

void IModels::Ray::DrawModels()
{
    ::DrawRay(this->_ray, this->_color);
}