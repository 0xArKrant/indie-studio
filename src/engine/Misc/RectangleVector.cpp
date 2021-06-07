/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** RectangleVector
*/

#include "RectangleVector.hpp"

Misc::Rectangle::Rectangle()
{
    this->_rectangle = {0, 0, 0, 0};
}

Misc::Rectangle::Rectangle(const std::array<float, 4> rectangle)
{
    this->_rectangle = rectangle;
}