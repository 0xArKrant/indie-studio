/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line3D
*/

#include "indie.hpp"

IModels::Line3D::Line3D(::Vector3 startPos, ::Vector3 endPos, ::Color color)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_color = color;
}

void IModels::Line3D::DrawModels()
{
    ::DrawLine3D(this->_startPos, this->_endPos, this->_color);
}