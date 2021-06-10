/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Camera
*/

#include "Camera.hpp"

Misc::Camera2D::Camera2D() {
    this->_offset = { 0.f, 0.f };
    this->_target = { 0.f, 0.f };
    this->_rotation = 0;
    this->_zoom = 0;
}

Misc::Camera2D::Camera2D(const Misc::Vector<2> offset, const Misc::Vector<2> target, float rotation, float zoom) {
    this->_offset = offset;
    this->_target = target;
    this->_rotation = rotation;
    this->_zoom = zoom;
}

Misc::Camera3D::Camera3D() {
    this->_position = { 0.f, 0.f, 0.f };
    this->_target = { 0.f, 0.f, 0.f };
    this->_up = { 0.f, 0.f, 0.f };
    this->_fovy = 0;
    this->_projection = 0;
}

Misc::Camera3D::Camera3D(const Misc::Vector<3> position, const Misc::Vector<3> target, const Misc::Vector<3> up, float fovy, int projection) {
    this->_position = position;
    this->_target = target;
    this->_up = up;
    this->_fovy = fovy;
    this->_projection = projection;
}