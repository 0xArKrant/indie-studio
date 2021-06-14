/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Circle3D
*/

#include "Circle3D.hpp"

Indie::Raylib::Models::Circle3D::Circle3D(const Misc::Vector<3> center, const float radius, const Misc::Vector<3> rotationAxis, const float rotationAngle, const Misc::Colors& values) {
    this->_center = center;
    this->_radius = radius;
    this->_rotationAxis = rotationAxis;
    this->_rotationAngle = rotationAngle;
    this->_colors = values;
}

void Indie::Raylib::Models::Circle3D::DrawModels() {
    ::DrawCircle3D(
        ::Vector3{ this->_center.getX(), this->_center.getY(), this->_center.getZ() },
        this->_radius,
        ::Vector3{this->_center.getX(), this->_center.getY(), this->_center.getZ()},
        this->_rotationAngle,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}