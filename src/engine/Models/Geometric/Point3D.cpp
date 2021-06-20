/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Point3D
*/

#include "Point3D.hpp"

Indie::Raylib::Models::Point3D::Point3D(const Misc::Vector<3> position, const Misc::Colors& colors) {
    this->_position = position;
    this->_colors = colors;
}

Indie::Raylib::Models::Point3D::Point3D(const Point3D &cpy)
{
    this->_position = cpy._position;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::Point3D& Indie::Raylib::Models::Point3D::operator=(const Point3D &other)
{
    this->_position = other.GetPosition();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Point3D::DrawModels() {
    ::DrawPoint3D(
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() });
}