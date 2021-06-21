/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Plane
*/

#include "Plane.hpp"

Indie::Raylib::Models::Plane::Plane(const Misc::Vector<3> centerPos, const Misc::Vector<2> size, const Misc::Colors& colors) {
    this->_centerPos = centerPos;
    this->_size = size;
    this->_colors = colors;
}

Indie::Raylib::Models::Plane::Plane(const Plane &cpy)
{
    this->_centerPos = cpy._centerPos;
    this->_size = cpy._size;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::Plane& Indie::Raylib::Models::Plane::operator=(const Plane &other)
{
    this->_centerPos = other.GetCenterPos();
    this->_size = other.GetSize();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Plane::DrawModels() {
    ::DrawPlane(
        ::Vector3{ this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        ::Vector2{ this->_size.getX(), this->_size.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() });
}