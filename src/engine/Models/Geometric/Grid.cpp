/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Grid
*/

#include "Grid.hpp"

Indie::Raylib::Models::Grid::Grid(const int slices, const float spacing) {
    this->_slices = slices;
    this->_spacing = spacing;
}

Indie::Raylib::Models::Grid::Grid(const Grid &cpy)
{
    this->_slices = cpy._slices;
    this->_spacing = cpy._spacing;
}

Indie::Raylib::Models::Grid& Indie::Raylib::Models::Grid::operator=(const Grid &other)
{
    this->_slices = other.GetSlices();
    this->_spacing = other.GetSpacing();
    return (*this);
}

void Indie::Raylib::Models::Grid::DrawModels() {
    ::DrawGrid(this->_slices, this->_spacing);
}