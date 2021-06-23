/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Player
*/

#pragma once

#include "Model3D.hpp"
#include "CoreRaylib.hpp"
#include "Texture.hpp"
#include "AnimesRaylib.hpp"

namespace Indie {
    namespace Game {
        class Player : public Model3D {
                enum state {
                    DEAD,
                    IDLE,
                    WALKING
                };
            public:
                Player(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                Player(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
                ~Player();
                //void addBomb();
                void update(float elapsedTimes);
                void draw();
                bool isCollectable();
                bool isCollidable();
            protected:
                float _speed;
                Misc::Vector<3> _rota;
                Misc::Vector<3> _scale;
                float _rotaAngle;
                Indie::Raylib::AnimesRaylib _anim;
                Indie::Raylib::AnimesRaylib _animIdle;
                Indie::Game::Player::state _state;
                //std::vector<Model3D> _bombs;
            private:
            bool _move;
        };
    }
}