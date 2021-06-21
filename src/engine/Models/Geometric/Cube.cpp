/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cube
*/

#include "Cube.hpp"

Indie::Raylib::Models::Cube::Cube(const Misc::Vector<3> position, const float width, const float height, const float length, const Misc::Colors& colors) {
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_colors = colors;
}

Indie::Raylib::Models::Cube::Cube(const Cube &cpy)
{
    this->_position = cpy._position;
    this->_width = cpy._width;
    this->_height = cpy._height;
    this->_length = cpy._length;
    this->_colors = cpy._colors;
}

Indie::Raylib::Models::Cube& Indie::Raylib::Models::Cube::operator=(const Cube &other)
{
    this->_position = other.GetPosition();
    this->_width = other.GetWidth();
    this->_height = other.GetHeight();
    this->_length = other.GetLength();
    this->_colors = other.GetColors();
    return (*this);
}

void Indie::Raylib::Models::Cube::DrawModels() {
    ::DrawCube(
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_width,
        this->_height,
        this->_length,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}

Indie::Raylib::Models::CubeV::CubeV(const Misc::Vector<3> position, const Misc::Vector<3> size, const Misc::Colors& values) {
    this->_position = position;
    this->_size = size;
    this->_colors = values;
}

void Indie::Raylib::Models::CubeV::DrawModels() {
    ::DrawCubeV(
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        ::Vector3{ this->_size.getX(), this->_size.getY(), this->_size.getZ() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() });
}

Indie::Raylib::Models::CubeWires::CubeWires(const Misc::Vector<3> position, const float width, const float height, const float length, const Misc::Colors& values) {
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_colors = values;
}

void Indie::Raylib::Models::CubeWires::DrawModels() {
    ::DrawCubeWires(
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_width,
        this->_height,
        this->_length,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}

Indie::Raylib::Models::CubeWiresV::CubeWiresV(const Misc::Vector<3> position, const Misc::Vector<3> size, const Misc::Colors& values) {
    this->_position = position;
    this->_size = size;
    this->_colors = values;
}

void Indie::Raylib::Models::CubeWiresV::DrawModels() {
    ::DrawCubeWiresV(
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        ::Vector3{ this->_size.getX(), this->_size.getY(), this->_size.getZ() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() });
}

Indie::Raylib::Models::CubeTexture::CubeTexture(const Misc::Texture texture, const Misc::Vector<3> position, const float width, const float height, const float length, const Misc::Colors& values) {
    this->_texture = texture;
    this->_position = position;
    this->_width = width;
    this->_height = height;
    this->_length = length;
    this->_colors = values;
}

void Indie::Raylib::Models::CubeTexture::DrawModels() {
    ::DrawCubeTexture(
        ::Texture2D{ this->_texture.getID(), this->_texture.getWidth(), this->_texture.getHeight(), this->_texture.getMipmaps(), this->_texture.getFormat() },
        ::Vector3{ this->_position.getX(), this->_position.getY(), this->_position.getZ() },
        this->_width,
        this->_height,
        this->_length,
        ::Color{this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA()});
}