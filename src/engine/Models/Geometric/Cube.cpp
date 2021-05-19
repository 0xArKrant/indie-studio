/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cube
*/

#include "indie.hpp"

IModels::Cube::Cube(::Vector3 position, float width, float height, float length, ::Color color) 
{
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_color = color;
}

void IModels::Cube::DrawModels()
{
    ::DrawCube(this->_position, this->_width, this->_height, this->_length, this->_color);
}

IModels::CubeV::CubeV(::Vector3 position, ::Vector3 size, ::Color color)
{
    this->_position = position;
    this->_size = size;
    this->_color = color;
}

void IModels::CubeV::DrawModels()
{
    ::DrawCubeV(this->_position, this->_size, this->_color);
}

IModels::CubeWires::CubeWires(::Vector3 position, float width, float height, float length, ::Color color)
{
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_color = color;
}

void IModels::CubeWires::DrawModels()
{
    ::DrawCubeWires(this->_position, this->_width, this->_height, this->_length, this->_color);
}

IModels::CubeWiresV::CubeWiresV(::Vector3 position, ::Vector3 size, ::Color color)
{
    this->_position = position;
    this->_size = size;
    this->_color = color;
}

void IModels::CubeWiresV::DrawModels()
{
    ::DrawCubeWiresV(this->_position, this->_size, this->_color);
}

IModels::CubeTexture::CubeTexture(::Texture2D texture, ::Vector3 position, float width, float height, float length, ::Color color)
{
    this->_texture = texture;
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_color = color;
}

void IModels::CubeTexture::DrawModels()
{
    ::DrawCubeTexture(this->_texture, this->_position, this->_width, this->_height, this->_length, this->_color);
}