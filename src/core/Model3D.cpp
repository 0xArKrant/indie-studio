/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Model3D
*/

#include "Model3D.hpp"


Indie::Game::Model3D::Model3D(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display) : GameObject(id, pos, display), _model(fileName)
{

}

Indie::Game::Model3D::Model3D(const std::string &fileName, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : GameObject(id, pos, display), _model(fileName, texturePath)
{

}

Indie::Game::Model3D::Model3D(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : GameObject(id, pos, display), _model(model)
{

}

Indie::Game::Model3D::~Model3D()
{

}