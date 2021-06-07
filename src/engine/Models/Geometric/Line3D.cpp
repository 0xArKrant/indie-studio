/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line3D
*/

#include "Line3D.hpp"

Models::Line3D::Line3D(const Misc::Vector<3> startPos, const Misc::Vector<3> endPos, const Misc::Colors &values)
{
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_colors = values;
}

void Models::Line3D::DrawModels()
{
    ::DrawLine3D(
        ::Vector3 { this->_startPos.getX(), this->_startPos.getY(), this->_startPos.getZ() },
        ::Vector3 { this->_endPos.getX(), this->_endPos.getY(), this->_endPos.getZ() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}