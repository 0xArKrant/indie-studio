/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Texture
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

            inline unsigned int getID() const { return this->_id;      };
            inline int getWidth()       const { return this->_width;   };
            inline int getHeight()      const { return this->_height;  };
            inline int getMipmaps()     const { return this->_mipmaps; };
            inline int getFormat()      const { return this->_format;  };
        private:
            unsigned int _id;
            int          _width;
            int          _height;
            int          _mipmaps;
            int          _format;
    };
}
