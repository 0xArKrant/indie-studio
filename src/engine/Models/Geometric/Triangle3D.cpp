/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Triangle3D
*/

#include "indie.hpp"

IModels::Triangle3D::Triangle3D(::Vector3 v1, ::Vector3 v2, ::Vector3 v3, ::Color color)
{
    this->_v1 = v1;
    this->_v2 = v2;
    this->_v3 = v3;
    this->_color = color;
}

void IModels::Triangle3D::DrawModels()
{
    ::DrawTriangle3D(this->_v1, this->_v2, this->_v3, this->_color);
}

IModels::TriangleStrip3D::TriangleStrip3D(::Vector3 *points, int pointsCount, ::Color color)
{
    this->_points = points;
    this->_pointsCount = pointsCount;
    this->_color = color;
}

void IModels::TriangleStrip3D::DrawModels()
{
    ::DrawTriangleStrip3D(this->_points, this->_pointsCount, this->_color);
}