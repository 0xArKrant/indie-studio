/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RayHitInfo
*/

#include "indie.hpp"

Misc::RayHitInfo::RayHitInfo()
{
    this->_hit = false;
    this->_distance = 0;
    this->_position = { 0 };
    this->_direction = { 0 };
}

Misc::RayHitInfo::RayHitInfo(const bool hit, const float distance, const std::array<float, 3> position, const std::array<float, 3> direction)
{
    this->_hit = hit;
    this->_distance = distance;
    this->_position = position;
    this->_direction = direction;
}