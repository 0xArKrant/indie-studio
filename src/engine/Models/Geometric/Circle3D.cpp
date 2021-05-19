/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Circle3D
*/

#include "indie.hpp"

IModels::Circle3D::Circle3D(::Vector3 center, float radius, ::Vector3 rotationAxis, float rotationAngle, ::Color color)
{
    this->_center = center;
    this->_radius = radius;
    this->_rotationAxis = rotationAxis;
    this->_rotationAngle = rotationAngle;
    this->_color = color;
}

void IModels::Circle3D::DrawModels()
{
    ::DrawCircle3D(this->_center, this->_radius, this->_rotationAxis, this->_rotationAngle, this->_color);
}