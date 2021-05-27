/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Plane
*/

#include "indie.hpp"

Models::Plane::Plane(const Misc::Vector<3> centerPos, const Misc::Vector<2> size, const Misc::Colors &values)
{
    this->_centerPos = centerPos;
    this->_size = size;
    this->_colors = values;
}

void Models::Plane::DrawModels()
{
    ::DrawPlane(
        ::Vector3 { this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        ::Vector2 { this->_size.getX(), this->_size.getY() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}