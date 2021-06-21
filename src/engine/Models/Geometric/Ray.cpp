/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#include "Ray.hpp"

Indie::Raylib::Models::Ray::Ray(const Misc::Ray ray, const Misc::Colors& colors) {
    this->_ray = ray;
    this->_colors = colors;
}

Indie::Raylib::Models::Ray::Ray(const Ray &cpy)
{
    this->_ray = cpy._ray;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::Ray& Indie::Raylib::Models::Ray::operator=(const Ray &other)
{
    this->_ray = other.GetRay();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Ray::DrawModels() {
    ::DrawRay(
        ::Ray{
            ::Vector3{this->_ray.getPosition().getX(), this->_ray.getPosition().getY(), this->_ray.getPosition().getZ()},
            ::Vector3{this->_ray.getDirection().getX(), this->_ray.getDirection().getY(), this->_ray.getDirection().getZ()} },
            ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() });
}