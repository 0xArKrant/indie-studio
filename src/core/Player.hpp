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
            public:
                enum state {
                    DEAD,
                    IDLE,
                    WALKING
                };
                enum direction {
                    RIGHT,
                    LEFT,
                    DOWN,
                    UP,
                    NONE
                };
                Player(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                Player(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display, int nbPlayer);
                ~Player();
                //void addBomb();
                void update(float elapsedTimes);
                void draw();
                int getCurrentNbBomb();
                int getNbBombsMax();
                void setCurrentNbBomb(int nb);
                bool isCollectable();
                bool isCollidable();
                int getFire();
                Indie::Game::Player::direction getDirection();
                void speedBonus();
                void fireBonus();
                void bombBonus();
            protected:
                float _speed;
                int _fire;
                int _nbBombs;
                int _currentNbBomb;
                Misc::Vector<3> _rota;
                Misc::Vector<3> _scale;
                float _rotaAngle;
                Indie::Raylib::AnimesRaylib _anim;
                Indie::Raylib::AnimesRaylib _animIdle;
                Indie::Game::Player::state _state;
                Indie::Game::Player::direction _direction;
                int _nbPlayer;
                //std::vector<Model3D> _bombs;
            private:
                bool _move;
        };
    }
}