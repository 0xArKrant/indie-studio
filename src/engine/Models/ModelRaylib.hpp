/*
** EPITECH PROJECT, 2021
** indiestudioclean
** File description:
** ModelRaylib
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"
#include "Colors.hpp"

namespace Model {
    class ModelRaylib {
        public:
            ModelRaylib();
            ModelRaylib(std::string filename);
            void DrawModel(Misc::Vector<3> position, float scale, Misc::Colors tint);
            void DrawModelEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint);
            ~ModelRaylib();

        protected:
        private:
            ::Model _model;
    };
}
