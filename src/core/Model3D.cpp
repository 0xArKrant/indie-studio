/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Model3D
*/

#include "Model3D.hpp"


Indie::Game::Model3D::Model3D(const std::string &fileName, const std::string &id, Misc::Vector<3> pos, bool display) : GameObject(id, pos, display)
{
    this->_model = Indie::Raylib::Models::ModelsRaylib(fileName);
}

Indie::Game::Model3D::Model3D(const std::string &fileName, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : GameObject(id, pos, display)
{
    this->_model = Indie::Raylib::Models::ModelsRaylib(fileName, texturePath);
}

Indie::Game::Model3D::~Model3D()
{

}