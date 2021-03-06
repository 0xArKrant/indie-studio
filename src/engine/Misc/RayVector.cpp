/**
 * @file RayVector.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Ray substitution classes to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "RayVector.hpp"

/**
 * @brief Construct a new Misc:: Ray:: Ray object
 *
 */

Misc::Ray::Ray() {
    this->_position = { 0.f, 0.f, 0.f };
    this->_direction = { 0.f, 0.f, 0.f };
}

Misc::Ray::Ray(const Ray &cpy)
{
    this->_position = cpy._position;
    this->_direction = cpy._direction;
}

Misc::Ray& Misc::Ray::operator=(const Ray &other)
{
    this->_position = other.getPosition();
    this->_direction = other.getDirection();
    return (*this);
}

/**
 * @brief Construct a new Misc:: Ray:: Ray object
 *
 * @param position
 * @param direction
 */

Misc::Ray::Ray(const Misc::Vector<3> position, const Misc::Vector<3> direction) {
    this->_position = position;
    this->_direction = direction;
}