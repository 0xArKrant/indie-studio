/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Cube
*/

#pragma once

#include "ICube.hpp"

namespace Models {
    class Cube : public ICube {
        public:
            Cube(const Misc::Vector<3>, const float, const float, const float, const Misc::Colors &);
            ~Cube() = default;

            inline Misc::Vector<3> GetPosition() const { return this->_position; };
            inline float           GetWidth()    const { return this->_width;    };
            inline float           GetHeight()   const { return this->_height;   };
            inline float           GetLength()   const { return this->_length;   };
            inline Misc::Colors    GetColors()   const { return this->_colors;   };

            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position; };
            inline void SetWidth(const float width)                 { this->_width = width;       };
            inline void SetHeight(const float height)               { this->_height = height;     };
            inline void SetLength(const float length)               { this->_length = length;     };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;     };

            void DrawModels();
        private:
            Misc::Vector<3> _position;
            float           _width;
            float           _height;
            float           _length;
            Misc::Colors    _colors;
    };

    class CubeV : public ICube {
        public:
            CubeV(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Colors &);
            ~CubeV() = default;

            inline Misc::Vector<3> GetPosition() const { return this->_position; };
            inline Misc::Vector<3> GetSize() const     { return this->_size;     };
            inline Misc::Colors    GetColors()   const { return this->_colors;   };

            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position; };
            inline void SetSize(const Misc::Vector<3> size)         { this->_size = size;         };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;     };

            void DrawModels();
        private:
            Misc::Vector<3> _position;
            Misc::Vector<3> _size;
            Misc::Colors    _colors;
    };

    class CubeWires : public ICube {
        public:
            CubeWires(const Misc::Vector<3>, const float, const float, const float, const Misc::Colors &);
            ~CubeWires() = default;

            inline Misc::Vector<3> GetPosition() const { return this->_position; };
            inline float           GetWidth()    const { return this->_width;    };
            inline float           GetHeight()   const { return this->_height;   };
            inline float           GetLength()   const { return this->_length;   };
            inline Misc::Colors    GetColors()   const { return this->_colors;   };

            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position; };
            inline void SetWidth(const float width)                 { this->_width = width;       };
            inline void SetHeight(const float height)               { this->_height = height;     };
            inline void SetLength(const float length)               { this->_length = length;     };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;     };

            void DrawModels();
        private:
            Misc::Vector<3> _position;
            float           _width;
            float           _height;
            float           _length;
            Misc::Colors    _colors;
    };

    class CubeWiresV : public ICube {
        public:
            CubeWiresV(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Colors &);
            ~CubeWiresV() = default;

            inline Misc::Vector<3> GetPosition() const { return this->_position; };
            inline Misc::Vector<3> GetSize() const     { return this->_size;     };
            inline Misc::Colors    GetColors()   const { return this->_colors;   };

            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position; };
            inline void SetSize(const Misc::Vector<3> size)         { this->_size = size;         };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;     };

            void DrawModels();
        private:
            Misc::Vector<3> _position;
            Misc::Vector<3> _size;
            Misc::Colors    _colors;
    };

    class CubeTexture : public ICube {
        public:
            CubeTexture(const Misc::Texture, const Misc::Vector<3>, const float, const float, const float, const Misc::Colors &);
            ~CubeTexture() = default;

            inline Misc::Texture   GetTexture()  const { return this->_texture;  };
            inline Misc::Vector<3> GetPosition() const { return this->_position; };
            inline float           GetWidth()    const { return this->_width;    };
            inline float           GetHeight()   const { return this->_height;   };
            inline float           GetLength()   const { return this->_length;   };
            inline Misc::Colors    GetColors()   const { return this->_colors;   };

            inline void SetTexture(const Misc::Texture texture)     { this->_texture = texture;   };
            inline void SetPosition(const Misc::Vector<3> position) { this->_position = position; };
            inline void SetWidth(const float width)                 { this->_width = width;       };
            inline void SetHeight(const float height)               { this->_height = height;     };
            inline void SetLength(const float length)               { this->_length = length;     };
            inline void SetColors(const Misc::Colors colors)        { this->_colors = colors;     };

            void DrawModels();
        private:
            Misc::Texture   _texture;
            Misc::Vector<3> _position;
            float           _width;
            float           _height;
            float           _length;
            Misc::Colors    _colors;
    };
}