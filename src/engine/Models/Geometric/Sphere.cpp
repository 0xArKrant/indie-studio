/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Sphere
*/

#include "Sphere.hpp"

Indie::Raylib::Models::Sphere::Sphere(const Misc::Vector<3> centerPos, const float radius, const Misc::Colors& values) {
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_colors = values;
}

Indie::Raylib::Models::Sphere::Sphere(const Sphere &cpy)
{
    this->_centerPos = cpy._centerPos;
    this->_radius = cpy._radius;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::Sphere& Indie::Raylib::Models::Sphere::operator=(const Sphere &other)
{
    this->_centerPos = other.GetCenterPos();
    this->_radius = other.GetRadius();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Sphere::DrawModels() {
    ::DrawSphere(
        ::Vector3{ this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        this->_radius,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}

Indie::Raylib::Models::SphereEx::SphereEx(const Misc::Vector<3> centerPos, const float radius, const int rings, const int slices, const Misc::Colors& values) {
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
    this->_colors = values;
}

Indie::Raylib::Models::SphereEx::SphereEx(const SphereEx &cpy)
{
    this->_centerPos = cpy._centerPos;
    this->_radius = cpy._radius;
    this->_rings = cpy._rings;
    this->_slices = cpy._slices;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::SphereEx& Indie::Raylib::Models::SphereEx::operator=(const SphereEx &other)
{
    this->_centerPos = other.GetCenterPos();
    this->_radius = other.GetRadius();
    this->_rings = other.GetRings();
    this->_slices = other.GetSlices();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::SphereEx::DrawModels() {
    ::DrawSphereEx(
        ::Vector3{ this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        this->_radius,
        this->_rings,
        this->_slices,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}

Indie::Raylib::Models::SphereWires::SphereWires(const Misc::Vector<3> centerPos, const float radius, const int rings, const int slices, const Misc::Colors& values) {
    this->_centerPos = centerPos;
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
    this->_colors = values;
}

Indie::Raylib::Models::SphereWires::SphereWires(const SphereWires &cpy)
{
    this->_centerPos = cpy._centerPos;
    this->_radius = cpy._radius;
    this->_rings = cpy._rings;
    this->_slices = cpy._slices;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::SphereWires& Indie::Raylib::Models::SphereWires::operator=(const SphereWires &other)
{
    this->_centerPos = other.GetCenterPos();
    this->_radius = other.GetRadius();
    this->_rings = other.GetRings();
    this->_slices = other.GetSlices();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::SphereWires::DrawModels() {
    ::DrawSphereWires(
        ::Vector3{ this->_centerPos.getX(), this->_centerPos.getY(), this->_centerPos.getZ() },
        this->_radius,
        this->_rings,
        this->_slices,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}
