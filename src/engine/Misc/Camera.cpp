/**
 * @file Camera.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Camera class substitution to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Camera.hpp"

/**
 * @brief Construct a new Misc:: Camera 2D:: Camera2 D object
 *
 */

Misc::Camera2D::Camera2D() {
    this->_offset = { 0.f, 0.f };
    this->_target = { 0.f, 0.f };
    this->_rotation = 0;
    this->_zoom = 0;
}


Misc::Camera2D::Camera2D(const Camera2D &cpy)
{
    this->_offset = cpy._offset;
    this->_target = cpy._target;
    this->_rotation = cpy._rotation;
    this->_zoom = cpy._zoom;
}

Misc::Camera2D& Misc::Camera2D::operator=(const Camera2D& other) {
    this->_offset = other.getOffset();
    this->_target = other.getTarget();
    this->_rotation = other.getRotation();
    this->_zoom = other.getZoom();
    return (*this);
}


/**
 * @brief Construct a new Misc:: Camera 2D:: Camera 2D object
 *
 * @param offset
 * @param target
 * @param rotation
 * @param zoom
 */

Misc::Camera2D::Camera2D(const Misc::Vector<2> offset, const Misc::Vector<2> target, float rotation, float zoom) {
    this->_offset = offset;
    this->_target = target;
    this->_rotation = rotation;
    this->_zoom = zoom;
}

/**
 * @brief Construct a new Misc:: Camera 3D:: Camera 3D object
 *
 */

Misc::Camera3D::Camera3D() {
    this->_position = { 0.f, 0.f, 0.f };
    this->_target = { 0.f, 0.f, 0.f };
    this->_up = { 0.f, 0.f, 0.f };
    this->_fovy = 0;
    this->_projection = 0;
}

Misc::Camera3D::Camera3D(const Camera3D &cpy)
{
    this->_position = cpy._position;
    this->_target = cpy._target;
    this->_up = cpy._up;
    this->_fovy = cpy._fovy;
    this->_projection = cpy._projection;
}

Misc::Camera3D& Misc::Camera3D::operator=(const Camera3D &other)
{
    this->_position = other.getPosition();
    this->_target = other.getTarget();
    this->_up = other.getUp();
    this->_fovy = other.getFovy();
    this->_projection = other.getProjection();
    return (*this);
}

/**
 * @brief Construct a new Misc:: Camera 3D:: Camera 3D object
 *
 * @param position
 * @param target
 * @param up
 * @param fovy
 * @param projection
 */

Misc::Camera3D::Camera3D(const Misc::Vector<3> position, const Misc::Vector<3> target, const Misc::Vector<3> up, float fovy, int projection) {
    this->_position = position;
    this->_target = target;
    this->_up = up;
    this->_fovy = fovy;
    this->_projection = projection;
}