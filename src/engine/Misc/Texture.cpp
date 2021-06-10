/**
 * @file Texture.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Texture/Texture2D substitution class to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
 * Epitech Nancy 2021
 */

#include "Texture.hpp"

/**
 * @brief Construct a new Misc:: Texture:: Texture object
 *
 */

Misc::Texture::Texture() {
    this->_id = 0;
    this->_width = 0;
    this->_height = 0;
    this->_mipmaps = 1;
    this->_format = 0;
}

/**
 * @brief Construct a new Misc:: Texture:: Texture object
 *
 * @param id
 * @param width
 * @param height
 * @param format
 */

Misc::Texture::Texture(const unsigned int id, const int width, const int height, const int format) {
    this->_id = id;
    this->_width = width;
    this->_height = height;
    this->_mipmaps = 1;
    this->_format = format;
}

/**
 * @brief Construct a new Misc:: Texture:: Texture object
 *
 * @param id
 * @param width
 * @param height
 * @param mipmaps
 * @param format
 */

Misc::Texture::Texture(const unsigned int id, const int width, const int height, const int mipmaps, const int format) {
    this->_id = id;
    this->_width = width;
    this->_height = height;
    this->_mipmaps = mipmaps;
    this->_format = format;
}
