/**
 * @file ModelsRaylib.cpp
 * @author RaphMandica
 * @brief Encapsulation of the Models module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "ModelsRaylib.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Models:: Models Raylib:: Models Raylib object
 * @brief Load model from files (meshes and materials)
 *
 * @param filename
 */

Indie::Raylib::Models::ModelsRaylib::ModelsRaylib(const std::string filename) {
    this->_model = ::LoadModel(filename.c_str());
}

/**
 * @brief Draw a model (with texture if set)s
 *
 * @param position
 * @param scale
 * @param tint
 */
void Indie::Raylib::Models::ModelsRaylib::DrawModel(Misc::Vector<3> position, float scale, Misc::Colors tint) {
    ::DrawModel(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()}, scale, ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}


/**
 * @brief Draw a model with extended parameters
 *
 * @param position
 * @param rotationAxis
 * @param rotationAngle
 * @param scale
 * @param tint
 */
void Indie::Raylib::Models::ModelsRaylib::DrawModelEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint) {
    ::DrawModelEx(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()},
        ::Vector3{ rotationAxis.getX(), rotationAxis.getY(), rotationAxis.getZ() },
        rotationAngle,
        ::Vector3{ scale.getX(), scale.getY(), scale.getZ() },
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}

/**
 * @brief Draw a model wires (with texture if set)
 *
 * @param position
 * @param scale
 * @param tint
 */
void Indie::Raylib::Models::ModelsRaylib::DrawModelWires(Misc::Vector<3> position, float scale, Misc::Colors tint) {
    ::DrawModelWires(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()},
        scale,
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}

/**
 * @brief Draw a model wires (with texture if set) with extended parameters
 *
 * @param position
 * @param rotationAxis
 * @param rotationAngle
 * @param scale
 * @param tint
 */
void Indie::Raylib::Models::ModelsRaylib::DrawModelWiresEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint) {
    ::DrawModelWiresEx(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()},
        ::Vector3{ rotationAxis.getX(), rotationAxis.getY(), rotationAxis.getZ() },
        rotationAngle,
        ::Vector3{ scale.getX(), scale.getY(), scale.getZ() },
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() });
}

/**
 * @brief Draw bounding box (wires)
 *
 * @param color
 */
void Indie::Raylib::Models::ModelsRaylib::DrawBoundingBox(Misc::Colors color) {
    ::DrawBoundingBox(this->_BoundingBox, ::Color{color.getR(), color.getG(), color.getB(), color.getA()});
}

/**
 * @brief Destroy the Indie:: Raylib:: Models:: Models Raylib:: Models Raylib object
 * @brief Unload model (including meshes) from memory (RAM and/or VRAM)
 */
Indie::Raylib::Models::ModelsRaylib::~ModelsRaylib() {
    ::UnloadModel(this->_model);
}

void Indie::Raylib::Models::ModelsRaylib::SetColors(const Misc::Colors color)
{
    this->_colors = color;
}

Misc::Colors Indie::Raylib::Models::ModelsRaylib::GetColors() const
{
    return this->_colors;
}