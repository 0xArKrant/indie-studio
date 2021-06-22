/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Boost
*/

#pragma once

#include "Model3D.hpp"

namespace Indie {
    namespace Game {
        class Boost : public Model3D {
            public:
                Boost(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, id, pos, display) {}
                Boost(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, texturePath, id, pos, display) {}
                Boost(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(model, id, pos, display) {}
                virtual ~Boost() {}
            protected:
            private:
        };

        class BoostFire : public Boost {
            public:
                BoostFire(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                BoostFire(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
                BoostFire(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display);
                ~BoostFire() {}

                void update(float elapsedTimes);
                void draw();
        };

        class BoostSpeed : public Boost {
            public:
                BoostSpeed(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                BoostSpeed(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
                BoostSpeed(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display);
                ~BoostSpeed() {}

                void update(float elapsedTimes);
                void draw();
        };

        class BoostBomb : public Boost {
            public:
                BoostBomb(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                BoostBomb(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
                BoostBomb(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display);
                ~BoostBomb() {}

                void update(float elapsedTimes);
                void draw();
        };
    }
}