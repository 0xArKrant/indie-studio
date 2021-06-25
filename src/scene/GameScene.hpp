/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** GameScene
*/

#pragma once

#include "indie.hpp"
#include "../core/IScene.hpp"
#include "Camera.hpp"
#include "../Texture/Texture.hpp"
#include "../engine/Map/Map.hpp"
#include "Player.hpp"
#include "../engine/Models/Collision.hpp"
#include "Bomb.hpp"
#include "AnimesRaylib.hpp"
#include <ctime>


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
                bool _checkCollisionMap();
                bool _checkCollisionMapPlayer2();
                bool _checkCollisionGO();
                bool _checkCollisionGOPlayer2();
                void _genMap();
                void _destroyBoxes(Misc::Vector<3>);
                void _destroyBoxes2(Misc::Vector<3>);
                // Misc::Vector<3> _getDirection();
                Indie::Raylib::Map _map;
                Indie::Game::Player _player;
                Indie::Game::Player _player2;
                Misc::Camera3D _camera;
                Indie::Raylib::AnimesRaylib _animFire;
                std::vector<std::unique_ptr<Indie::Game::GameObject>> _gameObjectList;
                std::vector<std::unique_ptr<Indie::Game::Bomb>> _bombList;
                std::vector<std::unique_ptr<Indie::Game::Bomb>> _bombList2;

        };
    }
}