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
#include "Camera.hpp"

namespace Indie {
    namespace Game {
        class Player : public Model3D {
            public:
                Player(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, TypeObject type, bool display);
                Player(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, TypeObject type, bool display);
                ~Player();
                //void addBomb();
                void update(float elapsedTimes);
                void draw();
            protected:
                float _speed;
                Misc::Vector<3> _rota;
                Misc::Vector<3> _scale;
                float _rotaAngle;
                //std::vector<Model3D> _bombs;
            private:
        };
    }
} 