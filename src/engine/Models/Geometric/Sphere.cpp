/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Sphere
*/

#include "indie.hpp"

IModels::Sphere::Sphere(const Misc::Vector<3> centerPos, const float radius, const Misc::Colors &values)
{
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_colors = values;
}

void IModels::Sphere::DrawModels()
{
    ::DrawSphere(
        ::Vector3 { this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        this->_radius,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IModels::SphereEx::SphereEx(const Misc::Vector<3> centerPos, const float radius, const int rings, const int slices, const Misc::Colors &values)
{
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
    this->_colors = values;
}

void IModels::SphereEx::DrawModels()
{
    ::DrawSphereEx(
        ::Vector3 { this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        this->_radius,
        this->_rings,
        this->_slices,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IModels::SphereWires::SphereWires(const Misc::Vector<3> centerPos, const float radius, const int rings, const int slices, const Misc::Colors &values)
{
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
    this->_colors = values;
}

void IModels::SphereWires::DrawModels()
{
    ::DrawSphereWires(
        ::Vector3 { this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        this->_radius,
        this->_rings,
        this->_slices,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );}


