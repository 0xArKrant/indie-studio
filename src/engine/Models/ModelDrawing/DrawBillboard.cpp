/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** DrawBillboard
*/

#include "indie.hpp"

IModels::DrawBillboard::DrawBillboard(::Camera camera, ::Texture2D texture, ::Vector3 center, float size, ::Color tint)
{
    this->_camera = camera;
    this->_texture = texture;
    this->_center = center;
    this->_size = size;
    this->_tint = tint;
}

void IModels::DrawBillboard::DrawModels()
{
    ::DrawBillboard(this->_camera, this->_texture, this->_center, this->_size, this->_tint);
}
