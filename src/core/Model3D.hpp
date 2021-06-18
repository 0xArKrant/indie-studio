/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Model3D
*/

#pragma once

#include "GameObject.hpp"
#include "ModelsRaylib.hpp"

namespace Indie {
    namespace Game {
        class Model3D : public GameObject {
        public:
            Model3D(std::string &fileName, std::string id, Misc::Vector<3> pos, TypeObject type, bool display);
            ~Model3D();

        protected:
        private:
            Indie::Raylib::Models::ModelsRaylib _model;
        };
    }
}