/**
 * @file RayHitInfo.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief RayHitInfo substitution class to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "RayHitInfo.hpp"

/**
 * @brief Construct a new Misc:: Ray Hit Info:: Ray Hit Info object
 *
 */

Misc::RayHitInfo::RayHitInfo() {
    this->_hit = false;
    this->_distance = 0;
    this->_position = { 0.f, 0.f, 0.f, 0.f };
    this->_direction = { 0.f, 0.f, 0.f, 0.f };
}

Misc::RayHitInfo::RayHitInfo(const RayHitInfo &cpy)
{
    this->_hit = cpy._hit;
    this->_distance = cpy._distance;
    this->_position = cpy._position;
    this->_direction = cpy._direction;
}

/**
 * @brief Construct a new Misc:: Ray Hit Info:: Ray Hit Info object
 *
 * @param hit
 * @param distance
 * @param position
 * @param direction
 */

Misc::RayHitInfo::RayHitInfo(const bool hit, const float distance, const Misc::Vector<3> position, const Misc::Vector<3> direction) {
    this->_hit = hit;
    this->_distance = distance;
    this->_position = position;
    this->_direction = direction;
}