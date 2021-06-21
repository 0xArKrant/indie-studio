/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Line3D
*/

#include "Line3D.hpp"

Indie::Raylib::Models::Line3D::Line3D(const Misc::Vector<3> startPos, const Misc::Vector<3> endPos, const Misc::Colors& colors) {
    this->_startPos = startPos;
    this->_endPos = endPos;
    this->_colors = colors;
}

Indie::Raylib::Models::Line3D::Line3D(const Line3D &cpy)
{
    this->_startPos = cpy._startPos;
    this->_endPos = cpy._endPos;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::Line3D& Indie::Raylib::Models::Line3D::operator=(const Line3D &other)
{
    this->_startPos = other.GetStartPos();
    this->_endPos = other.GetEndPos();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Line3D::DrawModels() {
    ::DrawLine3D(
        ::Vector3{ this->_startPos.getX(), this->_startPos.getY(), this->_startPos.getZ() },
        ::Vector3{ this->_endPos.getX(), this->_endPos.getY(), this->_endPos.getZ() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() });
}