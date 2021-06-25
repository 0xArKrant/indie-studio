/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Box
*/

#pragma once

#include "Model3D.hpp"

namespace Indie {
    namespace Game {
        class Box : public Model3D {
            public:
                Box(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
                Box(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
                Box(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display);
                ~Box();

                void update(const double &elapsedTimes);
                void draw();
                bool isCollectable();
                bool isCollidable();
            protected:
            private:
        };
    }
}