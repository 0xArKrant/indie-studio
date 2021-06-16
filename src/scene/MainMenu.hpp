/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#pragma once

#include "indie.hpp"
#include "../core/IScene.hpp"
#include "./Camera.hpp"
#include "../Texture/Texture.hpp"

namespace Indie {
    namespace Scene {
        class MainMenu : public Indie::Core::IScene {
            public:
                MainMenu();
                ~MainMenu();
                void setMenu();
                void update(std::stack<std::unique_ptr<Indie::Core::IScene>> &);
                void draw();

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
