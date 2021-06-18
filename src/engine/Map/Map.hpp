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
                void draw();
                ~Map();

            protected:
            private:
                ::Mesh _mesh;
                ::Model _model;
                ::Camera3D _camera;
                ::Texture cubicmap;
                ::Texture2D texture;
                ::Image _img;
                ::Vector3 mapPosition;
        };
    }
}
