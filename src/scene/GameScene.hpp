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
#include "Player.hpp"
#include "../engine/Models/Collision.hpp"

namespace Indie {
    namespace Scene {
        class GameScene : public Indie::Core::IScene {
            public:
                GameScene();
                ~GameScene();
                void setGame();
                void update(Indie::Core::SceneManagement &scenemanagement, const double &elapsed);
                void draw();

            protected:
            private:
                bool _checkCollision();
                Indie::Raylib::Map _map;
                Indie::Game::Player _player;
                Misc::Camera3D _cam;
        };
    }
}
