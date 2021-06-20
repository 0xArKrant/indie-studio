/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Map
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"
#include "Colors.hpp"
#include "IModels.hpp"

namespace Indie {
    namespace Raylib {
        class Map {
            public:
                Map(const std::string texturePath, const std::string cubicPath, int mode);
                ~Map();
                void draw();
                Misc::Vector<3> getMapPosition() const;
                std::vector<Misc::Colors> getMapPixels();
                inline Misc::Vector<2> getMapSize() const {return Misc::Vector<2>(this->cubicmap.width, this->cubicmap.height);}
            protected:
            private:
                ::Mesh _mesh;
                ::Model _model;
                ::Camera3D _camera;
                ::Texture cubicmap;
                ::Texture2D texture;
                ::Image _img;
                ::Vector3 mapPosition;
                ::Color *_mapPixels;
                int _height;
                int _witdh;
        };
    }
}
