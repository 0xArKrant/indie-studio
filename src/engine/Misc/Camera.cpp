/**
 * @file Camera.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Camera class substitution to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
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