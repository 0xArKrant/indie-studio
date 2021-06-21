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
            Model3D(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display);
            Model3D(const std::string &fileName, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display);
            virtual ~Model3D();

        protected:
            Indie::Raylib::Models::ModelsRaylib _model;
        private:
        };
    }
}