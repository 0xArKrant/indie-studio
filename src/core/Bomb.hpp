/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Bomb
*/

#pragma once

#include "Model3D.hpp"

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

                void update(const double &);
                void draw();
                Indie::Game::Bomb::state getState();
                void  setState(Indie::Game::Bomb::state);
                Indie::Game::Bomb::state _bombState;

                bool isCollectable();
                bool isCollidable();
                bool destroyed = false;
            protected:
            private:
                float _second;
                std::string _state;
        };
    }
}