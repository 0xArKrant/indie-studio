/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Plane
*/

#include "indie.hpp"

IModels::Plane::Plane(::Vector3 centerPos, ::Vector2 size, ::Color color)
{
    this->_centerPos = centerPos;
    this->_size = size;
    this->_color = color;
}

void IModels::Plane::DrawModels()
{
    ::DrawPlane(this->_centerPos, this->_size, this->_color);
}