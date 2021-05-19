/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Grid
*/

#include "indie.hpp"

IModels::Grid::Grid(int slices, float spacing)
{
    this->_slices = slices;
    this->_spacing = spacing;
}

void IModels::Grid::DrawModels()
{
    ::DrawGrid(this->_slices, this->_spacing);
}