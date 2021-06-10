/*
** EPITECH PROJECT, 2021
** indiestudioclean
** File description:
** ModelsRaylib
*/

#include "ModelsRaylib.hpp"

Indie::Raylib::Models::ModelsRaylib::ModelsRaylib(const std::string filename) {
    _model = ::LoadModel(filename.c_str());
}

void Indie::Raylib::Models::ModelsRaylib::DrawModel(Misc::Vector<3> position, float scale, Misc::Colors tint) {
    ::DrawModel(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()}, scale, ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}

void Indie::Raylib::Models::ModelsRaylib::DrawModelEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint) {
    ::DrawModelEx(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()},
        ::Vector3{ rotationAxis.getX(), rotationAxis.getY(), rotationAxis.getZ() },
        rotationAngle,
        ::Vector3{ scale.getX(), scale.getY(), scale.getZ() },
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}

void Indie::Raylib::Models::ModelsRaylib::DrawModelWires(Misc::Vector<3> position, float scale, Misc::Colors tint) {
    ::DrawModelWires(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()},
        scale,
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}

void Indie::Raylib::Models::ModelsRaylib::DrawModelWiresEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint) {
    ::DrawModelWiresEx(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()},
        ::Vector3{ rotationAxis.getX(), rotationAxis.getY(), rotationAxis.getZ() },
        rotationAngle,
        ::Vector3{ scale.getX(), scale.getY(), scale.getZ() },
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}

void Indie::Raylib::Models::ModelsRaylib::DrawBoundingBox(Misc::Colors color) {
    ::DrawBoundingBox(this->_BoundingBox, ::Color{color.getR(), color.getG(), color.getB(), color.getA()});
}



Indie::Raylib::Models::ModelsRaylib::~ModelsRaylib() {
    ::UnloadModel(this->_model);
}
