/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Point3D
*/

#include "indie.hpp"

IModels::Point3D::Point3D(::Vector3 position, ::Color color)
{
    this->_position = position;
    this->_color = color;
}

void IModels::Point3D::DrawModels()
{
    ::DrawPoint3D(this->_position, this->_color);
}