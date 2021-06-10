/**
 * @file Texture.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Texture/Texture2D substitution class to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
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
            ~Texture() = default; /*! Texture default destructor */

            /**
             * @brief Get the ID object
             *
             * @return unsigned int
             */
            inline unsigned int getID() const { return this->_id; };
            /**
             * @brief Get the Width object
             *
             * @return int
             */
            inline int getWidth() const { return this->_width; };
            /**
             * @brief Get the Height object
             *
             * @return int
             */
            inline int getHeight() const { return this->_height; };
            /**
             * @brief Get the Mipmaps object
             *
             * @return int
             */
            inline int getMipmaps() const { return this->_mipmaps; };
            /**
             * @brief Get the Format object
             *
             * @return int
             */
            inline int getFormat() const { return this->_format; };
        private:
            unsigned int _id;  /*! id value of Texture */
            int          _width;  /*! width value of Texture */
            int          _height;  /*! height value of Texture */
            int          _mipmaps;  /*! mimpas value of Texture */
            int          _format;  /*! format value of Texture */
    };
}
