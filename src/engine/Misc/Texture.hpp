/**
 * @file Texture.hpp
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

#pragma once

#include "indie.hpp"

namespace Misc {
    class Texture {
        public:
            Texture(const unsigned int, const int, const int, const int, const int);
            Texture(const unsigned int, const int, const int, const int);
            Texture();
            ~Texture() = default;

            inline unsigned int getID() const { return this->_id; };
            inline int getWidth()       const { return this->_width; };
            inline int getHeight()      const { return this->_height; };
            inline int getMipmaps()     const { return this->_mipmaps; };
            inline int getFormat()      const { return this->_format; };
        private:
            unsigned int _id;
            int          _width;
            int          _height;
            int          _mipmaps;
            int          _format;
    };
}
