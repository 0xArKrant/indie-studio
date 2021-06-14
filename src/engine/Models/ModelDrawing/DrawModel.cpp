/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** DrawModel
*/

#include "indie.hpp"

IModels::DrawModel::DrawModel(::Model model, ::Vector3 position, float scale, ::Color tint)
{
    this->_model = model;
    this->_position = position;
    this->_scale = scale;
    this->_tint = tint;
}

void IModels::DrawModel::DrawModels()
{
    ::DrawModel(this->_model, this->_position, this->_scale, this->_tint);
}

IModels::DrawModelEx::DrawModelEx(::Model model, ::Vector3 position, ::Vector3 rotationAxis, float rotationAngle, ::Vector3 scale, ::Color tint)
{
    this->_model = model;
    this->_position = position;
    this->_rotationAxis = rotationAxis;
    this->_rotationAngle = rotationAngle;
    this->_scale = scale;
    this->_tint = tint;
}

void IModels::DrawModelEx::DrawModels()
{
    ::DrawModelEx(this->_model, this->_position, this->_rotationAxis, this->_rotationAngle, this->_scale, this->_tint);
}

IModels::DrawModelWires::DrawModelWires(::Model model, ::Vector3 position, float scale, ::Color tint)
{
    this->_model = model;
    this->_position = position;
    this->_scale = scale;
    this->_tint = tint;
}

void IModels::DrawModelWires::DrawModels()
{
    ::DrawModelWires(this->_model, this->_position, this->_scale, this->_tint);
}

IModels::DrawModelWiresEx::DrawModelWiresEx(::Model model, ::Vector3 position, ::Vector3 rotationAxis, float rotationAngle, ::Vector3 scale, ::Color tint)
{
    this->_model = model;
    this->_position = position;
    this->_rotationAxis = rotationAxis;
    this->_rotationAngle = rotationAngle;
    this->_scale = scale;
    this->_tint = tint;
}

void IModels::DrawModelWiresEx::DrawModels()
{
    ::DrawModelWiresEx(this->_model, this->_position, this->_rotationAxis, this->_rotationAngle, this->_scale, this->_tint);
}