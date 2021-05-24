/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cube
*/

#include "indie.hpp"

IModels::Cube::Cube(const Misc::Vector<3> position, const float width, const float height, const float length, const Misc::Colors &values)
{
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_colors = values;
}

void IModels::Cube::DrawModels()
{
    ::DrawCube(
        ::Vector3 { this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_width,
        this->_height,
        this->_length,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IModels::CubeV::CubeV(const Misc::Vector<3> position, const Misc::Vector<3> size, const Misc::Colors &values)
{
    this->_position = position;
    this->_size = size;
    this->_colors = values;
}

void IModels::CubeV::DrawModels()
{
    ::DrawCubeV(
        ::Vector3 { this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        ::Vector3 { this->_size.getX(), this->_size.getY(), this->_size.getZ() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IModels::CubeWires::CubeWires(const Misc::Vector<3> position, const float width, const float height, const float length, const Misc::Colors &values)
{
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_colors = values;
}

void IModels::CubeWires::DrawModels()
{
    ::DrawCubeWires(
        ::Vector3 { this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_width,
        this->_height,
        this->_length,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IModels::CubeWiresV::CubeWiresV(const Misc::Vector<3> position, const Misc::Vector<3> size, const Misc::Colors &values)
{
    this->_position = position;
    this->_size = size;
    this->_colors = values;
}

void IModels::CubeWiresV::DrawModels()
{
    ::DrawCubeWiresV(
        ::Vector3 { this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        ::Vector3 { this->_size.getX(), this->_size.getY(), this->_size.getZ() },
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

IModels::CubeTexture::CubeTexture(const Misc::Texture texture, const Misc::Vector<3> position, const float width, const float height, const float length, const Misc::Colors &values)
{
    this->_texture = texture;
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_colors = values;
}

void IModels::CubeTexture::DrawModels()
{
    ::DrawCubeTexture(
        ::Texture2D { this->_texture.getID(), this->_texture.getWidth(), this->_texture.getHeight(), this->_texture.getMipmaps(), this->_texture.getFormat() },
        ::Vector3 { this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_width,
        this->_height,
        this->_length,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}