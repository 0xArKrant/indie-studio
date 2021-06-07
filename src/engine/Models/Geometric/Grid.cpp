/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Grid
*/

#include "Grid.hpp"

Models::Grid::Grid(const int slices, const float spacing)
{
    this->_slices = slices;
    this->_spacing = spacing;
}

void Models::Grid::DrawModels()
{
    ::DrawGrid(this->_slices, this->_spacing);
}