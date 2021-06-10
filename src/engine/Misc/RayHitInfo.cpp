/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RayHitInfo
*/

#include "RayHitInfo.hpp"

Misc::RayHitInfo::RayHitInfo() {
    this->_hit = false;
    this->_distance = 0;
    this->_position = { 0.f, 0.f, 0.f, 0.f };
    this->_direction = { 0.f, 0.f, 0.f, 0.f };
}

Misc::RayHitInfo::RayHitInfo(const bool hit, const float distance, const Misc::Vector<3> position, const Misc::Vector<3> direction) {
    this->_hit = hit;
    this->_distance = distance;
    this->_position = position;
    this->_direction = direction;
}