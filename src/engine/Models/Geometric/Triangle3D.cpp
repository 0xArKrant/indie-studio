/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Triangle3D
*/

#include "Triangle3D.hpp"

Indie::Raylib::Models::Triangle3D::Triangle3D(const Misc::Vector<3> v1, const Misc::Vector<3> v2, const Misc::Vector<3> v3, const Misc::Colors& colors) {
    this->_v1 = v1;
    this->_v2 = v2;
    this->_v3 = v3;
    this->_colors = colors;
}

Indie::Raylib::Models::Triangle3D::Triangle3D(const Triangle3D &cpy)
{
    this->_v1 = cpy._v1;
    this->_v2 = cpy._v2;
    this->_v3 = cpy._v3;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::Triangle3D& Indie::Raylib::Models::Triangle3D::operator=(const Triangle3D &other)
{
    this->_v1 = other.GetV1();
    this->_v2 = other.GetV2();
    this->_v3 = other.GetV3();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Triangle3D::DrawModels() {
    ::DrawTriangle3D(
        ::Vector3{ this->_v1.getX(), this->_v1.getY(), this->_v1.getZ() },
        ::Vector3{ this->_v2.getX(), this->_v2.getY(), this->_v2.getZ() },
        ::Vector3{ this->_v3.getX(), this->_v3.getY(), this->_v3.getZ() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() });
}

Indie::Raylib::Models::TriangleStrip3D::TriangleStrip3D(const Misc::Vector<3> points, const int pointsCount, const Misc::Colors& values) {
    this->_points = points;
    this->_pointsCount = pointsCount;
    this->_colors = values;
}

Indie::Raylib::Models::TriangleStrip3D::TriangleStrip3D(const TriangleStrip3D &cpy)
{
    this->_points = cpy._points;
    this->_pointsCount = cpy._pointsCount;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::TriangleStrip3D& Indie::Raylib::Models::TriangleStrip3D::operator=(const TriangleStrip3D &other)
{
    this->_points = other.GetPoints();
    this->_pointsCount = other.GetPointsCount();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::TriangleStrip3D::DrawModels() {
    ::Vector3 points = { this->_points.getX(), this->_points.getY(), this->_points.getZ() };

    ::DrawTriangleStrip3D(
        &points,
        this->_pointsCount,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}