/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** BoundingBox
*/

#include "BoundingBox.hpp"

Misc::BoundingBox::BoundingBox(const Misc::Vector<3> &min, const Misc::Vector<3> &max)
{
    this->_min = min;
    this->_max = max;
}