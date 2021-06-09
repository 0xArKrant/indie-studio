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

namespace Models {
    class ModelsRaylib {
        public:
            ModelsRaylib();
            ModelsRaylib(std::string filename);
            void DrawModel(Misc::Vector<3> position, float scale, Misc::Colors tint);
            void DrawModelEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint);
            void DrawModelWires(Misc::Vector<3> position, float scale, Misc::Colors tint);
            void DrawModelWiresEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint);
            void DrawBoundingBox(Misc::Colors color);
            ~ModelsRaylib();
        protected:
        private:
            ::Model _model;
            ::BoundingBox _BoundingBox;
    };
}
