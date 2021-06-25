/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Boxes
*/

#include "Box.hpp"

Indie::Game::Box::Box(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, id, pos, display)
{
    this->_type = BOX;
}

Indie::Game::Box::Box(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, texturePath, id, pos, display)
{
    this->_type = BOX;
}

Indie::Game::Box::Box(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(model, id, pos, display)
{
    this->_type = BOX;
}

Indie::Game::Box::~Box()
{
}

void Indie::Game::Box::update(float elapsedTimes)
{
    (void)elapsedTimes;
}

void Indie::Game::Box::draw()
{
    this->_model.DrawModel(this->_pos, 0.17f, Misc::Colors(88, 41, 0, 255));
}

bool Indie::Game::Box::isCollectable()
{
    return false;
}

bool Indie::Game::Box::isCollidable()
{
    return true;
}