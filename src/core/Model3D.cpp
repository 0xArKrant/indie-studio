/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Model3D
*/

#include "Model3D.hpp"


Indie::Game::Model3D::Model3D(std::string &fileName, std::string id, Misc::Vector<3> pos, TypeObject type, bool display) : GameObject(id, pos, type, display)
{
    this->_model = Indie::Raylib::Models::ModelsRaylib(fileName);
}

Indie::Game::Model3D::~Model3D()
{

}