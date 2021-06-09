/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Triangle3D
*/

#include "Triangle3D.hpp"

Raylib::Models::Triangle3D::Triangle3D(const Misc::Vector<3> v1, const Misc::Vector<3> v2, const Misc::Vector<3> v3, const Misc::Colors &values)
{
    this->_v1 = v1;
    this->_v2 = v2;
    this->_v3 = v3;
    this->_colors = values;
}

void Raylib::Models::Triangle3D::DrawModels()
{
    ::DrawTriangle3D(
        ::Vector3{this->_v1.getX(), this->_v1.getY(), this->_v1.getZ()},
        ::Vector3{this->_v2.getX(), this->_v2.getY(), this->_v2.getZ()},
        ::Vector3{this->_v3.getX(), this->_v3.getY(), this->_v3.getZ()},
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}

Raylib::Models::TriangleStrip3D::TriangleStrip3D(const Misc::Vector<3> points, const int pointsCount, const Misc::Colors &values)
{
    this->_points = points;
    this->_pointsCount = pointsCount;
    this->_colors = values;
}

void Raylib::Models::TriangleStrip3D::DrawModels()
{
    ::Vector3 points = {this->_points.getX(), this->_points.getY(), this->_points.getZ()};

    ::DrawTriangleStrip3D(
        &points,
        this->_pointsCount,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}