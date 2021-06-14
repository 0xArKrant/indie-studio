/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** DrawBoundingBox
*/

#include "indie.hpp"

IModels::DrawBoundingBox::DrawBoundingBox(::BoundingBox box, ::Color color)
{
    this->_box = box;
    this->_color = color;
}

void IModels::DrawBoundingBox::DrawModels()
{
    ::DrawBoundingBox(this->_box, this->_color);
}
