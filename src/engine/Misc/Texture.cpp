/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Texture
*/

#include "Texture.hpp"

Misc::Texture::Texture() {
    this->_id = 0;
    this->_width = 0;
    this->_height = 0;
    this->_mipmaps = 1;
    this->_format = 0;
}

Misc::Texture::Texture(const unsigned int id, const int width, const int height, const int format) {
    this->_id = id;
    this->_width = width;
    this->_height = height;
    this->_mipmaps = 1;
    this->_format = format;
}

Misc::Texture::Texture(const unsigned int id, const int width, const int height, const int mipmaps, const int format) {
    this->_id = id;
    this->_width = width;
    this->_height = height;
    this->_mipmaps = mipmaps;
    this->_format = format;
}
