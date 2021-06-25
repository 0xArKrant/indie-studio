/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Fire
*/

#pragma once

#include "Model3D.hpp"
#include "CoreRaylib.hpp"
#include "Texture.hpp"
#include "AnimesRaylib.hpp"

namespace Indie {
    namespace Game {
        class Fire : public Model3D {
            public:
                enum firestate {
                    ON,
                    OFF
                };
                Fire(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                Fire(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
                Fire(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display);
                ~Fire();

                void update(const double &elapsedTimes);
                void draw();
                void setState(Indie::Game::Fire::firestate);
                bool isCollectable();
                bool isCollidable();
            protected:
                Indie::Game::Fire::firestate _fireState;
                std::vector<std::unique_ptr<Indie::Game::GameObject>> _fireList;

                double _secondFire;
                Misc::Vector<3> _rota;
                Misc::Vector<3> _scale;
                float _rotaAngle;
            private:
        };
    }
}