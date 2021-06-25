/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Bomb
*/

#pragma once

#include "indie.hpp"
#include "Model3D.hpp"
#include "Fire.hpp"
#include "AnimesRaylib.hpp"

namespace Indie {
    namespace Game {
        class Bomb : public Model3D {
            public:
                enum state {
                    PLACED,
                    EXPLODED,
                    NONE
                };
                Bomb(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                Bomb(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
                Bomb(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display);
                ~Bomb();

                void update(float elapsedTimes);
                void draw();
                Indie::Game::Bomb::state getState();
                void setState(Indie::Game::Bomb::state);
                Indie::Game::Bomb::state _bombState;
                void setFirePos();
                bool isCollectable();
                bool isCollidable();
            protected:
            private:
                float _second;
                int fireNbCase;
                std::string _state;
                Misc::Vector<3> _fireRota;
                Misc::Vector<3> _fireScale;
                std::unique_ptr<Indie::Game::Fire> _fire;
                std::vector<std::unique_ptr<Indie::Game::Fire>> _fireList;
                float _fireRotaAngle;
                std::vector<std::unique_ptr<Indie::Raylib::AnimesRaylib>> _animList;
                Indie::Raylib::AnimesRaylib _animFire;
        };
    }
}