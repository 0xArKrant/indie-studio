/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Sphere
*/

#include "indie.hpp"

IModels::Sphere::Sphere(::Vector3 centerPos, float radius, ::Color color)
{
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_color = color;
}

void IModels::Sphere::DrawModels()
{
    ::DrawSphere(this->_centerPos, this->_radius, this->_color);
}

IModels::SphereEx::SphereEx(::Vector3 centerPos, float radius, int rings, int slices, ::Color color)
{
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
    this->_color = color;
}

void IModels::SphereEx::DrawModels()
{
    ::DrawSphereEx(this->_centerPos, this->_radius, this->_rings, this->_slices, this->_color);
}

IModels::SphereWires::SphereWires(::Vector3 centerPos, float radius, int rings, int slices, ::Color color)
{
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
    this->_color = color;
}

void IModels::SphereWires::DrawModels()
{
    ::DrawSphereWires(this->_centerPos, this->_radius, this->_rings, this->_slices, this->_color);
}


