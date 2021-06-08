/*
** EPITECH PROJECT, 2021
** indiestudioclean
** File description:
** ModelRaylib
*/

#include "ModelRaylib.hpp"

Model::ModelRaylib::ModelRaylib(const std::string filename)
{
    _model = ::LoadModel(filename.c_str());
}

void Model::ModelRaylib::DrawModel(Misc::Vector<3> position, float scale, Misc::Colors tint)
{
    ::DrawModel(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()}, scale, ::Color{tint.getA(), tint.getR(), tint.getG(), tint.getB()});
}

void DrawModelEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint)
{
    ::DrawModelEx(this->_model, ::Vector3{position.getX(), position.getY(), position.getZ()}, 
                    ::Vector3{rotationAxis.getX(), rotationAxis.getY(), rotationAxis.getZ()}, 
                    rotationAngle, 
                    ::Vector3{scale.getX(), scale.getY(), scale.getZ()}, ::Color{tint.getA(), 
                    tint.getR(), tint.getG(), tint.getB()});
}



Model::ModelRaylib::~ModelRaylib()
{
    ::UnloadModel(this->_model);
}
