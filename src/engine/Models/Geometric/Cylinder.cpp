/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cylinder
*/

#include "Cylinder.hpp"

Raylib::Models::Cylinder::Cylinder(const Misc::Vector<3> position, const float radiusTop, const float radiusBottom, const float height, const int slices, const Misc::Colors &values)
{
    this->_position = position;
    this->_radiusTop = radiusTop;
    this->_radiusBottom = radiusBottom;
    this->_height = height;
    this->_slices = slices;
    this->_colors = values;
}

void Raylib::Models::Cylinder::DrawModels()
{
    ::DrawCylinder(
        ::Vector3{this->_position.getX(), this->_position.getY(), this->_position.getZ()},
        this->_radiusTop,
        this->_radiusBottom,
        this->_height,
        this->_slices,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}

Raylib::Models::CylinderWires::CylinderWires(const Misc::Vector<3> position, const float radiusTop, const float radiusBottom, const float height, const int slices, const Misc::Colors &values)
{
    this->_position = position;
    this->_radiusTop = radiusTop;
    this->_radiusBottom = radiusBottom;
    this->_height = height;
    this->_slices = slices;
    this->_colors = values;
}

void Raylib::Models::CylinderWires::DrawModels()
{
    ::DrawCylinderWires(
        ::Vector3{this->_position.getX(), this->_position.getY(), this->_position.getZ()},
        this->_radiusTop,
        this->_radiusBottom,
        this->_height,
        this->_slices,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}