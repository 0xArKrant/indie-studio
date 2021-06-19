/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Player
*/

#pragma once

#include "Model3D.hpp"
#include "CoreRaylib.hpp"

namespace Indie {
    namespace Game {
        class Player : public Model3D {
            public:
                Player(const std::string &fileName, const std::string id, Misc::Vector<3> pos, TypeObject type, bool display);
                ~Player();
                //void addBomb();
                void update(float elapsedTimes);
                void draw();
            protected:
                float _speed;
                //std::vector<Model3D> _bombs;
            private:
        };
    }
}