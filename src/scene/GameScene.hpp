/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** GameScene
*/

#pragma once

#include "indie.hpp"
#include "../core/IScene.hpp"
#include "./Camera.hpp"
#include "../Texture/Texture.hpp"
#include "../engine/Map/Map.hpp"


namespace Indie {
    namespace Scene {
        class GameScene : public Indie::Core::IScene {
            public:
                GameScene();
                ~GameScene();
                void setGame();
                void update(Indie::Core::SceneManagement &scenemanagement, const double &);
                void draw();

            protected:
            private:
                Indie::Raylib::Map _map;
        };
    }
}
