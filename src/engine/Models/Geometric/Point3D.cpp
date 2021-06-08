/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Point3D
*/

#include "Point3D.hpp"

Models::Point3D::Point3D(const Misc::Vector<3> position, const Misc::Colors &values)
{
    this->_position = position;
    this->_colors = values;
}

void Models::Point3D::DrawModels()
{
    ::DrawPoint3D(
        ::Vector3 { this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}