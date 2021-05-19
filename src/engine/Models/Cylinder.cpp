/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cylinder
*/

#include "indie.hpp"

IModels::Cylinder::Cylinder(::Vector3 position, float radiusTop, float radiusBottom, float height, int slices, ::Color color)
{
    this->_position = position;
    this->_radiusTop = radiusTop;
    this->_radiusBottom = radiusBottom;
    this->_height = height;
    this->_slices = slices;
    this->_color = color;
}

void IModels::Cylinder::DrawModels()
{
    ::DrawCylinder(this->_position, this->_radiusTop, this->_radiusBottom, this->_height, this->_slices, this->_color);
}

IModels::CylinderWires::CylinderWires(::Vector3 position, float radiusTop, float radiusBottom, float height, int slices, ::Color color)
{
    this->_position = position;
    this->_radiusTop = radiusTop;
    this->_radiusBottom = radiusBottom;
    this->_height = height;
    this->_slices = slices;
    this->_color = color;
}

void IModels::CylinderWires::DrawModels()
{
    ::DrawCylinder(this->_position, this->_radiusTop, this->_radiusBottom, this->_height, this->_slices, this->_color);
}