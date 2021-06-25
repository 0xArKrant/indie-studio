/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Fire
*/

#include "Fire.hpp"

Indie::Game::Fire::Fire(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, id, pos, display)
{
    this->_type = FIRE;
    this->_rota = {1.0f, 0.0f, 0.0f};
    this->_scale = {0.5f, 0.5f, 0.5f};
    this->_rotaAngle = 90.0f;
    this->_fireState = OFF;
    this->_secondFire = 0;
}

Indie::Game::Fire::Fire(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, texturePath, id, pos, display)
{
    this->_type = FIRE;
}

Indie::Game::Fire::Fire(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(model, id, pos, display)
{
    this->_type = FIRE;
    this->_rota = {1.0f, 0.0f, 0.0f};
    this->_scale = {0.5f, 0.5f, 0.5f};
    this->_rotaAngle = 90.0f;
    this->_fireState = OFF;
    this->_secondFire = 0;
}

Indie::Game::Fire::~Fire()
{
}

bool Indie::Game::Fire::isCollectable()
{
    return false;
}

bool Indie::Game::Fire::isCollidable()
{
    return false;
}

void Indie::Game::Fire::update(const double &elapsedTimes)
{
    this->_secondFire += elapsedTimes;
    if (this->_secondFire >= 3) {
        this->_fireState = OFF;
    }

}


void Indie::Game::Fire::draw()
{

    this->_model.DrawModel(this->_pos, 0.30f, Misc::Colors(255, 255, 255, 255));
}

void Indie::Game::Fire::setState(Indie::Game::Fire::firestate fireState)
{
    this->_fireState = fireState;
}