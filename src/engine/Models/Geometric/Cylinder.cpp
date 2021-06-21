/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cylinder
*/

#include "Cylinder.hpp"

Indie::Raylib::Models::Cylinder::Cylinder(const Misc::Vector<3> position, const float radiusTop, const float radiusBottom, const float height, const int slices, const Misc::Colors& colors) {
    this->_position = position;
    this->_radiusTop = radiusTop;
    this->_radiusBottom = radiusBottom;
    this->_height = height;
    this->_slices = slices;
    this->_colors = colors;
}

Indie::Raylib::Models::Cylinder::Cylinder(const Cylinder &cpy)
{
    this->_position = cpy._position;
    this->_radiusTop = cpy._radiusTop;
    this->_radiusBottom = cpy._radiusBottom;
    this->_height = cpy._height;
    this->_slices = cpy._slices;
    this->_colors = cpy._colors;

}

Indie::Raylib::Models::Cylinder& Indie::Raylib::Models::Cylinder::operator=(const Cylinder &other)
{
    this->_position = other.GetPosition();
    this->_radiusTop = other.GetRadiusTop();
    this->_radiusBottom = other.GetRadiusBottom();
    this->_height = other.GetHeight();
    this->_slices = other.GetSlices();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Cylinder::DrawModels() {
    ::DrawCylinder(
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_radiusTop,
        this->_radiusBottom,
        this->_height,
        this->_slices,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}

Indie::Raylib::Models::CylinderWires::CylinderWires(const Misc::Vector<3> position, const float radiusTop, const float radiusBottom, const float height, const int slices, const Misc::Colors& values) {
    this->_position = position;
    this->_radiusTop = radiusTop;
    this->_radiusBottom = radiusBottom;
    this->_height = height;
    this->_slices = slices;
    this->_colors = values;
}

Indie::Raylib::Models::CylinderWires& Indie::Raylib::Models::CylinderWires::operator=(const CylinderWires &other)
{
    this->_position = other.GetPosition();
    this->_radiusTop = other.GetRadiusTop();
    this->_radiusBottom = other.GetRadiusBottom();
    this->_height = other.GetHeight();
    this->_slices = other.GetSlices();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::CylinderWires::DrawModels() {
    ::DrawCylinderWires(
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_radiusTop,
        this->_radiusBottom,
        this->_height,
        this->_slices,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}