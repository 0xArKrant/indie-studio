/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#include "indie.hpp"

Misc::Ray::Ray()
{
    this->_position = { 0 };
    this->_direction = { 0 };
}

Misc::Ray::Ray(const Misc::Vector<3> position, const Misc::Vector<3> direction)
{
    this->_position = position;
    this->_direction = direction;
}